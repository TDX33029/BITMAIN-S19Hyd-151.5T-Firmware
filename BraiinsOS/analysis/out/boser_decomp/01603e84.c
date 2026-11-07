// FUN_01603e84 @ 01603e84 size=1104 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01603e84(int param_1,int param_2)

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
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  ushort auStack_88 [16];
  uint auStack_68 [17];
  
  uVar6 = (uint)*(byte *)(param_1 + 0x28eb);
LAB_01603ee8:
  uVar17 = uVar6 & 0xff;
  if (uVar17 == 0) {
    uVar7 = 0x120;
    pbVar19 = (byte *)(param_1 + 0x2780);
LAB_01603f64:
    iVar12 = 0;
    FUN_01bed93e(auStack_88,0,0x20);
    FUN_01bed93e(auStack_68,0,0x44);
    iVar16 = (short)uVar17 * 0xc80 + param_1 + 0x200;
    do {
      puVar4 = (undefined2 *)(iVar16 + iVar12);
      iVar12 = iVar12 + 2;
      *puVar4 = 0x31e;
    } while (iVar12 != 0x800);
    FUN_01bed93e(iVar16 + 0x800,0,0x480);
  }
  else {
    if (uVar17 != 2) {
      if (uVar17 == 1) {
        uVar7 = 0x20;
        pbVar19 = (byte *)(param_1 + 0x28a0);
        goto LAB_01603f64;
      }
      uVar5 = 3;
LAB_016042cc:
      return CONCAT44(uVar6,uVar5);
    }
    iVar16 = 0;
    FUN_01bed93e(auStack_88,0,0x20);
    FUN_01bed93e(auStack_68,0,0x44);
    do {
      puVar4 = (undefined2 *)(param_1 + 0x1b00 + iVar16);
      iVar16 = iVar16 + 2;
      *puVar4 = 0x31e;
    } while (iVar16 != 0x800);
    uVar7 = 0x13;
    iVar16 = param_1 + 0x1b00;
    pbVar19 = (byte *)(param_1 + 0x28ed);
  }
  uVar5 = 3;
  uVar18 = (uint)*(ushort *)(param_1 + 0x28e4 + uVar17 * 2);
  uVar6 = 0x1c;
  uVar9 = uVar18;
  pbVar3 = pbVar19;
  if (uVar18 <= uVar7) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (0xf < *pbVar3) goto LAB_016042cc;
      auStack_88[*pbVar3] = auStack_88[*pbVar3] + 1;
      pbVar3 = pbVar3 + 1;
    }
    uVar14 = 1;
    iVar12 = 0;
    uVar9 = 0;
    uVar7 = 0;
    do {
      if (uVar14 == 0) {
        if (0xf < uVar7) goto LAB_016040b0;
      }
      else {
        uVar13 = 0x10 - uVar7;
        if (uVar14 <= 0x10 - uVar7) {
          uVar13 = uVar14;
        }
        uVar10 = uVar13 + uVar7;
        if (uVar13 + uVar7 < uVar7) {
          uVar10 = uVar7;
        }
        if (0xf < uVar10) goto LAB_016040b0;
        iVar15 = uVar13 - uVar14;
        while (iVar15 != 0) {
          uVar10 = uVar10 + 1;
          iVar15 = iVar15 + 1;
          if (uVar10 == 0x10) goto LAB_016040b0;
        }
        uVar14 = 0;
        uVar7 = uVar10;
      }
      uVar9 = auStack_88[uVar7] + uVar9;
      iVar12 = (iVar12 + (uint)auStack_88[uVar7]) * 2;
      *(int *)(((uint)auStack_68 | 4) + uVar7 * 4) = iVar12;
      uVar7 = uVar7 + 1;
    } while( true );
  }
  goto LAB_016042cc;
LAB_016040b0:
  if ((iVar12 != 0x10000) && ((uVar5 = 1, uVar17 == 2 || (1 < (uVar9 & 0xffff)))))
  goto LAB_016042cc;
  uVar17 = 0;
  uVar6 = 0xffff;
LAB_016040e8:
  uVar7 = uVar17;
  if (uVar17 < uVar18) {
    do {
      uVar9 = pbVar19[uVar7] & 0xf;
      uVar17 = uVar7 + 1;
      if ((pbVar19[uVar7] & 0xf) != 0) {
        uVar14 = auStack_68[uVar9];
        auStack_68[uVar9] = uVar14 + 1;
        uVar14 = uVar14 & 0xffffffffU >> (0x20 - uVar9 & 0xff);
        bVar1 = (byte)uVar14;
        bVar2 = (byte)(uVar14 >> 8);
        uVar14 = (((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1
                                   | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1)
                                 << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x18 |
                  (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1
                                  | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) <<
                                1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10) >> 0x10) >>
                 (0x10 - uVar9 & 0xff);
        if (10 < uVar9) goto LAB_0160416c;
        if (uVar14 >> 10 == 0) {
          puVar8 = (ushort *)(iVar16 + uVar14 * 2);
          do {
            uVar14 = uVar14 + (1 << uVar9);
            *puVar8 = (ushort)uVar7 | (ushort)(uVar9 << 9);
            puVar8 = puVar8 + (1 << uVar9);
          } while (uVar14 < 0x400);
        }
      }
      uVar7 = uVar17;
      if (uVar17 == uVar18) break;
    } while( true );
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x28eb);
  if (uVar6 == 0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar5 = 1;
    uVar6 = 0xc;
    goto LAB_016042cc;
  }
  if (uVar6 == 2) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar5 = 1;
    uVar6 = 10;
    goto LAB_016042cc;
  }
  uVar6 = uVar6 - 1;
  *(char *)(param_1 + 0x28eb) = (char)uVar6;
  goto LAB_01603ee8;
LAB_0160416c:
  puVar8 = (ushort *)(iVar16 + (uVar14 & 0x3ff) * 2);
  uVar13 = (uint)*puVar8;
  if (uVar13 == 0x31e) {
    *puVar8 = (ushort)uVar6;
    uVar10 = uVar6 - 2;
    uVar13 = uVar6;
  }
  else {
    uVar10 = uVar6;
  }
  uVar14 = uVar14 >> 9;
  if (uVar9 != 0xb) {
    uVar11 = 0xb;
    uVar6 = uVar10;
    do {
      iVar12 = (int)(uVar14 << 0x1e) >> 0x1f;
      uVar14 = (uVar14 & 0xffff) >> 1;
      if (8 < (~(uVar13 + iVar12) & 0xffff) >> 6) goto LAB_0160428c;
      puVar8 = (ushort *)(iVar16 + 0x800 + (~uVar13 - iVar12 & 0xffff) * 2);
      uVar13 = (uint)*puVar8;
      if (uVar13 == 0) {
        uVar10 = uVar6 - 2;
        *puVar8 = (ushort)uVar6;
        uVar13 = uVar6;
      }
      else {
        uVar10 = uVar6;
      }
      uVar11 = uVar11 + 1;
      uVar6 = uVar10;
    } while (uVar11 < uVar9);
  }
  iVar12 = (int)(uVar14 << 0x1e) >> 0x1f;
  if (8 < (~(uVar13 + iVar12) & 0xffff) >> 6) {
LAB_0160428c:
    uVar6 = 10;
    uVar5 = 3;
    goto LAB_016042cc;
  }
  *(ushort *)(iVar16 + 0x800 + (~uVar13 - iVar12 & 0xffff) * 2) = (ushort)uVar7;
  uVar6 = uVar10;
  goto LAB_016040e8;
}

