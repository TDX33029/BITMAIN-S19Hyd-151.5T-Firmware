// FUN_009d0c08 @ 009d0c08 size=688 calls_out=0 calls_in=1
// strings: 

void FUN_009d0c08(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar4 = (uint)(param_1[6] < param_1[2]);
  if (((param_1[6] == param_1[2]) &&
      (uVar2 = *param_1 ^ (uint)((int)*param_1 >> 0x1f) >> 1,
      uVar7 = param_1[4] ^ (uint)((int)param_1[4] >> 0x1f) >> 1,
      uVar4 = (uint)((int)uVar7 < (int)uVar2), uVar7 == uVar2)) &&
     (uVar4 = 0,
     (int)(param_1[5] ^ (uint)((int)param_1[5] >> 0x1f) >> 1) <
     (int)(param_1[1] ^ (uint)((int)param_1[1] >> 0x1f) >> 1))) {
    uVar4 = 1;
  }
  bVar10 = param_1[0xe] < param_1[10];
  if ((param_1[0xe] == param_1[10]) &&
     (uVar2 = param_1[8] ^ (uint)((int)param_1[8] >> 0x1f) >> 1,
     uVar7 = param_1[0xc] ^ (uint)((int)param_1[0xc] >> 0x1f) >> 1, bVar10 = (int)uVar7 < (int)uVar2
     , uVar7 == uVar2)) {
    bVar10 = (int)(param_1[0xd] ^ (uint)((int)param_1[0xd] >> 0x1f) >> 1) <
             (int)(param_1[9] ^ (uint)((int)param_1[9] >> 0x1f) >> 1);
  }
  iVar3 = 0x20;
  if (bVar10) {
    iVar3 = 0x30;
  }
  puVar9 = (uint *)((int)param_1 + iVar3);
  puVar1 = param_1 + uVar4 * 4;
  iVar3 = 0x30;
  if (bVar10) {
    iVar3 = 0x20;
  }
  puVar8 = (uint *)((int)param_1 + iVar3);
  param_1 = param_1 + (uVar4 ^ 1) * 4;
  bVar10 = puVar9[2] < puVar1[2];
  if (((puVar9[2] == puVar1[2]) &&
      (uVar4 = *puVar1 ^ (uint)((int)*puVar1 >> 0x1f) >> 1,
      uVar2 = *puVar9 ^ (uint)((int)*puVar9 >> 0x1f) >> 1, bVar10 = (int)uVar2 < (int)uVar4,
      uVar2 == uVar4)) &&
     (bVar10 = false,
     (int)(puVar9[1] ^ (uint)((int)puVar9[1] >> 0x1f) >> 1) <
     (int)(puVar1[1] ^ (uint)((int)puVar1[1] >> 0x1f) >> 1))) {
    bVar10 = true;
  }
  bVar11 = puVar8[2] < param_1[2];
  if ((puVar8[2] == param_1[2]) &&
     (uVar4 = *param_1 ^ (uint)((int)*param_1 >> 0x1f) >> 1,
     uVar2 = *puVar8 ^ (uint)((int)*puVar8 >> 0x1f) >> 1, bVar11 = (int)uVar2 < (int)uVar4,
     uVar2 == uVar4)) {
    bVar11 = (int)(puVar8[1] ^ (uint)((int)puVar8[1] >> 0x1f) >> 1) <
             (int)(param_1[1] ^ (uint)((int)param_1[1] >> 0x1f) >> 1);
  }
  puVar6 = param_1;
  if (bVar11) {
    puVar6 = puVar9;
  }
  puVar5 = puVar9;
  if (bVar10) {
    puVar5 = param_1;
    puVar6 = puVar1;
  }
  if (bVar11) {
    puVar5 = puVar8;
  }
  bVar12 = puVar5[2] < puVar6[2];
  if (((puVar5[2] == puVar6[2]) &&
      (uVar4 = *puVar6 ^ (uint)((int)*puVar6 >> 0x1f) >> 1,
      uVar2 = *puVar5 ^ (uint)((int)*puVar5 >> 0x1f) >> 1, bVar12 = (int)uVar2 < (int)uVar4,
      uVar2 == uVar4)) &&
     (bVar12 = false,
     (int)(puVar5[1] ^ (uint)((int)puVar5[1] >> 0x1f) >> 1) <
     (int)(puVar6[1] ^ (uint)((int)puVar6[1] >> 0x1f) >> 1))) {
    bVar12 = true;
  }
  if (bVar10) {
    puVar1 = puVar9;
  }
  uVar4 = puVar1[1];
  uVar7 = puVar1[2];
  uVar2 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar4;
  param_2[2] = uVar7;
  puVar1 = puVar6;
  if (bVar12) {
    puVar1 = puVar5;
  }
  param_2[3] = uVar2;
  if (bVar12) {
    puVar5 = puVar6;
  }
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  uVar7 = puVar1[2];
  if (bVar11) {
    puVar8 = param_1;
  }
  param_2[7] = puVar1[3];
  param_2[4] = uVar4;
  param_2[5] = uVar2;
  param_2[6] = uVar7;
  uVar4 = puVar5[1];
  uVar2 = puVar5[2];
  uVar7 = puVar5[3];
  param_2[8] = *puVar5;
  param_2[9] = uVar4;
  param_2[10] = uVar2;
  param_2[0xb] = uVar7;
  uVar4 = puVar8[1];
  uVar2 = puVar8[2];
  uVar7 = puVar8[3];
  param_2[0xc] = *puVar8;
  param_2[0xd] = uVar4;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar7;
  return;
}

