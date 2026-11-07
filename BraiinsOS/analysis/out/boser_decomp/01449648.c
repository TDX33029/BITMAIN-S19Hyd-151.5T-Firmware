// FUN_01449648 @ 01449648 size=192 calls_out=0 calls_in=2
// strings: 

void FUN_01449648(int param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  
  uVar9 = 2;
  bVar15 = *(byte *)(param_1 + 3) <= *(byte *)(param_1 + 7);
  uVar8 = (uint)bVar15;
  uVar12 = (uint)!bVar15;
  uVar11 = 3;
  if (*(byte *)(param_1 + 0xf) < *(byte *)(param_1 + 0xb)) {
    uVar9 = 3;
    uVar11 = 2;
  }
  uVar13 = *(uint *)(param_1 + uVar9 * 4);
  puVar14 = (uint *)(param_1 + uVar8 * 4);
  uVar10 = *(uint *)(param_1 + uVar12 * 4);
  puVar7 = (uint *)(param_1 + uVar11 * 4);
  uVar1 = uVar13 >> 0x18;
  uVar6 = uVar9;
  if (uVar1 < uVar10 >> 0x18) {
    uVar6 = uVar8;
  }
  if (*(byte *)((int)puVar14 + 3) <= *(byte *)((int)puVar7 + 3)) {
    uVar9 = uVar8;
    puVar14 = puVar7;
    uVar11 = uVar6;
  }
  if (uVar1 < uVar10 >> 0x18) {
    uVar10 = uVar13;
    uVar9 = uVar12;
  }
  puVar7 = (uint *)(param_1 + uVar9 * 4);
  puVar4 = (uint *)(param_1 + uVar11 * 4);
  bVar2 = *(byte *)((int)puVar7 + 3);
  bVar3 = *(byte *)((int)puVar4 + 3);
  *param_2 = uVar10;
  puVar5 = puVar4;
  if (bVar3 < bVar2) {
    puVar5 = puVar7;
    puVar7 = puVar4;
  }
  param_2[1] = *puVar7;
  param_2[2] = *puVar5;
  param_2[3] = *puVar14;
  return;
}

