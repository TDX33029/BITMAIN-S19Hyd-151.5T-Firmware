// FUN_01b611c0 @ 01b611c0 size=1472 calls_out=23 calls_in=2
// strings: 

int FUN_01b611c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  uint uVar12;
  byte *pbStack_18538;
  undefined1 auStack_18520 [1276];
  int aiStack_18024 [14017];
  undefined1 auStack_a520 [8192];
  undefined1 auStack_8520 [8192];
  undefined4 auStack_6520 [2048];
  undefined1 auStack_4520 [8192];
  undefined1 auStack_2520 [7168];
  undefined1 auStack_920 [1024];
  undefined1 auStack_520 [1024];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [60];
  
  piVar11 = (int *)(auStack_60 + 0x3c);
  do {
    piVar11 = piVar11 + -0x400;
    *piVar11 = param_1;
    iVar1 = DAT_01d53560;
  } while (piVar11 != aiStack_18024);
  if (param_2 != 0x1213) {
LAB_01b6126c:
    iVar5 = -1;
LAB_01b61270:
    FUN_01b6b174(auStack_6520,0x2000);
    FUN_01b6b174(auStack_4520,0x2000);
    FUN_01b6b174(auStack_a520,0x4000);
    FUN_01b6b174(auStack_2520,0x1c00);
    FUN_01b6b174(auStack_18520,0xe000);
    FUN_01b6b174(auStack_920,0x400);
    FUN_01b6b174(auStack_120,0x40);
    FUN_01b6b174(auStack_e0);
    FUN_01b6b174(auStack_a0,0x40);
    FUN_01b6b174(auStack_60,0x20);
    FUN_01b6b174(auStack_520,0x400);
    if (iVar1 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
      FUN_01be31f4();
    }
    return iVar5;
  }
  FUN_01b269d8(auStack_60,param_7,0x20);
  iVar5 = param_7 + 0x20;
  puVar9 = auStack_a520;
  do {
    iVar7 = iVar5 + 0x140;
    FUN_01b1cc74(puVar9,iVar5);
    puVar9 = puVar9 + 0x400;
    iVar5 = iVar7;
  } while (iVar7 != param_7 + 0xa20);
  puVar10 = auStack_2520;
  FUN_01b269d8(auStack_e0,param_1,0x40);
  iVar5 = param_1 + 0x40;
  puVar9 = puVar10;
  do {
    iVar7 = iVar5 + 0x280;
    FUN_01b1d768(puVar9,iVar5);
    puVar9 = puVar9 + 0x400;
    iVar5 = iVar7;
  } while (iVar7 != param_1 + 0x11c0);
  FUN_01b25814(auStack_6520,0x2000);
  iVar5 = 0;
  uVar6 = 0;
  pbStack_18538 = (byte *)(param_1 + 0x120a);
  do {
    pbStack_18538 = pbStack_18538 + 1;
    uVar3 = (uint)*pbStack_18538;
    if (uVar3 < uVar6 || 0x4b < uVar3) goto LAB_01b6126c;
    pbVar4 = (byte *)(param_1 + 0x11bf + uVar6);
    for (uVar2 = uVar6; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      uVar12 = (uint)pbVar4[1];
      if ((uVar6 < uVar2) && (uVar12 <= *pbVar4)) goto LAB_01b6126c;
      auStack_6520[iVar5 * 0x100 + uVar12] = 1;
      pbVar4 = pbVar4 + 1;
    }
    iVar5 = iVar5 + 1;
    uVar6 = uVar3;
  } while (iVar5 != 8);
  pbVar4 = (byte *)(uVar3 + param_1 + 0x11bf);
LAB_01b61470:
  if (pbVar4 != (byte *)(param_1 + 0x120a)) goto LAB_01b61734;
  uVar6 = 0;
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    uVar3 = FUN_01b1cf6c(puVar10,0x7ff88);
    puVar10 = puVar10 + 0x400;
    uVar6 = uVar6 | uVar3;
  } while (iVar5 != 7);
  if (uVar6 == 0) {
    if (param_8 == 0) {
      FUN_01b5bbb8(auStack_520,0x40,param_7,0xa20,0,0,0,0);
      FUN_01b5bbb8(auStack_a0,0x40,auStack_520,0x40,param_5,param_6,param_3,param_4);
      FUN_01b6b174(auStack_520,0x40);
    }
    else {
      FUN_01b269d8(auStack_a0,param_3,0x40);
    }
    FUN_01b5c004(auStack_920,auStack_e0);
    FUN_01b25490(auStack_920);
    iVar5 = 0;
    puVar9 = auStack_a520;
    do {
      FUN_01b1cb0c(puVar9,iVar5 + 1);
      puVar9 = puVar9 + 0x400;
      iVar5 = extraout_r1;
    } while (extraout_r1 != 8);
    iVar5 = 0;
    FUN_01b2566c(auStack_a520);
    do {
      puVar8 = auStack_4520;
      puVar9 = puVar8 + iVar5;
      puVar10 = auStack_a520 + iVar5;
      iVar5 = iVar5 + 0x400;
      FUN_01b1cb40(puVar9,auStack_920,puVar10);
    } while (iVar5 != 0x2000);
    FUN_01b60654(auStack_18520,auStack_60);
    FUN_01b2562c(auStack_2520);
    FUN_01b1d9b4(auStack_8520,auStack_18520,auStack_2520);
    iVar5 = 0;
    do {
      FUN_01b1cac8(auStack_8520 + iVar5,puVar8 + iVar5);
      iVar5 = iVar5 + 0x400;
    } while (iVar5 != 0x2000);
    FUN_01b1da60(auStack_8520);
    FUN_01b28f1c(auStack_8520);
    FUN_01b1daa0(auStack_8520);
    iVar5 = 0;
    do {
      FUN_01b1d564(puVar8 + iVar5,auStack_8520 + iVar5,(int)auStack_6520 + iVar5);
      iVar5 = iVar5 + 0x400;
    } while (iVar5 != 0x2000);
    iVar5 = 0;
    puVar9 = auStack_520;
    do {
      iVar5 = iVar5 + 1;
      FUN_01b1d7f0(puVar9,puVar8);
      puVar9 = puVar9 + 0x80;
      puVar8 = puVar8 + 0x400;
    } while (iVar5 != 8);
    FUN_01b5bbb8(auStack_120,0x40,auStack_a0,0x40,auStack_520,0x400,0,0);
    iVar5 = FUN_01b1c8dc(auStack_e0,auStack_120,0x40);
    iVar5 = -(uint)(iVar5 != 0);
    goto LAB_01b61270;
  }
  goto LAB_01b6126c;
LAB_01b61734:
  pbVar4 = pbVar4 + 1;
  if (*pbVar4 != 0) goto LAB_01b6126c;
  goto LAB_01b61470;
}

