// FUN_015cdbdc @ 015cdbdc size=488 calls_out=2 calls_in=2
// strings: 

void FUN_015cdbdc(int param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  puVar11 = *(uint **)(param_1 + 0xe0);
  iVar8 = *(int *)(param_1 + 0xec);
  puVar13 = puVar11 + 1;
  uVar15 = ~*puVar11 & 0x80808080;
LAB_015cdc0c:
  do {
    do {
      if (iVar8 == 0) {
        return;
      }
      puVar6 = puVar13;
      if (uVar15 == 0) {
        do {
          puVar13 = puVar6 + 1;
          uVar15 = *puVar6;
          puVar11 = puVar11 + -0xb0;
          puVar6 = puVar13;
        } while ((uVar15 & 0x80808080) == 0x80808080);
        uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
      }
      iVar8 = iVar8 + -1;
      sVar1 = (short)((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                    (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3);
      uVar15 = uVar15 - 1 & uVar15;
    } while (*(char *)((int)puVar11 + -sVar1 * 0xb0 + -10) == '\0');
    uVar2 = FUN_015f77ac(puVar11[-sVar1 * 0x2c + -0x24],puVar11[-sVar1 * 0x2c + -0x23],
                         puVar11[-sVar1 * 0x2c + -0x22],puVar11[-sVar1 * 0x2c + -0x21],param_2);
    uVar9 = uVar2 >> 0x19;
    uVar12 = puVar11[-sVar1 * 0x2c + -0x28];
    uVar10 = puVar11[-sVar1 * 0x2c + -0x27];
    iVar16 = 0;
    while( true ) {
      uVar2 = uVar10 & uVar2;
      uVar3 = *(uint *)(uVar12 + uVar2);
      uVar4 = uVar3 ^ uVar9 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar4 != 0) {
        uVar14 = uVar2 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                        (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar10;
        iVar5 = FUN_015fb920(param_2,(uVar12 - 0x11) + uVar14 * -0x11);
        uVar4 = uVar4 - 1 & uVar4;
        if (iVar5 != 0) {
          puVar6 = (uint *)(uVar12 + (uVar14 - 4 & uVar10));
          uVar9 = *puVar6;
          uVar2 = *(uint *)(uVar12 + uVar14) & 0x80808080 & *(uint *)(uVar12 + uVar14) << 1;
          uVar7 = 0x80;
          uVar10 = puVar11[-sVar1 * 0x2c + -0x25];
          if (((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                             (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) +
              ((uint)LZCOUNT(uVar9 & 0x80808080 & uVar9 << 1) >> 3) < 4) {
            puVar11[-sVar1 * 0x2c + -0x26] = puVar11[-sVar1 * 0x2c + -0x26] + 1;
            uVar7 = 0xff;
          }
          *(undefined1 *)(uVar12 + uVar14) = uVar7;
          *(undefined1 *)(puVar6 + 1) = uVar7;
          puVar11[-sVar1 * 0x2c + -0x25] = uVar10 - 1;
          goto LAB_015cdc0c;
        }
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      iVar16 = iVar16 + 4;
      uVar2 = uVar2 + iVar16;
    }
  } while( true );
}

