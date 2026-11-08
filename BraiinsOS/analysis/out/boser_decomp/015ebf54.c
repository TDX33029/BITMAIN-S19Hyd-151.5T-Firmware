// FUN_015ebf54 @ 015ebf54 size=1908 calls_out=18 calls_in=2
// strings: internal error: entered unreachable code

void FUN_015ebf54(undefined4 *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  int local_110;
  int iStack_10c;
  uint uStack_108;
  int iStack_104;
  int iStack_100;
  uint uStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_78;
  int local_74;
  int *local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int *local_30;
  
  FUN_01656cb0(&local_78,param_2 + 8);
  iVar19 = local_74;
  if (local_78 == 1) {
    local_ac = CONCAT31(local_ac._1_3_,local_70._0_1_);
    local_b0 = local_74;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_b0,&DAT_01cfd898,&DAT_01cfd9e0);
  }
  uVar18 = (uint)local_70 & 0xff;
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) == '\0') {
    iVar2 = local_74 + 8;
    if (*(int *)(local_74 + 0x24) != 0) {
      iVar3 = local_74 + 0x18;
      piVar16 = (int *)((uint)&local_110 | 4);
      local_110 = *param_3;
      iStack_10c = param_3[1];
      uStack_108 = param_3[2];
      iStack_104 = param_3[3];
      iStack_100 = param_3[4];
      uStack_fc = param_3[5];
      local_f8 = param_3[6];
      iStack_f4 = param_3[7];
      iStack_f0 = param_3[8];
      iStack_ec = param_3[9];
      iStack_e8 = param_3[10];
      iStack_e4 = param_3[0xb];
      piVar15 = (int *)((uint)&local_b0 | 4);
      piVar4 = (int *)((uint)&local_78 | 4);
      while( true ) {
        uVar22 = FUN_015ef9a8(iVar3);
        iVar7 = local_110;
        iVar12 = (int)((ulonglong)uVar22 >> 0x20);
        piVar5 = (int *)uVar22;
        if (piVar5 == (int *)0x0) break;
        bVar21 = local_110 == 5;
        local_110 = 5;
        if (bVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfd980);
        }
        local_78 = iVar7;
        uVar20 = *(uint *)(iVar12 + 8);
        iVar9 = piVar16[1];
        iVar10 = piVar16[2];
        iVar11 = piVar16[3];
        iVar13 = piVar16[4];
        *piVar4 = *piVar16;
        piVar4[1] = iVar9;
        piVar4[2] = iVar10;
        piVar4[3] = iVar11;
        piVar4[4] = iVar13;
        iVar9 = piVar16[6];
        iVar10 = piVar16[7];
        iVar11 = piVar16[8];
        iVar13 = piVar16[9];
        iVar14 = piVar16[10];
        piVar4[5] = piVar16[5];
        piVar4[6] = iVar9;
        piVar4[7] = iVar10;
        piVar4[8] = iVar11;
        piVar4[9] = iVar13;
        piVar4[10] = iVar14;
        uVar6 = uVar20;
        if (uVar20 < 9) {
          uVar6 = 8;
        }
        iVar10 = (int)piVar5 + (uVar6 - 1 & 0xfffffff8) + 8;
        uVar22 = FUN_015ec950(iVar10);
        uVar6 = (uint)((ulonglong)uVar22 >> 0x20);
        iVar9 = (int)uVar22;
        if ((uVar6 & 0xff) != 2) {
          piVar15 = (int *)(iVar9 + 8);
          if (*piVar15 != 5) {
            FUN_015e99ac(piVar15);
          }
          *piVar15 = local_78;
          *(int *)(iVar9 + 0xc) = local_74;
          *(int **)(iVar9 + 0x10) = local_70;
          *(int *)(iVar9 + 0x14) = local_6c;
          *(int *)(iVar9 + 0x18) = local_68;
          *(uint *)(iVar9 + 0x1c) = local_64;
          *(int *)(iVar9 + 0x20) = local_60;
          *(int *)(iVar9 + 0x24) = iStack_5c;
          *(int *)(iVar9 + 0x28) = local_58;
          *(int *)(iVar9 + 0x2c) = iStack_54;
          *(int *)(iVar9 + 0x30) = iStack_50;
          *(int *)(iVar9 + 0x34) = iStack_4c;
          FUN_00a97e8c(iVar9,uVar6 & 1);
          iVar9 = iVar10 + (uVar20 - 1 & 0xffffffc0) + 0x40;
LAB_015ec2f8:
          local_e0 = local_b0;
          iStack_dc = local_ac;
          iStack_d8 = iStack_a8;
          iStack_d4 = iStack_a4;
          iStack_d0 = iStack_a0;
          local_cc = local_9c;
          iStack_c8 = iStack_98;
          iStack_c4 = iStack_94;
          iStack_c0 = iStack_90;
          iStack_bc = iStack_8c;
          iStack_b8 = iStack_88;
          FUN_00a97e8c(iVar19,uVar18);
          (**(code **)(iVar12 + 0xc))(iVar9);
LAB_015ec3c0:
          DataMemoryBarrier(0xb);
          do {
            iVar19 = *piVar5;
            bVar21 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar21);
          *piVar5 = iVar19 + -1;
          if (iVar19 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015fac78(piVar5,iVar12);
          }
          if (local_110 != 5) {
            FUN_015e99ac(&local_110);
          }
          goto LAB_015ec400;
        }
        local_e0 = *piVar16;
        iStack_dc = piVar16[1];
        iStack_d8 = piVar16[2];
        iStack_d4 = piVar16[3];
        iStack_d0 = piVar16[4];
        local_cc = piVar16[5];
        iStack_c8 = piVar16[6];
        iStack_c4 = piVar16[7];
        iStack_c0 = piVar16[8];
        iStack_bc = piVar16[9];
        iStack_b8 = piVar16[10];
        iVar9 = iVar10 + (uVar20 - 1 & 0xffffffc0) + 0x40;
        local_b0 = local_e0;
        local_ac = iStack_dc;
        iStack_a8 = iStack_d8;
        iStack_a4 = iStack_d4;
        iStack_a0 = iStack_d0;
        local_9c = local_cc;
        iStack_98 = iStack_c8;
        iStack_94 = iStack_c4;
        iStack_90 = iStack_c0;
        iStack_8c = iStack_bc;
        iStack_88 = iStack_b8;
        if (iVar7 == 5) goto LAB_015ec2f8;
        if (iVar7 == 6) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar5;
            bVar21 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar21);
          *piVar5 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015fac78(piVar5,iVar12);
          }
          if (local_110 != 5) {
            FUN_015e99ac(&local_110);
          }
          goto LAB_015ec36c;
        }
        local_b0 = iVar7;
        *piVar15 = local_e0;
        piVar15[1] = iStack_dc;
        piVar15[2] = iStack_d8;
        piVar15[3] = iStack_d4;
        piVar15[4] = iStack_d0;
        piVar15[5] = local_cc;
        piVar15[6] = iStack_c8;
        piVar15[7] = iStack_c4;
        piVar15[8] = iStack_c0;
        piVar15[9] = iStack_bc;
        piVar15[10] = iStack_b8;
        iVar9 = (**(code **)(iVar12 + 0xc))(iVar9);
        if (iVar9 == 0) {
          local_78 = iVar7;
          *piVar4 = local_e0;
          piVar4[1] = iStack_dc;
          piVar4[2] = iStack_d8;
          piVar4[3] = iStack_d4;
          piVar4[4] = iStack_d0;
          piVar4[5] = local_cc;
          piVar4[6] = iStack_c8;
          piVar4[7] = iStack_c4;
          piVar4[8] = iStack_c0;
          piVar4[9] = iStack_bc;
          piVar4[10] = iStack_b8;
          FUN_015efc20(iVar2,&local_78);
          FUN_00a97e8c(iVar19,uVar18);
          goto LAB_015ec3c0;
        }
        local_78 = local_110;
        local_74 = iStack_10c;
        local_70 = (int *)uStack_108;
        local_6c = iStack_104;
        local_68 = iStack_100;
        local_64 = uStack_fc;
        local_60 = local_f8;
        iStack_5c = iStack_f4;
        local_58 = iStack_f0;
        iStack_54 = iStack_ec;
        iStack_50 = iStack_e8;
        iStack_4c = iStack_e4;
        *piVar16 = local_e0;
        piVar16[1] = iStack_dc;
        piVar16[2] = iStack_d8;
        piVar16[3] = iStack_d4;
        piVar16[4] = iStack_d0;
        piVar16[5] = local_cc;
        piVar16[6] = iStack_c8;
        piVar16[7] = iStack_c4;
        piVar16[8] = iStack_c0;
        piVar16[9] = iStack_bc;
        piVar16[10] = iStack_b8;
        bVar21 = local_110 != 5;
        local_110 = iVar7;
        if (bVar21) {
          FUN_015e99ac(&local_78);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar21 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar21);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fac78(piVar5,iVar12);
        }
      }
      if (local_110 != 5) {
        iVar3 = piVar16[1];
        iVar7 = piVar16[2];
        iVar12 = piVar16[3];
        iVar9 = piVar16[4];
        *piVar4 = *piVar16;
        piVar4[1] = iVar3;
        piVar4[2] = iVar7;
        piVar4[3] = iVar12;
        piVar4[4] = iVar9;
        iVar3 = piVar16[6];
        iVar7 = piVar16[7];
        iVar12 = piVar16[8];
        iVar9 = piVar16[9];
        iVar10 = piVar16[10];
        piVar4[5] = piVar16[5];
        piVar4[6] = iVar3;
        piVar4[7] = iVar7;
        piVar4[8] = iVar12;
        piVar4[9] = iVar9;
        piVar4[10] = iVar10;
        local_78 = local_110;
        FUN_015efc20(iVar2,&local_78);
      }
LAB_015ec36c:
      FUN_00a97e8c(iVar19,uVar18);
      goto LAB_015ec400;
    }
    piVar15 = (int *)(local_74 + 0x2c);
    if ((*piVar15 == -0x80000000) || (*(uint *)(local_74 + 0x14) < *(uint *)(local_74 + 0x28))) {
      FUN_015efc20(iVar2,param_3);
      iVar19 = 3;
      goto LAB_015ebfc8;
    }
    uVar22 = thunk_FUN_01bee35a(iVar2,0x240);
    uVar6 = *(uint *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
    if (uVar6 < 3) {
      piVar4 = (int *)FUN_019b03e8();
    }
    else {
      piVar4 = (int *)(uVar6 - 8);
      do {
        iVar2 = *piVar4;
        bVar21 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar21);
      *piVar4 = iVar2 + 1;
      if (iVar2 < 0) goto LAB_015ec6d8;
    }
    FUN_01bed4e2((uint)&local_b0 | 3,param_3,0x30);
    local_6c = 0;
    local_64 = local_64 & 0xffffff00;
    local_68 = 0;
    local_70 = (int *)0x1;
    local_74 = 1;
    local_78 = 1;
    FUN_01bed4e2((int)&local_64 + 1,&local_b0,0x33);
    local_30 = piVar4;
    piVar4 = (int *)thunk_FUN_01be5118(0x50);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x50);
    }
    FUN_01bed4e2(piVar4,&local_78,0x50);
    if (*piVar15 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01cfd970);
    }
    do {
      iVar2 = *piVar4;
      bVar21 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar21);
    *piVar4 = iVar2 + 1;
    if (iVar2 < 0) {
LAB_015ec6d8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15ec6d8);
      (*pcVar1)();
    }
    uVar20 = *(uint *)(iVar19 + 0x2c);
    uVar6 = *(uint *)(iVar19 + 0x38);
    if (uVar6 == uVar20) {
      FUN_015ef758(piVar15);
      uVar20 = *(uint *)(iVar19 + 0x2c);
      uVar6 = *(uint *)(iVar19 + 0x38);
    }
    uVar8 = *(int *)(iVar19 + 0x34) + uVar6;
    *(uint *)(iVar19 + 0x38) = uVar6 + 1;
    uVar6 = uVar8 - uVar20;
    if (uVar8 < uVar20) {
      uVar6 = uVar8;
    }
    piVar15 = (int *)(*(int *)(iVar19 + 0x30) + uVar6 * 8);
    *piVar15 = (int)piVar4;
    piVar15[1] = (int)&DAT_01cfd958;
    FUN_00a97e8c(iVar19,uVar18);
    DataMemoryBarrier(0xb);
    if (*(char *)(param_2 + 0x4c) == '\0') {
      puVar17 = &DAT_01cfd9d0;
      do {
        uVar22 = FUN_015ec950(piVar4 + 2);
        uVar18 = (uint)((ulonglong)uVar22 >> 0x20);
        if ((uVar18 & 0xff) == 2) goto LAB_015ec6d0;
        iVar19 = *(int *)((int)uVar22 + 8);
        FUN_00a97e8c((int)uVar22,uVar18 & 1);
        if (iVar19 == 5) break;
        FUN_019b37f8();
        DataMemoryBarrier(0xb);
      } while (*(char *)(param_2 + 0x4c) == '\0');
    }
    uVar22 = FUN_015ec950(piVar4 + 2);
    uVar18 = (uint)((ulonglong)uVar22 >> 0x20);
    iVar19 = (int)uVar22;
    if ((uVar18 & 0xff) == 2) {
      puVar17 = &DAT_01cfd9a0;
LAB_015ec6d0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(puVar17);
    }
    piVar15 = *(int **)(iVar19 + 8);
    local_78 = *(int *)(iVar19 + 0xc);
    local_74 = *(int *)(iVar19 + 0x10);
    local_70 = *(int **)(iVar19 + 0x14);
    local_6c = *(int *)(iVar19 + 0x18);
    local_68 = *(int *)(iVar19 + 0x1c);
    local_64 = *(int *)(iVar19 + 0x20);
    local_60 = *(int *)(iVar19 + 0x24);
    iStack_5c = *(int *)(iVar19 + 0x28);
    local_58 = *(int *)(iVar19 + 0x2c);
    iStack_54 = *(int *)(iVar19 + 0x30);
    iStack_50 = *(int *)(iVar19 + 0x34);
    *(undefined4 *)(iVar19 + 8) = 5;
    FUN_00a97e8c(iVar19,uVar18 & 1);
    iVar19 = 3;
    if (piVar15 != (int *)&DAT_00000005) {
      iVar19 = 1;
      local_b0 = local_78;
      local_ac = local_74;
      iStack_a8 = (int)local_70;
      iStack_a4 = local_6c;
      iStack_a0 = local_68;
      local_9c = local_64;
      iStack_98 = local_60;
      iStack_94 = iStack_5c;
      iStack_90 = local_58;
      iStack_8c = iStack_54;
      iStack_88 = iStack_50;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar21 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar21);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015faa6c(piVar4);
    }
  }
  else {
    piVar15 = (int *)*param_3;
    local_b0 = param_3[1];
    local_ac = param_3[2];
    iStack_a8 = param_3[3];
    iStack_a4 = param_3[4];
    iStack_a0 = param_3[5];
    iVar19 = 1;
    local_9c = param_3[6];
    iStack_98 = param_3[7];
    iStack_94 = param_3[8];
    iStack_90 = param_3[9];
    iStack_8c = param_3[10];
    iStack_88 = param_3[0xb];
LAB_015ebfc8:
    FUN_00a97e8c(local_74,uVar18);
  }
  if (iVar19 != 3) {
    local_74 = 0;
    local_6c = local_b0;
    local_68 = local_ac;
    local_64 = iStack_a8;
    local_60 = iStack_a4;
    iStack_5c = iStack_a0;
    local_58 = local_9c;
    iStack_54 = iStack_98;
    iStack_50 = iStack_94;
    iStack_4c = iStack_90;
    iStack_48 = iStack_8c;
    iStack_44 = iStack_88;
    if (iVar19 != 1) {
      local_78 = iVar19;
      local_70 = piVar15;
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cfd948);
    }
    *param_1 = piVar15;
    param_1[1] = local_b0;
    param_1[2] = local_ac;
    param_1[3] = iStack_a8;
    param_1[4] = iStack_a4;
    param_1[5] = iStack_a0;
    param_1[6] = local_9c;
    param_1[7] = iStack_98;
    param_1[8] = iStack_94;
    param_1[9] = iStack_90;
    param_1[10] = iStack_8c;
    param_1[0xb] = iStack_88;
    return;
  }
LAB_015ec400:
  *param_1 = 5;
  return;
}

