// FUN_0172f444 @ 0172f444 size=592 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/ec_montgomery.c

void FUN_0172f444(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [68];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_4 != 0) {
    FUN_016dd1aa(param_2,param_3 + 0x88,0x44,0);
    if (param_4 != 1) {
      iVar5 = param_3 + 0x154;
      uVar4 = 1;
      iVar1 = param_2;
      do {
        uVar4 = uVar4 + 1;
        FUN_0171e30c(param_1,iVar1 + 0x88,iVar1,iVar5);
        iVar5 = iVar5 + 0xcc;
        iVar1 = iVar1 + 0x88;
      } while (param_4 != uVar4);
    }
    uVar4 = param_4 - 1;
    iVar1 = FUN_0172f2c0(param_1);
    if (iVar1 == 0) {
      FUN_016e9cd0(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/ec_montgomery.c",0x84);
      uVar2 = 0;
      param_2 = extraout_r1_00;
      goto LAB_0172f598;
    }
    FUN_01721000(auStack_f8,uVar4 * 0x88 + param_2,*(undefined4 *)(param_1 + 0x11c),param_1 + 0x104)
    ;
    iVar5 = param_4 * 0xcc + param_3 + -0xcc;
    iVar1 = param_4 * 0x88 + param_2 + -0x88;
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      FUN_0171e30c(param_1,auStack_b4,auStack_f8,iVar1 + -0x88);
      FUN_0171e30c(param_1,auStack_f8,auStack_f8,iVar5 + 0x88);
      FUN_0171e360(param_1,auStack_70,auStack_b4);
      FUN_0171e30c(param_1,iVar1,iVar5,auStack_70);
      iVar3 = iVar5 + 0x44;
      iVar5 = iVar5 + -0xcc;
      FUN_0171e30c(param_1,iVar1 + 0x44,iVar3,auStack_70);
      FUN_0171e30c(param_1,iVar1 + 0x44,iVar1 + 0x44,auStack_b4);
      param_2 = extraout_r1_01;
      if (param_4 <= uVar4) goto LAB_0172f594;
      iVar1 = iVar1 + -0x88;
    }
    FUN_016dd1aa(auStack_b4,auStack_f8,0x44);
    FUN_0171e360(param_1,auStack_70,auStack_b4);
    FUN_0171e30c(param_1,iVar1,iVar5,auStack_70);
    FUN_0171e30c(param_1,iVar1 + 0x44,iVar5 + 0x44,auStack_70);
    FUN_0171e30c(param_1,iVar1 + 0x44,iVar1 + 0x44,auStack_b4);
    param_2 = extraout_r1;
  }
LAB_0172f594:
  uVar2 = 1;
LAB_0172f598:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,param_2,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

