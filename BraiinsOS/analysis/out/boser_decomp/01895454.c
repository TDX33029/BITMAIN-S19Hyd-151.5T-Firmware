// FUN_01895454 @ 01895454 size=196 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01895454(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar1 = 1;
  if (param_2 == 0x20) {
    uVar2 = *(uint *)(*param_3 + 0x10);
    if (0x30 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar2,0x30,&DAT_01d2136c);
    }
    if (uVar2 == 0x20) {
      local_38 = param_3[1];
      iStack_34 = param_3[2];
      iStack_30 = param_3[3];
      iStack_2c = param_3[4];
      local_28 = param_3[5];
      iStack_24 = param_3[6];
      iStack_20 = param_3[7];
      iStack_1c = param_3[8];
      FUN_01bcc1b4(&local_38);
      local_58 = local_38;
      iStack_54 = iStack_34;
      iStack_50 = iStack_30;
      iStack_4c = iStack_2c;
      local_48 = local_28;
      iStack_44 = iStack_24;
      iStack_40 = iStack_20;
      iStack_3c = iStack_1c;
      if (((byte)DAT_01d53480 & 1) == 0) {
        FUN_01bcbe44(param_1,&local_58,0);
      }
      else {
        FUN_01bd5e30(param_1,&local_58,"\t");
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

