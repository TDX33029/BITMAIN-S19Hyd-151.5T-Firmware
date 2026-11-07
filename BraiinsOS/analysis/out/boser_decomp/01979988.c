// FUN_01979988 @ 01979988 size=356 calls_out=1 calls_in=1
// strings: 

void FUN_01979988(uint *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint local_20;
  uint local_1c;
  
  FUN_01979b2c(&local_20,param_2,1,9,1);
  if (((char)local_20 == '\x04') || ((local_20 & 0xff) == 4)) {
    if ((undefined1 *)param_3[4] != &DAT_3b9aca00) {
      uVar1 = param_3[2];
      if (0x7ffffffe < uVar1) {
        uVar1 = 0x7fffffff;
      }
      if (param_3[3] != 0) {
        uVar1 = 0x7fffffff;
      }
      FUN_01979b2c(&local_20,param_2,6,4,uVar1);
      if (((char)local_20 != '\x04') && ((local_20 & 0xff) != 4)) goto LAB_01979adc;
    }
    if ((undefined1 *)param_3[8] != &DAT_3b9aca00) {
      uVar1 = param_3[6];
      if (0x7ffffffe < uVar1) {
        uVar1 = 0x7fffffff;
      }
      if (param_3[7] != 0) {
        uVar1 = 0x7fffffff;
      }
      FUN_01979b2c(&local_20,param_2,6,5,uVar1);
      if (((char)local_20 != '\x04') && ((local_20 & 0xff) != 4)) goto LAB_01979adc;
    }
    if (*param_3 != 0) {
      FUN_01979b2c(&local_20,param_2,6,6,param_3[1]);
      if (((char)local_20 != '\x04') && ((local_20 & 0xff) != 4)) goto LAB_01979adc;
    }
    *(undefined1 *)param_1 = 4;
  }
  else {
LAB_01979adc:
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  return;
}

