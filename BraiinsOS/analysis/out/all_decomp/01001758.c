// FUN_01001758 @ 01001758 size=584 calls_out=3 calls_in=1
// strings: 

void FUN_01001758(undefined4 *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int unaff_r4;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_44;
  uint *local_28;
  
  uVar17 = param_2[1];
  uVar18 = param_2[2];
  uVar4 = FUN_01003d44(param_1[4],param_1[5],param_1[6],param_1[7],uVar17,uVar18);
  if (param_1[2] == 0) {
    FUN_00ffe00c(param_1,param_1 + 4);
  }
  uVar10 = param_1[1];
  puVar11 = (uint *)*param_1;
  iVar9 = 0;
  bVar3 = false;
  local_28 = param_2;
  uVar12 = uVar4;
  do {
    uVar12 = uVar10 & uVar12;
    uVar16 = *(uint *)((int)puVar11 + uVar12);
    uVar5 = uVar16 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar12 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar10;
      if ((uVar18 == puVar11[uVar6 * -4 + -2]) &&
         (iVar7 = thunk_FUN_016dd50a(uVar17,puVar11[uVar6 * -4 + -3],uVar18), iVar7 == 0)) {
        puVar11[uVar6 * -4 + -1] = param_3;
        if (*local_28 == 0) {
          return;
        }
        if (uVar17 == 0) {
          return;
        }
        iVar9 = FUN_016d3bc8();
        uVar4 = *(byte *)(uVar17 - 3) & 0x1f;
        if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
           (uVar18 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar7 = uVar18 - 0x10, uVar18 == 0)) {
          iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar18 = (uint)(*(byte *)(uVar17 - 3) >> 5);
        iVar15 = *(int *)(iVar9 + 8) + 0x10;
        iVar14 = iVar7 * uVar4 + iVar7 + -4;
        iVar7 = iVar15 + iVar14;
        if (4 < uVar18) {
          if (uVar18 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar18 = *(uint *)(iVar7 + -4);
          if (uVar18 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if (iVar7 - uVar17 < uVar18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 - uVar18) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar15 + iVar14) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar1 = *(byte *)(iVar9 + 0x14);
        uVar18 = 1 << uVar4;
        *(undefined1 *)(uVar17 - 3) = 0xff;
        *(undefined2 *)(uVar17 - 2) = 0;
        goto LAB_016d4066;
      }
    }
    uVar5 = uVar16 & 0x80808080;
    if (bVar3) {
LAB_010018b0:
      if ((uVar5 & uVar16 << 1) != 0) {
        uVar17 = (uint)*(char *)((int)puVar11 + local_44);
        if (-1 < (int)uVar17) {
          uVar17 = *puVar11 & 0x80808080;
          uVar18 = LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
          uVar17 = (uint)*(byte *)((int)puVar11 + (uVar18 >> 3));
          local_44 = uVar18 >> 3;
        }
        uVar12 = *local_28;
        param_1[2] = param_1[2] - (uVar17 & 1);
        param_1[3] = param_1[3] + 1;
        uVar18 = local_28[1];
        uVar17 = local_28[2];
        bVar1 = (byte)(uVar4 >> 0x19);
        *(byte *)((int)puVar11 + local_44) = bVar1;
        *(byte *)((int)puVar11 + (uVar10 & local_44 - 4) + 4) = bVar1;
        puVar11[local_44 * -4 + -1] = param_3;
        puVar11[local_44 * -4 + -2] = uVar17;
        puVar11[local_44 * -4 + -4] = uVar12;
        puVar11[local_44 * -4 + -3] = uVar18;
        return;
      }
      bVar3 = true;
    }
    else {
      if (uVar5 != 0) {
        local_44 = uVar12 + ((uint)LZCOUNT((uVar16 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar10;
        goto LAB_010018b0;
      }
      bVar3 = false;
    }
    iVar9 = iVar9 + 4;
    uVar12 = iVar9 + uVar12;
  } while( true );
LAB_016d4066:
  uVar12 = *(uint *)(iVar9 + 0x10);
  uVar17 = *(uint *)(iVar9 + 0xc) | uVar12;
  if ((uVar18 & uVar17) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar2)();
  }
  if ((uVar12 == 0) || (uVar17 + uVar18 == (2 << (bVar1 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&local_28,iVar9,uVar4);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar8 = (undefined4 *)FUN_016d2bc8();
    uVar13 = *puVar8;
    FUN_016d6ac4(local_28,unaff_r4);
    *puVar8 = uVar13;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar9 + 0x10) = uVar18 + uVar12;
    return;
  }
  puVar11 = (uint *)(iVar9 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar11);
    uVar17 = *puVar11;
    if (uVar12 != uVar17) goto LAB_016d409c;
    bVar3 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar3);
  *puVar11 = uVar18 + uVar12;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar12 == uVar17) {
    return;
  }
  goto LAB_016d4066;
}

