// FUN_009e17f4 @ 009e17f4 size=2844 calls_out=21 calls_in=0
// strings: lock poisonedPatternIDError | Span not found; this is a bugnewtime.busytime.idleenter

void FUN_009e17f4(int param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint *****pppppuVar3;
  code *pcVar4;
  uint ****ppppuVar5;
  uint ***pppuVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint ****ppppuVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int extraout_r2;
  uint ***pppuVar18;
  uint uVar19;
  longlong *plVar20;
  uint ***pppuVar21;
  undefined4 uVar22;
  uint *puVar23;
  undefined4 uVar24;
  int iVar25;
  char *pcVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  bool bVar30;
  ulonglong uVar31;
  int local_f8;
  int local_ec;
  uint local_d0 [2];
  uint local_c8;
  uint local_c4;
  int local_c0;
  uint local_b4;
  uint ****local_b0;
  uint local_ac;
  uint ****local_a8;
  undefined *local_a0;
  undefined4 local_9c;
  uint **local_98;
  uint **local_94;
  uint ****local_8c;
  undefined *local_88;
  undefined *local_84;
  uint ****local_80;
  uint local_7c;
  uint ****local_78;
  uint **local_74;
  undefined4 local_70;
  uint *****local_6c;
  undefined4 local_68;
  undefined **local_64;
  uint ****local_60;
  uint local_5c;
  uint ****local_58;
  uint local_54;
  uint *****local_50;
  uint ***local_4c;
  int local_44;
  uint *****local_40;
  code *local_3c;
  uint ****local_38;
  uint local_34;
  uint ****local_30;
  uint *****local_2c;
  uint ****local_28;
  
  iVar7 = *param_2;
  iVar13 = param_2[1];
  uVar24 = *(undefined4 *)(param_1 + 0x118);
  uVar22 = *(undefined4 *)(param_1 + 0x11c);
  FUN_009f418c(local_d0);
  if ((local_d0[0] & 1) == 0) {
    return;
  }
  puVar23 = (uint *)(param_1 + 0x30);
  uVar8 = *(uint *)(param_1 + 0x30);
  if (uVar8 < 0x3ffffffe) {
    if (*puVar23 != uVar8) {
      ClearExclusiveLocal();
      goto LAB_009e2204;
    }
    bVar30 = (bool)hasExclusiveAccess(puVar23);
    if (!bVar30) goto LAB_009e2204;
    *puVar23 = uVar8 + 1;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009e2204:
    FUN_015bebb8(puVar23);
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar7 = FUN_015bf3f8(), iVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("lock poisonedPatternIDError",0xd,&DAT_0186b83c);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar23;
      bVar30 = (bool)hasExclusiveAccess(puVar23);
    } while (!bVar30);
    *puVar23 = uVar8 - 1;
    if ((uVar8 - 1 & 0xbfffffff) == 0x80000000) {
      FUN_015e9814(puVar23);
    }
    goto LAB_009e1b7c;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar28 = *param_2;
    iVar29 = param_2[1];
    uVar9 = FUN_009ee3b8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                         *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),iVar28,
                         iVar29,iVar7,iVar13,uVar24,uVar22);
    uVar8 = uVar9 >> 0x19;
    iVar7 = *(int *)(param_1 + 0x40);
    uVar14 = *(uint *)(param_1 + 0x44);
    local_ec = 0;
    while( true ) {
      uVar9 = uVar14 & uVar9;
      uVar17 = *(uint *)(iVar7 + uVar9);
      uVar10 = uVar17 ^ uVar8 * 0x1010101;
      uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
      while (uVar10 != 0) {
        uVar19 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                        (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 uVar14;
        piVar27 = (int *)(iVar7 + -0x18 + uVar19 * -0x18);
        uVar10 = uVar10 - 1 & uVar10;
        if (iVar28 == *piVar27 && iVar29 == piVar27[1]) {
          iVar13 = thunk_FUN_016de0ee(uVar10,uVar14,0x2a8);
          puVar15 = (uint *)(iVar13 + extraout_r2);
          if ((*puVar15 & 1) == 0) {
            FUN_0162b20c(&local_40);
          }
          else {
            local_40 = (uint *****)puVar15[1];
            local_3c = (code *)puVar15[2];
            local_38 = (uint ****)puVar15[3];
            local_34 = puVar15[4];
          }
          local_54 = local_34;
          local_60 = (uint ****)local_40;
          local_5c = (uint)local_3c;
          local_58 = local_38;
          iVar13 = *(int *)(param_1 + 0x90 + (int)local_3c * 4);
          DataMemoryBarrier(0xb);
          if ((iVar13 == 0) ||
             (piVar27 = (int *)(iVar13 + local_34 * 0x14), (char)piVar27[4] == '\0')) {
            local_34 = 0;
            local_38 = (uint ****)&DAT_00000004;
            local_3c = (code *)0x0;
            local_40 = (uint *****)0x0;
            piVar27 = (int *)FUN_009f14cc(param_1 + 0x90,&local_60,&local_40);
          }
          if (*piVar27 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb715c(&DAT_0186b82c);
          }
          iVar7 = iVar7 + uVar19 * -0x18;
          *piVar27 = -1;
          iVar28 = *(int *)(iVar7 + -8);
          iVar29 = *(int *)(iVar7 + -4);
          iVar13 = 0;
          goto LAB_009e1a5c;
        }
      }
      if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
      local_ec = local_ec + 4;
      uVar9 = uVar9 + local_ec;
    }
  }
  goto LAB_009e1b54;
  while( true ) {
    iVar11 = FUN_016a44cc(iVar25);
    iVar13 = iVar16 + 0x28;
    if (iVar11 != 0) break;
LAB_009e1a5c:
    iVar16 = iVar13;
    if (iVar29 * 0x28 == iVar16) {
      uVar8 = *(uint *)(iVar7 + -0x10);
      goto LAB_009e1b20;
    }
    iVar25 = iVar28 + iVar16;
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar25 + 0x24) != '\0') break;
  }
  uVar8 = *(uint *)(iVar28 + iVar16 + 0x20);
  if (iVar28 + iVar16 + 0x28 != iVar28 + iVar29 * 0x28) {
    pcVar26 = (char *)(iVar25 + 0x4c);
    uVar9 = (uint)((iVar29 * 0x28 + -0x28) - iVar16) / 0x28;
    do {
      DataMemoryBarrier(0xb);
      if (((*pcVar26 != '\0') || (iVar7 = FUN_016a44cc(pcVar26 + -0x24), iVar7 != 0)) &&
         (*(uint *)(pcVar26 + -4) < uVar8)) {
        uVar8 = *(uint *)(pcVar26 + -4);
      }
      pcVar26 = pcVar26 + 0x28;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_009e1b20:
  iVar7 = piVar27[3];
  if (iVar7 == piVar27[1]) {
    FUN_016a849c(piVar27 + 1);
  }
  *(uint *)(piVar27[2] + iVar7 * 4) = uVar8;
  piVar27[3] = iVar7 + 1;
  *piVar27 = *piVar27 + 1;
LAB_009e1b54:
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar23;
    bVar30 = (bool)hasExclusiveAccess(puVar23);
  } while (!bVar30);
  *puVar23 = uVar8 - 1;
  if ((uVar8 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_015e9814(puVar23);
  }
LAB_009e1b7c:
  iVar7 = *param_2;
  iVar13 = param_2[1];
  bVar1 = *(byte *)(param_1 + 0x139);
  if ((bVar1 & 2) == 0) {
    bVar30 = (bVar1 & 8) != 0;
    if (bVar30) {
      param_2 = (int *)(uint)*(byte *)(param_1 + 0x138);
    }
    if (!bVar30 || ((uint)param_2 & 1) == 0) {
      return;
    }
  }
  if ((local_c0 != 0) &&
     (FUN_016a4f80(&local_60,local_c0,iVar7 + -1), ppppuVar12 = local_60, local_60 != (uint ****)0x0
     )) {
    local_34 = local_5c;
    local_30 = local_58;
    local_3c = (code *)0x0;
    local_40 = (uint *****)0x0;
    local_38 = local_60;
    if (((uint)*local_60 & local_c8) == 0 && ((uint)local_60[1] & local_c4) == 0) {
      local_a8 = local_58;
      local_ac = local_5c;
      local_b0 = local_60;
      local_b4 = local_c4;
      uVar31 = FUN_016a11a4(local_60);
      puVar23 = (uint *)uVar31;
      if (puVar23[6] != 0) {
        uVar14 = puVar23[4];
        uVar8 = puVar23[3];
        uVar9 = uVar14 & 0x852d8214;
        local_f8 = 0;
        while( true ) {
          uVar10 = *(uint *)(uVar8 + uVar9);
          uVar17 = (uVar10 & 0x80808080 ^ 0x80808080) & (uVar10 ^ 0x42424242) + 0xfefefeff;
          while (uVar17 != 0) {
            uVar19 = uVar9 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                            (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                     uVar14;
            piVar27 = (int *)((uVar8 - 0x18) + uVar19 * -0x18);
            uVar17 = uVar17 - 1 & uVar17;
            if ((*piVar27 == 0x51809c7c && piVar27[2] == -0x7ad27dec) &&
                (piVar27[1] == 0x4a853532 && piVar27[3] == 0x7af5abf6)) {
              iVar28 = uVar8 + uVar19 * -0x18;
              plVar20 = *(longlong **)(iVar28 + -8);
              (**(code **)(*(int *)(iVar28 + -4) + 0xc))(&local_40,plVar20);
              if ((local_40 == (uint *****)0x51809c7c && local_38 == (uint ****)0x852d8214) &&
                  (local_3c == (code *)0x4a853532 && local_34 == 0x7af5abf6)) {
                puVar15 = (uint *)(plVar20 + 2);
                uVar8 = *puVar15;
                iVar28 = *(int *)((int)plVar20 + 0x14);
                if (uVar8 == 0 && iVar28 == 0) {
                  FUN_015f3b0c(&local_40,1);
                  ppppuVar5 = local_38;
                  pcVar4 = local_3c;
                  pppppuVar3 = local_40;
                  local_60 = *(uint *****)(plVar20 + 3);
                  local_58 = *(uint *****)(plVar20 + 4);
                  local_5c = *(uint *)((int)plVar20 + 0x1c);
                  local_7c = (uint)local_3c;
                  local_80 = (uint ****)local_40;
                  local_78 = local_38;
                  FUN_015f3c24(&local_40,&local_80,&local_60);
                  *(uint ******)(plVar20 + 3) = pppppuVar3;
                  *(code **)((int)plVar20 + 0x1c) = pcVar4;
                  lVar2 = ZEXT48(local_38) * 1000000000 + CONCAT44(local_34 * 1000000000,local_30) +
                          *plVar20;
                  if (((uint)local_40 & 1) != 0) {
                    lVar2 = *plVar20;
                  }
                  *plVar20 = lVar2;
                  *(uint *****)(plVar20 + 4) = ppppuVar5;
                  uVar8 = *puVar15;
                  iVar28 = *(int *)((int)plVar20 + 0x14);
                }
                *puVar15 = uVar8 + 1;
                *(uint *)((int)plVar20 + 0x14) = iVar28 + (uint)(0xfffffffe < uVar8);
              }
              goto LAB_009e1ec8;
            }
          }
          if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
          local_f8 = local_f8 + 4;
          uVar9 = uVar9 + local_f8 & uVar14;
        }
      }
LAB_009e1ec8:
      if ((bVar1 & 2) != 0) {
        local_4c = ppppuVar12[0xc];
        local_84 = &DAT_0186b55c;
        local_8c = (uint ****)&local_80;
        local_64 = &local_a0;
        local_6c = &local_8c;
        local_98 = local_4c[9];
        local_94 = local_4c[10];
        local_70 = 0;
        local_5c = 0;
        local_50 = (uint *****)&local_6c;
        local_9c = 1;
        local_a0 = &DAT_018aeb80;
        local_88 = &DAT_0186b5d4;
        local_7c = 1;
        local_80 = (uint ****)&DAT_018aeb80;
        local_68 = 1;
        local_60 = (uint ****)0x2;
        local_78 = (uint ****)local_98;
        local_74 = local_94;
        local_58 = (uint ****)iVar7;
        local_54 = iVar13;
        if ((((uVar31 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
          *(undefined1 *)(puVar23 + 2) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar23;
          bVar30 = (bool)hasExclusiveAccess(puVar23);
        } while (!bVar30);
        *puVar23 = uVar8 + 0xc0000001;
        if (0x3fffffff < uVar8 + 0xc0000001) {
          FUN_015e9814(puVar23);
        }
        pppuVar21 = local_b0[0xe];
        ppppuVar12 = local_b0 + 0xe;
        DataMemoryBarrier(0xb);
        do {
          if (((uint)pppuVar21 & 3) == 2) {
            local_28 = (uint ****)0x2;
            local_3c = FUN_00facc48;
            local_40 = &local_28;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0041504f,&local_40,&DAT_018ae754);
          }
          uVar8 = ((uint)pppuVar21 & 0x3fffffff) >> 2;
          uVar14 = (uint)pppuVar21 & 3 ^ 1;
          pppuVar18 = (uint ***)((uint)pppuVar21 & 0xc0000000 | 3);
          uVar9 = uVar8 ^ 1;
          if (uVar14 != 0 || uVar9 != 0) {
            pppuVar18 = (uint ***)(uVar8 * 4 - 4 | (uint)pppuVar21 & 0xc0000003);
          }
          pppuVar6 = *ppppuVar12;
          if (*ppppuVar12 == pppuVar21) {
            DataMemoryBarrier(0xb);
            do {
              bVar30 = (bool)hasExclusiveAccess(ppppuVar12);
              if (bVar30) {
                *ppppuVar12 = pppuVar18;
                DataMemoryBarrier(0xb);
                if (uVar14 == 0 && uVar9 == 0) {
                  FUN_009ebe80(local_ac,local_a8);
                }
                local_28 = (uint ****)&local_60;
                local_2c = &local_28;
                local_38 = (uint ****)local_c0;
                local_30 = (uint ****)&local_44;
                local_3c = (code *)local_c4;
                local_44 = param_1 + 0x120;
                FUN_009e4aa0(&local_40);
                return;
              }
              pppuVar6 = *ppppuVar12;
            } while (*ppppuVar12 == pppuVar21);
          }
          pppuVar21 = pppuVar6;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        } while( true );
      }
      if ((((uVar31 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(puVar23 + 2) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar23;
        bVar30 = (bool)hasExclusiveAccess(puVar23);
      } while (!bVar30);
      *puVar23 = uVar8 + 0xc0000001;
      if (0x3fffffff < uVar8 + 0xc0000001) {
        FUN_015e9814(puVar23);
      }
      pppuVar21 = local_b0[0xe];
      ppppuVar12 = local_b0 + 0xe;
      DataMemoryBarrier(0xb);
      do {
        if (((uint)pppuVar21 & 3) == 2) {
          local_60 = (uint ****)0x2;
          local_3c = FUN_00facc48;
          local_40 = &local_60;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0041504f,&local_40,&DAT_018ae754);
        }
        uVar8 = ((uint)pppuVar21 & 0x3fffffff) >> 2;
        uVar14 = (uint)pppuVar21 & 3 ^ 1;
        pppuVar18 = (uint ***)((uint)pppuVar21 & 0xc0000000 | 3);
        uVar9 = uVar8 ^ 1;
        if (uVar14 != 0 || uVar9 != 0) {
          pppuVar18 = (uint ***)(uVar8 * 4 - 4 | (uint)pppuVar21 & 0xc0000003);
        }
        pppuVar6 = *ppppuVar12;
        if (*ppppuVar12 == pppuVar21) {
          DataMemoryBarrier(0xb);
          do {
            bVar30 = (bool)hasExclusiveAccess(ppppuVar12);
            if (bVar30) {
              *ppppuVar12 = pppuVar18;
              DataMemoryBarrier(0xb);
              if (uVar14 == 0 && uVar9 == 0) {
                FUN_009ebe80(local_ac,local_a8);
                return;
              }
              return;
            }
            pppuVar6 = *ppppuVar12;
          } while (*ppppuVar12 == pppuVar21);
        }
        pppuVar21 = pppuVar6;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      } while( true );
    }
    FUN_009ee6c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b5c4);
}

