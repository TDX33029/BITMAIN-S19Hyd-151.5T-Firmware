// FUN_009b564c @ 009b564c size=1792 calls_out=10 calls_in=12
// strings: 

void FUN_009b564c(int *param_1,uint *param_2,undefined4 *param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint local_4c;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  
  uVar14 = param_2[0x31];
  if (param_4 != uVar14) {
    *param_1 = 1;
    param_1[1] = uVar14;
    param_1[2] = param_4;
    param_1[3] = 0;
    return;
  }
  uVar18 = 0xcbf29ce4;
  uVar14 = 0x84222325;
  if (param_4 != 0) {
    puVar15 = param_3;
    do {
      iVar13 = puVar15[1];
      if (iVar13 != 0) {
        pbVar11 = (byte *)*puVar15;
        do {
          iVar13 = iVar13 + -1;
          uVar9 = uVar14 ^ *pbVar11;
          lVar4 = (ulonglong)uVar9 * 0x1b3;
          uVar14 = (uint)lVar4;
          uVar18 = uVar18 * 0x1b3 + (int)((ulonglong)lVar4 >> 0x20) + uVar9 * 0x100;
          pbVar11 = pbVar11 + 1;
        } while (iVar13 != 0);
      }
      puVar15 = puVar15 + 2;
    } while (puVar15 != param_3 + param_4 * 2);
  }
  uVar9 = *param_2;
  if ((uVar9 < 0xfffffff0) && ((uVar9 & 8) == 0)) {
    if (*param_2 != uVar9) {
      ClearExclusiveLocal();
      goto LAB_009b572c;
    }
    bVar3 = (bool)hasExclusiveAccess(param_2);
    if (!bVar3) goto LAB_009b572c;
    *param_2 = uVar9 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009b572c:
    FUN_0127d66c(param_2);
  }
  puVar17 = param_2 + 6;
  FUN_0128236c(param_2);
  uVar9 = (uint)param_2 | 1;
  FUN_0128236c(uVar9);
  if (param_2[5] != 0) {
    uVar5 = FUN_009bd658(*puVar17,param_2[7],param_2[8],param_2[9],uVar14,uVar18);
    uVar6 = uVar5 >> 0x19;
    uVar8 = param_2[2];
    local_4c = 0;
    while( true ) {
      uVar5 = param_2[3] & uVar5;
      uVar16 = *(uint *)(uVar8 + uVar5);
      uVar12 = uVar16 ^ uVar6 * 0x1010101;
      uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
      while (uVar12 != 0) {
        uVar19 = uVar5 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 param_2[3];
        puVar10 = (uint *)((uVar8 - 0x10) + uVar19 * -0x10);
        uVar12 = uVar12 - 1 & uVar12;
        if (uVar14 == *puVar10 && uVar18 == puVar10[1]) {
          piVar7 = *(int **)(uVar8 + uVar19 * -0x10 + -8);
          do {
            iVar13 = *piVar7;
            bVar3 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar3);
          *piVar7 = iVar13 + 1;
          if (-1 < iVar13) {
            *param_1 = 5;
            param_1[1] = (int)piVar7;
            FUN_01282570(param_2);
            FUN_01282570(uVar9);
            DataMemoryBarrier(0xb);
            do {
              uVar14 = *param_2;
              bVar3 = (bool)hasExclusiveAccess(param_2);
            } while (!bVar3);
            *param_2 = uVar14 - 0x10;
            if ((uVar14 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(param_2);
              return;
            }
            return;
          }
          goto LAB_009b5d24;
        }
      }
      if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
      local_4c = local_4c + 4;
      uVar5 = uVar5 + local_4c;
    }
  }
  FUN_01282570(param_2);
  FUN_01282570(uVar9);
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *param_2;
    bVar3 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar3);
  *param_2 = uVar6 - 0x10;
  if ((uVar6 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(param_2);
    if (*param_2 != 0) goto LAB_009b5d04;
LAB_009b58f8:
    bVar3 = (bool)hasExclusiveAccess(param_2);
    if (!bVar3) goto LAB_009b5d08;
    *param_2 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    if (*param_2 == 0) goto LAB_009b58f8;
LAB_009b5d04:
    ClearExclusiveLocal();
LAB_009b5d08:
    FUN_0127e06c(param_2);
  }
  FUN_0128236c(param_2);
  FUN_0128236c(uVar9);
  if (param_2[5] != 0) {
    uVar5 = FUN_009bd658(*puVar17,param_2[7],param_2[8],param_2[9],uVar14,uVar18);
    uVar6 = uVar5 >> 0x19;
    uVar8 = param_2[2];
    local_4c = 0;
    while( true ) {
      uVar5 = param_2[3] & uVar5;
      uVar12 = *(uint *)(uVar8 + uVar5);
      uVar16 = uVar12 ^ uVar6 * 0x1010101;
      uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff;
      while (uVar16 != 0) {
        uVar19 = uVar5 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                        (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 param_2[3];
        puVar10 = (uint *)((uVar8 - 0x10) + uVar19 * -0x10);
        uVar16 = uVar16 - 1 & uVar16;
        if (uVar14 == *puVar10 && uVar18 == puVar10[1]) {
          piVar7 = *(int **)(uVar8 + uVar19 * -0x10 + -8);
          do {
            iVar13 = *piVar7;
            bVar3 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar3);
          *piVar7 = iVar13 + 1;
          if (iVar13 < 0) goto LAB_009b5d24;
          *param_1 = 5;
          param_1[1] = (int)piVar7;
          goto LAB_009b5bc0;
        }
      }
      if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
      local_4c = local_4c + 4;
      uVar5 = uVar5 + local_4c;
    }
  }
  FUN_009c1bb0(&local_34,param_2 + 10,param_3,param_4);
  if (local_34 == 5) {
    do {
      iVar13 = *local_30;
      bVar3 = (bool)hasExclusiveAccess(local_30);
    } while (!bVar3);
    *local_30 = iVar13 + 1;
    if (iVar13 < 0) {
LAB_009b5d24:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x9b5d24);
      (*pcVar1)();
    }
    uVar6 = FUN_009bd658(*puVar17,param_2[7],param_2[8],param_2[9],uVar14,uVar18);
    if (param_2[4] == 0) {
      FUN_0074a98c(param_2 + 2,puVar17);
    }
    uVar8 = param_2[3];
    puVar17 = (uint *)param_2[2];
    iVar13 = 0;
    bVar3 = false;
    uVar5 = uVar6;
    do {
      uVar5 = uVar8 & uVar5;
      uVar16 = *(uint *)((int)puVar17 + uVar5);
      uVar12 = uVar16 ^ (uVar6 >> 0x19) * 0x1010101;
      uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
      while (uVar12 != 0) {
        uVar19 = uVar5 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar8
        ;
        uVar12 = uVar12 - 1 & uVar12;
        if (uVar14 == puVar17[uVar19 * -4 + -4] && uVar18 == puVar17[uVar19 * -4 + -3]) {
          piVar7 = (int *)puVar17[uVar19 * -4 + -2];
          puVar17[uVar19 * -4 + -2] = (uint)local_30;
          DataMemoryBarrier(0xb);
          do {
            iVar13 = *piVar7;
            bVar3 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar3);
          *piVar7 = iVar13 + -1;
          if (iVar13 == 1) {
            DataMemoryBarrier(0xb);
            FUN_012c0df4();
          }
          goto LAB_009b5c34;
        }
      }
      uVar12 = uVar16 & 0x80808080;
      if (bVar3) {
LAB_009b5b68:
        if ((uVar12 & uVar16 << 1) != 0) goto LAB_009b5c8c;
        bVar3 = true;
      }
      else {
        if (uVar12 != 0) {
          local_4c = uVar5 + ((uint)LZCOUNT((uVar16 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                            (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                     uVar8;
          goto LAB_009b5b68;
        }
        bVar3 = false;
      }
      iVar13 = iVar13 + 4;
      uVar5 = iVar13 + uVar5;
    } while( true );
  }
  *param_1 = local_34;
  param_1[1] = (int)local_30;
  param_1[2] = local_2c;
  param_1[3] = local_28;
LAB_009b5bc0:
  FUN_01282570(param_2);
  FUN_01282570(uVar9);
  if (*param_2 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(param_2);
      if (bVar3) {
        *param_2 = 0;
        return;
      }
    } while (*param_2 == 8);
  }
LAB_009b5c78:
  ClearExclusiveLocal();
  FUN_0127db4c(param_2);
  return;
LAB_009b5c8c:
  uVar5 = (uint)*(char *)((int)puVar17 + local_4c);
  if (-1 < (int)uVar5) {
    uVar5 = *puVar17 & 0x80808080;
    uVar12 = LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
    uVar5 = (uint)*(byte *)((int)puVar17 + (uVar12 >> 3));
    local_4c = uVar12 >> 3;
  }
  uVar12 = param_2[4];
  uVar16 = param_2[5];
  bVar2 = (byte)(uVar6 >> 0x19);
  *(byte *)((int)puVar17 + local_4c) = bVar2;
  param_2[4] = uVar12 - (uVar5 & 1);
  param_2[5] = uVar16 + 1;
  *(byte *)((int)puVar17 + (uVar8 & local_4c - 4) + 4) = bVar2;
  puVar17[local_4c * -4 + -4] = uVar14;
  puVar17[local_4c * -4 + -3] = uVar18;
  puVar17[local_4c * -4 + -2] = (uint)local_30;
LAB_009b5c34:
  *param_1 = 5;
  param_1[1] = (int)local_30;
  FUN_01282570(param_2);
  FUN_01282570(uVar9);
  if (*param_2 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(param_2);
      if (bVar3) {
        *param_2 = 0;
        return;
      }
    } while (*param_2 == 8);
  }
  goto LAB_009b5c78;
}

