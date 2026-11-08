// FUN_01be4a38 @ 01be4a38 size=1612 calls_out=4 calls_in=2
// strings: 

int FUN_01be4a38(uint param_1,int param_2)

{
  code *pcVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  int *piVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  undefined4 *puVar22;
  int iVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  char cVar27;
  uint local_34;
  
  iVar23 = param_1 + 0xc;
  piVar21 = (int *)(&DAT_01d535b8)[iVar23];
  if (piVar21 != (int *)0x0) {
    uVar19 = piVar21[3];
    if (uVar19 == 0) {
      piVar13 = (int *)piVar21[1];
      if (piVar21[4] == 0) {
        if (piVar21 == piVar13) {
          (&DAT_01d535b8)[iVar23] = 0;
        }
        else {
          *(int **)(*piVar21 + 4) = piVar13;
          *piVar13 = *piVar21;
          if (piVar21 == (int *)(&DAT_01d535b8)[iVar23]) {
            (&DAT_01d535b8)[iVar23] = piVar21[1];
          }
        }
        *piVar21 = 0;
        piVar21[1] = 0;
        piVar13 = (int *)(&DAT_01d535b8)[iVar23];
        if (piVar13 == (int *)0x0) goto LAB_01be502a;
      }
      else {
        (&DAT_01d535b8)[iVar23] = piVar13;
      }
      uVar19 = piVar13[4];
      if ((uVar19 == (2 << (*(byte *)(piVar13 + 5) & 0x1f)) - 1U) &&
         ((int)((uint)*(byte *)(piVar13 + 5) << 0x1a) < 0)) {
        piVar13 = (int *)piVar13[1];
        (&DAT_01d535b8)[iVar23] = piVar13;
        uVar19 = piVar13[4];
      }
      iVar20 = piVar13[2];
      uVar16 = *(byte *)(iVar20 + 4) & 0x1f;
      piVar21 = piVar13;
      if (((2 << uVar16) - 1U & uVar19) == 0) {
        piVar21 = (int *)piVar13[1];
        if (piVar13 == piVar21) {
          iVar8 = uVar16 + 2;
          uVar19 = (uint)*(ushort *)(&DAT_0056569c + ((*(ushort *)(piVar21 + 5) & 0xfff) >> 6) * 2)
                   * 0x10 * iVar8 + 0x10;
          while (uVar16 = (uint)*(ushort *)
                                 (&DAT_0056569c + ((*(ushort *)(piVar21 + 5) & 0xfff) >> 6) * 2) *
                          0x10 + uVar19, (int)(uVar16 - 1 ^ uVar19) < 0x1000) {
            iVar8 = iVar8 + 1;
            uVar19 = uVar16;
          }
          iVar17 = (*(byte *)(piVar21 + 5) & 0x1f) + 1;
          if (iVar17 <= iVar8) {
            iVar8 = iVar17;
          }
          *(byte *)(iVar20 + 4) = *(byte *)(iVar20 + 4) & 0xe0 | (char)iVar8 - 1U & 0x1f;
        }
        else {
          (&DAT_01d535b8)[iVar23] = piVar21;
        }
      }
      if (piVar21[3] != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x1be4aa4);
        (*pcVar1)();
      }
      puVar10 = (uint *)(piVar21 + 4);
      iVar20 = 2 << (*(byte *)(piVar21[2] + 4) & 0x1f);
      do {
        uVar19 = piVar21[4];
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar10);
          uVar16 = *puVar10;
          if (uVar19 != uVar16) goto LAB_01be4b4a;
          bVar12 = (bool)hasExclusiveAccess(puVar10);
        } while (!bVar12);
        *puVar10 = uVar19 & -iVar20;
LAB_01be4b4a:
        DataMemoryBarrier(0x1b);
      } while (uVar19 != uVar16);
      uVar19 = iVar20 - 1U & uVar19;
      piVar21[3] = uVar19;
      if (uVar19 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x1be4b76);
        (*pcVar1)();
      }
      uVar16 = (*(ushort *)(piVar21 + 5) & 0xfff) >> 6;
      if ((uVar16 - 7 < 0x20) && ((&DAT_01d53781)[uVar16] != '\0')) {
        (&DAT_01d53781)[uVar16] = (&DAT_01d53781)[uVar16] + -1;
      }
    }
    uVar16 = -uVar19 & uVar19;
    piVar21[3] = uVar19 & ~-uVar19;
    if (uVar16 != 0) {
      bVar3 = (byte)uVar16;
      bVar4 = (byte)(uVar16 >> 8);
      bVar5 = (byte)(uVar16 >> 0x10);
      bVar6 = (byte)(uVar16 >> 0x18);
      return LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) <<
                                      1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                   bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                               bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                             bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                     (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1) <<
                                      1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                   bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7));
    }
  }
LAB_01be502a:
  uVar2 = *(ushort *)(&DAT_0056569c + param_1 * 2);
  piVar21 = (int *)FUN_01be4804();
  uVar19 = DAT_01d5358c;
  uVar16 = (uint)uVar2 * 0x10;
  if (piVar21 == (int *)0x0) {
    return -1;
  }
  iVar20 = param_1 + 0x3c;
  uVar18 = (&DAT_01d535b8)[iVar20];
  if ((int)param_1 < 9) {
    iVar8 = param_1 * 3;
    uVar26 = (uint)(byte)(&DAT_00565700)[iVar8];
    if ((uVar18 < uVar26 << 2) &&
       (uVar26 = (uint)(byte)(&DAT_00565701)[iVar8], uVar18 < uVar26 << 2)) {
      uVar26 = (uint)(byte)(&DAT_00565702)[iVar8];
    }
  }
  else {
    for (uVar26 = (uint)(byte)(&DAT_005656fc)[param_1 & 3];
        (-1 < (int)(uVar26 << 0x1f) && (uVar18 < uVar26 << 2)); uVar26 = (int)uVar26 >> 1) {
    }
    for (; 0xfffff < uVar16 * uVar26; uVar26 = (int)uVar26 >> 1) {
    }
  }
  if (uVar26 == 1) {
    if (uVar16 + 0x10 <= DAT_01d5358c >> 1) {
      uVar26 = 2;
      goto LAB_01be5080;
    }
    local_34 = 4;
    uVar9 = uVar16;
LAB_01be5096:
    if (param_1 - 7 < 0x20) {
      bVar6 = (&DAT_01d53781)[param_1];
      bVar12 = 99 < bVar6;
      bVar24 = bVar6 < 100;
      if (((byte)(&DAT_01d53761)[param_1] != 0) &&
         ((int)((uint)DAT_01d537a8 - (uint)(byte)(&DAT_01d53761)[param_1]) < 10)) {
        if (bVar6 < 99) {
          cVar27 = bVar6 + 1;
        }
        else {
          cVar27 = -0x6a;
        }
        (&DAT_01d53781)[param_1] = cVar27;
      }
    }
    else {
      bVar24 = true;
      bVar12 = false;
    }
    if (DAT_01d537a8 == 0xff) {
      puVar15 = (undefined1 *)0x1d53767;
      do {
        puVar15 = puVar15 + 1;
        *puVar15 = 0;
      } while (puVar15 != &DAT_01d53787);
      DAT_01d537a8 = 1;
    }
    else {
      DAT_01d537a8 = DAT_01d537a8 + 1;
    }
    if ((int)param_1 < 0x20) {
      uVar14 = ~param_1 & 1;
    }
    else {
      uVar14 = 0;
    }
    if (uVar14 != 0) {
      uVar18 = uVar18 + (&DAT_01d535b8)[param_1 + 0x3d];
    }
    if (local_34 <= uVar18) {
      bVar24 = false;
    }
    if (bVar24) {
      uVar14 = param_1 & 3;
      if (uVar14 != 1) {
        if (uVar14 == 2) {
          if (uVar19 * 4 < uVar9) {
LAB_01be4dc4:
            uVar26 = 3;
            iVar8 = 3;
            goto LAB_01be4dc8;
          }
        }
        else if (uVar14 == 0) {
          if (uVar19 * 8 < uVar9) goto LAB_01be4dc4;
          if (uVar19 * 2 < uVar9) {
            uVar26 = 5;
            iVar8 = 5;
            goto LAB_01be4dc8;
          }
        }
        goto LAB_01be4c56;
      }
      if (uVar9 <= uVar19 * 8) goto LAB_01be4c56;
      uVar26 = 2;
      iVar8 = 2;
LAB_01be4dc8:
      uVar9 = (-(uVar16 * iVar8) - 0x10 & uVar19 - 1) + uVar16 * iVar8 + 0x10;
LAB_01be4dde:
      uVar14 = (-param_2 - 0x14U & uVar19 - 1) + param_2 + 0x14;
      if (uVar14 < uVar16 + 0x10) {
        uVar26 = 1;
        uVar9 = uVar14;
      }
      else if ((uVar19 << 2 <= uVar14) && (uVar18 < uVar26 << 1)) {
        uVar26 = 1;
        uVar9 = uVar14;
      }
    }
    else {
LAB_01be4c56:
      bVar12 = (bool)(bVar12 ^ 1);
      if (7 < uVar26) {
        bVar12 = false;
      }
      uVar9 = (-(uVar16 * uVar26) - 0x10 & uVar19 - 1) + uVar16 * uVar26 + 0x10;
      if (bVar12) goto LAB_01be4dde;
    }
    puVar7 = (undefined4 *)FUN_01be6c88(0,uVar9,3,0x22,0xffffffff);
    if (puVar7 == (undefined4 *)&DAT_ffffffff) {
LAB_01be4e98:
      *piVar21 = 0;
      piVar21[1] = 0;
      piVar21[2] = 0;
      piVar21[3] = 0;
      piVar21[4] = 0;
      piVar21[5] = 0;
      piVar13 = DAT_01d535c8;
      if (DAT_01d535c8 == (int *)0x0) {
        *piVar21 = (int)piVar21;
        piVar21[1] = (int)piVar21;
        DAT_01d535c8 = piVar21;
        return -1;
      }
      iVar23 = -1;
      piVar21[1] = (int)DAT_01d535c8;
      goto LAB_01be4d52;
    }
    piVar21[5] = piVar21[5] & 0xfffU | uVar9 & 0xfffff000;
    DAT_01d535c4 = DAT_01d535c4 + 1;
    iVar8 = FUN_01bf1250(0xff0,uVar16);
    uVar16 = uVar26 - 1;
    uVar19 = iVar8 - 1U;
    if ((int)uVar26 <= (int)(iVar8 - 1U)) {
      uVar19 = uVar16;
    }
    uVar19 = uVar19 & ~((int)uVar19 >> 0x1f);
  }
  else {
LAB_01be5080:
    uVar9 = uVar26 * uVar16;
    if (DAT_01d5358c >> 1 < uVar9 + 0x10) {
      local_34 = uVar26 << 2;
      goto LAB_01be5096;
    }
    uVar19 = uVar9 >> 4;
    if (0x90 < uVar9) {
      uVar16 = uVar19 + 1;
      uVar19 = (0x1e - LZCOUNT(uVar16)) * 4;
      if (*(ushort *)(&DAT_0056569c + (uVar19 + 1) * 2) < uVar16) {
        uVar19 = uVar19 + 2;
      }
      if (*(ushort *)(&DAT_0056569c + uVar19 * 2) < uVar16) {
        uVar19 = uVar19 + 1;
      }
    }
    iVar8 = FUN_01be4a38(uVar19,uVar9 + 0xc);
    if (iVar8 < 0) goto LAB_01be4e98;
    iVar25 = (&DAT_01d535b8)[uVar19 + 0xc];
    iVar17 = (uint)*(ushort *)(&DAT_0056569c + uVar19 * 2) * 0x10 + -4;
    if (((*(byte *)(iVar25 + 0x14) & 0x1f) == 0) &&
       (uVar19 = *(uint *)(iVar25 + 0x14) & 0xfffff000, uVar19 != 0)) {
      iVar11 = uVar19 - 0x10;
    }
    else {
      iVar11 = (uint)*(ushort *)(&DAT_0056569c + ((*(ushort *)(iVar25 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar19 = DAT_01d535c4 & 0xff;
    puVar22 = (undefined4 *)(iVar11 * iVar8 + *(int *)(iVar25 + 8) + 0x10);
    uVar16 = (iVar11 - iVar17) - 4;
    uVar18 = uVar16 >> 4;
    if (*(char *)((int)puVar22 + -3) != '\0') {
      uVar19 = (uint)(byte)((char)*(undefined2 *)((int)puVar22 + -2) + 1);
    }
    if (*(char *)(puVar22 + -1) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be4f5c);
      (*pcVar1)();
    }
    if (((uVar18 < uVar19) &&
        (uVar16 = uVar18 | uVar16 >> 5, uVar16 = uVar16 | uVar16 >> 2,
        uVar19 = (uVar16 | uVar16 >> 4) & uVar19, uVar18 < uVar19)) &&
       (uVar19 = (uVar19 - uVar18) - 1, uVar18 < uVar19)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be4f84);
      (*pcVar1)();
    }
    puVar7 = puVar22;
    if (uVar19 != 0) {
      *(short *)((int)puVar22 + -2) = (short)uVar19;
      *(undefined1 *)((int)puVar22 + -3) = 0xe0;
      puVar7 = puVar22 + uVar19 * 4;
      *(undefined1 *)(puVar7 + -1) = 0;
    }
    iVar25 = *(int *)(iVar25 + 8);
    bVar6 = (byte)iVar8;
    *(byte *)((int)puVar7 + -3) = bVar6;
    *(short *)((int)puVar7 + -2) = (short)((uint)((int)puVar7 - (iVar25 + 0x10)) >> 4);
    iVar8 = (int)puVar22 + (((iVar11 + -4) - (int)puVar7) - iVar17);
    cVar27 = '\0';
    if (iVar8 != 0) {
      iVar17 = iVar8;
      if (iVar8 < 5) {
        iVar17 = iVar8 * 0x20;
      }
      *(undefined1 *)((int)puVar22 + ((iVar11 + -4) - iVar8)) = 0;
      if (iVar8 < 5) {
        cVar27 = (char)iVar17;
      }
      else {
        *(int *)((int)puVar22 + iVar11 + -8) = iVar17;
        cVar27 = -0x60;
        *(undefined1 *)((int)puVar22 + iVar11 + -9) = 0;
      }
      bVar6 = *(byte *)((int)puVar7 + -3);
    }
    iVar8 = 0;
    *(byte *)((int)puVar7 + -3) = cVar27 + (bVar6 & 0x1f);
    piVar21[5] = piVar21[5] & 0xfff;
    *(byte *)((int)puVar7 + -3) = *(byte *)((int)puVar7 + -3) & 0x1f | 0xc0;
    puVar22 = puVar7;
    do {
      iVar8 = iVar8 + 1;
      *(undefined1 *)(puVar22 + 3) = 0;
      puVar22 = puVar22 + (uint)uVar2 * 4;
    } while (iVar8 != uVar26 + 1);
    uVar16 = uVar26 - 1;
    uVar19 = uVar16;
  }
  (&DAT_01d535b8)[iVar20] = (&DAT_01d535b8)[iVar20] + uVar26;
  piVar21[3] = (2 << (uVar19 & 0xff)) + -1;
  piVar21[2] = (int)puVar7;
  piVar21[4] = ((2 << (uVar16 & 0xff)) - piVar21[3]) + -1;
  *puVar7 = piVar21;
  *(byte *)(piVar21[2] + 4) = *(byte *)(piVar21[2] + 4) & 0xe0 | (byte)uVar19 & 0x1f;
  piVar21[3] = piVar21[3] + -1;
  *(ushort *)(piVar21 + 5) =
       (ushort)uVar16 & 0x1f | 0x20 | (ushort)((param_1 & 0x3f) << 6) |
       *(ushort *)(piVar21 + 5) & 0xf000;
  if (piVar21[1] != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be4d38);
    (*pcVar1)();
  }
  if (*piVar21 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be4d3e);
    (*pcVar1)();
  }
  piVar13 = (int *)(&DAT_01d535b8)[iVar23];
  if (piVar13 == (int *)0x0) {
    *piVar21 = (int)piVar21;
    piVar21[1] = (int)piVar21;
    (&DAT_01d535b8)[iVar23] = piVar21;
    return 0;
  }
  iVar23 = 0;
  piVar21[1] = (int)piVar13;
LAB_01be4d52:
  iVar20 = *piVar13;
  *piVar21 = iVar20;
  *(int **)(iVar20 + 4) = piVar21;
  *(int **)piVar21[1] = piVar21;
  return iVar23;
}

