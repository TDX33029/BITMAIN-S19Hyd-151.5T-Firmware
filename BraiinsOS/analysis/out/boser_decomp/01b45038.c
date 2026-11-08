// FUN_01b45038 @ 01b45038 size=348 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c | /aws-lc/crypto/fipsmodule/ec/ec.c

void FUN_01b45038(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_134 [68];
  undefined1 auStack_f0 [68];
  undefined1 auStack_ac [136];
  uint local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01b44b4c(param_1,*param_2,0,0);
  if (iVar1 == 0) {
    if (param_4 == 0 || param_3 == 0) {
      uVar3 = 0x2c4;
      uVar2 = 0x43;
      goto LAB_01b450a8;
    }
    iVar1 = FUN_01b3eb74(param_1,auStack_134,param_3);
    if (((iVar1 != 0) && (iVar1 = FUN_01b3eb74(param_1,auStack_f0,param_4), iVar1 != 0)) &&
       (iVar1 = FUN_01b3fffc(param_1,auStack_ac,auStack_134,auStack_f0), iVar1 != 0)) {
      FUN_01b3e7c4(param_1,param_2 + 1,auStack_ac);
      uVar3 = 1;
      uVar2 = extraout_r1_01;
      goto LAB_01b450b4;
    }
    FUN_01b425f8(param_1,param_2 + 1);
    uVar2 = extraout_r1_00;
  }
  else {
    uVar3 = 0x2bf;
    uVar2 = 0x6a;
LAB_01b450a8:
    FUN_01b053d4(0xf,0,uVar2,"/aws-lc/crypto/fipsmodule/ec/ec.c",uVar3);
    uVar2 = extraout_r1;
  }
  uVar3 = 0;
LAB_01b450b4:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,uVar2,local_24 ^ DAT_01d53560,0);
  }
  return;
}

