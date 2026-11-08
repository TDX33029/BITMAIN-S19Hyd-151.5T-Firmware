// FUN_01a71aac @ 01a71aac size=216 calls_out=4 calls_in=102
// strings: 

void FUN_01a71aac(undefined4 *param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = 0;
  if (param_4 < 0) {
LAB_01a71ac4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,param_4);
  }
  if (param_4 == 0) {
    iVar1 = 1;
    iVar3 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_01298504(param_4,1);
    iVar3 = param_4;
    if (iVar1 == 0) goto LAB_01a71ac4;
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  FUN_0160aaa4(&local_68,0);
  param_1[0x16] = iVar3;
  param_1[0x10] = &DAT_01d2d23c;
  param_1[0x17] = iVar1;
  param_1[0x18] = param_4;
  *(undefined1 *)(param_1 + 0x19) = param_2;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 1;
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  param_1[4] = uStack_58;
  param_1[5] = local_54;
  param_1[6] = uStack_50;
  param_1[7] = uStack_4c;
  param_1[8] = uStack_48;
  param_1[9] = uStack_44;
  param_1[10] = local_40;
  param_1[0xb] = uStack_3c;
  param_1[0xc] = uStack_38;
  param_1[0xd] = uStack_34;
  param_1[0xe] = uStack_30;
  param_1[0xf] = uStack_2c;
  param_1[0x14] = 0;
  return;
}

