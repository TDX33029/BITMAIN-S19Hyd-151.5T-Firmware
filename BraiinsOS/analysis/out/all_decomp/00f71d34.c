// FUN_00f71d34 @ 00f71d34 size=372 calls_out=3 calls_in=2
// strings: 

void FUN_00f71d34(uint *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint local_28;
  
  uVar12 = *(uint *)(param_2 + 8);
  bVar17 = 0xffffffe < uVar12;
  bVar16 = uVar12 == 0xfffffff;
  uVar14 = uVar12 * 0x10;
  if (uVar12 < 0x10000000) {
    bVar17 = 0x7ffffffb < uVar14;
    bVar16 = uVar14 == 0x7ffffffc;
  }
  if (bVar17 && !bVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar14);
  }
  iVar5 = *(int *)(param_2 + 4);
  uVar13 = 0;
  if (uVar14 == 0) {
    uVar2 = 4;
    local_28 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(uVar14);
    local_28 = uVar12;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar14);
    }
  }
  FUN_016dd1aa(uVar2,iVar5,uVar14);
  uVar14 = *(uint *)(param_2 + 0x14);
  if (0x5555555 < uVar14) {
LAB_00f71dc8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar13,iVar5);
  }
  iVar5 = uVar14 * 0x18;
  if (iVar5 == 0) {
    uVar15 = 0;
    uVar3 = 4;
  }
  else {
    puVar8 = *(undefined4 **)(param_2 + 0x10);
    uVar3 = thunk_FUN_016d4a50(iVar5);
    if (uVar3 == 0) {
      uVar13 = 4;
      goto LAB_00f71dc8;
    }
    if (uVar14 != 0) {
      iVar5 = 0;
      puVar9 = puVar8;
      uVar15 = uVar14;
      do {
        if (puVar9 == puVar8 + uVar14 * 6) break;
        piVar6 = (int *)*puVar9;
        uVar15 = uVar15 - 1;
        do {
          iVar4 = *piVar6;
          bVar16 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar16);
        *piVar6 = iVar4 + 1;
        if (iVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xf71dd4);
          (*pcVar1)();
        }
        uVar13 = puVar9[1];
        puVar11 = (undefined4 *)(uVar3 + iVar5 * 0x18);
        *puVar11 = piVar6;
        iVar5 = iVar5 + 1;
        puVar11[1] = uVar13;
        uVar13 = puVar9[3];
        uVar7 = puVar9[4];
        uVar10 = puVar9[5];
        puVar11[2] = puVar9[2];
        puVar11[3] = uVar13;
        puVar11[4] = uVar7;
        puVar11[5] = uVar10;
        puVar9 = puVar9 + 6;
      } while (uVar15 != 0);
    }
    uVar15 = uVar14;
  }
  *param_1 = local_28;
  param_1[3] = uVar15;
  param_1[1] = uVar2;
  param_1[2] = uVar12;
  param_1[4] = uVar3;
  param_1[5] = uVar14;
  return;
}

