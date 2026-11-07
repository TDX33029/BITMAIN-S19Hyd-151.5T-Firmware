// FUN_01185d08 @ 01185d08 size=1876 calls_out=17 calls_in=0
// strings: 

void FUN_01185d08(undefined4 *param_1,int param_2,char *param_3,uint param_4,int param_5)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int *unaff_r10;
  int iVar15;
  undefined8 uVar16;
  uint local_118;
  int local_114;
  uint local_110;
  uint local_108;
  int local_104;
  int local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  int *local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  int *local_e0;
  undefined4 *local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  undefined4 local_b0;
  int local_ac;
  int *local_a8;
  undefined4 local_a4;
  int *local_a0;
  undefined4 local_9c;
  int *local_98;
  undefined4 *local_94;
  int *local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  int *local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  if (*param_3 == '\x05') {
    uVar13 = *(uint *)(param_3 + 0xc);
    uVar10 = uVar13 * 0xc;
    if (0xaaaaaaa < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar10);
    }
    if (uVar10 == 0) {
      local_108 = 0;
      iVar4 = 4;
      local_110 = 0;
      local_104 = 4;
      local_114 = 4;
      local_118 = 0;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(uVar10);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar10);
      }
      local_110 = 0;
      local_118 = uVar13;
      local_114 = iVar4;
      local_104 = thunk_FUN_016d4a50(uVar10);
      if (local_104 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar10);
      }
      local_108 = uVar13;
    }
    uVar5 = 0;
    local_100 = 0;
    if ((0x3ffffff < uVar13) || (uVar10 = uVar13 * 0x40, 0x7ffffffc < uVar10)) {
LAB_01185e34:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,uVar10);
    }
    if (uVar10 == 0) {
      local_f8 = 4;
      local_fc = 0;
    }
    else {
      local_f8 = thunk_FUN_016d4a50(uVar10);
      if (local_f8 == 0) {
        uVar5 = 4;
        goto LAB_01185e34;
      }
      local_fc = uVar13;
    }
    local_e8 = *(int *)(param_3 + 4);
    local_e4 = *(undefined4 *)(param_3 + 8);
    piVar14 = *(int **)(param_2 + 4);
    local_d0 = uVar13;
    if (local_e8 == 0) {
      local_d0 = 0;
    }
    local_f0 = (int *)(uint)(local_e8 != 0);
    local_f4 = 0;
    local_dc = (undefined4 *)0x0;
    local_ec = 0;
    local_e0 = local_f0;
    local_d8 = local_e8;
    local_d4 = local_e4;
    if (*(int *)(param_2 + 8) == 0) {
      iVar6 = 0;
      uVar10 = 0;
      while (iVar8 = FUN_00f45584(&local_f0), iVar8 != 0) {
        local_c4 = *(uint *)(iVar8 + 4);
        local_c0 = *(int *)(iVar8 + 8);
        local_c8 = 0x80000000;
        iVar15 = *(int *)(iVar8 + 8);
        uVar5 = *(undefined4 *)(iVar8 + 4);
        if (iVar15 == 0) {
          unaff_r10 = (int *)&DAT_00000001;
          local_bc = param_4;
        }
        else {
          local_bc = param_4;
          unaff_r10 = (int *)thunk_FUN_016d4a50(iVar15);
          if (unaff_r10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar15);
          }
        }
        FUN_016dd1aa(unaff_r10,uVar5,iVar15);
        if (uVar10 == local_118) {
          FUN_015f37b0(&local_118);
          iVar4 = local_114;
        }
        uVar10 = uVar10 + 1;
        piVar14 = (int *)(iVar4 + iVar6);
        *piVar14 = iVar15;
        iVar6 = iVar6 + 0xc;
        piVar14[1] = (int)unaff_r10;
        piVar14[2] = iVar15;
        local_110 = uVar10;
      }
      iVar4 = local_100;
    }
    else {
      iVar6 = FUN_00f45584(&local_f0);
      iVar4 = 0;
      if (iVar6 != 0) {
        local_c4 = *(undefined4 *)(iVar6 + 4);
        local_c0 = *(undefined4 *)(iVar6 + 8);
        local_c8 = 0x80000000;
                    /* WARNING: Could not recover jumptable at 0x01185f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        local_bc = param_4;
        (*(code *)(&DAT_01185f90 + *(int *)(&DAT_01185f90 + *piVar14 * 4)))();
        return;
      }
    }
    if (iVar4 != 0) {
      FUN_011f1dd4(&local_f0,&local_108);
      local_a4 = 1;
      local_a8 = (int *)0x1;
      local_a0 = local_f0;
      local_9c = local_ec;
      local_98 = (int *)local_e8;
      local_94 = (undefined4 *)local_e4;
      local_90 = local_e0;
      local_8c = (uint)local_dc;
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x20);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x20);
      }
      *puVar7 = local_a8;
      puVar7[1] = local_a4;
      puVar7[2] = local_a0;
      puVar7[3] = local_9c;
      puVar7[4] = local_98;
      puVar7[5] = local_94;
      puVar7[6] = local_90;
      puVar7[7] = local_8c;
      puVar11 = (undefined4 *)(param_2 + 0x1c);
      piVar14 = (int *)*puVar11;
      unaff_r10 = *(int **)(param_2 + 0x14);
      uVar5 = *(undefined4 *)(param_2 + 0x18);
      if (piVar14 == (int *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      uVar16 = FUN_01239010(unaff_r10,uVar5,puVar11);
      do {
        iVar6 = *unaff_r10;
        bVar3 = (bool)hasExclusiveAccess(unaff_r10);
      } while (!bVar3);
      *unaff_r10 = iVar6 + 1;
      local_88 = CONCAT44(local_88._4_4_,(undefined1 *)local_88);
      local_80 = CONCAT44(local_80._4_4_,(int)local_80);
      if (iVar6 < 0) goto LAB_0118684c;
      if (piVar14 != (int *)0x0) {
        do {
          iVar6 = *piVar14;
          bVar3 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar3);
        *piVar14 = iVar6 + 1;
        local_88 = CONCAT44(local_88._4_4_,(undefined1 *)local_88);
        local_80 = CONCAT44(local_80._4_4_,(int)local_80);
        if (iVar6 < 0) goto LAB_0118684c;
      }
      local_80 = FUN_01238114(param_4);
      uVar10 = local_f4;
      local_94 = (undefined4 *)0x0;
      local_98 = (int *)0x4;
      local_9c = 0;
      local_6c = CONCAT31(local_6c._1_3_,1);
      local_70 = 0;
      local_a0 = (int *)0x0;
      local_a4 = 4;
      local_a8 = (int *)0x0;
      local_90 = unaff_r10;
      local_8c = uVar5;
      local_78 = piVar14;
      local_74 = puVar7;
      local_88 = uVar16;
      if (local_f4 == local_fc) {
        FUN_011ca644(&local_fc);
      }
      puVar7 = (undefined4 *)(local_f8 + uVar10 * 0x40);
      *puVar7 = local_a8;
      puVar7[1] = local_a4;
      puVar7[2] = local_a0;
      puVar7[3] = local_9c;
      puVar7[4] = local_98;
      puVar7[5] = local_94;
      puVar7[6] = local_90;
      puVar7[7] = local_8c;
      *(undefined8 *)(puVar7 + 8) = local_88;
      *(undefined8 *)(puVar7 + 10) = local_80;
      puVar7[0xc] = local_78;
      puVar7[0xd] = local_74;
      puVar7[0xe] = local_70;
      puVar7[0xf] = local_6c;
      local_f4 = uVar10 + 1;
    }
    iVar6 = local_f4 << 6;
    iVar8 = local_f8;
    do {
      if (iVar6 == 0) {
        local_b8 = 0;
        local_c8 = 0x80000000;
        local_c4 = local_fc;
        uVar10 = local_f4;
        local_c0 = local_f8;
        local_bc = local_f4;
        goto LAB_0118656c;
      }
      pcVar1 = (char *)(iVar8 + 0x3c);
      iVar6 = iVar6 + -0x40;
      iVar8 = iVar8 + 0x40;
    } while (*pcVar1 != '\0');
    local_c8 = 0;
    local_bc = local_fc;
    local_b0 = 0;
    local_c0 = 0;
    local_c4 = 4;
    uVar10 = 4;
    local_b8 = local_f8;
    local_b4 = local_f4;
LAB_0118656c:
    if (local_110 == 0) {
      *param_1 = local_c8;
      param_1[1] = local_c4;
      param_1[2] = local_c0;
      param_1[3] = local_bc;
      param_1[4] = local_b8;
      param_1[5] = local_b4;
      param_1[6] = local_b0;
      if ((iVar4 == 0) && (local_108 != 0)) {
        thunk_FUN_016d3fb4(local_104);
      }
      if (local_118 == 0) {
        return;
      }
      thunk_FUN_016d3fb4(local_114);
      return;
    }
    piVar14 = *(int **)(param_2 + 0xc);
    uVar13 = *(uint *)(param_2 + 0x10);
    if (param_5 == 0) {
      piVar9 = (int *)0x0;
      puVar7 = param_1;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
      }
      piVar9 = *(int **)(param_5 + 0xc);
      do {
        iVar6 = *piVar9;
        bVar3 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar3);
      *piVar9 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_0118684c;
      unaff_r10 = *(int **)(param_5 + 0xc);
      uVar10 = 0;
      puVar7 = *(undefined4 **)(param_5 + 0x10);
      uVar12 = (*(int **)(param_5 + 4))[1];
      if (uVar12 <= uVar13) {
        iVar6 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar14 + 2,uVar12);
        uVar10 = uVar12;
        if (iVar6 != 0) {
          uVar10 = 0;
        }
      }
      uVar16 = FUN_011e1508((int)(piVar14 + 2) + uVar10,uVar13 - uVar10);
      uVar10 = (uint)((ulonglong)uVar16 >> 0x20);
      param_2 = (int)uVar16;
      piVar9 = (int *)0x2;
    }
    do {
      iVar6 = *piVar14;
      bVar3 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar3);
    *piVar14 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_0118684c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x118684c);
      (*pcVar2)();
    }
    local_e4 = 3;
    local_f0 = piVar9;
    local_e0 = unaff_r10;
    local_dc = puVar7;
    local_d8 = param_2;
    local_d4 = uVar10;
    local_38 = FUN_01238114(param_4);
    local_88._0_4_ = &DAT_8000000b;
    local_88._4_4_ = local_118;
    local_80._0_4_ = local_114;
    local_80._4_4_ = local_110;
    local_50 = 6;
    local_a8 = local_f0;
    local_a4 = local_ec;
    local_a0 = (int *)local_e8;
    local_9c = local_e4;
    local_98 = local_e0;
    local_94 = local_dc;
    local_90 = (int *)local_d8;
    local_8c = local_d4;
    local_4c = param_3;
    local_30 = piVar14;
    local_2c = uVar13;
    iVar6 = thunk_FUN_016d4a50(0x80);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar6,&local_a8,0x80);
    local_ac = iVar6;
    FUN_011720bc(&local_a8,&local_ac);
    FUN_012128e0(&local_c8,&local_a8);
    FUN_01164df4(iVar6);
    thunk_FUN_016d3fb4(iVar6);
    iVar6 = local_104;
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    if (iVar4 == 0) {
      puVar7 = (undefined4 *)(local_104 + 4);
      for (iVar4 = local_100; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar7[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar7);
        }
        puVar7 = puVar7 + 3;
      }
      if (local_108 != 0) {
        thunk_FUN_016d3fb4(iVar6);
        return;
      }
    }
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

