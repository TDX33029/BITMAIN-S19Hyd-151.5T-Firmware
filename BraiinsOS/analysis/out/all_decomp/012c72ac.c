// FUN_012c72ac @ 012c72ac size=2844 calls_out=18 calls_in=23
// strings: 

void FUN_012c72ac(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint extraout_r1;
  uint *extraout_r1_00;
  code *pcVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  undefined8 uVar28;
  uint local_d8;
  int local_a8;
  uint *local_94;
  undefined4 *local_88;
  uint *local_68;
  int local_64;
  undefined4 uStack_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  uint *local_44;
  uint **local_40;
  code *local_3c;
  uint local_38;
  uint *local_34;
  uint local_30;
  uint uStack_2c;
  
  piVar15 = (int *)(param_2 + 8);
  if (*piVar15 == 0) {
    bVar27 = (bool)hasExclusiveAccess(piVar15);
    if (!bVar27) goto LAB_012c72ec;
    *piVar15 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_012c72ec:
    FUN_0127e06c(piVar15);
  }
  FUN_0128236c(piVar15);
  uVar2 = FUN_0128236c((uint)piVar15 | 1);
  uVar28 = thunk_FUN_016de0ee(uVar2,0x2c0);
  puVar16 = (uint *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
  if ((char)puVar16[4] == '\0') {
    FUN_015f62e4(&local_38);
    *puVar16 = local_38;
    puVar16[1] = (uint)local_34;
    puVar16[2] = local_30;
    puVar16[3] = uStack_2c;
    *(undefined1 *)(puVar16 + 4) = 1;
  }
  local_58 = *puVar16;
  uStack_54 = puVar16[1];
  uStack_50 = puVar16[2];
  local_4c = puVar16[3];
  *puVar16 = local_58 + 1;
  puVar16[1] = uStack_54 + (0xfffffffe < local_58);
  local_64 = 0;
  uStack_60 = 0;
  local_68 = &DAT_005674cc;
  local_5c = 0;
  (*(code *)param_4[3])(&local_38,param_3);
  puVar16 = local_34;
  uVar19 = local_38;
  local_88 = (undefined4 *)(param_2 + 0x20);
  if (local_30 != 0) {
    puVar20 = local_34 + local_30;
    puVar12 = (undefined4 *)(param_2 + 0x40);
    uVar17 = 0;
    uVar21 = 0;
    puVar22 = local_34;
LAB_012c73e4:
    local_94 = puVar22 + 1;
    puVar22 = (uint *)*puVar22;
    uVar18 = *puVar22;
    uVar25 = puVar22[1];
    local_44 = puVar22;
    if (*(int *)(param_2 + 0x5c) != 0) {
      uVar3 = FUN_00c5abb0(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),
                           *(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c),uVar18,
                           uVar25);
      uVar8 = uVar3 >> 0x19;
      puVar13 = *(uint **)(param_2 + 0x54);
      local_a8 = 0;
      while( true ) {
        uVar3 = (uint)puVar13 & uVar3;
        uVar24 = *(uint *)(*(int *)(param_2 + 0x50) + uVar3);
        uVar4 = uVar24 ^ uVar8 * 0x1010101;
        uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
        while (uVar4 != 0) {
          puVar23 = (uint *)(*(int *)(param_2 + 0x50) + -8 +
                            (uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >>
                                     3) & (uint)puVar13) * -8);
          uVar4 = uVar4 - 1 & uVar4;
          uVar2 = 0;
          if (uVar18 == *puVar23 && uVar25 == puVar23[1]) goto LAB_012c7b08;
        }
        if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
        local_a8 = local_a8 + 4;
        uVar3 = uVar3 + local_a8;
      }
    }
    if (*(int *)(param_2 + 0x3c) == 0) {
      uVar18 = puVar22[5];
      uVar25 = puVar22[6];
    }
    else {
      uVar18 = puVar22[5];
      uVar25 = puVar22[6];
      uVar3 = FUN_01620b88(*puVar12,*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x48),
                           *(undefined4 *)(param_2 + 0x4c),uVar18,uVar25);
      uVar8 = uVar3 >> 0x19;
      iVar11 = *(int *)(param_2 + 0x30);
      uVar4 = *(uint *)(param_2 + 0x34);
      iVar26 = 0;
      while( true ) {
        uVar3 = uVar4 & uVar3;
        uVar5 = *(uint *)(iVar11 + uVar3);
        uVar24 = uVar5 ^ uVar8 * 0x1010101;
        for (uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff; uVar24 != 0;
            uVar24 = uVar24 - 1 & uVar24) {
          uVar6 = uVar3 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                         (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                  uVar4;
          iVar7 = iVar11 + -0x18 + uVar6 * -0x18;
          if ((uVar25 == *(uint *)(iVar7 + 8)) &&
             (iVar7 = thunk_FUN_016dd50a(uVar18,*(undefined4 *)(iVar7 + 4),uVar25), iVar7 == 0)) {
            iVar11 = iVar11 + uVar6 * -0x18;
            if (*(uint *)(iVar11 + -8) == puVar22[2] && *(uint *)(iVar11 + -4) == puVar22[3])
            goto joined_r0x012c765c;
            local_40 = &local_44;
            local_3c = FUN_012c3c34;
            FUN_00600d2c(&local_38,&DAT_00594a5f,&local_40);
            goto LAB_012c7af8;
          }
        }
        if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
        iVar26 = iVar26 + 4;
        uVar3 = uVar3 + iVar26;
      }
    }
joined_r0x012c765c:
    if (uVar25 == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = thunk_FUN_016d4a50(uVar25);
      if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar25);
      }
    }
    FUN_016dd1aa(uVar8,uVar18,uVar25);
    uVar4 = puVar22[2];
    uVar18 = puVar22[3];
    uVar3 = FUN_01620b88(*puVar12,*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x48),
                         *(undefined4 *)(param_2 + 0x4c),uVar8,uVar25);
    if (*(int *)(param_2 + 0x38) == 0) {
      FUN_0128df08(param_2 + 0x30,puVar12);
    }
    uVar5 = *(uint *)(param_2 + 0x34);
    puVar13 = *(uint **)(param_2 + 0x30);
    bVar27 = false;
    iVar11 = 0;
    uVar24 = uVar3;
    do {
      uVar24 = uVar5 & uVar24;
      uVar9 = *(uint *)((int)puVar13 + uVar24);
      uVar6 = uVar9 ^ (uVar3 >> 0x19) * 0x1010101;
      for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6)
      {
        uVar10 = uVar24 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                         (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar5;
        if ((uVar25 == puVar13[uVar10 * -6 + -4]) &&
           (iVar26 = thunk_FUN_016dd50a(uVar8,puVar13[uVar10 * -6 + -5],uVar25), iVar26 == 0)) {
          puVar13[uVar10 * -6 + -2] = uVar4;
          puVar13[uVar10 * -6 + -1] = uVar18;
          if (uVar25 != 0) {
            thunk_FUN_016d3fb4(uVar8);
            uVar18 = extraout_r1;
          }
          goto LAB_012c7818;
        }
      }
      uVar10 = uVar9 & 0x80808080;
      uVar6 = local_d8;
      if (bVar27) {
LAB_012c77c0:
        if ((uVar10 & uVar9 << 1) != 0) goto LAB_012c7860;
        bVar27 = true;
        local_d8 = uVar6;
      }
      else {
        if (uVar10 != 0) {
          uVar6 = uVar24 + ((uint)LZCOUNT((uVar9 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                  uVar5;
          goto LAB_012c77c0;
        }
        bVar27 = false;
      }
      iVar11 = iVar11 + 4;
      uVar24 = iVar11 + uVar24;
    } while( true );
  }
  uVar17 = 0;
  uVar21 = 0;
LAB_012c7908:
  if (uVar19 != 0) {
    thunk_FUN_016d3fb4(puVar16);
  }
  uVar18 = FUN_00c5abb0(*local_88,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                        *(undefined4 *)(param_2 + 0x2c),uVar17,uVar21);
  iVar11 = 0;
  uVar19 = uVar18;
  while( true ) {
    uVar19 = *(uint *)(param_2 + 0x14) & uVar19;
    uVar25 = *(uint *)(*(int *)(param_2 + 0x10) + uVar19);
    uVar8 = uVar25 ^ (uVar18 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      puVar16 = (uint *)(*(int *)(param_2 + 0x10) + -0x10 +
                        (uVar19 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                 (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3)
                        & *(uint *)(param_2 + 0x14)) * -0x10);
      uVar8 = uVar8 - 1 & uVar8;
      if (*puVar16 == uVar17 && puVar16[1] == uVar21) {
        iVar11 = 0;
        *param_1 = 0;
        if (local_64 != 0) {
          iVar11 = local_64 * 9;
        }
        if (local_64 != 0 && iVar11 != -0xd) {
          thunk_FUN_016d3fb4(local_68 + local_64 * -2 + -2);
        }
        if ((code *)*param_4 != (code *)0x0) {
          (*(code *)*param_4)(param_3);
        }
        iVar11 = param_4[1];
        goto joined_r0x012c7b84;
      }
    }
    if ((uVar25 & 0x80808080 & uVar25 << 1) != 0) break;
    iVar11 = iVar11 + 4;
    uVar19 = uVar19 + iVar11;
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_012b5984((int *)(param_2 + 0x10),local_88);
  }
  uVar19 = local_5c;
  iVar11 = local_64;
  puVar16 = local_68;
  if (local_64 != 0) {
    local_94 = local_68 + local_64 * -2 + -2;
    local_88 = (undefined4 *)(uint)(local_64 * 9 == -0xd);
  }
  uVar8 = *local_68;
  uVar25 = local_5c;
  if (*(int *)(param_2 + 0x5c) != 0) {
    uVar25 = local_5c + 1 >> 1;
  }
  if (*(uint *)(param_2 + 0x58) < uVar25) {
    FUN_012b5ff4(param_2 + 0x50,uVar25,param_2 + 0x60);
  }
  puVar22 = puVar16 + 1;
  uVar25 = ~uVar8 & 0x80808080;
  for (; uVar19 != 0; uVar19 = uVar19 - 1) {
    puVar20 = puVar22;
    if (uVar25 == 0) {
      do {
        puVar22 = puVar20 + 1;
        uVar25 = *puVar20;
        puVar16 = puVar16 + -8;
        puVar20 = puVar22;
      } while ((uVar25 & 0x80808080) == 0x80808080);
      uVar25 = uVar25 & 0x80808080 ^ 0x80808080;
    }
    uVar8 = LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                    uVar25 >> 0x18) & 0x38;
    FUN_012c1f7c(param_2 + 0x50,0x80808080,*(undefined4 *)((int)puVar16 + (-8 - uVar8)),
                 *(undefined4 *)((int)puVar16 + (-4 - uVar8)));
    uVar25 = uVar25 - 1 & uVar25;
  }
  if (((uint)local_88 & 1) == 0 && iVar11 != 0) {
    thunk_FUN_016d3fb4(local_94);
  }
  puVar16 = *(uint **)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 0x14);
  uVar19 = uVar8 & uVar18;
  uVar25 = *(uint *)((int)puVar16 + uVar19) & 0x80808080;
  if (uVar25 == 0) {
    iVar11 = 4;
    do {
      uVar19 = uVar19 + iVar11;
      iVar11 = iVar11 + 4;
      uVar19 = uVar19 & uVar8;
      uVar25 = *(uint *)((int)puVar16 + uVar19) & 0x80808080;
    } while (uVar25 == 0);
  }
  uVar19 = uVar19 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                   (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3) & uVar8;
  uVar25 = (uint)*(char *)((int)puVar16 + uVar19);
  if (-1 < (int)uVar25) {
    uVar19 = *puVar16 & 0x80808080;
    uVar19 = LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                     (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18);
    uVar25 = (uint)*(byte *)((int)puVar16 + (uVar19 >> 3));
    uVar19 = uVar19 >> 3;
  }
  iVar11 = *(int *)(param_2 + 0x18);
  iVar26 = *(int *)(param_2 + 0x1c);
  *param_1 = 5;
  bVar1 = (byte)(uVar18 >> 0x19);
  *(byte *)((int)puVar16 + uVar19) = bVar1;
  *(uint *)(param_2 + 0x18) = iVar11 - (uVar25 & 1);
  *(int *)(param_2 + 0x1c) = iVar26 + 1;
  *(byte *)((int)puVar16 + (uVar19 - 4 & uVar8) + 4) = bVar1;
  puVar16[uVar19 * -4 + -4] = uVar17;
  puVar16[uVar19 * -4 + -3] = uVar21;
  puVar16[uVar19 * -4 + -1] = (uint)param_4;
  puVar16[uVar19 * -4 + -2] = param_3;
LAB_012c7b90:
  FUN_01282570(piVar15);
  FUN_01282570((uint)piVar15 | 1);
  if (*piVar15 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar27 = (bool)hasExclusiveAccess(piVar15);
      if (bVar27) {
        *piVar15 = 0;
        return;
      }
    } while (*piVar15 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar15);
  return;
LAB_012c7860:
  uVar24 = (uint)*(char *)((int)puVar13 + uVar6);
  if (-1 < (int)uVar24) {
    uVar24 = *puVar13 & 0x80808080;
    uVar6 = LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                    (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18);
    uVar24 = (uint)*(byte *)((int)puVar13 + (uVar6 >> 3));
    uVar6 = uVar6 >> 3;
  }
  iVar11 = *(int *)(param_2 + 0x38);
  iVar26 = *(int *)(param_2 + 0x3c);
  bVar1 = (byte)(uVar3 >> 0x19);
  *(byte *)((int)puVar13 + uVar6) = bVar1;
  *(uint *)(param_2 + 0x38) = iVar11 - (uVar24 & 1);
  *(int *)(param_2 + 0x3c) = iVar26 + 1;
  *(byte *)((int)puVar13 + (uVar5 & uVar6 - 4) + 4) = bVar1;
  puVar13[uVar6 * -6 + -2] = uVar4;
  puVar13[uVar6 * -6 + -1] = uVar18;
  puVar13[uVar6 * -6 + -6] = uVar25;
  puVar13[uVar6 * -6 + -5] = uVar8;
  puVar13[uVar6 * -6 + -4] = uVar25;
  uVar18 = uVar4;
LAB_012c7818:
  iVar11 = FUN_012c1f7c(&local_68,uVar18,*puVar22,puVar22[1]);
  if (iVar11 == 0) {
    bVar27 = CARRY4(*puVar22,uVar17);
    uVar17 = *puVar22 + uVar17;
    uVar21 = puVar22[1] + uVar21 + (uint)bVar27;
    puVar22 = local_94;
    if (local_94 == puVar20) goto LAB_012c7908;
    goto LAB_012c73e4;
  }
  local_40 = (uint **)(puVar22 + 4);
  local_3c = (code *)&LAB_00787c90;
  FUN_00600d2c(&local_38,&DAT_0057f7e1,&local_40);
LAB_012c7af8:
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  uVar2 = 2;
  puVar13 = local_34;
LAB_012c7b08:
  *param_1 = uVar2;
  if (uVar19 != 0) {
    thunk_FUN_016d3fb4(puVar16);
    puVar13 = extraout_r1_00;
  }
  if (local_64 != 0) {
    puVar13 = (uint *)(local_64 * 9);
  }
  if (local_64 != 0 && puVar13 != (uint *)0xfffffff3) {
    thunk_FUN_016d3fb4(local_68 + local_64 * -2 + -2);
    pcVar14 = (code *)*param_4;
  }
  else {
    pcVar14 = (code *)*param_4;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(param_3);
  }
  iVar11 = param_4[1];
joined_r0x012c7b84:
  if (iVar11 != 0) {
    thunk_FUN_016d3fb4(param_3);
  }
  goto LAB_012c7b90;
}

