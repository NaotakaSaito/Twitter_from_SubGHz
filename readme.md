#920MHz�������瑗�M�����e�L�X�g���b�Z�[�W��Twitter�ɂԂ₭�v���O�����ł��B

# Lazurite Sub-GHz��
Lazurite\subghz.c�̃v���O�����ł��B
30�s�ڂ̃��b�Z�[�W�����̂܂ܖ����ő��M���Ă��܂��B

# Raspberry Pi��
1) Raspberry Pi��Ruby�p��Twitter�v���O�������C���X�g�[�����܂��B
�@�u���܂�_Twitter�҂�BME280���Ԃ₭.pptx�v��1�y�[�W��

2) Twitter��Ruby����A�N�Z�X���邽�߂̐ݒ���s���܂��B
�@�u���܂�_Twitter�҂�BME280���Ԃ₭.pptx�v��2�`3�y�[�W�ڂ����āA���̒ʂ�ɂ���Ă݂Ă��������B

3) �v���O�����̕ύX
15�s��-20�s�ڂ�""�̒���hogehoge...��������twitter�̏��ɒu�������Ă��������B
�u���܂�_Twitter�҂�BME280���Ԃ₭.pptx�v��4�y�[�W�ڂ̍���������Ă��镔���̃e�L�X�g��\��t����邾���ł��B

  customer_key="�����ɓ����"
  consumer_secret="�����ɓ����"
  access_token="�����ɓ����"
  access_token_secret="�����ɓ����"
  
4) �v���O�����̎��s���@
�E�h���C�o�����[�h����
sudo insmod ~/driver/sub-ghz/DRV_802154.ko

�Eruby�����s����
sudo ./send_message.rb

�Eruby���~���邽�߂ɂ�
Ctrl+C
�������܂��B

�E�h���C�o���~����B
sudo rmmod DRV_802154

5) �v���O�����̉��
105�s��  ��M����������","�̂Ƃ���ŕ������܂��B
�@�@�@�@�@csv[0]�ɂ͍ŏ��̃J���}�܂ł̕���������܂��B����̏ꍇ��Twitter�ɂȂ�܂��B
�@�@�@�@�@csv[1]�ɂ̓J���}�̌�̂Q�Ԗڂ̃��b�Z�[�W������܂��B
112�s�ځ@���ۂ�Twitter�ɑ��M���Ă���Ƃ���ł��B

�@�@�@�@Lazurite���瑗�M���������͂��̂܂܂ł͕���
�@�@�@�@�Ƃ��ĔF�����Ă���Ȃ��̂ŁAencode()��Raspberry Pi��
�@�@�@�@�ǂ߂�悤�ɕϊ����Ă��܂��B

�ł͓������Ă݂Ă��������I�I
����΂��Ăˁ`�`�` 


