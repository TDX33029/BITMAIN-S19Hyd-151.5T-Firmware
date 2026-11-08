// FUN_00ed3b40 @ 00ed3b40 size=892 calls_out=3 calls_in=2
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00ed3b64 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00ed3b40(int *param_1)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  uint in_fpscr;
  double dVar19;
  uint *local_38;
  uint local_34;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uVar13 = param_1[3];
  dVar19 = (double)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
  dVar19 = dVar19 / 0.1;
  FUN_016d5578(SUB84(dVar19,0),(int)((ulonglong)dVar19 >> 0x20),0);
  uVar14 = (uint)(0.0 < dVar19) * (int)(longlong)dVar19;
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  if (uVar14 == 0) {
    iVar9 = *param_1;
    iVar7 = param_1[1];
    bVar18 = iVar7 == 0;
    iVar11 = 0;
    param_1[3] = 0;
    if (!bVar18) {
      iVar11 = iVar7 * 3;
    }
    *param_1 = (int)&DAT_005674cc;
    if (!bVar18) {
      iVar7 = iVar7 + iVar11 * 0x20;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    if (bVar18 || iVar7 == -0x65) {
      return;
    }
    iVar11 = iVar11 << 5;
  }
  else {
    if (uVar14 < 0xf) {
      uVar4 = (uVar14 & 8) + 8;
      if (uVar14 < 4) {
        uVar4 = 4;
      }
      iVar11 = param_1[1];
      if (iVar11 + 1U <= uVar4) {
        return;
      }
    }
    else {
      if (0x1fffffff < uVar14) {
        return;
      }
      iVar9 = (int)((ulonglong)(uVar14 << 3) * 0x24924925 >> 0x20);
      iVar11 = param_1[1];
      if (iVar11 + 1U <= (0xffffffffU >> LZCOUNT((iVar9 + (uVar14 * 8 - iVar9 >> 1) >> 2) - 1)) + 1)
      {
        return;
      }
    }
    if (uVar13 != 0) {
      FUN_00ee38b0(&local_38,0x60);
      if (local_38 == (uint *)0x0) {
        return;
      }
      puVar15 = (uint *)*param_1;
      iVar9 = 0;
      uVar4 = ~*puVar15 & 0x80808080;
      uVar14 = uVar13;
      puVar17 = puVar15;
      do {
        if (uVar4 == 0) {
          do {
            puVar17 = puVar17 + 1;
            iVar9 = iVar9 + 4;
          } while ((*puVar17 & 0x80808080) == 0x80808080);
          uVar4 = *puVar17 & 0x80808080 ^ 0x80808080;
        }
        iVar7 = iVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                       (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
        uVar5 = puVar15[iVar7 * -0x18 + -0x18];
        uVar8 = (puVar15 + iVar7 * -0x18 + -0x18)[1];
        lVar2 = (ulonglong)
                ((((((((uVar5 & 0xff ^ 0x84222325) * 0x1b3 ^ (uVar5 & 0xffff) >> 8) * 0x1b3 ^
                     (uVar5 & 0xffffff) >> 0x10) * 0x1b3 ^ uVar5 >> 0x18) * 0x1b3 ^ uVar8 & 0xff) *
                   0x1b3 ^ (uVar8 & 0xffff) >> 8) * 0x1b3 ^ (uVar8 & 0xffffff) >> 0x10) * 0x1b3 ^
                uVar8 >> 0x18) * 0x1b3;
        uVar5 = local_34 & (uint)lVar2;
        uVar8 = *(uint *)((int)local_38 + uVar5) & 0x80808080;
        if (uVar8 == 0) {
          iVar16 = 4;
          do {
            uVar5 = uVar5 + iVar16;
            iVar16 = iVar16 + 4;
            uVar5 = uVar5 & local_34;
            uVar8 = *(uint *)((int)local_38 + uVar5) & 0x80808080;
          } while (uVar8 == 0);
        }
        uVar5 = uVar5 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                       (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & local_34
        ;
        if (-1 < *(char *)((int)local_38 + uVar5)) {
          uVar5 = *local_38 & 0x80808080;
          uVar5 = (uint)LZCOUNT((*local_38 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
        }
        uVar4 = uVar4 - 1 & uVar4;
        bVar1 = (byte)((ulonglong)lVar2 >> 0x18) >> 1;
        *(byte *)((int)local_38 + uVar5) = bVar1;
        uVar14 = uVar14 - 1;
        *(byte *)((int)local_38 + (uVar5 - 4 & local_34) + 4) = bVar1;
        FUN_016dd1aa(local_38 + uVar5 * -0x18 + -0x18,puVar15 + iVar7 * -0x18 + -0x18,0x60);
      } while (uVar14 != 0);
      *param_1 = (int)local_38;
      param_1[1] = local_34;
      param_1[2] = local_30 - uVar13;
      if (iVar11 == 0) {
        return;
      }
      iVar9 = iVar11 * 0x60 + 0x60;
      if (iVar11 + iVar9 == -5) {
        return;
      }
      iVar9 = (int)puVar15 - iVar9;
      goto LAB_014b47f4;
    }
    FUN_00ee38b0(&local_38,0x60);
    iVar9 = *param_1;
    *param_1 = (int)local_38;
    param_1[1] = local_34;
    param_1[2] = local_30;
    param_1[3] = iStack_2c;
    if (iVar11 * 0x61 == -0x65) {
      return;
    }
    iVar11 = iVar11 * 0x60;
  }
  iVar9 = (iVar9 - iVar11) + -0x60;
LAB_014b47f4:
  if (iVar9 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar7 = uVar13 - 0x10, uVar13 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar16 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar12 + iVar16;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar13 = *(uint *)(iVar7 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar7 - iVar9) < uVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar7 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar12 + iVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar11 + 0x14);
  uVar13 = 1 << uVar14;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar5 = *(uint *)(iVar11 + 0x10);
    uVar4 = *(uint *)(iVar11 + 0xc) | uVar5;
    if ((uVar13 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar5 == 0) || (uVar4 + uVar13 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar13 + uVar5;
      return;
    }
    puVar17 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar4 = *puVar17;
      if (uVar5 != uVar4) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar13 + uVar5;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar5 == uVar4) {
      return;
    }
  } while( true );
}

