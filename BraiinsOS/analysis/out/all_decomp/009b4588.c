// FUN_009b4588 @ 009b4588 size=1788 calls_out=11 calls_in=4
// strings: 

int * FUN_009b4588(int param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  byte *pbVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  int iVar21;
  uint local_50;
  int local_4c;
  int local_34;
  int *local_30;
  int *local_2c;
  uint local_28;
  
  piVar15 = *(int **)(param_1 + 0xcc);
  if (param_3 != piVar15) {
    uVar11 = 0;
    iVar10 = 1;
    piVar12 = param_3;
    goto LAB_009b4c2c;
  }
  puVar18 = (uint *)(param_1 + 8);
  piVar12 = (int *)0xcbf29ce4;
  uVar11 = 0x84222325;
  if (param_3 != (int *)0x0) {
    puVar19 = param_2;
    do {
      iVar10 = puVar19[1];
      if (iVar10 != 0) {
        pbVar16 = (byte *)*puVar19;
        do {
          iVar10 = iVar10 + -1;
          uVar13 = uVar11 ^ *pbVar16;
          lVar4 = (ulonglong)uVar13 * 0x1b3;
          uVar11 = (uint)lVar4;
          piVar12 = (int *)((int)piVar12 * 0x1b3 + (int)((ulonglong)lVar4 >> 0x20) + uVar13 * 0x100)
          ;
          pbVar16 = pbVar16 + 1;
        } while (iVar10 != 0);
      }
      puVar19 = puVar19 + 2;
    } while (puVar19 != param_2 + (int)param_3 * 2);
  }
  uVar13 = *puVar18;
  if ((uVar13 < 0xfffffff0) && ((uVar13 & 8) == 0)) {
    if (*puVar18 != uVar13) {
      ClearExclusiveLocal();
      goto LAB_009b4648;
    }
    bVar3 = (bool)hasExclusiveAccess(puVar18);
    if (!bVar3) goto LAB_009b4648;
    *puVar18 = uVar13 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009b4648:
    FUN_0127d66c(puVar18);
  }
  puVar19 = (undefined4 *)(param_1 + 0x20);
  FUN_0128236c(puVar18);
  uVar13 = (uint)puVar18 | 1;
  FUN_0128236c(uVar13);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar5 = FUN_009bd658(*puVar19,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x2c),uVar11,piVar12);
    uVar6 = uVar5 >> 0x19;
    iVar10 = *(int *)(param_1 + 0x10);
    local_4c = 0;
    while( true ) {
      uVar5 = *(uint *)(param_1 + 0x14) & uVar5;
      uVar20 = *(uint *)(iVar10 + uVar5);
      uVar14 = uVar20 ^ uVar6 * 0x1010101;
      uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
      while (uVar14 != 0) {
        uVar17 = uVar5 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                        (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                 *(uint *)(param_1 + 0x14);
        puVar9 = (uint *)(iVar10 + -0x10 + uVar17 * -0x10);
        uVar14 = uVar14 - 1 & uVar14;
        if (uVar11 == *puVar9 && piVar12 == (int *)puVar9[1]) {
          piVar15 = *(int **)(iVar10 + uVar17 * -0x10 + -8);
          do {
            iVar10 = *piVar15;
            bVar3 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar3);
          *piVar15 = iVar10 + 1;
          if (-1 < iVar10) {
            FUN_01282570(puVar18);
            FUN_01282570(uVar13);
            DataMemoryBarrier(0xb);
            do {
              uVar11 = *puVar18;
              bVar3 = (bool)hasExclusiveAccess(puVar18);
            } while (!bVar3);
            *puVar18 = uVar11 - 0x10;
            if ((uVar11 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar18);
              return piVar15;
            }
            return piVar15;
          }
          goto LAB_009b4c64;
        }
      }
      if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
      local_4c = local_4c + 4;
      uVar5 = uVar5 + local_4c;
    }
  }
  FUN_01282570(puVar18);
  FUN_01282570(uVar13);
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *puVar18;
    bVar3 = (bool)hasExclusiveAccess(puVar18);
  } while (!bVar3);
  *puVar18 = uVar6 - 0x10;
  if ((uVar6 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar18);
    if (*puVar18 != 0) goto LAB_009b4c04;
LAB_009b4804:
    bVar3 = (bool)hasExclusiveAccess(puVar18);
    if (!bVar3) goto LAB_009b4c08;
    *puVar18 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    if (*puVar18 == 0) goto LAB_009b4804;
LAB_009b4c04:
    ClearExclusiveLocal();
LAB_009b4c08:
    FUN_0127e06c(puVar18);
  }
  FUN_0128236c(puVar18);
  FUN_0128236c(uVar13);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar6 = FUN_009bd658(*puVar19,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x2c),uVar11,piVar12);
    local_50 = (uVar6 >> 0x19) * 0x1010101;
    iVar10 = *(int *)(param_1 + 0x10);
    local_4c = 0;
    while( true ) {
      uVar6 = *(uint *)(param_1 + 0x14) & uVar6;
      uVar5 = *(uint *)(iVar10 + uVar6);
      uVar14 = ~(uVar5 ^ local_50) & 0x80808080 & (uVar5 ^ local_50) + 0xfefefeff;
      while (uVar14 != 0) {
        uVar20 = uVar6 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                        (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                 *(uint *)(param_1 + 0x14);
        puVar9 = (uint *)(iVar10 + -0x10 + uVar20 * -0x10);
        uVar14 = uVar14 - 1 & uVar14;
        if (uVar11 == *puVar9 && piVar12 == (int *)puVar9[1]) {
          piVar15 = *(int **)(iVar10 + uVar20 * -0x10 + -8);
          do {
            iVar10 = *piVar15;
            bVar3 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar3);
          *piVar15 = iVar10 + 1;
          if (iVar10 < 0) goto LAB_009b4c64;
          iVar10 = 5;
          goto LAB_009b4ab8;
        }
      }
      if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
      local_4c = local_4c + 4;
      uVar6 = uVar6 + local_4c;
    }
  }
  FUN_009cab78(&local_34,param_1 + 0x30,param_2,param_3);
  piVar15 = local_30;
  if (local_34 == 5) {
    do {
      iVar10 = *local_30;
      bVar3 = (bool)hasExclusiveAccess(local_30);
    } while (!bVar3);
    *local_30 = iVar10 + 1;
    if (iVar10 < 0) {
LAB_009b4c64:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x9b4c64);
      (*pcVar1)();
    }
    uVar6 = FUN_009bd658(*puVar19,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x2c),uVar11,piVar12);
    if (*(int *)(param_1 + 0x18) == 0) {
      FUN_0074a98c(param_1 + 0x10,puVar19);
    }
    uVar14 = *(uint *)(param_1 + 0x14);
    puVar9 = *(uint **)(param_1 + 0x10);
    iVar10 = 0;
    bVar3 = false;
    uVar5 = uVar6;
    do {
      uVar5 = uVar14 & uVar5;
      uVar20 = *(uint *)((int)puVar9 + uVar5);
      uVar17 = uVar20 ^ (uVar6 >> 0x19) * 0x1010101;
      uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
      while (uVar17 != 0) {
        uVar7 = uVar5 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                       (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) & uVar14
        ;
        uVar17 = uVar17 - 1 & uVar17;
        if (uVar11 == puVar9[uVar7 * -4 + -4] && piVar12 == (int *)puVar9[uVar7 * -4 + -3]) {
          piVar8 = (int *)puVar9[uVar7 * -4 + -2];
          puVar9[uVar7 * -4 + -2] = (uint)local_30;
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *piVar8;
            bVar3 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar3);
          *piVar8 = iVar10 + -1;
          if (iVar10 == 1) {
            DataMemoryBarrier(0xb);
            FUN_012c0df4();
          }
          goto LAB_009b4b2c;
        }
      }
      uVar17 = uVar20 & 0x80808080;
      if (bVar3) {
LAB_009b4a74:
        if ((uVar17 & uVar20 << 1) != 0) goto LAB_009b4b84;
        bVar3 = true;
      }
      else {
        if (uVar17 != 0) {
          local_50 = uVar5 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                            (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                     uVar14;
          goto LAB_009b4a74;
        }
        bVar3 = false;
      }
      iVar10 = iVar10 + 4;
      uVar5 = iVar10 + uVar5;
    } while( true );
  }
  uVar11 = local_28;
  piVar12 = local_2c;
  iVar10 = local_34;
LAB_009b4ab8:
  FUN_01282570(puVar18);
  FUN_01282570(uVar13);
  if (*puVar18 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar18);
      if (bVar3) {
        *puVar18 = 0;
        goto LAB_009b4b78;
      }
    } while (*puVar18 == 8);
  }
  goto LAB_009b4b6c;
LAB_009b4b84:
  uVar5 = (uint)*(char *)((int)puVar9 + local_50);
  if (-1 < (int)uVar5) {
    uVar5 = *puVar9 & 0x80808080;
    uVar20 = LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                     uVar5 >> 0x18);
    uVar5 = (uint)*(byte *)((int)puVar9 + (uVar20 >> 3));
    local_50 = uVar20 >> 3;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  iVar21 = *(int *)(param_1 + 0x1c);
  bVar2 = (byte)(uVar6 >> 0x19);
  *(byte *)((int)puVar9 + local_50) = bVar2;
  *(uint *)(param_1 + 0x18) = iVar10 - (uVar5 & 1);
  *(int *)(param_1 + 0x1c) = iVar21 + 1;
  *(byte *)((int)puVar9 + (uVar14 & local_50 - 4) + 4) = bVar2;
  puVar9[local_50 * -4 + -4] = uVar11;
  puVar9[local_50 * -4 + -3] = (uint)piVar12;
  puVar9[local_50 * -4 + -2] = (uint)local_30;
LAB_009b4b2c:
  FUN_01282570(puVar18);
  FUN_01282570(uVar13);
  iVar10 = 5;
  uVar11 = uVar13;
  if (*puVar18 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar18);
      if (bVar3) {
        *puVar18 = 0;
        return local_30;
      }
    } while (*puVar18 == 8);
  }
LAB_009b4b6c:
  ClearExclusiveLocal();
  FUN_0127db4c(puVar18);
LAB_009b4b78:
  if (iVar10 == 5) {
    return piVar15;
  }
LAB_009b4c2c:
  local_34 = iVar10;
  local_30 = piVar15;
  local_2c = piVar12;
  local_28 = uVar11;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_34,&DAT_01869dec,&DAT_01886b2c);
}

