// FUN_009dec28 @ 009dec28 size=2128 calls_out=17 calls_in=0
// strings: Span not found; this is a bugnewtime.busytime.idleenter

/* WARNING: Type propagation algorithm not settling */

void FUN_009dec28(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  uint *****pppppuVar4;
  code *pcVar5;
  uint *****pppppuVar6;
  uint ****ppppuVar7;
  byte bVar8;
  int iVar9;
  uint *****pppppuVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int extraout_r2;
  uint uVar15;
  uint uVar16;
  uint ****ppppuVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  uint ****ppppuVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  int local_f8;
  uint local_d0 [2];
  uint *****local_c8;
  uint local_c4;
  int local_c0;
  uint *****local_b8;
  uint uStack_b4;
  uint *****local_b0;
  int *local_ac;
  uint *****local_a8;
  int local_a4;
  undefined *puStack_a0;
  undefined4 uStack_9c;
  uint ***pppuStack_98;
  uint ***pppuStack_94;
  uint *****local_8c;
  undefined *local_88;
  undefined *local_84;
  uint *****local_80;
  int *local_7c;
  uint *****local_78;
  uint ***pppuStack_74;
  undefined4 local_70;
  uint *****local_6c;
  undefined4 local_68;
  undefined **local_64;
  uint *****local_60;
  int *local_5c;
  uint *****local_58;
  int *local_54;
  uint ******local_50;
  uint ****local_4c;
  int local_44;
  uint *****local_40;
  code *local_3c;
  uint *****local_38;
  int *local_34;
  uint *****local_30;
  uint *****local_2c;
  uint *****local_28;
  
  iVar19 = *param_2;
  iVar24 = param_2[1];
  FUN_009f418c(local_d0);
  if ((local_d0[0] & 1) == 0) {
    return;
  }
  uVar27 = FUN_016aa9d4(param_1 + 0x10,param_2);
  if ((int)uVar27 != 0) {
    iVar19 = thunk_FUN_016de0ee((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0x2a8);
    puVar11 = (uint *)(iVar19 + extraout_r2);
    if ((*puVar11 & 1) == 0) {
      FUN_0162b20c(&local_40);
    }
    else {
      local_40 = (uint *****)puVar11[1];
      local_3c = (code *)puVar11[2];
      local_38 = (uint *****)puVar11[3];
      local_34 = (int *)puVar11[4];
    }
    pcVar5 = local_3c;
    local_54 = local_34;
    local_60 = local_40;
    local_5c = (int *)local_3c;
    local_58 = local_38;
    iVar19 = *(int *)(param_1 + 0x90 + (int)local_3c * 4);
    DataMemoryBarrier(0xb);
    cVar2 = '\0';
    piVar12 = local_34;
    if (iVar19 != 0) {
      piVar12 = (int *)(iVar19 + (int)local_34 * 0x14);
      cVar2 = (char)piVar12[4];
    }
    if (iVar19 == 0 || cVar2 == '\0') {
      local_38 = (uint *****)&DAT_00000004;
      local_34 = (int *)0x0;
      local_3c = (code *)0x0;
      local_40 = (uint *****)0x0;
      piVar12 = (int *)FUN_009f14cc(param_1 + 0x90,&local_60,&local_40,pcVar5,param_5);
      iVar19 = *piVar12;
    }
    else {
      iVar19 = *piVar12;
    }
    if (iVar19 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_0186b80c);
    }
    iVar19 = *param_2;
    iVar24 = param_2[1];
    if (piVar12[3] != 0) {
      piVar12[3] = piVar12[3] + -1;
    }
    *piVar12 = 0;
  }
  bVar8 = 0;
  bVar1 = *(byte *)(param_1 + 0x139);
  if ((bVar1 & 4) == 0) {
    bVar26 = (bVar1 & 8) != 0;
    if (bVar26) {
      bVar8 = *(byte *)(param_1 + 0x138);
    }
    if (!bVar26 || (bVar8 & 1) == 0) {
      return;
    }
  }
  if ((local_c0 != 0) &&
     (FUN_016a4f80(&local_60,local_c0,iVar19 + -1), pppppuVar10 = local_60,
     local_60 != (uint *****)0x0)) {
    local_34 = local_5c;
    local_30 = local_58;
    local_3c = (code *)0x0;
    local_40 = (uint *****)0x0;
    local_2c = (uint *****)local_c0;
    local_38 = local_60;
    if (((uint)*local_60 & (uint)local_c8) == 0 && ((uint)local_60[1] & local_c4) == 0) {
      local_a8 = local_58;
      local_ac = local_5c;
      local_a4 = local_c0;
      local_b8 = local_c8;
      uStack_b4 = local_c4;
      local_b0 = local_60;
      uVar28 = FUN_016a11a4(local_60);
      puVar11 = (uint *)uVar28;
      if (puVar11[6] != 0) {
        uVar22 = puVar11[3];
        uVar16 = puVar11[4];
        local_f8 = 0;
        uVar13 = uVar16 & 0x852d8214;
        while( true ) {
          uVar18 = *(uint *)(uVar22 + uVar13);
          uVar25 = (uVar18 & 0x80808080 ^ 0x80808080) & (uVar18 ^ 0x42424242) + 0xfefefeff;
          while (uVar25 != 0) {
            uVar15 = uVar13 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                             (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3) &
                     uVar16;
            piVar12 = (int *)((uVar22 - 0x18) + uVar15 * -0x18);
            uVar25 = uVar25 - 1 & uVar25;
            if ((*piVar12 == 0x51809c7c && piVar12[2] == -0x7ad27dec) &&
                (piVar12[1] == 0x4a853532 && piVar12[3] == 0x7af5abf6)) {
              iVar9 = uVar22 + uVar15 * -0x18;
              iVar23 = *(int *)(iVar9 + -8);
              (**(code **)(*(int *)(iVar9 + -4) + 0xc))(&local_40,iVar23);
              if ((local_40 == (uint *****)0x51809c7c && local_38 == (uint *****)0x852d8214) &&
                  (local_3c == (code *)0x4a853532 && local_34 == (int *)0x7af5abf6)) {
                plVar20 = (longlong *)(iVar23 + 8);
                iVar9 = *(int *)(iVar23 + 0x10) + -1;
                iVar14 = *(int *)(iVar23 + 0x14) - (uint)(*(int *)(iVar23 + 0x10) == 0);
                *(int *)(iVar23 + 0x10) = iVar9;
                *(int *)(iVar23 + 0x14) = iVar14;
                if (iVar9 == 0 && iVar14 == 0) {
                  FUN_015f3b0c(&local_40,1);
                  pppppuVar6 = local_38;
                  pcVar5 = local_3c;
                  pppppuVar4 = local_40;
                  local_60 = *(uint ******)(iVar23 + 0x18);
                  local_58 = *(uint ******)(iVar23 + 0x20);
                  local_5c = *(int **)(iVar23 + 0x1c);
                  local_7c = (int *)local_3c;
                  local_80 = local_40;
                  local_78 = local_38;
                  FUN_015f3c24(&local_40,&local_80,&local_60);
                  *(uint ******)(iVar23 + 0x18) = pppppuVar4;
                  *(code **)(iVar23 + 0x1c) = pcVar5;
                  *(uint ******)(iVar23 + 0x20) = pppppuVar6;
                  lVar3 = ZEXT48(local_38) * 1000000000 +
                          CONCAT44((int)local_34 * 1000000000,local_30) + *plVar20;
                  if (((uint)local_40 & 1) != 0) {
                    lVar3 = *plVar20;
                  }
                  *plVar20 = lVar3;
                }
              }
              goto joined_r0x009df190;
            }
          }
          if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
          local_f8 = local_f8 + 4;
          uVar13 = uVar13 + local_f8 & uVar16;
        }
      }
joined_r0x009df190:
      if ((bVar1 & 4) != 0) {
        local_4c = pppppuVar10[0xc];
        pppuStack_98 = local_4c[9];
        pppuStack_94 = local_4c[10];
        local_88 = &DAT_0186b57c;
        local_8c = (uint *****)&local_80;
        local_50 = &local_6c;
        local_80 = (uint *****)&DAT_018aeb80;
        local_7c = (int *)0x1;
        local_64 = &puStack_a0;
        puStack_a0 = &DAT_018aeb80;
        uStack_9c = 1;
        local_68 = 1;
        local_6c = (uint *****)&local_8c;
        local_70 = 0;
        local_5c = (int *)0x0;
        local_84 = &DAT_0186b55c;
        local_60 = (uint *****)0x2;
        local_78 = (uint *****)pppuStack_98;
        pppuStack_74 = pppuStack_94;
        local_58 = (uint *****)iVar19;
        local_54 = (int *)iVar24;
        if ((((uVar28 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
          *(undefined1 *)(puVar11 + 2) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          uVar13 = *puVar11;
          bVar26 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar26);
        *puVar11 = uVar13 + 0xc0000001;
        if (0x3fffffff < uVar13 + 0xc0000001) {
          FUN_015e9814(puVar11);
        }
        ppppuVar21 = local_b0[0xe];
        pppppuVar10 = local_b0 + 0xe;
        DataMemoryBarrier(0xb);
        do {
          if (((uint)ppppuVar21 & 3) == 2) {
            local_28 = (uint *****)0x2;
            local_3c = FUN_00facc48;
            local_40 = (uint *****)&local_28;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0041504f,&local_40,&DAT_018ae754);
          }
          uVar13 = ((uint)ppppuVar21 & 0x3fffffff) >> 2;
          uVar22 = (uint)ppppuVar21 & 3 ^ 1;
          ppppuVar17 = (uint ****)((uint)ppppuVar21 & 0xc0000000 | 3);
          uVar16 = uVar13 ^ 1;
          if (uVar22 != 0 || uVar16 != 0) {
            ppppuVar17 = (uint ****)(uVar13 * 4 - 4 | (uint)ppppuVar21 & 0xc0000003);
          }
          ppppuVar7 = *pppppuVar10;
          if (*pppppuVar10 == ppppuVar21) {
            DataMemoryBarrier(0xb);
            do {
              bVar26 = (bool)hasExclusiveAccess(pppppuVar10);
              if (bVar26) {
                *pppppuVar10 = ppppuVar17;
                DataMemoryBarrier(0xb);
                if (uVar22 == 0 && uVar16 == 0) {
                  FUN_009ebe80(local_ac,local_a8);
                }
                local_28 = (uint *****)&local_60;
                local_3c = (code *)local_c4;
                local_40 = local_c8;
                local_2c = (uint *****)&local_28;
                local_30 = (uint *****)&local_44;
                local_44 = param_1 + 0x120;
                FUN_009e4aa0(&local_40);
                return;
              }
              ppppuVar7 = *pppppuVar10;
            } while (*pppppuVar10 == ppppuVar21);
          }
          ppppuVar21 = ppppuVar7;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        } while( true );
      }
      if ((((uVar28 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
        *(undefined1 *)(puVar11 + 2) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar13 = *puVar11;
        bVar26 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar26);
      *puVar11 = uVar13 + 0xc0000001;
      if (0x3fffffff < uVar13 + 0xc0000001) {
        FUN_015e9814(puVar11);
      }
      ppppuVar21 = local_b0[0xe];
      pppppuVar10 = local_b0 + 0xe;
      DataMemoryBarrier(0xb);
      do {
        if (((uint)ppppuVar21 & 3) == 2) {
          local_60 = (uint *****)0x2;
          local_3c = FUN_00facc48;
          local_40 = (uint *****)&local_60;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0041504f,&local_40,&DAT_018ae754);
        }
        uVar13 = ((uint)ppppuVar21 & 0x3fffffff) >> 2;
        uVar22 = (uint)ppppuVar21 & 3 ^ 1;
        ppppuVar17 = (uint ****)((uint)ppppuVar21 & 0xc0000000 | 3);
        uVar16 = uVar13 ^ 1;
        if (uVar22 != 0 || uVar16 != 0) {
          ppppuVar17 = (uint ****)(uVar13 * 4 - 4 | (uint)ppppuVar21 & 0xc0000003);
        }
        ppppuVar7 = *pppppuVar10;
        if (*pppppuVar10 == ppppuVar21) {
          DataMemoryBarrier(0xb);
          do {
            bVar26 = (bool)hasExclusiveAccess(pppppuVar10);
            if (bVar26) {
              *pppppuVar10 = ppppuVar17;
              DataMemoryBarrier(0xb);
              if (uVar22 == 0 && uVar16 == 0) {
                FUN_009ebe80(local_ac,local_a8);
                return;
              }
              return;
            }
            ppppuVar7 = *pppppuVar10;
          } while (*pppppuVar10 == ppppuVar21);
        }
        ppppuVar21 = ppppuVar7;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      } while( true );
    }
    FUN_009ee6c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b56c);
}

