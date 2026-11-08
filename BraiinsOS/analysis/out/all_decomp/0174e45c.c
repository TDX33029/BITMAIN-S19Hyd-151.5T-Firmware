// FUN_0174e45c @ 0174e45c size=460 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/blinding.c

void FUN_0174e45c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  undefined4 extraout_r1;
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [4];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = param_2[2];
  param_2[2] = iVar1 + 1;
  uVar2 = *param_2;
  if (iVar1 + 1 == 0x20) {
    iVar1 = FUN_0174b144(uVar2,1,param_4 + 0x14);
    if ((((iVar1 != 0) && (iVar1 = FUN_0171c9d0(param_2[1],*param_2,param_4,param_5), iVar1 != 0))
        && (iVar1 = FUN_0174b1f0(param_2[1],auStack_28,param_2[1],param_4,param_5), iVar1 != 0)) &&
       ((iVar1 = FUN_01721398(*param_2,*param_2,param_3,param_4 + 0x14,param_5,param_4), iVar1 != 0
        && (iVar1 = FUN_0171decc(*param_2,*param_2,param_4,param_5), iVar1 != 0)))) {
      param_2[2] = 0;
LAB_0174e540:
      uVar4 = FUN_0171dce4(param_1,param_1,*param_2,param_4,param_5);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      bVar3 = (int)uVar4 != 0;
      goto LAB_0174e4e0;
    }
    FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/blinding.c",0x84);
    uVar2 = extraout_r1;
  }
  else {
    uVar4 = FUN_0171dce4(uVar2,uVar2,uVar2,param_4,param_5);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar2 = param_2[1];
      uVar4 = FUN_0171dce4(uVar2,uVar2,uVar2,param_4,param_5);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 != 0) goto LAB_0174e540;
    }
  }
  bVar3 = false;
  param_2[2] = 0x1f;
LAB_0174e4e0:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar3,uVar2,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

