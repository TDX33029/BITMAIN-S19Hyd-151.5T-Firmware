// FUN_010141f8 @ 010141f8 size=812 calls_out=1 calls_in=2
// strings: 

void FUN_010141f8(int param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  byte *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  byte *local_44;
  uint local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  local_64 = *(byte **)(param_1 + 0x10);
  local_60 = *(int *)(param_1 + 0x14);
  bVar16 = local_60 != 0;
  uVar7 = 0;
  uVar3 = 0;
  if (bVar16) {
    uVar7 = (uint)*local_64;
  }
  local_44 = *(byte **)(param_1 + 4);
  if (bVar16) {
    uVar7 = uVar7 - 0x2f;
  }
  local_40 = *(int *)(param_1 + 8);
  if (bVar16) {
    uVar7 = LZCOUNT(uVar7);
  }
  local_48 = 0x201;
  if (bVar16) {
    uVar7 = uVar7 >> 5;
  }
  bVar16 = local_40 != 0;
  local_46 = (undefined1)uVar7;
  if (bVar16) {
    uVar3 = *local_44 - 0x2f;
  }
  local_5c = 6;
  if (bVar16) {
    uVar3 = LZCOUNT(uVar3);
  }
  local_3c = 6;
  if (bVar16) {
    uVar3 = uVar3 >> 5;
  }
  local_28 = 0x201;
  local_26 = (undefined1)uVar3;
  uVar4 = FUN_019af7b8(&local_64,&local_44);
  local_64 = *(byte **)(param_1 + 0x28);
  local_60 = *(int *)(param_1 + 0x2c);
  bVar16 = local_60 != 0;
  uVar7 = 0;
  uVar3 = 0;
  if (bVar16) {
    uVar7 = (uint)*local_64;
  }
  local_5c = 6;
  if (bVar16) {
    uVar7 = uVar7 - 0x2f;
  }
  local_3c = 6;
  if (bVar16) {
    uVar7 = (uint)(uVar7 == 0);
  }
  local_46 = (undefined1)uVar7;
  local_44 = *(byte **)(param_1 + 0x1c);
  uVar7 = *(uint *)(param_1 + 0x20);
  local_48 = 0x201;
  if (uVar7 != 0) {
    uVar3 = *local_44 - 0x2f;
  }
  local_28 = 0x201;
  if (uVar7 != 0) {
    uVar3 = (uint)(uVar3 == 0);
  }
  local_26 = (undefined1)uVar3;
  local_40 = uVar7;
  cVar1 = FUN_019af7b8(&local_64,&local_44);
  iVar8 = 0x24;
  uVar3 = (uVar4 & 0xff) >> 7;
  if (cVar1 < '\0') {
    iVar8 = 0x18;
  }
  local_46 = 0;
  puVar14 = (undefined4 *)(param_1 + (uVar3 | uVar3 << 1) * 4);
  uVar3 = (uVar4 & 0xff) >> 7 ^ 1;
  iVar5 = 0x18;
  if (cVar1 < '\0') {
    iVar5 = 0x24;
  }
  local_40 = puVar14[2];
  puVar6 = (undefined4 *)(param_1 + iVar5);
  local_60 = puVar6[2];
  local_64 = (byte *)puVar6[1];
  uVar4 = 0;
  bVar16 = local_60 != 0;
  if (bVar16) {
    uVar7 = (uint)*local_64;
  }
  puVar13 = (undefined4 *)(param_1 + (uVar3 | uVar3 << 1) * 4);
  local_44 = (byte *)puVar14[1];
  if (bVar16) {
    uVar7 = uVar7 - 0x2f;
  }
  local_48 = 0x201;
  if (bVar16) {
    uVar7 = LZCOUNT(uVar7);
  }
  local_28 = 0x201;
  if (bVar16) {
    local_46 = (undefined1)(uVar7 >> 5);
  }
  bVar16 = local_40 != 0;
  if (bVar16) {
    uVar4 = (uint)*local_44;
  }
  puVar12 = (undefined4 *)(param_1 + iVar8);
  if (bVar16) {
    uVar4 = uVar4 - 0x2f;
  }
  local_5c = 6;
  if (bVar16) {
    uVar4 = LZCOUNT(uVar4);
  }
  local_3c = 6;
  if (bVar16) {
    uVar4 = uVar4 >> 5;
  }
  local_26 = (undefined1)uVar4;
  cVar1 = FUN_019af7b8(&local_64,&local_44);
  local_64 = (byte *)puVar12[1];
  local_60 = puVar12[2];
  bVar16 = local_60 != 0;
  uVar7 = 0;
  local_44 = (byte *)puVar13[1];
  uVar3 = 0;
  if (bVar16) {
    uVar7 = (uint)*local_64;
  }
  local_40 = puVar13[2];
  if (bVar16) {
    uVar7 = uVar7 - 0x2f;
  }
  local_5c = 6;
  if (bVar16) {
    uVar7 = LZCOUNT(uVar7);
  }
  local_3c = 6;
  if (bVar16) {
    uVar7 = uVar7 >> 5;
  }
  bVar16 = local_40 != 0;
  local_46 = (undefined1)uVar7;
  if (bVar16) {
    uVar3 = *local_44 - 0x2f;
  }
  local_48 = 0x201;
  if (bVar16) {
    uVar3 = LZCOUNT(uVar3);
  }
  local_28 = 0x201;
  if (bVar16) {
    uVar3 = uVar3 >> 5;
  }
  local_26 = (undefined1)uVar3;
  puVar10 = puVar6;
  if (cVar1 < '\0') {
    puVar10 = puVar13;
  }
  cVar2 = FUN_019af7b8(&local_64,&local_44);
  if (cVar2 < '\0') {
    puVar10 = puVar12;
  }
  local_64 = (byte *)puVar10[1];
  local_60 = puVar10[2];
  puVar15 = puVar13;
  if (cVar2 < '\0') {
    puVar15 = puVar6;
  }
  uVar7 = 0;
  if (cVar1 < '\0') {
    puVar15 = puVar14;
  }
  bVar16 = local_60 != 0;
  if (bVar16) {
    uVar7 = (uint)*local_64;
  }
  uVar3 = 0;
  if (bVar16) {
    uVar7 = LZCOUNT(uVar7 - 0x2f);
  }
  local_44 = (byte *)puVar15[1];
  local_40 = puVar15[2];
  local_5c = 6;
  if (bVar16) {
    uVar7 = uVar7 >> 5;
  }
  bVar16 = local_40 != 0;
  local_46 = (undefined1)uVar7;
  if (bVar16) {
    uVar3 = *local_44 - 0x2f;
  }
  local_48 = 0x201;
  if (bVar16) {
    uVar3 = LZCOUNT(uVar3);
  }
  local_28 = 0x201;
  local_3c = 6;
  if (bVar16) {
    uVar3 = uVar3 >> 5;
  }
  local_26 = (undefined1)uVar3;
  if (cVar1 < '\0') {
    puVar14 = puVar6;
  }
  cVar1 = FUN_019af7b8(&local_64,&local_44);
  uVar9 = puVar14[1];
  uVar11 = puVar14[2];
  puVar6 = puVar15;
  if (cVar1 < '\0') {
    puVar6 = puVar10;
  }
  *param_2 = *puVar14;
  param_2[1] = uVar9;
  param_2[2] = uVar11;
  if (cVar1 < '\0') {
    puVar10 = puVar15;
  }
  uVar9 = puVar6[1];
  uVar11 = puVar6[2];
  if (cVar2 < '\0') {
    puVar12 = puVar13;
  }
  param_2[3] = *puVar6;
  param_2[4] = uVar9;
  param_2[5] = uVar11;
  uVar9 = puVar10[1];
  uVar11 = puVar10[2];
  param_2[6] = *puVar10;
  param_2[7] = uVar9;
  param_2[8] = uVar11;
  uVar9 = puVar12[1];
  uVar11 = puVar12[2];
  param_2[9] = *puVar12;
  param_2[10] = uVar9;
  param_2[0xb] = uVar11;
  return;
}

