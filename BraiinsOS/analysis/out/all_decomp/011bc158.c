// FUN_011bc158 @ 011bc158 size=568 calls_out=3 calls_in=1
// strings: 

void FUN_011bc158(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  FUN_011bc390(param_1,param_3);
  puVar10 = param_3 + 0x10;
  FUN_011bc390(param_1 + 0x40,puVar10);
  uVar1 = FUN_011bc0ec(param_3[0x10],*(undefined1 *)(param_3 + 0x11),*param_3,
                       *(undefined1 *)(param_3 + 1));
  puVar4 = param_3;
  if (uVar1 != 0) {
    puVar4 = puVar10;
  }
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar2 = puVar4[3];
  *param_2 = *puVar4;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar2;
  puVar9 = param_3 + 0xc;
  puVar5 = param_3 + 0x1c;
  iVar3 = FUN_011bc0ec(*puVar5,*(undefined1 *)(param_3 + 0x1d),*puVar9,
                       *(undefined1 *)(param_3 + 0xd));
  puVar4 = puVar5;
  if (iVar3 != 0) {
    puVar4 = puVar9;
  }
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar2 = puVar4[3];
  param_2[0x1c] = *puVar4;
  param_2[0x1d] = uVar6;
  param_2[0x1e] = uVar7;
  param_2[0x1f] = uVar2;
  param_3 = param_3 + (uVar1 ^ 1) * 4;
  puVar10 = puVar10 + uVar1 * 4;
  uVar1 = FUN_011bc0ec(*puVar10,*(undefined1 *)(puVar10 + 1),*param_3,*(undefined1 *)(param_3 + 1));
  puVar4 = param_3;
  if (uVar1 != 0) {
    puVar4 = puVar10;
  }
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar2 = puVar4[3];
  param_2[4] = *puVar4;
  param_2[5] = uVar6;
  param_2[6] = uVar7;
  param_2[7] = uVar2;
  puVar9 = puVar9 + iVar3 * -4;
  puVar8 = puVar5 + iVar3 * 4 + -4;
  iVar3 = FUN_011bc0ec(*puVar8,*(undefined1 *)(puVar5 + iVar3 * 4 + -3),*puVar9,
                       *(undefined1 *)(puVar9 + 1));
  puVar4 = puVar8;
  if (iVar3 != 0) {
    puVar4 = puVar9;
  }
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar2 = puVar4[3];
  param_2[0x18] = *puVar4;
  param_2[0x19] = uVar6;
  param_2[0x1a] = uVar7;
  param_2[0x1b] = uVar2;
  param_3 = param_3 + (uVar1 ^ 1) * 4;
  puVar10 = puVar10 + uVar1 * 4;
  uVar1 = FUN_011bc0ec(*puVar10,*(undefined1 *)(puVar10 + 1),*param_3,*(undefined1 *)(param_3 + 1));
  puVar4 = param_3;
  if (uVar1 != 0) {
    puVar4 = puVar10;
  }
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar2 = puVar4[3];
  param_2[8] = *puVar4;
  param_2[9] = uVar6;
  param_2[10] = uVar7;
  param_2[0xb] = uVar2;
  puVar9 = puVar9 + iVar3 * -4;
  puVar5 = puVar8 + iVar3 * 4 + -4;
  iVar3 = FUN_011bc0ec(*puVar5,*(undefined1 *)(puVar8 + iVar3 * 4 + -3),*puVar9,
                       *(undefined1 *)(puVar9 + 1));
  puVar4 = puVar5;
  if (iVar3 != 0) {
    puVar4 = puVar9;
  }
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar2 = puVar4[3];
  param_2[0x14] = *puVar4;
  param_2[0x15] = uVar6;
  param_2[0x16] = uVar7;
  param_2[0x17] = uVar2;
  param_3 = param_3 + (uVar1 ^ 1) * 4;
  puVar10 = puVar10 + uVar1 * 4;
  uVar1 = FUN_011bc0ec(*puVar10,*(undefined1 *)(puVar10 + 1),*param_3,*(undefined1 *)(param_3 + 1));
  puVar4 = param_3;
  if (uVar1 != 0) {
    puVar4 = puVar10;
  }
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar2 = puVar4[3];
  param_2[0xc] = *puVar4;
  param_2[0xd] = uVar6;
  param_2[0xe] = uVar7;
  param_2[0xf] = uVar2;
  puVar9 = puVar9 + iVar3 * -4;
  puVar8 = puVar5 + iVar3 * 4 + -4;
  puVar4 = (undefined4 *)
           FUN_011bc0ec(*puVar8,*(undefined1 *)(puVar5 + iVar3 * 4 + -3),*puVar9,
                        *(undefined1 *)(puVar9 + 1));
  puVar5 = puVar8;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar9;
  }
  uVar2 = *puVar5;
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  param_2[0x13] = puVar5[3];
  param_2[0x10] = uVar2;
  param_2[0x11] = uVar6;
  param_2[0x12] = uVar7;
  param_3 = param_3 + (uVar1 ^ 1) * 4;
  bVar11 = param_3 == puVar9 + (int)puVar4 * -4 + 4;
  if (bVar11) {
    param_3 = puVar10 + uVar1 * 4;
    puVar4 = puVar8 + (int)puVar4 * 4;
  }
  if (!bVar11 || param_3 != puVar4) {
    FUN_00fb7254();
  }
  return;
}

