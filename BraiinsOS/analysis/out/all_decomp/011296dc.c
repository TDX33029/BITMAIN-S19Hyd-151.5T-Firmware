// FUN_011296dc @ 011296dc size=2936 calls_out=22 calls_in=1
// strings: Missing extranonce1 | SetGloba | SetGloba | lDefaultError | Invalid merkle path element | Too long coinbase prefixsend_set_target

/* WARNING: Type propagation algorithm not settling */

void FUN_011296dc(uint *param_1,int param_2,int param_3,char param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint ***pppuVar4;
  uint ***pppuVar5;
  uint ***pppuVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint ***pppuVar10;
  uint ***pppuVar11;
  uint ***pppuVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 ***pppuVar16;
  undefined *puVar17;
  uint ***pppuVar18;
  undefined4 ***pppuVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  uint ***local_180;
  char local_141;
  undefined4 ****local_140;
  uint ***local_13c;
  uint ***local_138;
  uint ***local_134;
  uint ***local_130;
  uint ***pppuStack_12c;
  uint ***pppuStack_128;
  uint ***pppuStack_124;
  uint ***local_120;
  uint ***local_11c;
  uint ***local_118;
  uint ***local_114;
  uint ***local_110;
  uint ***local_10c;
  uint ***local_108;
  uint ***pppuStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint ***local_f0;
  uint ***local_ec;
  uint ***local_e8;
  uint ***local_e4;
  uint ***local_e0;
  uint ***local_dc;
  uint ***local_d8;
  uint ***local_d4;
  uint ***local_d0;
  uint local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  uint ***local_b8;
  uint ***pppuStack_b4;
  uint ***pppuStack_b0;
  uint ***pppuStack_ac;
  uint ***pppuStack_a8;
  uint ***pppuStack_a4;
  uint ***local_a0;
  uint ***pppuStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint ****local_84;
  undefined4 local_80;
  uint ***local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint ***local_58;
  uint ***local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_141 = param_4;
  if ((DAT_018d9130 < 3) || (bVar3 = false, DAT_018dd947 == '\0')) {
    if ((DAT_018d9130 < 3) && (DAT_018da688 != '\0')) {
      if (DAT_018da688 == '\x01') {
LAB_011297c0:
        DataMemoryBarrier(0xb);
        puVar17 = &DAT_018ae394;
        pcVar24 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar24 = DAT_018daa74;
          puVar17 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar24 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar22 = (**(code **)(puVar17 + 0x14))(pcVar24,DAT_018da680);
        if (iVar22 == 0) goto LAB_0112989c;
      }
      else if (DAT_018da688 != '\x02') {
        cVar7 = FUN_0169ac90(&DAT_018da680);
        if (cVar7 == '\0') goto LAB_0112989c;
        if (cVar7 != '\x02') goto LAB_011297c0;
      }
      if (DAT_018da680[8] == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01887988);
      }
      local_13c = (uint ***)&local_141;
      local_140 = &local_f0;
      local_84 = (uint ****)&local_140;
      local_ec = (uint ***)DAT_018da680[8];
      local_e8 = (uint ***)DAT_018da680[9];
      local_e4 = (uint ***)DAT_018da680[10];
      local_e0 = (uint ***)0x0;
      local_7c = DAT_018da680 + 7;
      local_f0 = (uint ***)*local_7c;
      local_138 = (uint ***)&DAT_018a664c;
      local_80 = 1;
      FUN_016948f0(&local_120,DAT_018da680,&local_84);
    }
    else {
LAB_0112989c:
      local_d8 = DAT_018da680;
      local_e8 = (uint ***)0x2;
      if (DAT_018dd947 == '\0') {
        if (DAT_018da680[8] == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01887988);
        }
        local_13c = (uint ***)&local_141;
        local_140 = &local_120;
        local_84 = (uint ****)&local_140;
        local_7c = DAT_018da680 + 7;
        local_120 = (uint ***)*local_7c;
        local_110 = (uint ***)0x0;
        local_11c = (uint ***)DAT_018da680[8];
        local_118 = (uint ***)DAT_018da680[9];
        local_114 = (uint ***)DAT_018da680[10];
        local_80 = 1;
        local_138 = (uint ***)&DAT_018a664c;
        FUN_01694880(&local_f0,&local_84);
      }
      local_120 = local_f0;
      local_11c = local_ec;
      local_118 = local_e8;
      local_114 = local_e4;
      local_110 = local_e0;
      local_10c = local_dc;
      local_108 = local_d8;
      pppuStack_104 = local_d4;
    }
    local_140 = (undefined4 ****)local_120;
    local_13c = local_11c;
    local_138 = local_118;
    local_134 = local_114;
    local_130 = local_110;
    pppuStack_12c = local_10c;
    pppuStack_128 = local_108;
    pppuStack_124 = pppuStack_104;
    if (local_118 != (uint ***)0x2) {
      pppuVar11 = local_114;
      if (((uint)local_118 & 1) != 0) {
        pppuVar11 = (uint ***)((int)local_114 + ((int)local_110[2] - 1U & 0xfffffff8) + 8);
      }
      (*(code *)local_110[0xc])(pppuVar11,&local_140);
    }
    bVar3 = true;
    if (*(int *)(param_2 + 0x144) == -0x80000000) goto LAB_0112972c;
LAB_011299a0:
    iVar22 = *(int *)(param_2 + 0x14c);
    uVar14 = *(undefined4 *)(param_2 + 0x148);
    if (iVar22 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = thunk_FUN_016d4a50(iVar22);
      if (iVar9 == 0) {
LAB_011299dc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar22);
      }
    }
    FUN_016dd1aa(iVar9,uVar14,iVar22);
    pppuVar18 = *(uint ****)(param_3 + 0x38);
    uVar8 = *(uint *)(param_2 + 0x1f8);
    iVar15 = *(int *)(param_2 + 0x7c);
    iVar20 = *(int *)(param_3 + 0x34);
    iVar23 = (int)pppuVar18 * 0x20;
    uVar13 = *(uint *)(param_3 + 0x3c);
    bVar1 = *(byte *)(param_3 + 0x48);
    *(uint *)(param_2 + 0x1f8) = uVar8 + 1;
    pppuVar11 = (uint ***)0x0;
    if (((uint ***)0x7ffffff < pppuVar18) || (iVar23 < 0)) goto LAB_0112a234;
    if (iVar23 == 0) {
      pppuVar10 = (uint ***)0x1;
    }
    else {
      pppuVar10 = (uint ***)thunk_FUN_016d4a50(iVar23);
      pppuVar11 = pppuVar18;
      if (pppuVar10 == (uint ***)0x0) {
        pppuVar11 = (uint ***)0x1;
        goto LAB_0112a234;
      }
    }
    local_118 = (uint ***)0x0;
    local_120 = pppuVar11;
    local_11c = pppuVar10;
    if (pppuVar18 == (uint ***)0x0) {
      pppuVar18 = (uint ***)0x0;
      if (pppuVar11 != (uint ***)0x0) {
        thunk_FUN_016d3fb4(pppuVar10);
        pppuVar10 = (uint ***)0x1;
      }
LAB_01129bec:
      FUN_01134790(&local_f0,*(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x20));
      pppuVar5 = local_e8;
      pppuVar11 = local_ec;
      if (local_f0 == (uint ***)0x1) {
        uVar8 = thunk_FUN_016d4a50(0x18);
        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x18);
        }
        FUN_016dd1aa(uVar8,"Too long coinbase prefixsend_set_target",0x18);
        *param_1 = 1;
        param_1[1] = 0x18;
        param_1[2] = uVar8;
        param_1[3] = 0x18;
      }
      else {
        FUN_01134790(&local_f0,*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c));
        pppuVar6 = local_e8;
        pppuVar4 = local_ec;
        if (local_f0 != (uint ***)0x1) {
          bVar2 = iVar15 != 0;
          if (bVar2 && (bVar1 & 1) == 0) {
            pppuVar12 = (uint ***)0x1;
            local_180 = *(uint ****)(param_3 + 0x44);
          }
          else {
            FUN_0112a444(&local_f0,uVar8,param_3);
            if (local_f0 != (uint ***)0x0) {
              local_120 = local_ec;
              local_11c = local_e8;
              local_118 = local_e4;
              local_114 = local_e0;
              local_110 = local_dc;
              local_10c = local_d8;
              local_108 = local_d4;
              pppuStack_104 = local_d0;
              uStack_100 = local_cc;
              uStack_fc = local_c8;
              *param_1 = (uint)local_ec;
              param_1[1] = (uint)local_e8;
              param_1[2] = (uint)local_e4;
              param_1[3] = (uint)local_e0;
              param_1[4] = (uint)local_dc;
              param_1[5] = (uint)local_d8;
              param_1[6] = (uint)local_d4;
              param_1[7] = (uint)local_d0;
              param_1[8] = local_cc;
              param_1[9] = local_c8;
              if (pppuVar6 != (uint ***)0x0) {
                thunk_FUN_016d3fb4(pppuVar4);
              }
              goto joined_r0x01129cec;
            }
            local_120 = local_ec;
            local_11c = local_e8;
            local_118 = local_e4;
            local_114 = local_e0;
            local_110 = local_dc;
            local_10c = local_d8;
            local_108 = local_d4;
            pppuStack_104 = local_d0;
            uStack_100 = local_cc;
            uStack_fc = local_c8;
            uStack_f8 = local_c4;
            uStack_f4 = uStack_c0;
            local_b8 = local_ec;
            pppuStack_b4 = local_e8;
            pppuStack_b0 = local_e4;
            pppuStack_ac = local_e0;
            pppuStack_a8 = local_dc;
            pppuStack_a4 = local_d8;
            local_a0 = local_d4;
            pppuStack_9c = local_d0;
            uStack_98 = local_cc;
            uStack_94 = local_c8;
            uStack_90 = local_c4;
            uStack_8c = uStack_c0;
            pppuVar12 = (uint ***)0x0;
          }
          pppuVar16 = *(undefined4 ****)(param_3 + 8);
          uVar14 = 0;
          if ((int)pppuVar16 < 0) {
LAB_01129ef0:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar14,pppuVar16);
          }
          uVar14 = *(undefined4 *)(param_3 + 4);
          if (pppuVar16 == (undefined4 ***)0x0) {
            iVar23 = 1;
            pppuVar19 = (undefined4 ***)0x0;
          }
          else {
            iVar23 = thunk_FUN_016d4a50(pppuVar16,uVar14);
            pppuVar19 = pppuVar16;
            if (iVar23 == 0) {
              uVar14 = 1;
              goto LAB_01129ef0;
            }
          }
          FUN_016dd1aa(iVar23,uVar14,pppuVar16);
          local_d8 = (uint ***)((uint)local_d8 & 0xffffff00);
          local_e0 = *(uint ****)(param_3 + 0x44);
          local_f0 = pppuVar19;
          local_ec = (uint ***)iVar23;
          local_e8 = pppuVar16;
          local_e4 = (uint ***)uVar8;
          local_dc = (uint ***)uVar13;
          FUN_0112a4e0(param_2 + 0x70,&local_f0,bVar1 & 1);
          cVar7 = local_141;
          local_d0 = (uint ***)0x0;
          local_c4 = CONCAT31(local_c4._1_3_,1);
          local_d4 = pppuVar6;
          local_ec = local_180;
          local_d8 = pppuVar4;
          local_dc = pppuVar5;
          local_f0 = pppuVar12;
          local_e8 = pppuVar10;
          local_e4 = pppuVar18;
          local_e0 = pppuVar11;
          local_cc = uVar8;
          local_c8 = uVar13;
          if (local_141 == '\0') {
            FUN_0112a9fc(&local_84,*(undefined2 *)(param_2 + 0x200));
            uVar14 = local_80;
            FUN_0161115c(&local_78,&local_f0,iVar9,iVar22,local_80,local_7c);
            local_50 = 0;
            local_54 = local_180;
            local_44 = local_78;
            uStack_40 = uStack_74;
            uStack_3c = uStack_70;
            uStack_38 = uStack_6c;
            local_34 = local_68;
            uStack_30 = uStack_64;
            uStack_2c = uStack_60;
            uStack_28 = uStack_5c;
            local_58 = pppuVar12;
            local_4c = uVar8;
            local_48 = uVar13;
            FUN_0112aaf0(&local_120,param_2);
            if (local_120 == (uint ***)0x11) {
              if (local_84 != (uint ****)0x0) {
                thunk_FUN_016d3fb4(uVar14);
              }
              goto LAB_0112a120;
            }
            *param_1 = (uint)local_120;
            param_1[1] = (uint)local_11c;
            param_1[2] = (uint)local_118;
            param_1[3] = (uint)local_114;
            param_1[4] = (uint)local_110;
            param_1[5] = (uint)local_10c;
            param_1[6] = (uint)local_108;
            param_1[7] = (uint)pppuStack_104;
            param_1[8] = uStack_100;
            param_1[9] = uStack_fc;
            if (local_84 != (uint ****)0x0) {
              thunk_FUN_016d3fb4(uVar14);
            }
          }
          else {
            FUN_0112aa54(&local_120,param_2,&local_f0);
            if (local_120 != (uint ***)0x11) {
              *param_1 = (uint)local_120;
              param_1[1] = (uint)local_11c;
              param_1[2] = (uint)local_118;
              param_1[3] = (uint)local_114;
              param_1[4] = (uint)local_110;
              param_1[5] = (uint)local_10c;
              param_1[6] = (uint)local_108;
              param_1[7] = (uint)pppuStack_104;
              param_1[8] = uStack_100;
              param_1[9] = uStack_fc;
              goto LAB_01129e18;
            }
LAB_0112a120:
            if ((bVar2 && (bVar1 & 1) == 0) ||
               (FUN_0112abdc(&local_120,param_2,&local_b8), local_120 == (uint ***)0x11)) {
              *param_1 = 0x11;
              if (cVar7 == '\0') {
                FUN_0112ab94(&local_f0);
              }
              if (iVar22 != 0) {
                thunk_FUN_016d3fb4(iVar9);
              }
              if (!bVar3) {
                return;
              }
              FUN_00687bd0(&local_140);
              goto LAB_01129e74;
            }
            *param_1 = (uint)local_120;
            param_1[1] = (uint)local_11c;
            param_1[2] = (uint)local_118;
            param_1[3] = (uint)local_114;
            param_1[4] = (uint)local_110;
            param_1[5] = (uint)local_10c;
            param_1[6] = (uint)local_108;
            param_1[7] = (uint)pppuStack_104;
            param_1[8] = uStack_100;
            param_1[9] = uStack_fc;
            if (cVar7 != '\0') goto LAB_01129e18;
          }
          FUN_0112ab94(&local_f0);
          goto LAB_01129e18;
        }
        uVar8 = thunk_FUN_016d4a50(0x18);
        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x18);
        }
        FUN_016dd1aa(uVar8,"Too long coinbase suffix",0x18);
        *param_1 = 1;
        param_1[1] = 0x18;
        param_1[2] = uVar8;
        param_1[3] = 0x18;
joined_r0x01129cec:
        if (pppuVar5 != (uint ***)0x0) {
          thunk_FUN_016d3fb4(pppuVar11);
        }
      }
      if (pppuVar18 != (uint ***)0x0) {
        thunk_FUN_016d3fb4(pppuVar10);
      }
    }
    else {
      puVar21 = (undefined4 *)(iVar20 + 4);
      iVar23 = (int)pppuVar18 * 0xc;
      do {
        pppuVar18 = local_118;
        if (puVar21[1] != 0x20) {
          uVar8 = thunk_FUN_016d4a50(0x1b);
          if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0x1b);
          }
          FUN_016dd1aa(uVar8,"Invalid merkle path element",0x1b);
          if (local_120 != (uint ***)0x0) {
            thunk_FUN_016d3fb4(pppuVar10);
          }
          param_1[1] = (uint)&DAT_80000004;
          param_1[2] = 0x1b;
          *param_1 = 3;
          param_1[3] = uVar8;
          param_1[4] = 0x1b;
          goto LAB_01129e18;
        }
        FUN_016dd1aa(&local_f0,*puVar21,0x20);
        if (pppuVar18 == local_120) {
          FUN_0111ffdc(&local_120);
          pppuVar10 = local_11c;
        }
        FUN_016dd1aa(pppuVar10 + (int)pppuVar18 * 8,&local_f0,0x20);
        pppuVar18 = (uint ***)((int)pppuVar18 + 1);
        puVar21 = puVar21 + 3;
        iVar23 = iVar23 + -0xc;
        local_118 = pppuVar18;
      } while (iVar23 != 0);
      pppuVar11 = pppuVar18;
      do {
        pppuVar11 = (uint ***)((int)pppuVar11 - 1);
      } while (pppuVar11 != (uint ***)0x0);
      if (pppuVar18 < local_120) {
        pppuVar10 = (uint ***)thunk_FUN_016d4ea4(pppuVar10,(int)pppuVar18 * 0x20);
        if (pppuVar10 == (uint ***)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,(int)pppuVar18 * 0x20);
        }
        if (pppuVar18 < (uint ***)0x100) goto LAB_01129bec;
      }
      else if (pppuVar18 < (uint ***)0x100) goto LAB_01129bec;
      thunk_FUN_016d3fb4(pppuVar10);
      uVar8 = thunk_FUN_016d4a50(0x16);
      if (uVar8 == 0) {
        iVar23 = 0x16;
        pppuVar11 = (uint ***)0x1;
LAB_0112a234:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(pppuVar11,iVar23);
      }
      FUN_016dd1aa(uVar8,"Too long merkle branch",0x16);
      *param_1 = 1;
      param_1[1] = 0x16;
      param_1[2] = uVar8;
      param_1[3] = 0x16;
    }
LAB_01129e18:
    if (iVar22 != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  else {
    if (*(int *)(param_2 + 0x144) != -0x80000000) goto LAB_011299a0;
LAB_0112972c:
    uVar8 = thunk_FUN_016d4a50(0x13);
    if (uVar8 == 0) {
      iVar22 = 0x13;
      goto LAB_011299dc;
    }
    FUN_016dd1aa(uVar8,"Missing extranonce1",0x13);
    param_1[3] = 0x13;
    *param_1 = 1;
    param_1[1] = 0x13;
    param_1[2] = uVar8;
  }
  if (!bVar3) {
    return;
  }
  if (local_138 != (uint ***)0x2) {
    pppuVar11 = local_134;
    if (((uint)local_138 & 1) != 0) {
      pppuVar11 = (uint ***)((int)local_134 + ((int)local_130[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_130[0xd])(pppuVar11,&local_140);
  }
LAB_01129e74:
  FUN_005c3320(&local_140);
  return;
}

