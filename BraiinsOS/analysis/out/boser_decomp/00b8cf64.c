// FUN_00b8cf64 @ 00b8cf64 size=1176 calls_out=1 calls_in=1
// strings: 

void FUN_00b8cf64(uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte *local_64;
  uint local_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  byte *local_44;
  uint local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar5 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[7];
  uVar7 = param_1[6];
  if (uVar7 == uVar5 && uVar2 == uVar4) {
    local_64 = (byte *)param_1[9];
    local_60 = param_1[10];
    uVar2 = 0;
    local_44 = (byte *)param_1[3];
    local_40 = param_1[4];
    uVar4 = 0;
    if (local_60 != 0) {
      uVar2 = *local_64 - 0x2f;
    }
    local_48 = 0x201;
    if (local_60 != 0) {
      uVar2 = (uint)(uVar2 == 0);
    }
    bVar13 = local_40 != 0;
    local_46 = (undefined1)uVar2;
    if (bVar13) {
      uVar4 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar13) {
      uVar4 = LZCOUNT(uVar4);
    }
    local_3c = 6;
    local_28 = 0x201;
    if (bVar13) {
      uVar4 = uVar4 >> 5;
    }
    local_26 = (undefined1)uVar4;
    cVar1 = FUN_019af7b8(&local_64,&local_44);
    uVar10 = (uint)(cVar1 < '\0');
  }
  else {
    uVar10 = 0;
    if ((int)(uVar2 - (uVar4 + (uVar7 < uVar5))) < 0 !=
        (SBORROW4(uVar2,uVar4) != SBORROW4(uVar2 - uVar4,(uint)(uVar7 < uVar5)))) {
      uVar10 = 1;
    }
  }
  uVar4 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar5 = param_1[0x13];
  uVar7 = param_1[0x12];
  if (uVar7 == uVar4 && uVar5 == uVar2) {
    local_64 = (byte *)param_1[0x15];
    local_60 = param_1[0x16];
    bVar13 = local_60 != 0;
    uVar2 = 0;
    local_44 = (byte *)param_1[0xf];
    uVar4 = 0;
    if (bVar13) {
      uVar2 = (uint)*local_64;
    }
    local_40 = param_1[0x10];
    if (bVar13) {
      uVar2 = LZCOUNT(uVar2 - 0x2f);
    }
    local_48 = 0x201;
    if (bVar13) {
      uVar2 = uVar2 >> 5;
    }
    bVar13 = local_40 != 0;
    local_46 = (undefined1)uVar2;
    if (bVar13) {
      uVar4 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar13) {
      uVar4 = LZCOUNT(uVar4);
    }
    local_3c = 6;
    if (bVar13) {
      uVar4 = uVar4 >> 5;
    }
    local_26 = (undefined1)uVar4;
    local_28 = 0x201;
    cVar1 = FUN_019af7b8(&local_64,&local_44);
    bVar13 = cVar1 < '\0';
  }
  else {
    bVar13 = false;
    if ((int)(uVar5 - (uVar2 + (uVar7 < uVar4))) < 0 !=
        (SBORROW4(uVar5,uVar2) != SBORROW4(uVar5 - uVar2,(uint)(uVar7 < uVar4)))) {
      bVar13 = true;
    }
  }
  iVar6 = 0x30;
  if (bVar13) {
    iVar6 = 0x48;
  }
  puVar8 = (uint *)((int)param_1 + iVar6);
  uVar2 = *puVar8;
  puVar3 = param_1 + (uVar10 | uVar10 << 1) * 2;
  uVar7 = *puVar3;
  uVar4 = puVar8[1];
  uVar5 = puVar3[1];
  iVar6 = 0x48;
  if (bVar13) {
    iVar6 = 0x30;
  }
  puVar9 = (uint *)((int)param_1 + iVar6);
  param_1 = param_1 + (uVar10 ^ 1 | (uVar10 ^ 1) << 1) * 2;
  if (uVar2 == uVar7 && uVar4 == uVar5) {
    local_64 = (byte *)puVar8[3];
    local_60 = puVar8[4];
    bVar13 = local_60 != 0;
    uVar2 = 0;
    local_44 = (byte *)puVar3[3];
    uVar4 = 0;
    if (bVar13) {
      uVar2 = (uint)*local_64;
    }
    local_40 = puVar3[4];
    if (bVar13) {
      uVar2 = LZCOUNT(uVar2 - 0x2f);
    }
    local_48 = 0x201;
    if (bVar13) {
      uVar2 = uVar2 >> 5;
    }
    bVar13 = local_40 != 0;
    local_46 = (undefined1)uVar2;
    if (bVar13) {
      uVar4 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar13) {
      uVar4 = LZCOUNT(uVar4);
    }
    local_3c = 6;
    if (bVar13) {
      uVar4 = uVar4 >> 5;
    }
    local_26 = (undefined1)uVar4;
    local_28 = 0x201;
    cVar1 = FUN_019af7b8(&local_64,&local_44);
    bVar13 = cVar1 < '\0';
  }
  else {
    bVar13 = false;
    if ((int)(uVar4 - (uVar5 + (uVar2 < uVar7))) < 0 !=
        (SBORROW4(uVar4,uVar5) != SBORROW4(uVar4 - uVar5,(uint)(uVar2 < uVar7)))) {
      bVar13 = true;
    }
  }
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *puVar9;
  uVar7 = puVar9[1];
  if (uVar5 == uVar2 && uVar7 == uVar4) {
    local_64 = (byte *)puVar9[3];
    local_60 = puVar9[4];
    bVar14 = local_60 != 0;
    uVar2 = 0;
    local_44 = (byte *)param_1[3];
    uVar4 = 0;
    if (bVar14) {
      uVar2 = (uint)*local_64;
    }
    local_40 = param_1[4];
    if (bVar14) {
      uVar2 = LZCOUNT(uVar2 - 0x2f);
    }
    local_48 = 0x201;
    if (bVar14) {
      uVar2 = uVar2 >> 5;
    }
    bVar14 = local_40 != 0;
    local_46 = (undefined1)uVar2;
    if (bVar14) {
      uVar4 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar14) {
      uVar4 = LZCOUNT(uVar4);
    }
    local_3c = 6;
    if (bVar14) {
      uVar4 = uVar4 >> 5;
    }
    local_26 = (undefined1)uVar4;
    local_28 = 0x201;
    cVar1 = FUN_019af7b8(&local_64,&local_44);
    bVar14 = cVar1 < '\0';
  }
  else {
    bVar14 = false;
    if ((int)(uVar7 - (uVar4 + (uVar5 < uVar2))) < 0 !=
        (SBORROW4(uVar7,uVar4) != SBORROW4(uVar7 - uVar4,(uint)(uVar5 < uVar2)))) {
      bVar14 = true;
    }
  }
  puVar12 = param_1;
  if (bVar14) {
    puVar12 = puVar8;
  }
  puVar11 = puVar8;
  if (bVar13) {
    puVar11 = param_1;
    puVar12 = puVar3;
  }
  if (bVar14) {
    puVar11 = puVar9;
  }
  uVar5 = *puVar12;
  uVar4 = *puVar11;
  uVar7 = puVar11[1];
  uVar2 = puVar12[1];
  if (uVar4 == uVar5 && uVar7 == uVar2) {
    local_64 = (byte *)puVar11[3];
    local_60 = puVar11[4];
    bVar15 = local_60 != 0;
    uVar2 = 0;
    uVar4 = 0;
    if (bVar15) {
      uVar2 = (uint)*local_64;
    }
    local_44 = (byte *)puVar12[3];
    local_40 = puVar12[4];
    if (bVar15) {
      uVar2 = uVar2 - 0x2f;
    }
    local_5c = 6;
    if (bVar15) {
      uVar2 = LZCOUNT(uVar2);
    }
    local_3c = 6;
    if (bVar15) {
      uVar2 = uVar2 >> 5;
    }
    bVar15 = local_40 != 0;
    local_46 = (undefined1)uVar2;
    if (bVar15) {
      uVar4 = *local_44 - 0x2f;
    }
    local_48 = 0x201;
    if (bVar15) {
      uVar4 = LZCOUNT(uVar4);
    }
    local_28 = 0x201;
    if (bVar15) {
      uVar4 = uVar4 >> 5;
    }
    local_26 = (undefined1)uVar4;
    cVar1 = FUN_019af7b8(&local_64,&local_44);
    bVar15 = cVar1 < '\0';
  }
  else {
    bVar15 = false;
    if ((int)(uVar7 - (uVar2 + (uVar4 < uVar5))) < 0 !=
        (SBORROW4(uVar7,uVar2) != SBORROW4(uVar7 - uVar2,(uint)(uVar4 < uVar5)))) {
      bVar15 = true;
    }
  }
  if (bVar13) {
    puVar3 = puVar8;
  }
  uVar2 = puVar3[1];
  uVar4 = puVar3[2];
  uVar5 = puVar3[3];
  uVar7 = puVar3[4];
  uVar10 = puVar3[5];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  param_2[4] = uVar7;
  param_2[5] = uVar10;
  puVar3 = puVar12;
  if (bVar15) {
    puVar3 = puVar11;
  }
  uVar2 = puVar3[1];
  uVar4 = puVar3[2];
  uVar5 = puVar3[3];
  uVar7 = puVar3[4];
  uVar10 = puVar3[5];
  if (bVar15) {
    puVar11 = puVar12;
  }
  param_2[6] = *puVar3;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar5;
  param_2[10] = uVar7;
  param_2[0xb] = uVar10;
  uVar2 = puVar11[1];
  uVar4 = puVar11[2];
  uVar5 = puVar11[3];
  uVar7 = puVar11[4];
  uVar10 = puVar11[5];
  param_2[0xc] = *puVar11;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar4;
  param_2[0xf] = uVar5;
  param_2[0x10] = uVar7;
  param_2[0x11] = uVar10;
  if (bVar14) {
    puVar9 = param_1;
  }
  uVar2 = puVar9[1];
  uVar4 = puVar9[2];
  uVar5 = puVar9[3];
  uVar7 = puVar9[4];
  uVar10 = puVar9[5];
  param_2[0x12] = *puVar9;
  param_2[0x13] = uVar2;
  param_2[0x14] = uVar4;
  param_2[0x15] = uVar5;
  param_2[0x16] = uVar7;
  param_2[0x17] = uVar10;
  return;
}

