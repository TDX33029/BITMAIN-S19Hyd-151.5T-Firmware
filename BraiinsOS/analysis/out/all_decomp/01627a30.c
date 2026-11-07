// FUN_01627a30 @ 01627a30 size=888 calls_out=4 calls_in=2
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x01627a54 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_01627a30(int *param_1)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int unaff_r4;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint in_fpscr;
  double dVar20;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint *local_38;
  uint local_34;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uVar16 = param_1[3];
  dVar20 = (double)VectorUnsignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
  dVar20 = dVar20 / 0.1;
  FUN_016d5578(SUB84(dVar20,0),(int)((ulonglong)dVar20 >> 0x20),0);
  uVar17 = (uint)(0.0 < dVar20) * (int)(longlong)dVar20;
  if (uVar17 <= uVar16) {
    uVar17 = uVar16;
  }
  if (uVar17 == 0) {
    local_38 = (uint *)*param_1;
    local_34 = param_1[1];
    local_30 = param_1[2];
    iStack_2c = param_1[3];
    param_1[3] = 0;
    *param_1 = (int)&DAT_005674cc;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_01625200(&local_38);
    return;
  }
  if (uVar17 < 0xf) {
    uVar5 = (uVar17 & 8) + 8;
    if (uVar17 < 4) {
      uVar5 = 4;
    }
    if (param_1[1] + 1U <= uVar5) {
      return;
    }
  }
  else {
    if (0x1fffffff < uVar17) {
      return;
    }
    iVar15 = (int)((ulonglong)(uVar17 << 3) * 0x24924925 >> 0x20);
    if (param_1[1] + 1U <=
        (0xffffffffU >> LZCOUNT((iVar15 + (uVar17 * 8 - iVar15 >> 1) >> 2) - 1)) + 1) {
      return;
    }
  }
  if (uVar16 == 0) {
    FUN_01624528(&local_38,0x30,8);
    local_48 = *param_1;
    local_44 = param_1[1];
    local_40 = param_1[2];
    local_3c = param_1[3];
    *param_1 = (int)local_38;
    param_1[1] = local_34;
    param_1[2] = local_30;
    param_1[3] = iStack_2c;
    FUN_01625200(&local_48);
    return;
  }
  FUN_01624528(&local_38,0x30,8);
  if (local_38 != (uint *)0x0) {
    puVar18 = (uint *)*param_1;
    iVar15 = 0;
    uVar5 = ~*puVar18 & 0x80808080;
    uVar17 = uVar16;
    puVar19 = puVar18;
    do {
      if (uVar5 == 0) {
        do {
          puVar19 = puVar19 + 1;
          iVar15 = iVar15 + 4;
        } while ((*puVar19 & 0x80808080) == 0x80808080);
        uVar5 = *puVar19 & 0x80808080 ^ 0x80808080;
      }
      uVar8 = iVar15 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
      uVar6 = puVar18[uVar8 * -0xc + -0xc];
      uVar10 = (puVar18 + uVar8 * -0xc + -0xc)[1];
      lVar2 = (ulonglong)
              ((((((((uVar6 & 0xff ^ 0x84222325) * 0x1b3 ^ (uVar6 & 0xffff) >> 8) * 0x1b3 ^
                   (uVar6 & 0xffffff) >> 0x10) * 0x1b3 ^ uVar6 >> 0x18) * 0x1b3 ^ uVar10 & 0xff) *
                 0x1b3 ^ (uVar10 & 0xffff) >> 8) * 0x1b3 ^ (uVar10 & 0xffffff) >> 0x10) * 0x1b3 ^
              uVar10 >> 0x18) * 0x1b3;
      uVar6 = local_34 & (uint)lVar2;
      uVar10 = *(uint *)((int)local_38 + uVar6) & 0x80808080;
      if (uVar10 == 0) {
        iVar9 = 4;
        do {
          uVar6 = uVar6 + iVar9;
          iVar9 = iVar9 + 4;
          uVar6 = uVar6 & local_34;
          uVar10 = *(uint *)((int)local_38 + uVar6) & 0x80808080;
        } while (uVar10 == 0);
      }
      uVar6 = uVar6 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & local_34
      ;
      if (-1 < *(char *)((int)local_38 + uVar6)) {
        uVar6 = *local_38 & 0x80808080;
        uVar6 = (uint)LZCOUNT((*local_38 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                              (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
      }
      uVar5 = uVar5 - 1 & uVar5;
      bVar1 = (byte)((ulonglong)lVar2 >> 0x18) >> 1;
      *(byte *)((int)local_38 + uVar6) = bVar1;
      *(byte *)((int)local_38 + (uVar6 - 4 & local_34) + 4) = bVar1;
      uVar17 = uVar17 - 1;
      FUN_016dd1aa(local_38 + ~uVar6 * 0xc,puVar18 + ~uVar8 * 0xc,0x30);
    } while (uVar17 != 0);
    iVar15 = *param_1;
    iVar9 = param_1[1];
    *param_1 = (int)local_38;
    param_1[1] = local_34;
    param_1[2] = local_30 - uVar16;
    param_1[3] = uVar16;
    if ((iVar9 != 0) && (iVar11 = iVar9 * 0x30 + 0x30, iVar9 + iVar11 != -5)) {
      iVar15 = iVar15 - iVar11;
      if (iVar15 == 0) {
        return;
      }
      iVar9 = FUN_016d3bc8();
      uVar17 = *(byte *)(iVar15 + -3) & 0x1f;
      if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
         (uVar16 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar11 = uVar16 - 0x10, uVar16 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar16 = (uint)(*(byte *)(iVar15 + -3) >> 5);
      iVar14 = *(int *)(iVar9 + 8) + 0x10;
      iVar13 = iVar11 * uVar17 + iVar11 + -4;
      iVar11 = iVar14 + iVar13;
      if (4 < uVar16) {
        if (uVar16 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar16 = *(uint *)(iVar11 + -4);
        if (uVar16 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar11 - iVar15) < uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar11 - uVar16) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar14 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar1 = *(byte *)(iVar9 + 0x14);
      uVar16 = 1 << uVar17;
      *(undefined1 *)(iVar15 + -3) = 0xff;
      *(undefined2 *)(iVar15 + -2) = 0;
      do {
        uVar6 = *(uint *)(iVar9 + 0x10);
        uVar5 = *(uint *)(iVar9 + 0xc) | uVar6;
        if ((uVar16 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar6 == 0) || (uVar5 + uVar16 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar9,uVar17);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar7;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar7 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar9 + 0x10) = uVar16 + uVar6;
          return;
        }
        puVar19 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar19);
          uVar5 = *puVar19;
          if (uVar6 != uVar5) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar4);
        *puVar19 = uVar16 + uVar6;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar6 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

