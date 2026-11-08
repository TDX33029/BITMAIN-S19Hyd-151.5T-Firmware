// FUN_01538a88 @ 01538a88 size=324 calls_out=1 calls_in=2
// strings: 

void FUN_01538a88(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  
  uVar2 = FUN_01538a34(param_1[4],*(undefined1 *)(param_1 + 5),*param_1,*(undefined1 *)(param_1 + 1)
                      );
  iVar3 = FUN_01538a34(param_1[0xc],*(undefined1 *)(param_1 + 0xd),param_1[8],
                       *(undefined1 *)(param_1 + 9));
  uVar12 = 2;
  if (iVar3 != 0) {
    uVar12 = 3;
  }
  puVar9 = param_1 + uVar2 * 4;
  puVar15 = param_1 + uVar12 * 4;
  uVar6 = 3;
  if (iVar3 != 0) {
    uVar6 = 2;
  }
  iVar3 = FUN_01538a34(*puVar15,*(undefined1 *)(puVar15 + 1),*puVar9,*(undefined1 *)(puVar9 + 1));
  uVar13 = uVar2 ^ 1;
  puVar7 = param_1 + uVar13 * 4;
  puVar16 = param_1 + uVar6 * 4;
  iVar4 = FUN_01538a34(*puVar16,*(undefined1 *)(puVar16 + 1),*puVar7,*(undefined1 *)(puVar7 + 1));
  puVar14 = puVar15;
  uVar1 = uVar12;
  if (iVar3 != 0) {
    puVar14 = puVar7;
    uVar1 = uVar13;
  }
  if (iVar4 == 0) {
    puVar8 = puVar7;
    puVar7 = puVar16;
    uVar6 = uVar1;
    puVar16 = puVar14;
    uVar12 = uVar13;
  }
  else {
    puVar8 = puVar15;
  }
  bVar17 = iVar3 != 0;
  if (bVar17) {
    uVar12 = uVar2;
  }
  if (bVar17) {
    puVar8 = puVar9;
  }
  if (!bVar17) {
    puVar15 = puVar9;
  }
  iVar3 = FUN_01538a34(param_1[uVar6 * 4],*(undefined1 *)(puVar16 + 1),param_1[uVar12 * 4],
                       *(undefined1 *)(puVar8 + 1));
  uVar5 = puVar15[1];
  uVar10 = puVar15[2];
  uVar11 = puVar15[3];
  if (iVar3 == 0) {
    puVar9 = puVar16;
  }
  else {
    puVar9 = puVar8;
    puVar8 = puVar16;
  }
  *param_2 = *puVar15;
  param_2[1] = uVar5;
  param_2[2] = uVar10;
  param_2[3] = uVar11;
  uVar5 = puVar8[1];
  uVar10 = puVar8[2];
  uVar11 = puVar8[3];
  param_2[4] = *puVar8;
  param_2[5] = uVar5;
  param_2[6] = uVar10;
  param_2[7] = uVar11;
  uVar5 = puVar9[1];
  uVar10 = puVar9[2];
  uVar11 = puVar9[3];
  param_2[8] = *puVar9;
  param_2[9] = uVar5;
  param_2[10] = uVar10;
  param_2[0xb] = uVar11;
  uVar5 = puVar7[1];
  uVar10 = puVar7[2];
  uVar11 = puVar7[3];
  param_2[0xc] = *puVar7;
  param_2[0xd] = uVar5;
  param_2[0xe] = uVar10;
  param_2[0xf] = uVar11;
  return;
}

