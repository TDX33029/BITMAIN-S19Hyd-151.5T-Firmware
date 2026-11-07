// FUN_017345ec @ 017345ec size=304 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/ec_montgomery.c

void FUN_017345ec(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar3;
  undefined4 extraout_r1_02;
  undefined1 auStack_ac [68];
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_017345b8();
  if (iVar1 == 0) {
    FUN_01721000(auStack_68,param_2 + 0x88,*(undefined4 *)(param_1 + 0x11c),param_1 + 0x104);
    FUN_0171e360(param_1,auStack_ac,auStack_68);
    uVar3 = extraout_r1;
    if (param_3 != 0) {
      FUN_0171e30c(param_1,param_3,param_2,auStack_ac);
      uVar3 = extraout_r1_00;
    }
    if (param_4 != 0) {
      FUN_0171e30c(param_1,auStack_ac,auStack_ac,auStack_68);
      FUN_0171e30c(param_1,param_4,param_2 + 0x44,auStack_ac);
      uVar3 = extraout_r1_01;
    }
    uVar2 = 1;
  }
  else {
    FUN_016e9cd0(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/ec_montgomery.c",0x5d);
    uVar2 = 0;
    uVar3 = extraout_r1_02;
  }
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

