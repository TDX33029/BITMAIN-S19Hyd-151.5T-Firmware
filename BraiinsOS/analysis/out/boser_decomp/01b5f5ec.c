// FUN_01b5f5ec @ 01b5f5ec size=1496 calls_out=23 calls_in=2
// strings: 

int FUN_01b5f5ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7,int param_8)

{
  int extraout_r1;
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  uint uVar11;
  byte *local_f434;
  undefined1 auStack_f420 [1020];
  int aiStack_f024 [7425];
  undefined1 auStack_7c20 [6144];
  undefined1 auStack_6420 [6144];
  undefined4 auStack_4c20 [1536];
  undefined1 auStack_3420 [6144];
  undefined1 auStack_1c20 [5120];
  undefined1 auStack_820 [1024];
  undefined1 auStack_420 [768];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [52];
  int local_2c;
  int iStack_28;
  
  piVar10 = (int *)(auStack_60 + 0x3c);
  do {
    piVar10 = piVar10 + -0x400;
    *piVar10 = param_1;
  } while (piVar10 != aiStack_f024);
  local_2c = DAT_01d53560;
  if (param_2 != 0xced) {
LAB_01b5f698:
    iVar4 = -1;
LAB_01b5f69c:
    FUN_01b6b174(auStack_4c20,0x1800);
    FUN_01b6b174(auStack_3420,0x1800);
    FUN_01b6b174(auStack_7c20,0x3000);
    FUN_01b6b174(auStack_1c20,0x1400);
    FUN_01b6b174(auStack_f420,0x7800);
    FUN_01b6b174(auStack_820,0x400);
    FUN_01b6b174(auStack_e0,0x30);
    FUN_01b6b174(auStack_a0,0x30);
    FUN_01b6b174(auStack_120,0x40);
    FUN_01b6b174(auStack_60,0x20);
    FUN_01b6b174(auStack_420,0x300);
    if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
      FUN_01be31f4();
    }
    return iVar4;
  }
  FUN_01b269d8(auStack_60,param_7,0x20);
  iVar4 = param_7 + 0x20;
  puVar8 = auStack_7c20;
  do {
    iVar7 = iVar4 + 0x140;
    FUN_01b1cc74(puVar8,iVar4);
    puVar8 = puVar8 + 0x400;
    iVar4 = iVar7;
  } while (iVar7 != param_7 + 0x7a0);
  puVar9 = auStack_1c20;
  FUN_01b269d8(auStack_a0,param_1,0x30);
  puVar8 = puVar9;
  iVar4 = param_1 + 0x30;
  do {
    iVar7 = iVar4 + 0x280;
    FUN_01b1d768(puVar8,iVar4);
    puVar8 = puVar8 + 0x400;
    iVar4 = iVar7;
  } while (iVar7 != param_1 + 0xcb0);
  FUN_01b25814(auStack_4c20,0x1800);
  iVar4 = 0;
  uVar5 = 0;
  local_f434 = (byte *)(param_1 + 0xce6);
  do {
    local_f434 = local_f434 + 1;
    uVar2 = (uint)*local_f434;
    if (uVar2 < uVar5 || 0x37 < uVar2) goto LAB_01b5f698;
    pbVar3 = (byte *)(param_1 + 0xcaf + uVar5);
    for (uVar11 = uVar5; uVar11 < uVar2; uVar11 = uVar11 + 1) {
      uVar1 = (uint)pbVar3[1];
      if ((uVar5 < uVar11) && (uVar1 <= *pbVar3)) goto LAB_01b5f698;
      auStack_4c20[iVar4 * 0x100 + uVar1] = 1;
      pbVar3 = pbVar3 + 1;
    }
    iVar4 = iVar4 + 1;
    uVar5 = uVar2;
  } while (iVar4 != 6);
  pbVar3 = (byte *)(uVar2 + param_1 + 0xcaf);
LAB_01b5f8ac:
  if (pbVar3 != (byte *)(param_1 + 0xce6)) goto LAB_01b5fb78;
  uVar5 = 0;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    uVar2 = FUN_01b1cf6c(puVar9,0x7ff3c);
    puVar9 = puVar9 + 0x400;
    uVar5 = uVar5 | uVar2;
  } while (iVar4 != 5);
  if (uVar5 == 0) {
    if (param_8 == 0) {
      FUN_01b5bbb8(auStack_420,0x40,param_7,0x7a0,0,0,0,0);
      FUN_01b5bbb8(auStack_120,0x40,auStack_420,0x40,param_5,param_6,param_3,param_4);
      FUN_01b6b174(auStack_420,0x40);
    }
    else {
      FUN_01b269d8(auStack_120,param_3,0x40);
    }
    FUN_01b5be64(auStack_820,auStack_a0);
    FUN_01b25490(auStack_820);
    iVar4 = 0;
    puVar8 = auStack_7c20;
    do {
      FUN_01b1cb0c(puVar8,iVar4 + 1);
      puVar8 = puVar8 + 0x400;
      iVar4 = extraout_r1;
    } while (extraout_r1 != 6);
    iVar4 = 0;
    FUN_01b255ec(auStack_7c20);
    do {
      puVar6 = auStack_3420;
      puVar8 = puVar6 + iVar4;
      puVar9 = auStack_7c20 + iVar4;
      iVar4 = iVar4 + 0x400;
      FUN_01b1cb40(puVar8,auStack_820,puVar9);
    } while (iVar4 != 0x1800);
    FUN_01b5e9b0(auStack_f420,auStack_60);
    FUN_01b255ac(auStack_1c20);
    FUN_01b1d834(auStack_6420,auStack_f420,auStack_1c20);
    iVar4 = 0;
    do {
      FUN_01b1cac8(auStack_6420 + iVar4,puVar6 + iVar4);
      iVar4 = iVar4 + 0x400;
    } while (iVar4 != 0x1800);
    FUN_01b1d8e0(auStack_6420);
    FUN_01b28edc(auStack_6420);
    FUN_01b1d920(auStack_6420);
    iVar4 = 0;
    do {
      FUN_01b1d564(puVar6 + iVar4,auStack_6420 + iVar4,(int)auStack_4c20 + iVar4);
      iVar4 = iVar4 + 0x400;
    } while (iVar4 != 0x1800);
    iVar4 = 0;
    puVar8 = auStack_420;
    do {
      iVar4 = iVar4 + 1;
      FUN_01b1d7f0(puVar8,puVar6);
      puVar8 = puVar8 + 0x80;
      puVar6 = puVar6 + 0x400;
    } while (iVar4 != 6);
    FUN_01b5bbb8(auStack_e0,0x30,auStack_120,0x40,auStack_420,0x300,0,0);
    iVar4 = FUN_01b1c8dc(auStack_a0,auStack_e0,0x30);
    iVar4 = -(uint)(iVar4 != 0);
    goto LAB_01b5f69c;
  }
  goto LAB_01b5f698;
LAB_01b5fb78:
  pbVar3 = pbVar3 + 1;
  if (*pbVar3 != 0) goto LAB_01b5f698;
  goto LAB_01b5f8ac;
}

