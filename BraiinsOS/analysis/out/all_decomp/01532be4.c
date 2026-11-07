// FUN_01532be4 @ 01532be4 size=1000 calls_out=4 calls_in=3
// strings: 

void FUN_01532be4(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  int local_4c;
  uint local_28;
  
  uVar19 = FUN_0156d824(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar17 = ((uint)uVar19 >> 0x19) * 0x1010101;
  local_28 = (uint)*param_3;
  iVar8 = *param_2;
  uVar11 = param_2[1];
  uVar3 = uVar11 & (uint)uVar19;
  if ((*param_3 & 1) == 0) {
    iVar9 = 0;
    while( true ) {
      uVar13 = *(uint *)(iVar8 + uVar3);
      for (uVar6 = ~(uVar13 ^ uVar17) & 0x80808080 & (uVar13 ^ uVar17) + 0xfefefeff; uVar6 != 0;
          uVar6 = uVar6 - 1 & uVar6) {
        iVar15 = iVar8 + (uVar3 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                                 (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3)
                         & uVar11) * -0x90;
        if (((uint)*(byte *)(iVar15 + -0x90) == (local_28 & 0xff)) &&
           (iVar14 = FUN_0157531c(iVar15 + -0x8c,param_3 + 4), iVar14 != 0)) goto LAB_01532f44;
      }
      if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
      iVar9 = iVar9 + 4;
      uVar3 = uVar3 + iVar9 & uVar11;
    }
  }
  else {
    bVar1 = param_3[1];
    if ((bVar1 & 1) == 0) {
      local_4c = 0;
      while( true ) {
        uVar13 = *(uint *)(iVar8 + uVar3);
        for (uVar6 = ~(uVar13 ^ uVar17) & 0x80808080 & (uVar13 ^ uVar17) + 0xfefefeff; uVar6 != 0;
            uVar6 = uVar6 - 1 & uVar6) {
          iVar15 = iVar8 + (uVar3 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                                   (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3
                                    ) & uVar11) * -0x90;
          uVar4 = (uint)*(byte *)(iVar15 + -0x90);
          bVar18 = uVar4 == local_28;
          uVar7 = local_28;
          if (bVar18) {
            uVar4 = (uint)*(byte *)(iVar15 + -0x8f);
            uVar7 = (uint)bVar1;
          }
          if ((bVar18 && uVar4 == uVar7) && (*(int *)(iVar15 + -0x8e) == *(int *)(param_3 + 2)))
          goto LAB_01532f44;
        }
        if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
        local_4c = local_4c + 4;
        uVar3 = uVar3 + local_4c & uVar11;
      }
    }
    else {
      local_4c = 0;
      while( true ) {
        uVar13 = *(uint *)(iVar8 + uVar3);
        for (uVar6 = ~(uVar13 ^ uVar17) & 0x80808080 & (uVar13 ^ uVar17) + 0xfefefeff; uVar6 != 0;
            uVar6 = uVar6 - 1 & uVar6) {
          iVar15 = iVar8 + (uVar3 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                                   (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3
                                    ) & uVar11) * -0x90;
          uVar7 = local_28 & 0xff;
          uVar4 = (uint)*(byte *)(iVar15 + -0x90);
          bVar18 = uVar4 == uVar7;
          if (bVar18) {
            uVar4 = (uint)*(byte *)(iVar15 + -0x8f);
            uVar7 = (uint)bVar1;
          }
          if ((bVar18 && uVar4 == uVar7) &&
             (iVar9 = thunk_FUN_016dd50a(iVar15 + -0x8e,param_3 + 2,0x10), iVar9 == 0))
          goto LAB_01532f44;
        }
        if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
        local_4c = local_4c + 4;
        uVar3 = uVar3 + local_4c & uVar11;
      }
    }
  }
  if (param_2[2] == 0) {
    FUN_01532fe0(param_2,param_2 + 4);
  }
  iVar8 = *(int *)(param_3 + 4);
  iVar9 = *(int *)(param_3 + 8);
  iVar15 = *(int *)(param_3 + 0xc);
  iVar14 = *(int *)(param_3 + 0x10);
  param_1[2] = *(int *)param_3;
  param_1[3] = iVar8;
  param_1[4] = iVar9;
  param_1[5] = iVar15;
  param_1[6] = iVar14;
  *(undefined8 *)param_1 = uVar19;
  param_1[7] = (int)param_2;
  return;
LAB_01532f44:
  *(undefined1 *)(param_1 + 2) = 2;
  *param_1 = iVar15;
  param_1[1] = (int)param_2;
  if (((local_28 & 0xff) != 0) || ((*(uint *)(param_3 + 4) & 0x7fffffff) == 0)) {
    return;
  }
  iVar8 = *(int *)(param_3 + 8);
  if (iVar8 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar3 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar15 = uVar11 - 0x10, uVar11 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar12 = *(int *)(iVar9 + 8) + 0x10;
  iVar14 = iVar15 * uVar3 + iVar15 + -4;
  iVar15 = iVar12 + iVar14;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar15 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar15 - iVar8) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar9 + 0x14);
  uVar11 = 1 << uVar3;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar6 = *(uint *)(iVar9 + 0x10);
    uVar17 = *(uint *)(iVar9 + 0xc) | uVar6;
    if ((uVar11 & uVar17) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar6 == 0) || (uVar17 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar9,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar11 + uVar6;
      return;
    }
    puVar16 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar17 = *puVar16;
      if (uVar6 != uVar17) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar18);
    *puVar16 = uVar11 + uVar6;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar6 == uVar17) {
      return;
    }
  } while( true );
}

