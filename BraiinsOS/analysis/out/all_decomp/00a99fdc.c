// FUN_00a99fdc @ 00a99fdc size=520 calls_out=2 calls_in=4
// strings: 

void FUN_00a99fdc(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  
  puVar9 = (undefined4 *)param_2[3];
  puVar14 = (undefined4 *)*param_2;
  puVar18 = (undefined4 *)param_2[1];
  uVar3 = param_2[2];
  puVar15 = puVar14;
  puVar11 = puVar18;
  if (puVar18 != puVar9) {
LAB_00a9a020:
    iVar17 = puVar11[6];
    iVar12 = puVar11[5];
    iVar16 = puVar11[4];
    uVar4 = puVar11[7];
    puVar18 = puVar11 + 8;
    iVar6 = iVar17 * 0x28;
    iVar7 = iVar12;
LAB_00a9a044:
    if (iVar6 != 0) goto code_r0x00a9a04c;
    iVar6 = 0;
    for (; iVar17 != 0; iVar17 = iVar17 + -1) {
      if (*(int *)(iVar12 - iVar6) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((iVar12 - iVar6) + 4));
      }
      iVar7 = iVar12 - iVar6;
      if (*(int *)(iVar7 + 0xc) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0x10));
      }
      if (*(int *)(iVar7 + 0x18) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0x1c));
      }
      iVar6 = iVar6 + -0x28;
    }
    if (iVar16 != 0) {
      thunk_FUN_016d3fb4(iVar12);
    }
    goto joined_r0x00a9a088;
  }
LAB_00a9a10c:
  *param_2 = 8;
  param_2[1] = 8;
  param_2[2] = 0;
  param_2[3] = 8;
  uVar2 = 0;
  while (uVar13 = uVar2, uVar13 != (uint)((int)puVar9 - (int)puVar18) >> 5) {
    puVar11 = (undefined4 *)(puVar18[uVar13 * 8 + 5] + 0x10);
    for (iVar6 = puVar18[uVar13 * 8 + 6]; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar11[-4] != 0) {
        thunk_FUN_016d3fb4(puVar11[-3]);
      }
      if (puVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar11);
      }
      if (puVar11[2] != 0) {
        thunk_FUN_016d3fb4(puVar11[3]);
      }
      puVar11 = puVar11 + 10;
    }
    uVar2 = uVar13 + 1;
    if (puVar18[uVar13 * 8 + 4] != 0) {
      thunk_FUN_016d3fb4(puVar18[uVar13 * 8 + 5]);
    }
  }
  *param_1 = uVar3;
  param_1[2] = (uint)((int)puVar15 - (int)puVar14) >> 5;
  param_1[1] = puVar14;
  FUN_00a85bfc(param_2);
  return;
code_r0x00a9a04c:
  pcVar1 = (char *)(iVar7 + 0x24);
  iVar6 = iVar6 + -0x28;
  iVar7 = iVar7 + 0x28;
  if (*pcVar1 != '\0') goto code_r0x00a9a060;
  goto LAB_00a9a044;
code_r0x00a9a060:
  uVar8 = puVar11[1];
  uVar10 = puVar11[2];
  uVar5 = puVar11[3];
  *puVar15 = *puVar11;
  puVar15[1] = uVar8;
  puVar15[2] = uVar10;
  puVar15[3] = uVar5;
  puVar15[4] = iVar16;
  puVar15[5] = iVar12;
  puVar15[6] = iVar17;
  puVar15[7] = uVar4;
  puVar15 = puVar15 + 8;
joined_r0x00a9a088:
  puVar11 = puVar18;
  if (puVar18 == puVar9) goto LAB_00a9a108;
  goto LAB_00a9a020;
LAB_00a9a108:
  puVar9 = (undefined4 *)param_2[3];
  goto LAB_00a9a10c;
}

