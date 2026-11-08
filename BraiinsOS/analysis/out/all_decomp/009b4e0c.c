// FUN_009b4e0c @ 009b4e0c size=1960 calls_out=13 calls_in=9
// strings: 

void FUN_009b4e0c(int *param_1,uint *param_2,undefined4 *param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint local_134;
  int local_130;
  int local_e0;
  int *local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int *local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar16 = param_2[0x31];
  if (param_4 != uVar16) {
    *param_1 = 1;
    param_1[1] = uVar16;
    param_1[2] = param_4;
    param_1[3] = 0;
    return;
  }
  uVar18 = 0xcbf29ce4;
  uVar16 = 0x84222325;
  if (param_4 != 0) {
    puVar20 = param_3;
    do {
      iVar15 = puVar20[1];
      if (iVar15 != 0) {
        pbVar5 = (byte *)*puVar20;
        do {
          iVar15 = iVar15 + -1;
          uVar17 = uVar16 ^ *pbVar5;
          lVar4 = (ulonglong)uVar17 * 0x1b3;
          uVar16 = (uint)lVar4;
          uVar18 = uVar18 * 0x1b3 + (int)((ulonglong)lVar4 >> 0x20) + uVar17 * 0x100;
          pbVar5 = pbVar5 + 1;
        } while (iVar15 != 0);
      }
      puVar20 = puVar20 + 2;
    } while (puVar20 != param_3 + param_4 * 2);
  }
  uVar17 = *param_2;
  if ((uVar17 < 0xfffffff0) && ((uVar17 & 8) == 0)) {
    if (*param_2 != uVar17) {
      ClearExclusiveLocal();
      goto LAB_009b4eec;
    }
    bVar3 = (bool)hasExclusiveAccess(param_2);
    if (!bVar3) goto LAB_009b4eec;
    *param_2 = uVar17 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009b4eec:
    FUN_0127d66c(param_2);
  }
  puVar8 = param_2 + 6;
  FUN_0128236c(param_2);
  uVar17 = (uint)param_2 | 1;
  FUN_0128236c(uVar17);
  if (param_2[5] != 0) {
    uVar6 = FUN_009bd658(*puVar8,param_2[7],param_2[8],param_2[9],uVar16,uVar18);
    uVar7 = uVar6 >> 0x19;
    uVar11 = param_2[2];
    local_130 = 0;
    while( true ) {
      uVar6 = param_2[3] & uVar6;
      uVar19 = *(uint *)(uVar11 + uVar6);
      uVar12 = uVar19 ^ uVar7 * 0x1010101;
      uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
      while (uVar12 != 0) {
        uVar14 = uVar6 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 param_2[3];
        puVar13 = (uint *)((uVar11 - 0x10) + uVar14 * -0x10);
        uVar12 = uVar12 - 1 & uVar12;
        if (uVar16 == *puVar13 && uVar18 == puVar13[1]) {
          piVar10 = *(int **)(uVar11 + uVar14 * -0x10 + -8);
          do {
            iVar15 = *piVar10;
            bVar3 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar3);
          *piVar10 = iVar15 + 1;
          if (-1 < iVar15) {
            *param_1 = 5;
            param_1[1] = (int)piVar10;
            FUN_01282570(param_2);
            FUN_01282570(uVar17);
            DataMemoryBarrier(0xb);
            do {
              uVar16 = *param_2;
              bVar3 = (bool)hasExclusiveAccess(param_2);
            } while (!bVar3);
            *param_2 = uVar16 - 0x10;
            if ((uVar16 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(param_2);
              return;
            }
            return;
          }
          goto LAB_009b5594;
        }
      }
      if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
      local_130 = local_130 + 4;
      uVar6 = uVar6 + local_130;
    }
  }
  FUN_01282570(param_2);
  FUN_01282570(uVar17);
  DataMemoryBarrier(0xb);
  do {
    uVar7 = *param_2;
    bVar3 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar3);
  *param_2 = uVar7 - 0x10;
  if ((uVar7 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(param_2);
    if (*param_2 != 0) goto LAB_009b5568;
LAB_009b50a4:
    bVar3 = (bool)hasExclusiveAccess(param_2);
    if (!bVar3) goto LAB_009b556c;
    *param_2 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    if (*param_2 == 0) goto LAB_009b50a4;
LAB_009b5568:
    ClearExclusiveLocal();
LAB_009b556c:
    FUN_0127e06c(param_2);
  }
  FUN_0128236c(param_2);
  FUN_0128236c(uVar17);
  if (param_2[5] != 0) {
    uVar6 = FUN_009bd658(*puVar8,param_2[7],param_2[8],param_2[9],uVar16,uVar18);
    uVar7 = uVar6 >> 0x19;
    uVar11 = param_2[2];
    local_134 = 0;
    while( true ) {
      uVar6 = param_2[3] & uVar6;
      uVar12 = *(uint *)(uVar11 + uVar6);
      uVar19 = uVar12 ^ uVar7 * 0x1010101;
      uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff;
      while (uVar19 != 0) {
        uVar14 = uVar6 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                        (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                 param_2[3];
        puVar13 = (uint *)((uVar11 - 0x10) + uVar14 * -0x10);
        uVar19 = uVar19 - 1 & uVar19;
        if (uVar16 == *puVar13 && uVar18 == puVar13[1]) {
          piVar10 = *(int **)(uVar11 + uVar14 * -0x10 + -8);
          do {
            iVar15 = *piVar10;
            bVar3 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar3);
          *piVar10 = iVar15 + 1;
          if (iVar15 < 0) goto LAB_009b5594;
          *param_1 = 5;
          param_1[1] = (int)piVar10;
          goto LAB_009b51d0;
        }
      }
      if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
      local_134 = local_134 + 4;
      uVar6 = uVar6 + local_134;
    }
  }
  FUN_009d3c58(&local_e0,param_2 + 10,1,param_3,param_4);
  if (local_98 == -0x80000000) {
    piVar10 = local_dc;
    if (local_e0 != 5) {
      *param_1 = local_e0;
      param_1[1] = (int)local_dc;
      param_1[2] = local_d8;
      param_1[3] = local_d4;
LAB_009b51d0:
      FUN_01282570(param_2);
      FUN_01282570(uVar17);
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
LAB_009b54d4:
      ClearExclusiveLocal();
      FUN_0127db4c(param_2);
      return;
    }
  }
  else {
    local_78 = local_d8;
    local_34 = local_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    local_74 = local_d4;
    local_7c = local_dc;
    local_80 = local_e0;
    local_70 = local_d0;
    uStack_6c = uStack_cc;
    uStack_68 = uStack_c8;
    uStack_64 = uStack_c4;
    local_60 = local_c0;
    uStack_5c = uStack_bc;
    uStack_58 = uStack_b8;
    uStack_54 = uStack_b4;
    uStack_50 = uStack_b0;
    local_4c = local_ac;
    uStack_48 = uStack_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    local_38 = local_98;
    local_84 = 1;
    local_88 = 1;
    piVar10 = (int *)thunk_FUN_016d4a50(0x60);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x60);
    }
    FUN_016dd1aa(piVar10,&local_88,0x60);
  }
  do {
    iVar15 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar15 + 1;
  if (iVar15 < 0) {
LAB_009b5594:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x9b5594);
    (*pcVar1)();
  }
  uVar7 = FUN_009bd658(*puVar8,param_2[7],param_2[8],param_2[9],uVar16,uVar18);
  if (param_2[4] == 0) {
    FUN_0074a98c(param_2 + 2,puVar8);
  }
  uVar11 = param_2[3];
  puVar8 = (uint *)param_2[2];
  iVar15 = 0;
  bVar3 = false;
  uVar6 = uVar7;
  do {
    uVar6 = uVar11 & uVar6;
    uVar19 = *(uint *)((int)puVar8 + uVar6);
    uVar12 = uVar19 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
    while (uVar12 != 0) {
      uVar14 = uVar6 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                      (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar11;
      uVar12 = uVar12 - 1 & uVar12;
      if (uVar16 == puVar8[uVar14 * -4 + -4] && uVar18 == puVar8[uVar14 * -4 + -3]) {
        piVar9 = (int *)puVar8[uVar14 * -4 + -2];
        puVar8[uVar14 * -4 + -2] = (uint)piVar10;
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar9;
          bVar3 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar3);
        *piVar9 = iVar15 + -1;
        if (iVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fa50();
        }
        goto LAB_009b5490;
      }
    }
    uVar12 = uVar19 & 0x80808080;
    if (bVar3) {
LAB_009b5420:
      if ((uVar12 & uVar19 << 1) != 0) break;
      bVar3 = true;
    }
    else {
      if (uVar12 != 0) {
        local_134 = uVar6 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                    uVar11;
        goto LAB_009b5420;
      }
      bVar3 = false;
    }
    iVar15 = iVar15 + 4;
    uVar6 = iVar15 + uVar6;
  } while( true );
  uVar6 = (uint)*(char *)((int)puVar8 + local_134);
  if (-1 < (int)uVar6) {
    uVar6 = *puVar8 & 0x80808080;
    uVar12 = LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                     uVar6 >> 0x18);
    uVar6 = (uint)*(byte *)((int)puVar8 + (uVar12 >> 3));
    local_134 = uVar12 >> 3;
  }
  param_2[4] = param_2[4] - (uVar6 & 1);
  param_2[5] = param_2[5] + 1;
  bVar2 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)puVar8 + local_134) = bVar2;
  *(byte *)((int)puVar8 + (uVar11 & local_134 - 4) + 4) = bVar2;
  puVar8[local_134 * -4 + -4] = uVar16;
  puVar8[local_134 * -4 + -3] = uVar18;
  puVar8[local_134 * -4 + -2] = (uint)piVar10;
LAB_009b5490:
  *param_1 = 5;
  param_1[1] = (int)piVar10;
  FUN_01282570(param_2);
  FUN_01282570(uVar17);
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
  goto LAB_009b54d4;
}

