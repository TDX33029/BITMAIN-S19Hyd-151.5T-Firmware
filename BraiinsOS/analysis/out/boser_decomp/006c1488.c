// FUN_006c1488 @ 006c1488 size=620 calls_out=6 calls_in=2
// strings: include | include

void FUN_006c1488(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  
  uVar16 = *(uint *)(param_1 + 8);
  if (uVar16 == 0) {
    return;
  }
  iVar15 = *(int *)(param_1 + 4);
  uVar9 = 0;
  iVar10 = iVar15;
LAB_006c14b4:
  iVar3 = FUN_006c0e08(*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24),param_2);
  uVar8 = uVar9 + 1;
  if (iVar3 == 0) goto code_r0x006c14cc;
  FUN_006d0234(iVar10);
  if (uVar8 < uVar16) {
    uVar8 = uVar9 + 1;
    do {
      iVar3 = iVar10 + 0x5c;
      iVar10 = FUN_006c0e08(*(undefined4 *)(iVar10 + 0x7c),*(undefined4 *)(iVar10 + 0x80),param_2);
      if (iVar10 == 0) {
        FUN_01bed4e2(uVar9 * 0x5c + iVar15,iVar3,0x5c);
        uVar9 = uVar9 + 1;
      }
      else {
        FUN_006d0234(iVar3);
      }
      uVar8 = uVar8 + 1;
      iVar10 = iVar3;
    } while (uVar8 < uVar16);
  }
  *(uint *)(param_1 + 8) = uVar9;
  uVar16 = uVar9;
  if (uVar9 == 0) {
    return;
  }
LAB_006c14e4:
  iVar3 = uVar16 * 0x5c + iVar15;
  iVar10 = iVar15;
LAB_006c14ec:
  uVar16 = *(uint *)(iVar10 + 0x24);
  if (uVar16 != 0) {
    puVar7 = *(undefined4 **)(iVar10 + 0x20);
    uVar9 = 0;
    uVar8 = 2;
    puVar12 = puVar7;
    puVar11 = puVar7;
    do {
      puVar11 = puVar11 + 9;
      if (puVar12[8] == 7) {
        iVar4 = thunk_FUN_01bed842(puVar12[7] + 8,"include",7);
        if (iVar4 == 0) goto LAB_006c1588;
      }
      else if ((puVar12[8] == 4) && (*(int *)(puVar12[7] + 8) == 0x70696b73)) {
LAB_006c1588:
        FUN_006d01a0(puVar12);
        uVar2 = uVar9 + 1;
        goto joined_r0x006c15a0;
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 1;
      puVar12 = puVar12 + 9;
    } while (uVar16 != uVar9);
  }
  goto LAB_006c1574;
code_r0x006c14cc:
  iVar10 = iVar10 + 0x5c;
  uVar9 = uVar8;
  if (uVar16 == uVar8) goto LAB_006c14e4;
  goto LAB_006c14b4;
joined_r0x006c15a0:
  uVar1 = uVar8;
  if (uVar16 <= uVar2) goto LAB_006c1644;
  if (puVar11[8] == 7) {
    iVar4 = thunk_FUN_01bed842(puVar11[7] + 8,"include",7);
    if (iVar4 != 0) goto LAB_006c15d0;
LAB_006c1624:
    FUN_006d01a0(puVar11);
  }
  else {
    if ((puVar11[8] == 4) && (*(int *)(puVar11[7] + 8) == 0x70696b73)) goto LAB_006c1624;
LAB_006c15d0:
    puVar12 = puVar7 + uVar9 * 9;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar13 = puVar11[3];
    uVar9 = uVar9 + 1;
    *puVar12 = *puVar11;
    puVar12[1] = uVar5;
    puVar12[2] = uVar6;
    puVar12[3] = uVar13;
    uVar5 = puVar11[5];
    uVar6 = puVar11[6];
    uVar13 = puVar11[7];
    uVar14 = puVar11[8];
    puVar12[4] = puVar11[4];
    puVar12[5] = uVar5;
    puVar12[6] = uVar6;
    puVar12[7] = uVar13;
    puVar12[8] = uVar14;
  }
  puVar11 = puVar11 + 9;
  uVar8 = uVar1 + 1;
  uVar2 = uVar1;
  goto joined_r0x006c15a0;
LAB_006c1644:
  *(uint *)(iVar10 + 0x24) = uVar9;
LAB_006c1574:
  iVar10 = iVar10 + 0x5c;
  if (iVar10 == iVar3) {
    do {
      if (*(int *)(iVar15 + 0x10) != -0x80000000) {
        FUN_006c1488(iVar15 + 0x30,param_2);
      }
      iVar15 = iVar15 + 0x5c;
    } while (iVar15 != iVar3);
    return;
  }
  goto LAB_006c14ec;
}

