// FUN_007b2048 @ 007b2048 size=1620 calls_out=18 calls_in=0
// strings: submitted with incorrect extranonce size | SetGloba | SetGloba | lDefaultError

/* WARNING: Type propagation algorithm not settling */

void FUN_007b2048(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *******pppppppiVar3;
  int iVar4;
  int ******ppppppiVar5;
  char *pcVar6;
  int iVar7;
  int *****pppppiVar8;
  int *****pppppiVar9;
  int *****pppppiVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int ******ppppppiVar13;
  undefined4 uVar14;
  int ******ppppppiVar15;
  int *******pppppppiVar16;
  int ******ppppppiVar17;
  int ******ppppppiVar18;
  undefined *puVar19;
  int *****local_110;
  uint local_10c;
  int ******local_108;
  int *******local_104;
  int ******local_100;
  int local_fc;
  int local_f8;
  uint local_f4;
  int *******local_f0;
  int ******local_ec;
  int ******local_e8;
  int ******local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int *******local_c8;
  int ******local_c4;
  int ******local_c0;
  int ******ppppppiStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *******local_a0;
  int *******local_9c;
  int ******local_98;
  int *local_94;
  int *local_90;
  uint *local_8c;
  int ******local_88;
  int ******local_84;
  int *******pppppppiStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int *******local_74;
  int *******local_70;
  int ******local_6c;
  int ******ppppppiStack_68;
  int *******local_60;
  int *******local_5c;
  int ******local_58;
  int ******local_54;
  int ******local_50;
  int ******local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_2 + 0xc) != '\0') {
    if (*(char *)(param_2 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185d66c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185d66c);
  }
  ppppppiVar17 = (int ******)param_2[3];
  local_110 = (int *****)param_2[4];
  local_10c = param_2[5];
  local_108 = (int ******)param_2[6];
  local_104 = (int *******)param_2[7];
  local_100 = (int ******)param_2[8];
  local_fc = param_2[9];
  local_f8 = param_2[10];
  local_f4 = param_2[0xb];
  pppppppiVar3 = (int *******)*param_2;
  ppppppiVar18 = (int ******)param_2[1];
  ppppppiVar13 = (int ******)param_2[2];
  FUN_0165a798(&local_58);
  ppppppiVar15 = local_108;
  ppppppiVar17[0x18] = (int *****)local_58;
  ppppppiVar17[0x19] = (int *****)local_54;
  ppppppiVar17[0x1a] = (int *****)local_50;
  if (local_108 == (int ******)0x0) {
    if (local_10c == *(ushort *)(ppppppiVar17 + 0x80)) {
      iVar4 = FUN_007620bc(ppppppiVar17 + 0x1c,local_100);
      if (iVar4 == 0) {
        if ((DAT_018d9130 < 4) && (DAT_018da7cc != '\0')) {
          if (DAT_018da7cc == '\x01') {
LAB_007b22b8:
            DataMemoryBarrier(0xb);
            puVar19 = &DAT_018ae394;
            pcVar6 = s_SetGloba_00414c05;
            if (DAT_018dd984 == 2) {
              pcVar6 = DAT_018daa74;
              puVar19 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            iVar7 = (**(code **)(puVar19 + 0x14))(pcVar6,DAT_018da7c4);
            if (iVar7 == 0) goto LAB_007b23c8;
          }
          else if (DAT_018da7cc != '\x02') {
            cVar2 = FUN_0169ac90(&DAT_018da7c4);
            if (cVar2 == '\0') goto LAB_007b23c8;
            if (cVar2 != '\x02') goto LAB_007b22b8;
          }
          if (*(int *)(DAT_018da7c4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185d67c);
          }
          local_4c = *(int *******)(DAT_018da7c4 + 0x28);
          local_54 = *(int *******)(DAT_018da7c4 + 0x20);
          local_50 = *(int *******)(DAT_018da7c4 + 0x24);
          local_c0 = (int ******)(DAT_018da7c4 + 0x1c);
          local_58 = (int ******)*local_c0;
          local_48 = 0;
          local_9c = (int *******)&local_60;
          local_98 = (int ******)&DAT_018abb78;
          local_5c = (int *******)&local_70;
          local_6c = (int ******)&LAB_00fac484;
          local_60 = (int *******)&DAT_005825e9;
          local_c4 = (int ******)&DAT_00000001;
          local_c8 = (int *******)&local_a0;
          local_a0 = &local_58;
          local_70 = &local_100;
          FUN_0169bb88(DAT_018da7c4,&local_c8);
        }
LAB_007b23c8:
        local_9c = (int *******)&LAB_00fac484;
        local_a0 = &local_100;
        FUN_00600d2c((uint)&local_58 | 4,&DAT_005825e9,&local_a0);
        local_e8 = local_50;
        local_e4 = local_4c;
        local_e0 = local_48;
        local_dc = uStack_44;
        local_d8 = local_40;
        local_d4 = uStack_3c;
        uStack_d0 = uStack_38;
        uStack_cc = uStack_34;
        local_ec = local_54;
        local_f0 = (int *******)&DAT_00000001;
      }
      else {
        uVar14 = *(undefined4 *)(iVar4 + 0xc);
        uVar12 = *(undefined4 *)(iVar4 + 4);
        ppppppiVar15 = *(int *******)(iVar4 + 8);
        uVar1 = *(undefined1 *)(iVar4 + 0x18);
        if (ppppppiVar15 == (int ******)0x0) {
          ppppppiVar5 = (int ******)&DAT_00000001;
        }
        else {
          ppppppiVar5 = (int ******)thunk_FUN_016d4a50(ppppppiVar15);
          if (ppppppiVar5 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,ppppppiVar15);
          }
        }
        FUN_016dd1aa(ppppppiVar5,uVar12,ppppppiVar15);
        local_dc = *(undefined4 *)(iVar4 + 0x10);
        local_d8 = *(undefined4 *)(iVar4 + 0x14);
        local_d4 = CONCAT31(local_d4._1_3_,uVar1);
        local_f0 = (int *******)&DAT_00000011;
        local_ec = ppppppiVar15;
        local_e8 = ppppppiVar5;
        local_e4 = ppppppiVar15;
        local_e0 = uVar14;
      }
      local_8c = &local_f4;
      local_90 = &local_f8;
      local_94 = &local_fc;
      local_a0 = pppppppiVar3;
      local_9c = (int *******)ppppppiVar18;
      local_98 = ppppppiVar13;
      local_88 = &local_110;
      local_84 = ppppppiVar17;
      if (iVar4 == 0) {
        local_c8 = local_f0;
        local_c4 = local_ec;
        local_c0 = local_e8;
        ppppppiStack_bc = local_e4;
        uStack_b8 = local_e0;
        local_b4 = local_dc;
        uStack_b0 = local_d8;
        uStack_ac = local_d4;
        uStack_a8 = uStack_d0;
        uStack_a4 = uStack_cc;
        if (pppppppiVar3 != (int *******)0x0) {
          thunk_FUN_016d3fb4(ppppppiVar18);
        }
      }
      else {
        FUN_01111f8c(&local_58,&local_a0,(uint)&local_f0 | 4,local_110,local_10c,local_f8,local_fc,
                     local_f4 & 0x1fffe000);
        FUN_00762318(&local_c8,ppppppiVar17,&local_58);
      }
      ppppppiVar15 = local_c4;
      pppppppiVar16 = local_104;
      ppppppiVar13 = local_108;
      if (local_c8 == (int *******)&DAT_00000011) {
        pppppiVar8 = ppppppiVar17[0x20];
        pppppiVar10 = ppppppiVar17[0x23];
        if (pppppiVar10 == pppppiVar8) {
          FUN_0113bc98();
          pppppiVar8 = ppppppiVar17[0x20];
          pppppiVar10 = ppppppiVar17[0x23];
        }
        ppppppiVar13 = (int ******)((int)pppppiVar10 + 1);
        pppppiVar10 = (int *****)((int)ppppppiVar17[0x22] + (int)pppppiVar10);
        ppppppiVar17[0x23] = (int *****)ppppppiVar13;
        pppppiVar9 = (int *****)((int)pppppiVar10 - (int)pppppiVar8);
        if (pppppiVar10 < pppppiVar8) {
          pppppiVar9 = pppppiVar10;
        }
        pppppiVar8 = ppppppiVar17[0x21] + (int)pppppiVar9 * 8;
        *pppppiVar8 = (int ****)0x0;
        pppppiVar8[1] = (int ****)ppppppiVar15;
        pppppiVar8[2] = (int ****)pppppppiVar16;
      }
      else {
        puVar11 = (undefined4 *)((uint)&local_c8 | 4);
        local_60 = (int *******)&local_a0;
        local_9c = (int *******)*puVar11;
        local_98 = (int ******)puVar11[1];
        local_94 = (int *)puVar11[2];
        local_90 = (int *)puVar11[3];
        local_8c = (uint *)puVar11[4];
        ppppppiVar15 = (int ******)puVar11[5];
        local_84 = (int ******)puVar11[6];
        pppppppiVar3 = (int *******)puVar11[7];
        uStack_7c = puVar11[8];
        local_a0 = local_c8;
        local_78 = 2;
        local_74 = local_104;
        local_5c = (int *******)FUN_011332a4;
        local_88 = ppppppiVar15;
        pppppppiStack_80 = pppppppiVar3;
        FUN_00600d2c(&local_c8,&DAT_00590e71,&local_60);
        local_70 = local_c8;
        local_6c = local_c4;
        ppppppiStack_68 = local_c0;
        FUN_01128834(&local_58,ppppppiVar17,ppppppiVar13,&local_78,&local_70);
        if (local_58 != (int ******)0x11) {
          FUN_007a8040(&local_58);
        }
        FUN_007a8040(&local_a0);
      }
      uVar14 = 0x11;
      pppppppiVar16 = pppppppiVar3;
      goto joined_r0x007b263c;
    }
    ppppppiVar13 = (int ******)thunk_FUN_016d4a50(0x28);
    if (ppppppiVar13 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x28);
    }
    FUN_016dd1aa(ppppppiVar13,"submitted with incorrect extranonce size",0x28);
    uVar14 = 1;
    pppppppiVar16 = (int *******)&DAT_00000028;
    ppppppiVar15 = (int ******)&local_58;
    ppppppiVar17 = (int ******)&DAT_00000028;
  }
  else {
    local_5c = local_104;
    local_6c = (int ******)&LAB_00fac484;
    local_60 = (int *******)&SUB_00000002;
    local_70 = &local_108;
    FUN_00600d2c(&local_a0,&DAT_00578b32,&local_70);
    local_c8 = local_a0;
    local_c4 = (int ******)local_9c;
    local_c0 = local_98;
    FUN_01128834(&local_58,ppppppiVar17,ppppppiVar15,&local_60,&local_c8);
    if (local_58 != (int ******)0x11) {
      FUN_007a8040(&local_58);
    }
    local_9c = (int *******)&LAB_00fac484;
    local_a0 = &local_108;
    FUN_00600d2c(&local_58,&DAT_00578b32,&local_a0);
    pppppppiVar16 = (int *******)&DAT_80000004;
    uVar14 = 3;
    ppppppiVar15 = local_50;
    ppppppiVar17 = local_54;
    ppppppiVar13 = local_58;
  }
  if (pppppppiVar3 != (int *******)0x0) {
    thunk_FUN_016d3fb4(ppppppiVar18);
  }
joined_r0x007b263c:
  if (local_10c != 0) {
    thunk_FUN_016d3fb4(local_110);
  }
  *param_1 = uVar14;
  param_1[1] = pppppppiVar16;
  param_1[2] = ppppppiVar13;
  param_1[3] = ppppppiVar17;
  param_1[4] = ppppppiVar15;
  *(undefined1 *)(param_2 + 0xc) = 1;
  return;
}

