// FUN_011bc390 @ 011bc390 size=328 calls_out=1 calls_in=2
// strings: 

void FUN_011bc390(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  
  uVar3 = FUN_011bc0ec(param_1[4],*(undefined1 *)(param_1 + 5),*param_1,*(undefined1 *)(param_1 + 1)
                      );
  iVar4 = FUN_011bc0ec(param_1[0xc],*(undefined1 *)(param_1 + 0xd),param_1[8],
                       *(undefined1 *)(param_1 + 9));
  uVar13 = 2;
  if (iVar4 != 0) {
    uVar13 = 3;
  }
  puVar10 = param_1 + uVar3 * 4;
  puVar11 = param_1 + uVar13 * 4;
  uVar16 = 3;
  if (iVar4 != 0) {
    uVar16 = 2;
  }
  iVar4 = FUN_011bc0ec(*puVar11,*(undefined1 *)(puVar11 + 1),*puVar10,*(undefined1 *)(puVar10 + 1));
  uVar5 = uVar3 ^ 1;
  puVar9 = param_1 + uVar5 * 4;
  puVar15 = param_1 + uVar16 * 4;
  iVar6 = FUN_011bc0ec(*puVar15,*(undefined1 *)(puVar15 + 1),*puVar9,*(undefined1 *)(puVar9 + 1));
  puVar14 = puVar11;
  uVar1 = uVar13;
  if (iVar4 != 0) {
    puVar14 = puVar9;
    uVar1 = uVar5;
  }
  puVar2 = puVar11;
  if (iVar6 == 0) {
    uVar13 = uVar5;
    puVar2 = puVar9;
    puVar9 = puVar15;
    uVar16 = uVar1;
    puVar15 = puVar14;
  }
  if (iVar4 != 0) {
    uVar13 = uVar3;
  }
  if (iVar4 != 0) {
    puVar2 = puVar10;
  }
  else {
    puVar11 = puVar10;
  }
  iVar4 = FUN_011bc0ec(param_1[uVar16 * 4],*(undefined1 *)(puVar15 + 1),param_1[uVar13 * 4],
                       *(undefined1 *)(puVar2 + 1));
  uVar7 = puVar11[1];
  uVar8 = puVar11[2];
  uVar12 = puVar11[3];
  if (iVar4 == 0) {
    puVar10 = puVar15;
  }
  else {
    puVar10 = puVar2;
    puVar2 = puVar15;
  }
  *param_2 = *puVar11;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar12;
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar12 = puVar2[2];
  param_2[7] = puVar2[3];
  param_2[4] = uVar7;
  param_2[5] = uVar8;
  param_2[6] = uVar12;
  uVar7 = puVar10[1];
  uVar8 = puVar10[2];
  uVar12 = puVar10[3];
  param_2[8] = *puVar10;
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = uVar12;
  uVar7 = puVar9[1];
  uVar8 = puVar9[2];
  uVar12 = puVar9[3];
  param_2[0xc] = *puVar9;
  param_2[0xd] = uVar7;
  param_2[0xe] = uVar8;
  param_2[0xf] = uVar12;
  return;
}

