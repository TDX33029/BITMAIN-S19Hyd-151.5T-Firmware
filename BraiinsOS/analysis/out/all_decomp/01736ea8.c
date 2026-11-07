// FUN_01736ea8 @ 01736ea8 size=356 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c | /aws-lc/crypto/fipsmodule/ec/ec.c

void FUN_01736ea8(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined1 auStack_134 [68];
  undefined1 auStack_f0 [68];
  undefined1 auStack_ac [136];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_01736960(param_1,*param_2,0,0);
  if (iVar1 == 0) {
    if (param_4 == 0 || param_3 == 0) {
      FUN_016e9cd0(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x2c4);
      uVar3 = extraout_r1_00;
    }
    else {
      iVar1 = FUN_0172eaf0(param_1,auStack_134,param_3);
      if ((iVar1 != 0) && (iVar1 = FUN_0172eaf0(param_1,auStack_f0,param_4), iVar1 != 0)) {
        iVar1 = FUN_017303f8(param_1,auStack_ac,auStack_134,auStack_f0);
        if (iVar1 != 0) {
          FUN_0172e734(param_1,param_2 + 1,auStack_ac);
          uVar2 = 1;
          uVar3 = extraout_r1_02;
          goto LAB_01736f4c;
        }
      }
      FUN_01733e30(param_1,param_2 + 1);
      uVar3 = extraout_r1;
    }
  }
  else {
    FUN_016e9cd0(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x2bf);
    uVar3 = extraout_r1_01;
  }
  uVar2 = 0;
LAB_01736f4c:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

