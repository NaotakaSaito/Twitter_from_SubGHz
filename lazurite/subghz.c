#define SUBGHZ_CH			36				//チャンネル／周波数です
#define SUBGHZ_PANID		0xABCD			//PANIDです
#define RX_ADDRESS			0xAC5A			//受信機のアドレスです

#define BLUE_LED			26				//送信時に青色LEDを点灯させるためのPINです

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
	
	// 送信するデータを生成する
	Print.init(tx_data,sizeof(tx_data));	//送信用データを初期化
	Print.p("Twitter,こんにちは、Lazurite Sub-GHzから920MHzで送信しています。");						//Twitterのデータであることを示すヘッダ + "," + メッセージ
	
	// 920MHzで送信し、その後は無線モジュールを低消費電力モードにする。
	SubGHz.begin(SUBGHZ_CH, SUBGHZ_PANID,  SUBGHZ_100KBPS, SUBGHZ_PWR_20MW);		// 無線モジュールの設定
	digitalWrite(BLUE_LED,LOW);														// LEDを点灯
	SubGHz.send(SUBGHZ_PANID, RX_ADDRESS, &tx_data, Print.len(),NULL);				// send data
	digitalWrite(BLUE_LED,HIGH);													// LEDを消灯
	SubGHz.close();																	// 無線モジュールを待機状態にする
	
	Serial.print(tx_data);
	
	sleep(60000);
}
