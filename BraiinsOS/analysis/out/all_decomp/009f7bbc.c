// FUN_009f7bbc @ 009f7bbc size=1848 calls_out=2 calls_in=1
// strings: 

void FUN_009f7bbc(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  uint local_68;
  byte *local_64;
  uint local_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  byte *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar9 = *(uint *)(param_1 + 8);
  uVar12 = *(uint *)(param_1 + 0x24);
  uVar4 = uVar9;
  if (uVar12 < uVar9) {
    uVar4 = uVar12;
  }
  uVar4 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 4),uVar4);
  if (uVar4 == 0) {
    uVar4 = uVar12 - uVar9;
  }
  uVar9 = 0;
  uVar13 = (uint)(0 < (int)uVar4);
  uVar12 = uVar13 - ((int)uVar4 < 0) & 0xff;
  if (uVar12 == 0) {
    if (*(byte *)(param_1 + 0x28) == *(byte *)(param_1 + 0xc)) {
      local_60 = *(int *)(param_1 + 0x34);
      local_46 = 0;
      local_64 = *(byte **)(param_1 + 0x30);
      uVar4 = 0;
      local_40 = *(int *)(param_1 + 0x18);
      if (local_60 != 0) {
        uVar13 = LZCOUNT(*local_64 - 0x2f);
      }
      local_48 = 0x201;
      local_28 = 0x201;
      if (local_60 != 0) {
        local_46 = (undefined1)(uVar13 >> 5);
      }
      local_44 = *(byte **)(param_1 + 0x14);
      bVar19 = local_40 != 0;
      if (bVar19) {
        uVar4 = (uint)*local_44;
      }
      local_5c = 6;
      if (bVar19) {
        uVar4 = uVar4 - 0x2f;
      }
      local_3c = 6;
      if (bVar19) {
        uVar4 = (uint)(uVar4 == 0);
      }
      local_26 = (undefined1)uVar4;
      cVar3 = FUN_015f776c(&local_64,&local_44);
      uVar9 = (uint)(cVar3 < '\0');
    }
    else {
      uVar9 = (uint)(*(byte *)(param_1 + 0x28) < *(byte *)(param_1 + 0xc));
    }
  }
  else if (uVar12 != 2) {
    uVar9 = uVar4 >> 0x1f;
  }
  uVar12 = *(uint *)(param_1 + 0x40);
  uVar13 = *(uint *)(param_1 + 0x5c);
  uVar4 = uVar12;
  if (uVar13 < uVar12) {
    uVar4 = uVar13;
  }
  uVar4 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x3c),uVar4);
  if (uVar4 == 0) {
    uVar4 = uVar13 - uVar12;
  }
  uVar13 = (uint)((int)uVar4 < 0);
  uVar12 = (0 < (int)uVar4) - uVar13 & 0xff;
  if (uVar12 == 0) {
    bVar1 = *(byte *)(param_1 + 0x44);
    bVar2 = *(byte *)(param_1 + 0x60);
    if (bVar2 != bVar1) {
      uVar12 = (uint)(bVar2 < bVar1);
      puVar8 = (undefined4 *)(param_1 + uVar9 * 0x1c);
      puVar16 = (undefined4 *)(param_1 + (uVar9 ^ 1) * 0x1c);
      if (bVar2 < bVar1) goto LAB_009f7e0c;
LAB_009f7e3c:
      puVar14 = (undefined4 *)(param_1 + 0x38);
      goto LAB_009f7e40;
    }
    local_64 = *(byte **)(param_1 + 0x68);
    local_60 = *(int *)(param_1 + 0x6c);
    local_46 = 0;
    local_40 = *(int *)(param_1 + 0x50);
    uVar4 = 0;
    if (local_60 != 0) {
      uVar13 = LZCOUNT(*local_64 - 0x2f);
    }
    local_48 = 0x201;
    local_28 = 0x201;
    if (local_60 != 0) {
      local_46 = (undefined1)(uVar13 >> 5);
    }
    local_44 = *(byte **)(param_1 + 0x4c);
    bVar19 = local_40 != 0;
    if (bVar19) {
      uVar4 = (uint)*local_44;
    }
    local_5c = 6;
    if (bVar19) {
      uVar4 = uVar4 - 0x2f;
    }
    local_3c = 6;
    if (bVar19) {
      uVar4 = (uint)(uVar4 == 0);
    }
    local_26 = (undefined1)uVar4;
    cVar3 = FUN_015f776c(&local_64,&local_44);
    puVar8 = (undefined4 *)(param_1 + uVar9 * 0x1c);
    puVar16 = (undefined4 *)(param_1 + (uVar9 ^ 1) * 0x1c);
    if (-1 < cVar3) goto LAB_009f7de0;
    puVar14 = (undefined4 *)(param_1 + 0x54);
    iVar7 = 2;
  }
  else if (uVar12 == 2) {
    puVar8 = (undefined4 *)(param_1 + uVar9 * 0x1c);
    puVar16 = (undefined4 *)(param_1 + (uVar9 ^ 1) * 0x1c);
LAB_009f7de0:
    puVar14 = (undefined4 *)(param_1 + 0x38);
    iVar7 = 3;
  }
  else {
    puVar8 = (undefined4 *)(param_1 + uVar9 * 0x1c);
    puVar16 = (undefined4 *)(param_1 + (uVar9 ^ 1) * 0x1c);
    uVar12 = uVar4 >> 0x1f;
    if (uVar4 < 0x80000000) goto LAB_009f7e3c;
LAB_009f7e0c:
    puVar14 = (undefined4 *)(param_1 + 0x54);
LAB_009f7e40:
    iVar7 = 3;
    if (uVar12 != 0) {
      iVar7 = 2;
    }
  }
  uVar9 = puVar8[2];
  uVar12 = puVar14[2];
  uVar4 = uVar9;
  if (uVar12 < uVar9) {
    uVar4 = uVar12;
  }
  uVar4 = FUN_016dd50a(puVar14[1],puVar8[1],uVar4);
  if (uVar4 == 0) {
    uVar4 = uVar12 - uVar9;
  }
  local_68 = 0;
  puVar18 = (undefined4 *)(param_1 + iVar7 * 0x1c);
  if (0 < (int)uVar4 == (int)uVar4 < 0) {
    if (*(byte *)(puVar14 + 3) == *(byte *)(puVar8 + 3)) {
      local_60 = puVar14[6];
      local_46 = false;
      local_64 = (byte *)puVar14[5];
      uVar4 = 0;
      local_40 = puVar8[6];
      if (local_60 != 0) {
        local_46 = *local_64 == 0x2f;
      }
      local_44 = (byte *)puVar8[5];
      bVar19 = local_40 != 0;
      if (bVar19) {
        uVar4 = (uint)*local_44;
      }
      local_5c = 6;
      if (bVar19) {
        uVar4 = uVar4 - 0x2f;
      }
      local_48 = 0x201;
      if (bVar19) {
        uVar4 = LZCOUNT(uVar4);
      }
      local_3c = 6;
      if (bVar19) {
        uVar4 = uVar4 >> 5;
      }
      local_28 = 0x201;
      local_26 = (undefined1)uVar4;
      cVar3 = FUN_015f776c(&local_64,&local_44);
      local_68 = (uint)(cVar3 < '\0');
    }
    else {
      local_68 = (uint)(*(byte *)(puVar14 + 3) < *(byte *)(puVar8 + 3));
    }
  }
  else if ((char)((0 < (int)uVar4) - ((int)uVar4 < 0)) != '\x02') {
    local_68 = uVar4 >> 0x1f;
  }
  uVar12 = puVar16[2];
  uVar9 = puVar18[2];
  uVar4 = uVar12;
  if (uVar9 < uVar12) {
    uVar4 = uVar9;
  }
  uVar4 = FUN_016dd50a(puVar18[1],puVar16[1],uVar4);
  if (uVar4 == 0) {
    uVar4 = uVar9 - uVar12;
  }
  uVar9 = 0;
  if ((char)((0 < (int)uVar4) - ((int)uVar4 < 0)) == '\x02') {
LAB_009f7fb8:
    puVar15 = puVar14;
    puVar17 = puVar16;
    if (local_68 != 0) {
      puVar15 = puVar16;
      puVar17 = puVar8;
    }
  }
  else {
    puVar15 = puVar18;
    puVar17 = puVar14;
    if (0 < (int)uVar4 == (int)uVar4 < 0) {
      bVar1 = *(byte *)(puVar16 + 3);
      bVar2 = *(byte *)(puVar18 + 3);
      if (bVar2 != bVar1) {
        uVar9 = (uint)(bVar2 < bVar1);
        if (bVar2 >= bVar1) goto LAB_009f80a4;
        goto LAB_009f8080;
      }
      local_60 = puVar18[6];
      local_46 = false;
      local_64 = (byte *)puVar18[5];
      uVar4 = 0;
      local_40 = puVar16[6];
      if (local_60 != 0) {
        local_46 = *local_64 == 0x2f;
      }
      local_44 = (byte *)puVar16[5];
      bVar19 = local_40 != 0;
      if (bVar19) {
        uVar4 = (uint)*local_44;
      }
      local_5c = 6;
      if (bVar19) {
        uVar4 = uVar4 - 0x2f;
      }
      local_48 = 0x201;
      if (bVar19) {
        uVar4 = LZCOUNT(uVar4);
      }
      local_3c = 6;
      if (bVar19) {
        uVar4 = uVar4 >> 5;
      }
      local_28 = 0x201;
      local_26 = (undefined1)uVar4;
      cVar3 = FUN_015f776c(&local_64,&local_44);
      uVar9 = (uint)(cVar3 < '\0');
      if (-1 < cVar3) goto LAB_009f7fb8;
      if (local_68 != 0) {
        puVar17 = puVar8;
      }
    }
    else {
      uVar9 = uVar4 >> 0x1f;
      if (uVar4 < 0x80000000) {
LAB_009f80a4:
        puVar15 = puVar14;
        puVar17 = puVar16;
        if (local_68 != 0) {
          puVar15 = puVar16;
        }
      }
      else {
LAB_009f8080:
        puVar15 = puVar14;
        if (local_68 != 0) {
          puVar15 = puVar16;
        }
      }
      if (local_68 != 0) {
        puVar17 = puVar8;
      }
      if (uVar9 != 0) {
        puVar15 = puVar18;
      }
    }
  }
  uVar13 = puVar17[2];
  uVar12 = puVar15[2];
  uVar4 = uVar13;
  if (uVar12 < uVar13) {
    uVar4 = uVar12;
  }
  uVar4 = FUN_016dd50a(puVar15[1],puVar17[1],uVar4);
  if (uVar4 == 0) {
    uVar4 = uVar12 - uVar13;
  }
  puVar5 = puVar15;
  if (0 < (int)uVar4 == (int)uVar4 < 0) {
    bVar1 = *(byte *)(puVar17 + 3);
    bVar2 = *(byte *)(puVar15 + 3);
    if (bVar2 != bVar1) {
      if (local_68 != 0) {
        puVar8 = puVar14;
      }
      if (uVar9 != 0) {
        puVar18 = puVar16;
      }
      uVar9 = (uint)(bVar2 < bVar1);
      if (bVar2 < bVar1) goto LAB_009f8214;
      goto LAB_009f8260;
    }
    local_64 = (byte *)puVar15[5];
    local_60 = puVar15[6];
    local_46 = false;
    local_40 = puVar17[6];
    local_26 = 0;
    if (local_60 != 0) {
      local_46 = *local_64 == 0x2f;
    }
    local_44 = (byte *)puVar17[5];
    bVar19 = local_40 != 0;
    uVar4 = local_60;
    if (bVar19) {
      uVar4 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar19) {
      uVar4 = LZCOUNT(uVar4);
    }
    local_3c = 6;
    local_48 = 0x201;
    if (bVar19) {
      local_26 = (undefined1)(uVar4 >> 5);
    }
    if (local_68 != 0) {
      puVar8 = puVar14;
    }
    local_28 = 0x201;
    if (uVar9 != 0) {
      puVar18 = puVar16;
    }
    cVar3 = FUN_015f776c(&local_64,&local_44);
    if (-1 < cVar3) goto LAB_009f81e8;
LAB_009f8270:
    puVar15 = puVar17;
  }
  else {
    if ((char)((0 < (int)uVar4) - ((int)uVar4 < 0)) == '\x02') {
      if (local_68 != 0) {
        puVar8 = puVar14;
      }
      if (uVar9 != 0) {
        puVar18 = puVar16;
      }
    }
    else {
      if (local_68 != 0) {
        puVar8 = puVar14;
      }
      if (uVar9 != 0) {
        puVar18 = puVar16;
      }
      uVar9 = uVar4 >> 0x1f;
      if (0x7fffffff < uVar4) {
LAB_009f8214:
        if (uVar9 != 0) {
          puVar15 = puVar17;
        }
        goto LAB_009f8274;
      }
LAB_009f8260:
      puVar5 = puVar17;
      if (uVar9 != 0) goto LAB_009f8270;
    }
LAB_009f81e8:
    puVar5 = puVar17;
  }
LAB_009f8274:
  uVar6 = puVar8[1];
  uVar10 = puVar8[2];
  *param_2 = *puVar8;
  param_2[1] = uVar6;
  param_2[2] = uVar10;
  uVar6 = puVar8[4];
  uVar10 = puVar8[5];
  uVar11 = puVar8[6];
  param_2[3] = puVar8[3];
  param_2[4] = uVar6;
  param_2[5] = uVar10;
  param_2[6] = uVar11;
  uVar6 = puVar5[1];
  uVar10 = puVar5[2];
  param_2[7] = *puVar5;
  param_2[8] = uVar6;
  param_2[9] = uVar10;
  uVar6 = puVar5[4];
  uVar10 = puVar5[5];
  uVar11 = puVar5[6];
  param_2[10] = puVar5[3];
  param_2[0xb] = uVar6;
  param_2[0xc] = uVar10;
  param_2[0xd] = uVar11;
  uVar6 = puVar15[1];
  uVar10 = puVar15[2];
  param_2[0xe] = *puVar15;
  param_2[0xf] = uVar6;
  param_2[0x10] = uVar10;
  uVar6 = puVar15[4];
  uVar10 = puVar15[5];
  uVar11 = puVar15[6];
  param_2[0x11] = puVar15[3];
  param_2[0x12] = uVar6;
  param_2[0x13] = uVar10;
  param_2[0x14] = uVar11;
  uVar6 = puVar18[1];
  uVar10 = puVar18[2];
  param_2[0x15] = *puVar18;
  param_2[0x16] = uVar6;
  param_2[0x17] = uVar10;
  uVar6 = puVar18[4];
  uVar10 = puVar18[5];
  uVar11 = puVar18[6];
  param_2[0x18] = puVar18[3];
  param_2[0x19] = uVar6;
  param_2[0x1a] = uVar10;
  param_2[0x1b] = uVar11;
  return;
}

