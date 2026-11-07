// FUN_01bcc078 @ 01bcc078 size=264 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01bcc078(int *param_1)

{
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  
  local_34 = 0x7fffffe - param_1[6];
  local_44 = 0x7fffffe - param_1[2];
  local_3c = 0x7fffffe - param_1[4];
  local_2c = 0x7fffffe - param_1[8];
  local_24 = DAT_01d53560;
  local_38 = 0x3fffffe - param_1[5];
  local_30 = 0x3fffffe - param_1[7];
  local_48 = 0x3fffffe - param_1[1];
  local_40 = 0x3fffffe - param_1[3];
  iStack_28 = 0x3fffffe - param_1[9];
  local_4c = 0x7ffffda - *param_1;
  FUN_01bc87cc(param_1,&local_4c);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

