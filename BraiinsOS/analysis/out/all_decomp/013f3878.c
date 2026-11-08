// FUN_013f3878 @ 013f3878 size=804 calls_out=6 calls_in=1
// strings: 

void FUN_013f3878(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte unaff_r7;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  bool bVar17;
  undefined1 auStack_1020 [4096];
  
  if (param_2[1] == param_2[4]) {
    uVar5 = param_2[1] - 1;
    if (*(uint *)(param_1 + 8) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,*(uint *)(param_1 + 8),&DAT_0189de70);
    }
    piVar16 = (int *)(*(int *)(param_1 + 4) + uVar5 * 0xc);
    iVar15 = piVar16[2];
    if (iVar15 == *piVar16) {
      FUN_01401818(piVar16);
    }
    puVar2 = (uint *)(piVar16[1] + iVar15 * 0x18);
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar11 = param_2[4];
    uVar13 = param_2[5];
    uVar5 = iVar15 + 1;
    *puVar2 = *param_2;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar2[4] = uVar11;
    puVar2[5] = uVar13;
    puVar2 = (uint *)piVar16[1];
    piVar16[2] = uVar5;
    if (uVar5 < 2) {
      return;
    }
  }
  else {
    iVar15 = *(int *)(param_1 + 0x14);
    if (iVar15 == *(int *)(param_1 + 0xc)) {
      FUN_01401818(param_1 + 0xc);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar11 = param_2[4];
    uVar13 = param_2[5];
    uVar5 = iVar15 + 1;
    puVar4 = puVar2 + iVar15 * 6;
    *puVar4 = *param_2;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    puVar4[4] = uVar11;
    puVar4[5] = uVar13;
    *(uint *)(param_1 + 0x14) = uVar5;
    if (uVar5 < 2) {
      return;
    }
  }
  if (0x14 < uVar5) {
    uVar7 = uVar5 - (uVar5 >> 1);
    uVar6 = 0x51615;
    if (uVar5 < 0x51615) {
      uVar6 = uVar5;
    }
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 < 0xab) {
      puVar3 = auStack_1020;
      uVar7 = 0xaa;
    }
    else {
      iVar15 = uVar6 * 0x18;
      if (0x5555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,iVar15);
      }
      if (iVar15 == 0) {
        puVar3 = &DAT_00000004;
        uVar7 = 0;
      }
      else {
        puVar3 = (undefined1 *)thunk_FUN_016d4a50(iVar15);
        uVar7 = uVar6;
        if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,iVar15);
        }
      }
      unaff_r7 = uVar7 == 0;
    }
    FUN_013fa678(puVar2,uVar5,puVar3,uVar7,uVar5 < 0x41);
    if ((0xaa < uVar6 & (unaff_r7 ^ 1)) != 0) {
      thunk_FUN_016d3fb4(puVar3);
    }
    return;
  }
  puVar4 = puVar2 + 6;
  iVar15 = 0;
  do {
    uVar6 = puVar4[3];
    uVar7 = *puVar4;
    bVar17 = puVar4[-6] <= uVar7;
    if (uVar7 == puVar4[-6]) {
      bVar17 = puVar4[-3] <= uVar6;
    }
    if (!bVar17) {
      uVar8 = puVar4[1];
      uVar13 = puVar4[2];
      uVar11 = puVar4[4];
      uVar14 = puVar4[5];
      iVar1 = iVar15;
      do {
        iVar10 = iVar1;
        puVar12 = (undefined4 *)((int)puVar2 + iVar10);
        puVar12[6] = *puVar12;
        puVar12[7] = puVar12[1];
        puVar12[8] = puVar12[2];
        puVar12[9] = puVar12[3];
        puVar12[10] = puVar12[4];
        puVar12[0xb] = puVar12[5];
        if (iVar10 == 0) {
          puVar9 = puVar2;
          goto LAB_013f6d3c;
        }
        bVar17 = (uint)puVar12[-6] <= uVar7;
        if (uVar7 == puVar12[-6]) {
          bVar17 = (uint)puVar12[-3] <= uVar6;
        }
        iVar1 = iVar10 + -0x18;
      } while (!bVar17);
      puVar9 = (uint *)((int)puVar2 + iVar10);
LAB_013f6d3c:
      *puVar9 = uVar7;
      puVar9[3] = uVar6;
      puVar9[1] = uVar8;
      puVar9[4] = uVar11;
      puVar9[2] = uVar13;
      puVar9[5] = uVar14;
    }
    puVar4 = puVar4 + 6;
    iVar15 = iVar15 + 0x18;
    if (puVar4 == puVar2 + uVar5 * 6) {
      return;
    }
  } while( true );
}

