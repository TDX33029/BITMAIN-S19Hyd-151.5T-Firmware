// FUN_01b55098 @ 01b55098 size=452 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/blinding.c

void FUN_01b55098(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [4];
  uint local_24;
  
  uVar1 = *param_2;
  local_24 = DAT_01d53560;
  iVar2 = param_2[2];
  param_2[2] = iVar2 + 1;
  if (iVar2 + 1 == 0x20) {
    iVar2 = FUN_01b524c8(uVar1,1,param_4 + 0x14);
    if ((((iVar2 != 0) && (iVar2 = FUN_01b32498(param_2[1],*param_2,param_4,param_5), iVar2 != 0))
        && (iVar2 = FUN_01b5255c(param_2[1],auStack_28,param_2[1],param_4,param_5), iVar2 != 0)) &&
       ((iVar2 = FUN_01b35f88(*param_2,*param_2,param_3,param_4 + 0x14,param_5,param_4), iVar2 != 0
        && (iVar2 = FUN_01b331cc(*param_2,*param_2,param_4,param_5), iVar2 != 0)))) {
      param_2[2] = 0;
LAB_01b5521c:
      uVar4 = FUN_01b33010(param_1,param_1,*param_2,param_4,param_5);
      uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
      bVar3 = (int)uVar4 != 0;
      goto LAB_01b551bc;
    }
    FUN_01b053d4(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/blinding.c",0x84);
    uVar1 = extraout_r1;
  }
  else {
    uVar4 = FUN_01b33010(uVar1,uVar1,uVar1,param_4,param_5);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar1 = param_2[1];
      uVar4 = FUN_01b33010(uVar1,uVar1,uVar1,param_4,param_5);
      uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 != 0) goto LAB_01b5521c;
    }
  }
  bVar3 = false;
  param_2[2] = 0x1f;
LAB_01b551bc:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar3,uVar1,local_24 ^ DAT_01d53560,0);
  }
  return;
}

