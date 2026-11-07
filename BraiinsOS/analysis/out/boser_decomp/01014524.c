// FUN_01014524 @ 01014524 size=560 calls_out=2 calls_in=2
// strings: 

void FUN_01014524(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined4 *local_6c;
  undefined4 *local_68;
  byte *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  byte local_46;
  byte *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar11 = param_2 >> 1;
  local_68 = param_1 + param_2 * 3 + -3;
  puVar10 = param_1 + uVar11 * 3;
  puVar9 = puVar10 + -3;
  puVar5 = param_3 + param_2 * 3 + -3;
  puVar4 = param_3;
  do {
    local_6c = puVar4;
    local_64 = (byte *)puVar10[1];
    local_60 = puVar10[2];
    local_46 = 0;
    uVar3 = 0;
    if (local_60 != 0) {
      local_46 = *local_64;
    }
    local_44 = (byte *)param_1[1];
    local_40 = param_1[2];
    if (local_60 != 0) {
      local_46 = local_46 == 0x2f;
    }
    bVar12 = local_40 != 0;
    if (bVar12) {
      uVar3 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar12) {
      uVar3 = LZCOUNT(uVar3);
    }
    local_48 = 0x201;
    if (bVar12) {
      uVar3 = uVar3 >> 5;
    }
    local_26 = (undefined1)uVar3;
    local_3c = 6;
    local_28 = 0x201;
    bVar1 = FUN_019af7b8(&local_64,&local_44);
    puVar4 = puVar10;
    if ((uint)(int)(char)bVar1 < 0x80000000) {
      puVar4 = param_1;
    }
    uVar6 = puVar4[1];
    uVar7 = puVar4[2];
    *local_6c = *puVar4;
    local_6c[1] = uVar6;
    local_6c[2] = uVar7;
    uVar8 = (uint)(bVar1 >> 7);
    local_64 = (byte *)local_68[1];
    local_60 = local_68[2];
    bVar12 = local_60 != 0;
    uVar3 = 0;
    if (bVar12) {
      puVar4 = (undefined4 *)(uint)*local_64;
    }
    local_48 = 0x201;
    if (bVar12) {
      puVar4 = (undefined4 *)((int)puVar4 - 0x2f);
    }
    local_44 = (byte *)puVar9[1];
    local_40 = puVar9[2];
    local_46 = bVar12 && puVar4 == (undefined4 *)0x0;
    bVar12 = local_40 != 0;
    if (bVar12) {
      uVar3 = (uint)*local_44;
    }
    if (bVar12) {
      uVar3 = uVar3 - 0x2f;
    }
    puVar10 = puVar10 + (uVar8 | uVar8 << 1);
    if (bVar12) {
      uVar3 = LZCOUNT(uVar3);
    }
    if (bVar12) {
      uVar3 = uVar3 >> 5;
    }
    local_5c = 6;
    local_26 = (undefined1)uVar3;
    local_3c = 6;
    local_28 = 0x201;
    param_1 = param_1 + (uVar8 ^ 1 | (uVar8 ^ 1) << 1);
    cVar2 = FUN_019af7b8(&local_64,&local_44);
    puVar4 = puVar9;
    if ((uint)(int)cVar2 < 0x80000000) {
      puVar4 = local_68;
    }
    uVar11 = uVar11 - 1;
    uVar6 = puVar4[1];
    uVar7 = puVar4[2];
    uVar3 = (int)cVar2 >> 7;
    puVar9 = puVar9 + uVar3 * 3;
    *puVar5 = *puVar4;
    puVar5[1] = uVar6;
    puVar5[2] = uVar7;
    local_68 = local_68 + ~uVar3 * 3;
    puVar5 = puVar5 + -3;
    puVar4 = local_6c + 3;
  } while (uVar11 != 0);
  puVar9 = puVar9 + 3;
  if ((param_2 & 1) != 0) {
    bVar12 = param_1 < puVar9;
    puVar5 = puVar10;
    if (bVar12) {
      puVar5 = param_1;
    }
    uVar6 = puVar5[1];
    uVar7 = puVar5[2];
    local_6c[3] = *puVar5;
    local_6c[4] = uVar6;
    local_6c[5] = uVar7;
    param_1 = param_1 + ((uint)bVar12 | (uint)bVar12 << 1);
    puVar10 = puVar10 + ((uint)!bVar12 | (uint)!bVar12 << 1);
  }
  bVar12 = param_1 == puVar9;
  if (bVar12) {
    puVar9 = local_68 + 3;
  }
  if (!bVar12 || puVar10 != puVar9) {
    FUN_01307140();
  }
  return;
}

