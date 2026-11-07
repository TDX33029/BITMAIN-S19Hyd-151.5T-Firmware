// FUN_011887c0 @ 011887c0 size=2512 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_011887c0(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  undefined4 *puVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  undefined8 uVar34;
  int local_14c;
  int local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined1 *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined1 local_70;
  char *local_6c;
  undefined8 local_58;
  int *local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  
  if (*param_2 != '\x05') {
    return 0x188a36400000001;
  }
  local_c0 = *(uint *)(param_2 + 4);
  local_bc = *(uint *)(param_2 + 8);
  local_a8 = *(undefined1 **)(param_2 + 0xc);
  iVar29 = *param_1;
  local_14c = 4;
  uVar11 = param_1[1];
  iVar26 = 0;
  if (local_c0 == 0) {
    local_a8 = (undefined1 *)0x0;
  }
  iVar12 = param_1[0x12];
  local_e0 = 4;
  local_d4 = 4;
  iVar21 = param_1[0x11];
  local_c8 = (uint)(local_c0 != 0);
  local_dc = 0;
  local_e4 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b4 = 0;
  local_c4 = 0;
  local_b8 = local_c8;
  local_b0._0_4_ = local_c0;
  local_b0._4_4_ = local_bc;
  if (param_1[3] == 0) {
    iVar29 = 4;
    while( true ) {
      local_e8 = local_d0;
      iVar12 = FUN_00f45584(&local_c8);
      if (iVar12 == 0) break;
      uVar22 = *(undefined4 *)(iVar12 + 4);
      iVar12 = *(int *)(iVar12 + 8);
      if (iVar12 == 0) {
        iVar21 = 1;
      }
      else {
        iVar21 = thunk_FUN_016d4a50(iVar12);
        if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar12);
        }
      }
      FUN_016dd1aa(iVar21,uVar22,iVar12);
      if (local_e8 == local_d8) {
        FUN_015f37b0(&local_d8);
        iVar29 = local_d4;
      }
      piVar13 = (int *)(iVar29 + iVar26);
      *piVar13 = iVar12;
      iVar26 = iVar26 + 0xc;
      piVar13[1] = iVar21;
      piVar13[2] = iVar12;
      local_d0 = local_e8 + 1;
    }
    bVar3 = false;
  }
  else {
    uVar14 = param_1[4];
    uVar15 = param_1[5];
    uVar16 = param_1[6];
    uVar17 = param_1[7];
    uVar18 = param_1[8];
    iVar19 = param_1[9];
    iVar20 = param_1[10];
    iVar26 = param_1[0xb];
    bVar3 = false;
    local_e8 = 0;
LAB_011888f4:
    uVar34 = FUN_00f45584(&local_c8);
    iVar8 = (int)uVar34;
    if (iVar8 != 0) {
      uVar22 = *(undefined4 *)(iVar8 + 4);
      iVar31 = *(int *)(iVar8 + 8);
      local_48 = uVar18;
      local_44 = iVar19;
      local_40 = iVar20;
      local_3c = iVar26;
      local_38 = uVar16;
      local_34 = uVar17;
      local_30._0_4_ = uVar14;
      local_30._4_4_ = uVar15;
      FUN_011df94c(&local_48,uVar22,iVar31);
      uVar6 = local_38 ^ 0xff;
      uVar27 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
               local_34 >> 0x18;
      lVar4 = (ulonglong)uVar27 * 0xb36a80d2;
      uVar23 = (uint)lVar4;
      uVar32 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^
               local_34 * 0x2df45158 +
               uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
      uVar25 = uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18;
      lVar5 = (ulonglong)~(uint)local_30 * (ulonglong)uVar25;
      uVar33 = (uint)lVar5;
      uVar23 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar27 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
      uVar27 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
      uVar6 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
              uVar27 >> 0x18) * ~(uint)local_30 +
              uVar25 * ~local_30._4_4_ + (int)((ulonglong)lVar5 >> 0x20);
      uVar23 = local_30._4_4_ << 0x18 | (local_30._4_4_ >> 8 & 0xff) << 0x10 |
               (local_30._4_4_ >> 0x10 & 0xff) << 8 | local_30._4_4_ >> 0x18;
      lVar4 = (ulonglong)uVar23 * (ulonglong)uVar27;
      uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18) ^ (uint)lVar4;
      uVar25 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
               uVar33 >> 0x18) ^
               uVar32 * uVar23 +
               uVar27 * ((uint)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                         ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18) +
               (int)((ulonglong)lVar4 >> 0x20);
      uVar23 = uVar25;
      if ((uVar27 & 0x20) != 0) {
        uVar23 = uVar6;
        uVar6 = uVar25;
      }
      uVar23 = uVar6 << (uVar27 & 0x1f) | (uVar23 >> 1) >> (~uVar27 & 0x1f);
      iVar24 = 0;
      uVar6 = uVar23 >> 0x19;
      while( true ) {
        uVar23 = uVar11 & uVar23;
        uVar25 = *(uint *)(iVar29 + uVar23);
        uVar27 = uVar25 ^ uVar6 * 0x1010101;
        for (uVar27 = ~uVar27 & 0x80808080 & uVar27 + 0xfefefeff; uVar27 != 0;
            uVar27 = uVar27 - 1 & uVar27) {
          uVar32 = uVar23 + ((uint)LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                           (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) >> 3) &
                   uVar11;
          iVar7 = iVar29 + -0x20 + uVar32 * -0x20;
          if (iVar31 == *(int *)(iVar7 + 8)) {
            iVar30 = *(int *)(iVar7 + 4);
            iVar7 = thunk_FUN_016dd50a(uVar22,iVar30,iVar31);
            if (iVar7 == 0) {
              local_48 = 0x80000000;
              local_44 = iVar30;
              local_40 = iVar31;
              local_3c = param_3;
              uVar34 = FUN_011cf8a8(iVar29 + -0x14 + uVar32 * -0x20,(int)((ulonglong)uVar34 >> 0x20)
                                    ,&local_48,param_4,param_5);
              FUN_011590bc(&local_e4,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
              if (*(int *)(iVar8 + 8) == iVar12) {
                iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar8 + 4),iVar21,iVar12);
                bVar3 = (bool)(iVar8 == 0 | bVar3);
              }
              goto LAB_011888f4;
            }
          }
        }
        if ((uVar25 & 0x80808080 & uVar25 << 1) != 0) break;
        iVar24 = iVar24 + 4;
        uVar23 = uVar23 + iVar24;
      }
      if (iVar31 == 0) {
        iVar8 = 1;
      }
      else {
        iVar8 = thunk_FUN_016d4a50(iVar31);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar31);
        }
      }
      FUN_016dd1aa(iVar8,uVar22,iVar31);
      if (local_e8 == local_d8) {
        FUN_015f37b0(&local_d8);
        local_14c = local_d4;
      }
      local_d0 = local_e8 + 1;
      piVar13 = (int *)(local_14c + local_e8 * 0xc);
      *piVar13 = iVar31;
      piVar13[1] = iVar8;
      piVar13[2] = iVar31;
      local_e8 = local_d0;
      goto LAB_011888f4;
    }
  }
  uVar34 = local_30;
  if (local_e8 != 0) {
    piVar13 = (int *)param_1[0xc];
    do {
      iVar26 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar26 + 1;
    if (iVar26 < 0) goto LAB_011891a0;
    iVar26 = param_1[0xd];
    if (param_4 == 0) {
      local_48 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      uVar34 = CONCAT44(local_30._4_4_,(uint)local_30);
      piVar9 = *(int **)(param_4 + 0xc);
      do {
        iVar29 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar29 + 1;
      if (iVar29 < 0) goto LAB_011891a0;
      uVar17 = *(uint *)(param_4 + 0xc);
      uVar16 = *(uint *)(param_4 + 0x10);
      uVar15 = param_1[0xd];
      uVar11 = 0;
      uVar14 = (*(int **)(param_4 + 4))[1];
      if (uVar14 <= uVar15) {
        iVar29 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar13 + 2,uVar14);
        uVar11 = uVar14;
        if (iVar29 != 0) {
          uVar11 = 0;
        }
      }
      local_30 = FUN_011e1508((int)(piVar13 + 2) + uVar11,uVar15 - uVar11);
      local_3c = 3;
      local_48 = 2;
      local_38 = uVar17;
      local_34 = uVar16;
    }
    local_58 = FUN_01238114(param_3);
    local_a8 = &DAT_8000000b;
    local_a4 = local_d8;
    local_a0 = local_d4;
    local_9c = local_d0;
    local_70 = 6;
    local_c8 = local_48;
    local_c4 = local_44;
    local_c0 = local_40;
    local_bc = local_3c;
    local_b8 = local_38;
    local_b4 = local_34;
    local_6c = param_2;
    local_50 = piVar13;
    local_4c = iVar26;
    local_b0 = local_30;
    iVar26 = thunk_FUN_016d4a50(0x80);
    if (iVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar26,&local_c8,0x80);
    uVar11 = local_dc;
    if (local_dc == local_e4) {
      FUN_011c4424(&local_e4);
    }
    *(int *)(local_e0 + uVar11 * 4) = iVar26;
    local_dc = uVar11 + 1;
    uVar34 = local_30;
  }
  local_30 = uVar34;
  if (!bVar3) {
    piVar13 = (int *)param_1[0xe];
    do {
      iVar26 = *piVar13;
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = iVar26 + 1;
    if (iVar26 < 0) {
LAB_011891a0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11891a0);
      local_30 = uVar34;
      (*pcVar1)();
    }
    iVar26 = param_1[0xf];
    if (param_4 == 0) {
      local_48 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        uVar34 = local_30;
      }
      piVar9 = *(int **)(param_4 + 0xc);
      do {
        iVar29 = *piVar9;
        bVar3 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar3);
      *piVar9 = iVar29 + 1;
      if (iVar29 < 0) goto LAB_011891a0;
      uVar17 = *(uint *)(param_4 + 0xc);
      uVar16 = *(uint *)(param_4 + 0x10);
      uVar15 = param_1[0xf];
      uVar11 = 0;
      uVar14 = (*(int **)(param_4 + 4))[1];
      local_30 = uVar34;
      if (uVar14 <= uVar15) {
        iVar29 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar13 + 2,uVar14);
        uVar11 = uVar14;
        if (iVar29 != 0) {
          uVar11 = 0;
        }
      }
      uVar34 = FUN_011e1508((int)(piVar13 + 2) + uVar11,uVar15 - uVar11);
      local_3c = 3;
      local_48 = 2;
      local_38 = uVar17;
      local_34 = uVar16;
    }
    local_30 = uVar34;
    uVar34 = FUN_01238114(param_3);
    iVar29 = param_1[0x11];
    local_94 = param_1[0x12];
    if (local_94 == 0) {
      iVar12 = 1;
    }
    else {
      iVar12 = thunk_FUN_016d4a50(local_94);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_94);
      }
    }
    FUN_016dd1aa(iVar12,iVar29,local_94);
    local_70 = 6;
    local_a0 = CONCAT31(local_a0._1_3_,3);
    local_a8 = (undefined1 *)0x80000027;
    local_c8 = local_48;
    local_c4 = local_44;
    local_c0 = local_40;
    local_bc = local_3c;
    local_b8 = local_38;
    local_b4 = local_34;
    local_9c = local_94;
    local_98 = iVar12;
    local_6c = param_2;
    local_50 = piVar13;
    local_4c = iVar26;
    local_58 = uVar34;
    local_b0 = local_30;
    iVar26 = thunk_FUN_016d4a50(0x80);
    if (iVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar26,&local_c8,0x80);
    uVar11 = local_dc;
    if (local_dc == local_e4) {
      FUN_011c4424(&local_e4);
    }
    local_dc = uVar11 + 1;
    *(int *)(local_e0 + uVar11 * 4) = iVar26;
  }
  local_bc = local_e0 + local_dc * 4;
  local_c0 = local_e4;
  local_c8 = local_e0;
  local_c4 = local_e0;
  puVar10 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar26 = local_d4;
  if (puVar10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar10 = local_c8;
  puVar10[1] = local_c4;
  puVar10[2] = local_c0;
  puVar10[3] = local_bc;
  if (local_e8 == 0) {
    puVar28 = (undefined4 *)(local_d4 + 4);
    for (iVar29 = local_d0; iVar29 != 0; iVar29 = iVar29 + -1) {
      if (puVar28[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar28);
      }
      puVar28 = puVar28 + 3;
    }
    if (local_d8 != 0) {
      thunk_FUN_016d3fb4(iVar26);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar10);
}

