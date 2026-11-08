// FUN_015f17d0 @ 015f17d0 size=752 calls_out=2 calls_in=2
// strings: 

void FUN_015f17d0(int param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  int local_38;
  
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  uVar9 = *(undefined4 *)(param_1 + 0x34);
  uVar16 = *(undefined4 *)(param_1 + 0x38);
  uVar11 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x2c) == 0) {
    puVar12 = *(uint **)(param_1 + 0x20);
    uVar15 = *(uint *)(param_1 + 0x24);
  }
  else {
    uVar7 = FUN_015f7180(uVar6,uVar9,uVar16,uVar11,param_2);
    uVar8 = uVar7 >> 0x19;
    puVar12 = *(uint **)(param_1 + 0x20);
    uVar15 = *(uint *)(param_1 + 0x24);
    local_38 = 0;
    while( true ) {
      uVar7 = uVar15 & uVar7;
      uVar13 = *(uint *)((int)puVar12 + uVar7);
      uVar10 = uVar13 ^ uVar8 * 0x1010101;
      uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
      while (uVar10 != 0) {
        uVar17 = uVar10 >> 8;
        uVar1 = uVar10 >> 0x10;
        uVar2 = uVar10 >> 0x18;
        uVar3 = uVar10 << 0x18;
        uVar10 = uVar10 - 1 & uVar10;
        uVar17 = uVar7 + ((uint)LZCOUNT(uVar3 | (uVar17 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                        uVar2) >> 3) & uVar15;
        if (param_2 == puVar12[uVar17 * -2 + -2]) {
          *(undefined1 *)(puVar12 + uVar17 * -2 + -1) = param_3;
          return;
        }
      }
      if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
      local_38 = local_38 + 4;
      uVar7 = uVar7 + local_38;
    }
  }
  uVar7 = FUN_015f7180(uVar6,uVar9,uVar16,uVar11,param_2);
  uVar10 = uVar15 & uVar7;
  iVar18 = 0;
  uVar8 = uVar10;
  while( true ) {
    uVar17 = *(uint *)((int)puVar12 + uVar8);
    uVar13 = uVar17 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff;
    while (uVar13 != 0) {
      uVar1 = uVar13 >> 8;
      uVar2 = uVar13 >> 0x10;
      uVar3 = uVar13 >> 0x18;
      uVar4 = uVar13 << 0x18;
      uVar13 = uVar13 - 1 & uVar13;
      if (puVar12[(uVar8 + ((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                          uVar3) >> 3) & uVar15) * -2 + -2] == param_2) {
        return;
      }
    }
    if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
    iVar18 = iVar18 + 4;
    uVar8 = uVar8 + iVar18 & uVar15;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_015da098(param_1 + 0x20,param_1 + 0x30);
    uVar15 = *(uint *)(param_1 + 0x24);
    puVar12 = *(uint **)(param_1 + 0x20);
    uVar10 = uVar15 & uVar7;
  }
  uVar8 = *(uint *)((int)puVar12 + uVar10) & 0x80808080;
  if (uVar8 == 0) {
    iVar18 = 4;
    do {
      uVar10 = uVar10 + iVar18;
      iVar18 = iVar18 + 4;
      uVar10 = uVar10 & uVar15;
      uVar8 = *(uint *)((int)puVar12 + uVar10) & 0x80808080;
    } while (uVar8 == 0);
  }
  uVar8 = uVar10 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                  (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar15;
  uVar10 = (uint)*(char *)((int)puVar12 + uVar8);
  if (-1 < (int)uVar10) {
    uVar8 = *puVar12 & 0x80808080;
    uVar8 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18);
    uVar10 = (uint)*(byte *)((int)puVar12 + (uVar8 >> 3));
    uVar8 = uVar8 >> 3;
  }
  iVar18 = *(int *)(param_1 + 0x28);
  iVar14 = *(int *)(param_1 + 0x2c);
  bVar5 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)puVar12 + uVar8) = bVar5;
  *(uint *)(param_1 + 0x28) = iVar18 - (uVar10 & 1);
  *(int *)(param_1 + 0x2c) = iVar14 + 1;
  *(byte *)((int)puVar12 + (uVar8 - 4 & uVar15) + 4) = bVar5;
  *(undefined1 *)(puVar12 + uVar8 * -2 + -1) = param_3;
  puVar12[uVar8 * -2 + -2] = param_2;
  return;
}

