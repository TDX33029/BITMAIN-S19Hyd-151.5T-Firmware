// FUN_009df4e8 @ 009df4e8 size=1844 calls_out=12 calls_in=0
// strings: Span not found; this is a bugnewtime.busytime.idleenter

/* WARNING: Type propagation algorithm not settling */

void FUN_009df4e8(undefined **param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined **ppuVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  int *piVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  ulonglong uVar24;
  int local_d8;
  uint local_b8 [2];
  uint *local_b0;
  uint local_ac;
  int local_a8;
  uint *local_a0;
  uint local_9c;
  uint *local_98;
  int local_94;
  undefined4 local_90;
  int local_8c;
  undefined **local_84;
  undefined *local_80;
  undefined *local_7c;
  undefined *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined ***local_64;
  undefined4 local_60;
  undefined ***local_5c;
  undefined **local_58;
  int local_54;
  uint *local_50;
  undefined4 local_4c;
  undefined **local_48;
  code *local_44;
  uint *local_40;
  int local_3c;
  undefined ****local_38;
  uint local_34;
  undefined **local_30;
  undefined ***local_2c;
  code *local_28;
  
  iVar21 = *param_2;
  iVar18 = param_2[1];
  FUN_009f418c(local_b8);
  if ((local_b8[0] & 1) == 0) {
    return;
  }
  bVar1 = *(byte *)((int)param_1 + 0x15);
  if ((bVar1 & 4) == 0) {
    bVar23 = (bVar1 & 8) != 0;
    if (bVar23) {
      local_b8[0] = (uint)*(byte *)(param_1 + 5);
    }
    if (!bVar23 || (local_b8[0] & 1) == 0) {
      return;
    }
  }
  if ((local_a8 != 0) &&
     (FUN_016a4f80(&local_a0,local_a8,iVar21 + -1), puVar8 = local_a0, local_a0 != (uint *)0x0)) {
    local_3c = local_9c;
    local_38 = (undefined ****)local_98;
    local_44 = (code *)0x0;
    local_48 = (undefined **)0x0;
    local_34 = local_a8;
    local_40 = local_a0;
    if ((*local_a0 & (uint)local_b0) == 0 && (local_a0[1] & local_ac) == 0) {
      local_90 = local_98;
      local_a0 = local_b0;
      local_94 = local_9c;
      local_8c = local_a8;
      local_98 = puVar8;
      local_9c = local_ac;
      uVar24 = FUN_016a11a4(puVar8);
      puVar5 = (uint *)uVar24;
      if (puVar5[6] != 0) {
        uVar13 = puVar5[4];
        uVar6 = puVar5[3];
        uVar9 = uVar13 & 0x852d8214;
        local_d8 = 0;
        while( true ) {
          uVar15 = *(uint *)(uVar6 + uVar9);
          uVar22 = (uVar15 & 0x80808080 ^ 0x80808080) & (uVar15 ^ 0x42424242) + 0xfefefeff;
          while (uVar22 != 0) {
            uVar11 = uVar9 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                            (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                     uVar13;
            piVar19 = (int *)((uVar6 - 0x18) + uVar11 * -0x18);
            uVar22 = uVar22 - 1 & uVar22;
            if ((*piVar19 == 0x51809c7c && piVar19[2] == -0x7ad27dec) &&
                (piVar19[1] == 0x4a853532 && piVar19[3] == 0x7af5abf6)) {
              iVar7 = uVar6 + uVar11 * -0x18;
              iVar16 = *(int *)(iVar7 + -8);
              pcVar12 = *(code **)(*(int *)(iVar7 + -4) + 0xc);
              (*pcVar12)(&local_48,iVar16,pcVar12,uVar13,param_5);
              if ((local_48 == (undefined **)0x51809c7c && local_40 == (uint *)0x852d8214) &&
                  (local_44 == (code *)0x4a853532 && local_3c == 0x7af5abf6)) {
                plVar17 = (longlong *)(iVar16 + 8);
                iVar7 = *(int *)(iVar16 + 0x10) + -1;
                iVar10 = *(int *)(iVar16 + 0x14) - (uint)(*(int *)(iVar16 + 0x10) == 0);
                *(int *)(iVar16 + 0x10) = iVar7;
                *(int *)(iVar16 + 0x14) = iVar10;
                if (iVar7 == 0 && iVar10 == 0) {
                  FUN_015f3b0c(&local_48,1);
                  puVar4 = local_40;
                  pcVar12 = local_44;
                  ppuVar3 = local_48;
                  local_78 = *(undefined **)(iVar16 + 0x18);
                  local_70 = *(undefined4 *)(iVar16 + 0x20);
                  local_74 = *(undefined4 *)(iVar16 + 0x1c);
                  local_54 = (int)local_44;
                  local_58 = local_48;
                  local_50 = local_40;
                  FUN_015f3c24(&local_48,&local_58,&local_78);
                  *(undefined ***)(iVar16 + 0x18) = ppuVar3;
                  lVar2 = ZEXT48(local_40) * 1000000000 + CONCAT44(local_3c * 1000000000,local_38) +
                          *plVar17;
                  bVar23 = ((uint)local_48 & 1) != 0;
                  uVar20 = (int)lVar2;
                  if (bVar23) {
                    uVar20 = *(undefined4 *)plVar17;
                  }
                  *(code **)(iVar16 + 0x1c) = pcVar12;
                  uVar14 = (int)((ulonglong)lVar2 >> 0x20);
                  if (bVar23) {
                    uVar14 = *(undefined4 *)(iVar16 + 0xc);
                  }
                  *(undefined4 *)plVar17 = uVar20;
                  *(uint **)(iVar16 + 0x20) = puVar4;
                  *(undefined4 *)(iVar16 + 0xc) = uVar14;
                }
              }
              goto joined_r0x009df9a8;
            }
          }
          if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
          local_d8 = local_d8 + 4;
          uVar9 = uVar9 + local_d8 & uVar13;
        }
      }
joined_r0x009df9a8:
      if ((bVar1 & 4) != 0) {
        local_34 = puVar8[0xc];
        local_70 = *(undefined4 *)(local_34 + 0x24);
        local_6c = *(undefined4 *)(local_34 + 0x28);
        local_38 = &local_64;
        local_7c = &DAT_0186b55c;
        local_84 = &local_78;
        local_58 = (undefined **)&DAT_018aeb80;
        local_78 = &DAT_018aeb80;
        local_5c = &local_58;
        local_68 = 0;
        local_44 = (code *)0x0;
        local_64 = &local_84;
        local_54 = 1;
        local_80 = &DAT_0186b57c;
        local_74 = 1;
        local_60 = 1;
        local_48 = (undefined **)0x2;
        local_50 = (uint *)local_70;
        local_4c = local_6c;
        local_40 = (uint *)iVar21;
        local_3c = iVar18;
        if ((((uVar24 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar18 = FUN_015bf3f8(), iVar18 == 0)) {
          *(undefined1 *)(puVar5 + 2) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          uVar6 = *puVar5;
          bVar23 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar23);
        *puVar5 = uVar6 + 0xc0000001;
        if (0x3fffffff < uVar6 + 0xc0000001) {
          FUN_015e9814(puVar5);
        }
        uVar6 = local_98[0xe];
        puVar8 = local_98 + 0xe;
        DataMemoryBarrier(0xb);
        do {
          if ((uVar6 & 3) == 2) {
            local_30 = (undefined **)0x2;
            local_28 = FUN_00facc48;
            local_2c = &local_30;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0041504f,&local_2c,&DAT_018ae754);
          }
          uVar9 = (uVar6 & 0x3fffffff) >> 2;
          uVar15 = uVar6 & 3 ^ 1;
          uVar22 = uVar6 & 0xc0000000 | 3;
          uVar13 = uVar9 ^ 1;
          if (uVar15 != 0 || uVar13 != 0) {
            uVar22 = uVar9 * 4 - 4 | uVar6 & 0xc0000003;
          }
          uVar9 = *puVar8;
          if (*puVar8 == uVar6) {
            DataMemoryBarrier(0xb);
            do {
              bVar23 = (bool)hasExclusiveAccess(puVar8);
              if (bVar23) {
                *puVar8 = uVar22;
                DataMemoryBarrier(0xb);
                if (uVar15 == 0 && uVar13 == 0) {
                  FUN_009ebe80(local_94,local_90);
                }
                local_30 = param_1;
                local_2c = &local_48;
                FUN_009e38c0(&local_30,&local_2c);
                return;
              }
              uVar9 = *puVar8;
            } while (*puVar8 == uVar6);
          }
          uVar6 = uVar9;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        } while( true );
      }
      if ((((uVar24 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar18 = FUN_015bf3f8(), iVar18 == 0)) {
        *(undefined1 *)(puVar5 + 2) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar5;
        bVar23 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar23);
      *puVar5 = uVar6 + 0xc0000001;
      if (0x3fffffff < uVar6 + 0xc0000001) {
        FUN_015e9814(puVar5);
      }
      uVar6 = local_98[0xe];
      puVar8 = local_98 + 0xe;
      DataMemoryBarrier(0xb);
      do {
        if ((uVar6 & 3) == 2) {
          local_78 = (undefined *)0x2;
          local_44 = FUN_00facc48;
          local_48 = &local_78;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0041504f,&local_48,&DAT_018ae754);
        }
        uVar13 = (uVar6 & 0x3fffffff) >> 2;
        uVar22 = uVar6 & 3 ^ 1;
        uVar9 = uVar6 & 0xc0000000 | 3;
        uVar15 = uVar13 ^ 1;
        if (uVar22 != 0 || uVar15 != 0) {
          uVar9 = uVar13 * 4 - 4 | uVar6 & 0xc0000003;
        }
        uVar13 = *puVar8;
        if (*puVar8 == uVar6) {
          DataMemoryBarrier(0xb);
          do {
            bVar23 = (bool)hasExclusiveAccess(puVar8);
            if (bVar23) {
              *puVar8 = uVar9;
              DataMemoryBarrier(0xb);
              if (uVar22 == 0 && uVar15 == 0) {
                FUN_009ebe80(local_94,local_90);
                return;
              }
              return;
            }
            uVar13 = *puVar8;
          } while (*puVar8 == uVar6);
        }
        uVar6 = uVar13;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      } while( true );
    }
    FUN_009ee6c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b56c);
}

