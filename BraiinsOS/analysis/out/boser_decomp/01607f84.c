// FUN_01607f84 @ 01607f84 size=1120 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01607f84(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ushort auStack_88 [16];
  uint auStack_68 [17];
  
  uVar6 = (uint)*(byte *)(param_1 + 0x28eb);
LAB_01607fe0:
  uVar18 = uVar6 & 0xff;
  if (uVar18 == 0) {
    uVar7 = 0x120;
    pbVar16 = (byte *)(param_1 + 0x2780);
LAB_01608058:
    iVar11 = 0;
    FUN_01bed93e(auStack_88,0,0x20);
    FUN_01bed93e(auStack_68,0,0x44);
    iVar17 = (short)uVar18 * 0xc80 + param_1 + 0x200;
    do {
      puVar4 = (undefined2 *)(iVar17 + iVar11);
      iVar11 = iVar11 + 2;
      *puVar4 = 0x31e;
    } while (iVar11 != 0x800);
    FUN_01bed93e(iVar17 + 0x800,0,0x480);
  }
  else {
    if (uVar18 != 2) {
      if (uVar18 == 1) {
        uVar7 = 0x20;
        pbVar16 = (byte *)(param_1 + 0x28a0);
        goto LAB_01608058;
      }
      uVar5 = 3;
LAB_016083dc:
      return CONCAT44(uVar6,uVar5);
    }
    iVar17 = 0;
    FUN_01bed93e(auStack_88,0,0x20);
    FUN_01bed93e(auStack_68,0,0x44);
    do {
      puVar4 = (undefined2 *)(param_1 + 0x1b00 + iVar17);
      iVar17 = iVar17 + 2;
      *puVar4 = 0x31e;
    } while (iVar17 != 0x800);
    uVar7 = 0x13;
    pbVar16 = (byte *)(param_1 + 0x28ed);
    iVar17 = param_1 + 0x1b00;
  }
  uVar5 = 3;
  uVar19 = (uint)*(ushort *)(param_1 + 0x28e4 + uVar18 * 2);
  uVar6 = 0x1c;
  uVar9 = uVar19;
  pbVar3 = pbVar16;
  if (uVar19 <= uVar7) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (0xf < *pbVar3) goto LAB_016083dc;
      auStack_88[*pbVar3] = auStack_88[*pbVar3] + 1;
      pbVar3 = pbVar3 + 1;
    }
    uVar12 = 1;
    iVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    do {
      if (uVar12 == 0) {
        if (0xf < uVar7) goto LAB_016081a0;
      }
      else {
        uVar14 = 0x10 - uVar7;
        if (uVar12 <= 0x10 - uVar7) {
          uVar14 = uVar12;
        }
        uVar10 = uVar14 + uVar7;
        if (uVar14 + uVar7 < uVar7) {
          uVar10 = uVar7;
        }
        uVar7 = uVar10;
        if (0xf < uVar7) goto LAB_016081a0;
        iVar13 = uVar14 - uVar12;
        while (iVar13 != 0) {
          uVar7 = uVar7 + 1;
          iVar13 = iVar13 + 1;
          if (uVar7 == 0x10) goto LAB_016081a0;
        }
        uVar12 = 0;
      }
      uVar9 = auStack_88[uVar7] + uVar9;
      iVar11 = (iVar11 + (uint)auStack_88[uVar7]) * 2;
      *(int *)(((uint)auStack_68 | 4) + uVar7 * 4) = iVar11;
      uVar7 = uVar7 + 1;
    } while( true );
  }
  goto LAB_016083dc;
LAB_016081a0:
  if ((iVar11 != 0x10000) && ((uVar5 = 1, uVar18 == 2 || (1 < (uVar9 & 0xffff)))))
  goto LAB_016083dc;
  uVar18 = 0;
  uVar6 = 0xffff;
LAB_016081dc:
  uVar7 = uVar18;
  if (uVar18 < uVar19) {
    do {
      uVar9 = pbVar16[uVar7] & 0xf;
      uVar18 = uVar7 + 1;
      if ((pbVar16[uVar7] & 0xf) != 0) {
        uVar12 = auStack_68[uVar9];
        auStack_68[uVar9] = uVar12 + 1;
        uVar12 = uVar12 & 0xffffffffU >> (0x20 - uVar9 & 0xff);
        if (uVar12 < 0x200) {
          uVar12 = (uint)*(ushort *)(&DAT_004baeb0 + uVar12 * 2);
        }
        else {
          bVar1 = (byte)uVar12;
          bVar2 = (byte)(uVar12 >> 8);
          uVar12 = ((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x18
                   | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                      1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                   bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10
                   ) >> 0x10;
        }
        uVar12 = uVar12 >> (0x10 - uVar9 & 0xff);
        if (10 < uVar9) goto LAB_01608274;
        if (uVar12 >> 10 == 0) {
          puVar8 = (ushort *)(iVar17 + uVar12 * 2);
          do {
            uVar12 = uVar12 + (1 << uVar9);
            *puVar8 = (ushort)uVar7 | (ushort)(uVar9 << 9);
            puVar8 = puVar8 + (1 << uVar9);
          } while (uVar12 < 0x400);
        }
      }
      uVar7 = uVar18;
      if (uVar18 == uVar19) break;
    } while( true );
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x28eb);
  if (uVar6 == 0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar5 = 1;
    uVar6 = 0xc;
    goto LAB_016083dc;
  }
  if (uVar6 == 2) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar5 = 1;
    uVar6 = 10;
    goto LAB_016083dc;
  }
  uVar6 = uVar6 - 1;
  *(char *)(param_1 + 0x28eb) = (char)uVar6;
  goto LAB_01607fe0;
LAB_01608274:
  puVar8 = (ushort *)(iVar17 + (uVar12 & 0x3ff) * 2);
  uVar14 = (uint)*puVar8;
  if (uVar14 == 0x31e) {
    *puVar8 = (ushort)uVar6;
    uVar10 = uVar6 - 2;
    uVar14 = uVar6;
  }
  else {
    uVar10 = uVar6;
  }
  uVar12 = uVar12 >> 9;
  if (uVar9 != 0xb) {
    uVar15 = 0xb;
    uVar6 = uVar10;
    do {
      iVar11 = (int)(uVar12 << 0x1e) >> 0x1f;
      uVar12 = (uVar12 & 0xffff) >> 1;
      if (8 < (~(uVar14 + iVar11) & 0xffff) >> 6) goto LAB_0160839c;
      puVar8 = (ushort *)(iVar17 + 0x800 + (~uVar14 - iVar11 & 0xffff) * 2);
      uVar14 = (uint)*puVar8;
      if (uVar14 == 0) {
        uVar10 = uVar6 - 2;
        *puVar8 = (ushort)uVar6;
        uVar14 = uVar6;
      }
      else {
        uVar10 = uVar6;
      }
      uVar15 = uVar15 + 1;
      uVar6 = uVar10;
    } while (uVar15 < uVar9);
  }
  iVar11 = (int)(uVar12 << 0x1e) >> 0x1f;
  if (8 < (~(uVar14 + iVar11) & 0xffff) >> 6) {
LAB_0160839c:
    uVar6 = 10;
    uVar5 = 3;
    goto LAB_016083dc;
  }
  *(ushort *)(iVar17 + 0x800 + (~uVar14 - iVar11 & 0xffff) * 2) = (ushort)uVar7;
  uVar6 = uVar10;
  goto LAB_016081dc;
}

