// FUN_01b3f378 @ 01b3f378 size=508 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/ec_montgomery.c

void FUN_01b3f378(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **extraout_r1;
  undefined **extraout_r1_00;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [68];
  uint local_2c;
  
  ppuVar3 = &PTR_01d3b2b0;
  local_2c = DAT_01d53560;
  if (param_4 != 0) {
    FUN_01bed4e2(param_2,param_3 + 0x88,0x44);
    iVar5 = param_3 + 0x154;
    iVar2 = param_2;
    for (iVar6 = 1; iVar6 != param_4; iVar6 = iVar6 + 1) {
      FUN_01b3369c(param_1,iVar2 + 0x88,iVar2,iVar5);
      iVar5 = iVar5 + 0xcc;
      iVar2 = iVar2 + 0x88;
    }
    iVar2 = FUN_01b3f320(param_1);
    if (iVar2 == 0) {
      FUN_01b053d4(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/ec_montgomery.c",0x84);
      uVar1 = 0;
      ppuVar3 = extraout_r1;
      goto LAB_01b3f3c0;
    }
    FUN_01b35db4(auStack_f8,(iVar6 + -1) * 0x88 + param_2,*(undefined4 *)(param_1 + 0x11c),
                 param_1 + 0x104);
    iVar4 = iVar6 * 0xcc + param_3 + -0xcc;
    iVar2 = iVar6 * 0x88 + param_2 + -0x88;
    iVar5 = iVar6 + -1;
    do {
      if (iVar5 == 0) {
        FUN_01bed4e2(auStack_b4,auStack_f8,0x44);
      }
      else {
        FUN_01b3369c(param_1,auStack_b4,auStack_f8,iVar2 + -0x88);
        FUN_01b3369c(param_1,auStack_f8,auStack_f8,iVar4 + 0x88);
      }
      FUN_01b336f4(param_1,auStack_70,auStack_b4);
      FUN_01b3369c(param_1,iVar2,iVar4,auStack_70);
      iVar6 = iVar4 + 0x44;
      iVar4 = iVar4 + -0xcc;
      FUN_01b3369c(param_1,iVar2 + 0x44,iVar6,auStack_70);
      FUN_01b3369c(param_1,iVar2 + 0x44,iVar2 + 0x44,auStack_b4);
      bVar7 = iVar5 != 0;
      ppuVar3 = extraout_r1_00;
      iVar2 = iVar2 + -0x88;
      iVar5 = iVar5 + -1;
    } while (bVar7);
  }
  uVar1 = 1;
LAB_01b3f3c0:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,ppuVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

