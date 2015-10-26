#define SUBGHZ_CH			36				//�`�����l���^���g���ł�
#define SUBGHZ_PANID		0xABCD			//PANID�ł�
#define RX_ADDRESS			0xAC5A			//��M�@�̃A�h���X�ł�

#define BLUE_LED			26				//���M���ɐFLED��_�������邽�߂�PIN�ł�

#define BME280_CSB 10

void setup()
{
	unsigned short myAddress;
	
	Serial.begin(115200);
	
	// Initializing Sub-GHz
	SubGHz.init();
	
	// initializing GPIO
	pinMode(BLUE_LED,OUTPUT);
	digitalWrite(BLUE_LED,HIGH);
	
}

unsigned char tx_data[128];
void loop()
{
	
	// ���M����f�[�^�𐶐�����
	Print.init(tx_data,sizeof(tx_data));	//���M�p�f�[�^��������
	Print.p("Twitter,����ɂ��́ALazurite Sub-GHz����920MHz�ő��M���Ă��܂��B");						//Twitter�̃f�[�^�ł��邱�Ƃ������w�b�_ + "," + ���b�Z�[�W
	
	// 920MHz�ő��M���A���̌�͖������W���[��������d�̓��[�h�ɂ���B
	SubGHz.begin(SUBGHZ_CH, SUBGHZ_PANID,  SUBGHZ_100KBPS, SUBGHZ_PWR_20MW);		// �������W���[���̐ݒ�
	digitalWrite(BLUE_LED,LOW);														// LED��_��
	SubGHz.send(SUBGHZ_PANID, RX_ADDRESS, &tx_data, Print.len(),NULL);				// send data
	digitalWrite(BLUE_LED,HIGH);													// LED������
	SubGHz.close();																	// �������W���[����ҋ@��Ԃɂ���
	
	Serial.print(tx_data);
	
	sleep(60000);
}
