// FUN_0126490c @ 0126490c size=1212 calls_out=2 calls_in=1
// strings: 

void FUN_0126490c(int param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  byte *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  byte *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar5 = FUN_01268158(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 2) {
    if (*(byte *)(param_1 + 0x28) == *(byte *)(param_1 + 0xc)) {
      local_64 = *(byte **)(param_1 + 0x30);
      local_60 = *(int *)(param_1 + 0x34);
      bVar19 = local_60 != 0;
      uVar5 = 0;
      local_44 = *(byte **)(param_1 + 0x14);
      uVar6 = 0;
      if (bVar19) {
        uVar5 = (uint)*local_64;
      }
      local_40 = *(int *)(param_1 + 0x18);
      if (bVar19) {
        uVar5 = LZCOUNT(uVar5 - 0x2f);
      }
      local_48 = 0x201;
      if (bVar19) {
        uVar5 = uVar5 >> 5;
      }
      bVar19 = local_40 != 0;
      local_46 = (undefined1)uVar5;
      if (bVar19) {
        uVar6 = *local_44 - 0x2f;
      }
      local_5c = 6;
      if (bVar19) {
        uVar6 = LZCOUNT(uVar6);
      }
      local_3c = 6;
      if (bVar19) {
        uVar6 = uVar6 >> 5;
      }
      local_26 = (undefined1)uVar6;
      local_28 = 0x201;
      cVar1 = FUN_019af7b8(&local_64,&local_44);
      uVar5 = (uint)(cVar1 < '\0');
    }
    else {
      uVar5 = 0;
      if (*(byte *)(param_1 + 0x28) < *(byte *)(param_1 + 0xc)) {
        uVar5 = 1;
      }
    }
  }
  bVar2 = FUN_01268158(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  if (bVar2 == 2) {
    if (*(byte *)(param_1 + 0x60) == *(byte *)(param_1 + 0x44)) {
      local_64 = *(byte **)(param_1 + 0x68);
      local_60 = *(int *)(param_1 + 0x6c);
      bVar19 = local_60 != 0;
      uVar6 = 0;
      local_44 = *(byte **)(param_1 + 0x4c);
      uVar7 = 0;
      if (bVar19) {
        uVar6 = (uint)*local_64;
      }
      local_40 = *(int *)(param_1 + 0x50);
      if (bVar19) {
        uVar6 = LZCOUNT(uVar6 - 0x2f);
      }
      local_48 = 0x201;
      if (bVar19) {
        uVar6 = uVar6 >> 5;
      }
      bVar19 = local_40 != 0;
      local_46 = (undefined1)uVar6;
      if (bVar19) {
        uVar7 = *local_44 - 0x2f;
      }
      local_5c = 6;
      if (bVar19) {
        uVar7 = LZCOUNT(uVar7);
      }
      local_3c = 6;
      if (bVar19) {
        uVar7 = uVar7 >> 5;
      }
      local_26 = (undefined1)uVar7;
      local_28 = 0x201;
      cVar1 = FUN_019af7b8(&local_64,&local_44);
      bVar2 = cVar1 < '\0';
    }
    else {
      bVar2 = 0;
      if (*(byte *)(param_1 + 0x60) < *(byte *)(param_1 + 0x44)) {
        bVar2 = 1;
      }
    }
  }
  bVar19 = (bVar2 & 1) != 0;
  iVar8 = 0x38;
  iVar12 = 0x54;
  if (bVar19) {
    iVar8 = 0x54;
  }
  puVar11 = (undefined4 *)(param_1 + iVar8);
  if (bVar19) {
    iVar12 = 0x38;
  }
  puVar17 = (undefined4 *)(param_1 + (uVar5 & 1) * 0x1c);
  bVar2 = FUN_01268158(puVar11[1],puVar11[2],puVar17[1],puVar17[2]);
  puVar16 = (undefined4 *)(param_1 + iVar12);
  puVar13 = (undefined4 *)(param_1 + (~uVar5 & 1) * 0x1c);
  if (bVar2 == 2) {
    if (*(byte *)(puVar11 + 3) == *(byte *)(puVar17 + 3)) {
      local_64 = (byte *)puVar11[5];
      local_60 = puVar11[6];
      uVar5 = 0;
      local_44 = (byte *)puVar17[5];
      local_40 = puVar17[6];
      uVar6 = 0;
      if (local_60 != 0) {
        uVar5 = LZCOUNT(*local_64 - 0x2f);
      }
      local_48 = 0x201;
      if (local_60 != 0) {
        uVar5 = uVar5 >> 5;
      }
      bVar19 = local_40 != 0;
      local_46 = (undefined1)uVar5;
      if (bVar19) {
        uVar6 = *local_44 - 0x2f;
      }
      local_5c = 6;
      if (bVar19) {
        uVar6 = LZCOUNT(uVar6);
      }
      local_3c = 6;
      if (bVar19) {
        uVar6 = uVar6 >> 5;
      }
      local_28 = 0x201;
      local_26 = (undefined1)uVar6;
      cVar1 = FUN_019af7b8(&local_64,&local_44);
      bVar2 = cVar1 < '\0';
    }
    else {
      bVar2 = 0;
      if (*(byte *)(puVar11 + 3) < *(byte *)(puVar17 + 3)) {
        bVar2 = 1;
      }
    }
  }
  bVar3 = FUN_01268158(puVar16[1],puVar16[2],puVar13[1],puVar13[2]);
  if (bVar3 == 2) {
    if (*(byte *)(puVar16 + 3) == *(byte *)(puVar13 + 3)) {
      local_64 = (byte *)puVar16[5];
      local_60 = puVar16[6];
      uVar5 = 0;
      local_44 = (byte *)puVar13[5];
      local_40 = puVar13[6];
      uVar6 = 0;
      if (local_60 != 0) {
        uVar5 = LZCOUNT(*local_64 - 0x2f);
      }
      local_48 = 0x201;
      if (local_60 != 0) {
        uVar5 = uVar5 >> 5;
      }
      bVar19 = local_40 != 0;
      local_46 = (undefined1)uVar5;
      if (bVar19) {
        uVar6 = *local_44 - 0x2f;
      }
      local_5c = 6;
      if (bVar19) {
        uVar6 = LZCOUNT(uVar6);
      }
      local_3c = 6;
      if (bVar19) {
        uVar6 = uVar6 >> 5;
      }
      local_28 = 0x201;
      local_26 = (undefined1)uVar6;
      cVar1 = FUN_019af7b8(&local_64,&local_44);
      bVar3 = cVar1 < '\0';
    }
    else {
      bVar3 = 0;
      if (*(byte *)(puVar16 + 3) < *(byte *)(puVar13 + 3)) {
        bVar3 = 1;
      }
    }
  }
  puVar18 = puVar13;
  if ((bVar3 & 1) != 0) {
    puVar18 = puVar11;
  }
  puVar10 = puVar11;
  if ((bVar2 & 1) != 0) {
    puVar10 = puVar13;
    puVar18 = puVar17;
  }
  if ((bVar3 & 1) != 0) {
    puVar10 = puVar16;
  }
  bVar4 = FUN_01268158(puVar10[1],puVar10[2],puVar18[1],puVar18[2]);
  if (bVar4 == 2) {
    if (*(byte *)(puVar10 + 3) == *(byte *)(puVar18 + 3)) {
      local_64 = (byte *)puVar10[5];
      local_60 = puVar10[6];
      bVar19 = local_60 != 0;
      uVar5 = 0;
      uVar6 = 0;
      if (bVar19) {
        uVar5 = (uint)*local_64;
      }
      local_44 = (byte *)puVar18[5];
      local_40 = puVar18[6];
      if (bVar19) {
        uVar5 = uVar5 - 0x2f;
      }
      local_5c = 6;
      if (bVar19) {
        uVar5 = LZCOUNT(uVar5);
      }
      local_3c = 6;
      if (bVar19) {
        uVar5 = uVar5 >> 5;
      }
      bVar19 = local_40 != 0;
      local_46 = (undefined1)uVar5;
      if (bVar19) {
        uVar6 = *local_44 - 0x2f;
      }
      local_48 = 0x201;
      if (bVar19) {
        uVar6 = LZCOUNT(uVar6);
      }
      local_28 = 0x201;
      if (bVar19) {
        uVar6 = uVar6 >> 5;
      }
      local_26 = (undefined1)uVar6;
      cVar1 = FUN_019af7b8(&local_64,&local_44);
      bVar4 = cVar1 < '\0';
    }
    else {
      bVar4 = 0;
      if (*(byte *)(puVar10 + 3) < *(byte *)(puVar18 + 3)) {
        bVar4 = 1;
      }
    }
  }
  if ((bVar2 & 1) != 0) {
    puVar17 = puVar11;
  }
  uVar9 = puVar17[1];
  uVar14 = puVar17[2];
  *param_2 = *puVar17;
  param_2[1] = uVar9;
  param_2[2] = uVar14;
  puVar11 = puVar10;
  if ((bVar4 & 1) != 0) {
    puVar11 = puVar18;
    puVar18 = puVar10;
  }
  uVar9 = puVar17[4];
  uVar14 = puVar17[5];
  uVar15 = puVar17[6];
  param_2[3] = puVar17[3];
  param_2[4] = uVar9;
  param_2[5] = uVar14;
  param_2[6] = uVar15;
  uVar9 = puVar18[1];
  uVar14 = puVar18[2];
  param_2[7] = *puVar18;
  param_2[8] = uVar9;
  param_2[9] = uVar14;
  uVar9 = puVar18[4];
  uVar14 = puVar18[5];
  uVar15 = puVar18[6];
  param_2[10] = puVar18[3];
  param_2[0xb] = uVar9;
  param_2[0xc] = uVar14;
  param_2[0xd] = uVar15;
  uVar9 = puVar11[1];
  uVar14 = puVar11[2];
  param_2[0xe] = *puVar11;
  param_2[0xf] = uVar9;
  param_2[0x10] = uVar14;
  uVar9 = puVar11[4];
  uVar14 = puVar11[5];
  uVar15 = puVar11[6];
  param_2[0x11] = puVar11[3];
  param_2[0x12] = uVar9;
  param_2[0x13] = uVar14;
  param_2[0x14] = uVar15;
  if ((bVar3 & 1) != 0) {
    puVar16 = puVar13;
  }
  uVar9 = puVar16[1];
  uVar14 = puVar16[2];
  param_2[0x15] = *puVar16;
  param_2[0x16] = uVar9;
  param_2[0x17] = uVar14;
  uVar9 = puVar16[4];
  uVar14 = puVar16[5];
  uVar15 = puVar16[6];
  param_2[0x18] = puVar16[3];
  param_2[0x19] = uVar9;
  param_2[0x1a] = uVar14;
  param_2[0x1b] = uVar15;
  return;
}

