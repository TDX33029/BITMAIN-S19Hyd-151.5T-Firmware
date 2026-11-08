// FUN_00a207a4 @ 00a207a4 size=2332 calls_out=28 calls_in=0
// strings: all branches are disabled and there is no else branch | all branches are disabled and there is no else branch

undefined4 FUN_00a207a4(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  int *piVar17;
  byte *pbVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  char local_13c;
  undefined1 local_138;
  uint local_134;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 uStack_84;
  undefined2 local_82;
  undefined2 uStack_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined3 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar6 = (int *)(&switchD_00a207c0::switchdataD_00a207c4)[*(byte *)((int)param_1 + 0x22)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((int)param_1 + 0x22)) {
  case 0:
    *(undefined1 *)(param_1 + 8) = 1;
    *param_1 = param_1[4];
    param_1[1] = param_1[5];
    param_1[2] = param_1[6];
    param_1[3] = param_1[7];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186bac4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186bac4);
  case 3:
    pbVar18 = (byte *)param_1[9];
    piVar17 = (int *)param_1[10];
    goto LAB_00a20e50;
  case 4:
    uVar20 = thunk_FUN_016de0ee(piVar6,0x40);
    pbVar18 = (byte *)param_1[0x28];
    iVar14 = (int)uVar20 + (int)((ulonglong)uVar20 >> 0x20);
    piVar6 = (int *)param_1[0x29];
    cVar1 = *(char *)(iVar14 + 0x38);
    goto joined_r0x00a20814;
  }
  do {
    piVar6 = param_1 + 3;
    pbVar18 = (byte *)((int)param_1 + 0x21);
    *pbVar18 = 0;
    piVar17 = param_1 + 0xb;
    uVar7 = *(uint *)(*piVar6 + 8);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0x22) = 0;
    param_1[0x21] = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    param_1[0x1a] = (int)piVar6;
    param_1[0x1b] = *piVar6 + 8;
    param_1[0x1c] = uVar7 >> 2;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[9] = (int)pbVar18;
    param_1[10] = (int)piVar17;
    param_1[0xb] = (int)param_1;
LAB_00a20e50:
    uVar20 = thunk_FUN_016de0ee(piVar6,0x40);
    iVar14 = (int)uVar20 + (int)((ulonglong)uVar20 >> 0x20);
    piVar6 = param_1 + 10;
    if (*(char *)(iVar14 + 0x38) != '\x01') {
      if (*(char *)(iVar14 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(iVar14,FUN_00a303f4);
      *(undefined1 *)(iVar14 + 0x38) = 1;
    }
    cVar1 = *(char *)(iVar14 + 0x30);
    bVar19 = cVar1 == '\x01';
    if (bVar19) {
      cVar1 = *(char *)(iVar14 + 0x31);
    }
    if (bVar19 && cVar1 == '\0') {
      FUN_016455a4(*param_2,param_2[1]);
      goto LAB_00a210f0;
    }
    if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
      uVar20 = FUN_0164e918();
      if ((uint)uVar20 < 2) {
        uVar20 = CONCAT44((int)((ulonglong)uVar20 >> 0x20),1);
      }
    }
    else {
      uVar20 = CONCAT44(*(undefined4 *)(iVar14 + 0x28),*(undefined4 *)(iVar14 + 0x2c));
    }
    uVar7 = (uint)((ulonglong)uVar20 >> 0x20);
    uVar12 = (uint)uVar20;
    uVar7 = uVar7 ^ uVar7 << 0x11;
    *(uint *)(iVar14 + 0x28) = uVar12;
    *(undefined4 *)(iVar14 + 0x24) = 1;
    uVar7 = uVar12 >> 0x10 ^ uVar7 >> 7 ^ uVar12 ^ uVar7;
    *(uint *)(iVar14 + 0x2c) = uVar7;
    bVar11 = *pbVar18;
    uVar8 = (uint)bVar11;
    if ((int)(uVar7 + uVar12) < 0) {
      uVar7 = (uVar8 & 2) >> 1;
      if ((bVar11 & 2) == 0) {
        iVar13 = FUN_016638c8(piVar17 + 0xf,param_2);
        bVar11 = 2;
        uVar8 = 2;
        if (iVar13 == 0) goto LAB_00a20fec;
        uVar8 = (uint)*pbVar18;
      }
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_00a7e67c(piVar17,param_2);
        uVar8 = uVar8 & 0xff;
        bVar11 = 1;
        if (uVar8 == 2) {
          *(undefined1 *)((int)param_1 + 0x22) = 3;
          return 1;
        }
        goto LAB_00a20fec;
      }
LAB_00a20ffc:
      uVar8 = 3;
      if (uVar7 != 1) {
        *(undefined1 *)((int)param_1 + 0x22) = 3;
        return 1;
      }
    }
    else {
      uVar7 = uVar8 & 1;
      if ((bVar11 & 1) == 0) {
        uVar8 = FUN_00a7e67c(piVar17,param_2);
        uVar8 = uVar8 & 0xff;
        bVar11 = 1;
        if (uVar8 != 2) goto LAB_00a20fec;
        uVar8 = (uint)*pbVar18;
      }
      if ((uVar8 & 2) != 0) goto LAB_00a20ffc;
      iVar13 = FUN_016638c8(piVar17 + 0xf,param_2);
      bVar11 = 2;
      uVar8 = 2;
      if (iVar13 != 0) {
LAB_00a210f0:
        *(undefined1 *)((int)param_1 + 0x22) = 3;
        return 1;
      }
LAB_00a20fec:
      *pbVar18 = *pbVar18 | bVar11;
    }
    FUN_00a07a74(param_1 + 0xb);
    iVar13 = uVar8 - 1;
    if (uVar8 == 0 || iVar13 == 0) {
      iVar13 = 0;
    }
    if (iVar13 != 0) {
      if (iVar13 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_0186bae4);
      }
      goto LAB_00a2110c;
    }
    *(char *)(param_1 + 9) = (char)(uVar8 & 1);
    if ((uVar8 & 1) != 0) goto LAB_00a2110c;
    if ((char)param_1[8] == '\x01') {
      pbVar18 = (byte *)((int)param_1 + 0x25);
      *pbVar18 = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      FUN_01656eb8(&local_d0,&DAT_0186bad4,5,0,0,&DAT_0186bad4);
      iVar13 = param_1[3];
      uVar7 = *(uint *)(iVar13 + 8);
      DataMemoryBarrier(0xb);
      FUN_016dd1aa(&local_120,&local_d0,0x50);
      FUN_016dd1aa(piVar6,&local_120,0x50);
      param_1[0x28] = (int)pbVar18;
      param_1[0x29] = (int)piVar6;
      *(undefined1 *)(param_1 + 0x26) = 0;
      param_1[0x25] = 0;
      param_1[0x1e] = (int)(param_1 + 3);
      param_1[0x1f] = iVar13 + 8;
      param_1[0x20] = uVar7 >> 2;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      cVar1 = *(char *)(iVar14 + 0x38);
joined_r0x00a20814:
      if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_015f853c(&DAT_018ae900);
        }
        FUN_015e8e6c(iVar14,FUN_00a303f4);
        *(undefined1 *)(iVar14 + 0x38) = 1;
      }
      cVar1 = *(char *)(iVar14 + 0x30);
      bVar19 = cVar1 == '\x01';
      if (bVar19) {
        cVar1 = *(char *)(iVar14 + 0x31);
      }
      if (bVar19 && cVar1 == '\0') {
        FUN_016455a4(*param_2,param_2[1]);
        goto LAB_00a209ec;
      }
      if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
        uVar20 = FUN_0164e918();
        if ((uint)uVar20 < 2) {
          uVar20 = CONCAT44((int)((ulonglong)uVar20 >> 0x20),1);
        }
      }
      else {
        uVar20 = CONCAT44(*(undefined4 *)(iVar14 + 0x28),*(undefined4 *)(iVar14 + 0x2c));
      }
      uVar7 = (uint)((ulonglong)uVar20 >> 0x20);
      uVar12 = (uint)uVar20;
      uVar7 = uVar7 ^ uVar7 << 0x11;
      *(uint *)(iVar14 + 0x28) = uVar12;
      *(undefined4 *)(iVar14 + 0x24) = 1;
      uVar7 = uVar12 >> 0x10 ^ uVar7 >> 7 ^ uVar12 ^ uVar7;
      *(uint *)(iVar14 + 0x2c) = uVar7;
      bVar11 = *pbVar18;
      uVar8 = (uint)bVar11;
      if ((int)(uVar7 + uVar12) < 0) {
        uVar7 = (uVar8 & 2) >> 1;
        if ((bVar11 & 2) == 0) {
          iVar14 = FUN_016638c8(piVar6 + 0x14,param_2);
          iVar13 = 1;
          bVar11 = 2;
          if (iVar14 != 0) {
            uVar8 = (uint)*pbVar18;
            goto LAB_00a20900;
          }
        }
        else {
LAB_00a20900:
          if ((uVar8 & 1) != 0) goto LAB_00a20980;
          iVar14 = FUN_01657fc4(piVar6,param_2);
          iVar13 = 0;
          bVar11 = 1;
LAB_00a20968:
          if (iVar14 != 0) {
LAB_00a209ec:
            *(undefined1 *)((int)param_1 + 0x22) = 4;
            return 1;
          }
        }
LAB_00a20970:
        *pbVar18 = *pbVar18 | bVar11;
      }
      else {
        uVar7 = uVar8 & 1;
        if ((bVar11 & 1) == 0) {
          iVar14 = FUN_01657fc4(piVar6,param_2);
          iVar13 = 0;
          bVar11 = 1;
          if (iVar14 == 0) goto LAB_00a20970;
          uVar8 = (uint)*pbVar18;
        }
        if ((uVar8 & 2) == 0) {
          iVar14 = FUN_016638c8(piVar6 + 0x14,param_2);
          iVar13 = 1;
          bVar11 = 2;
          goto LAB_00a20968;
        }
LAB_00a20980:
        iVar13 = 2;
        if (uVar7 != 1) goto LAB_00a209ec;
      }
      FUN_00a07b4c(param_1 + 10);
      FUN_0163bdc0(param_1 + 0x1f);
      if (param_1[0x23] != 0) {
        (**(code **)(param_1[0x23] + 0xc))(param_1[0x24]);
      }
      if (iVar13 != 0) {
        if (iVar13 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_0186baf4);
        }
LAB_00a2110c:
        FUN_00a078f4(param_1);
        *(undefined1 *)((int)param_1 + 0x22) = 1;
        return 0;
      }
    }
    iVar14 = *param_1;
    puVar15 = (uint *)(iVar14 + 0x88);
    uVar7 = *(uint *)(iVar14 + 0x88);
    if ((uVar7 < 0xfffffff0) && ((uVar7 & 8) == 0)) {
      if (*puVar15 != uVar7) {
        ClearExclusiveLocal();
        goto LAB_00a20ab0;
      }
      bVar19 = (bool)hasExclusiveAccess(puVar15);
      if (!bVar19) goto LAB_00a20ab0;
      *puVar15 = uVar7 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00a20ab0:
      FUN_0127d66c(puVar15);
    }
    FUN_0128236c(puVar15);
    FUN_0128236c((uint)puVar15 | 1);
    DataMemoryBarrier(0xb);
    iVar13 = *(int *)(iVar14 + 0x90);
    if (iVar13 != 2) {
      local_13c = *(char *)(iVar14 + 0xac);
      local_134._0_1_ = *(undefined1 *)(iVar14 + 0xb4);
      local_138 = *(undefined1 *)(iVar14 + 0xb5);
      if (local_13c != '\x02') {
        local_120 = *(undefined4 *)(iVar14 + 0xa0);
        local_11c = *(undefined4 *)(iVar14 + 0xa4);
        local_118 = *(undefined4 *)(iVar14 + 0xa8);
        local_78._0_3_ = (undefined3)*(undefined4 *)(iVar14 + 0xad);
        local_78._3_1_ = (undefined1)*(undefined4 *)(iVar14 + 0xb0);
        uStack_74 = (undefined3)((uint)*(undefined4 *)(iVar14 + 0xb0) >> 8);
      }
      local_140 = *(undefined4 *)(iVar14 + 0x94);
      local_144 = *(undefined4 *)(iVar14 + 0x98);
      local_148 = *(undefined4 *)(iVar14 + 0x9c);
    }
    uVar9 = *(undefined4 *)(iVar14 + 0xda);
    uVar16 = *(undefined4 *)(iVar14 + 0xde);
    uVar4 = *(undefined2 *)(iVar14 + 0xd8);
    uVar2 = *(undefined1 *)(iVar14 + 0xe3);
    uVar3 = *(undefined1 *)(iVar14 + 0xe2);
    FUN_00a65030(&local_a8,iVar14 + 0xb8);
    local_c4 = local_148;
    local_c0 = local_120;
    uStack_bc = local_11c;
    local_b8 = local_118;
    local_ac = CONCAT31(CONCAT21(local_ac._2_2_,local_138),(undefined1)local_134);
    local_c8 = local_144;
    local_cc = local_140;
    uStack_b0 = CONCAT31(uStack_74,local_78._3_1_);
    local_b4._1_3_ = (undefined3)local_78;
    local_b4 = CONCAT31(local_b4._1_3_,local_13c);
    local_82 = (undefined2)uVar16;
    uStack_80 = (undefined2)((uint)uVar16 >> 0x10);
    local_86 = (undefined2)uVar9;
    uStack_84 = (undefined2)((uint)uVar9 >> 0x10);
    local_d0 = iVar13;
    local_88 = uVar4;
    local_7e = uVar3;
    local_7d = uVar2;
    FUN_01282570(puVar15);
    FUN_01282570((uint)puVar15 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar15;
      bVar19 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar19);
    *puVar15 = uVar7 - 0x10;
    if ((uVar7 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar15);
    }
    uVar5 = local_a4;
    uVar16 = local_a8;
    uVar9 = local_cc;
    iVar14 = local_d0;
    local_48 = local_c8;
    uStack_44 = local_c4;
    uStack_40 = local_c0;
    uStack_3c = uStack_bc;
    local_38 = local_b8;
    uStack_34 = local_b4;
    uStack_30 = uStack_b0;
    uStack_2c = local_ac;
    local_70 = local_a0;
    uStack_6c = uStack_9c;
    uStack_68 = uStack_98;
    uStack_64 = uStack_94;
    uStack_60 = uStack_90;
    uStack_58 = CONCAT22(local_86,local_88);
    uStack_54 = CONCAT22(local_82,uStack_84);
    uStack_50 = CONCAT13(local_7d,CONCAT12(local_7e,uStack_80));
    local_5c = local_8c;
    uStack_4c = uStack_7c;
    iVar13 = *(int *)(param_1[2] + 8);
    piVar6 = (int *)(iVar13 + 0x98);
    if (*piVar6 == 0) {
      bVar19 = (bool)hasExclusiveAccess(piVar6);
      if (!bVar19) goto LAB_00a20c9c;
      *piVar6 = 8;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00a20c9c:
      FUN_0127e06c(piVar6);
    }
    FUN_0128236c(piVar6);
    local_134 = (uint)piVar6 | 1;
    FUN_0128236c();
    piVar17 = *(int **)(iVar13 + 0x9c);
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(0x60);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x60);
    }
    *puVar10 = 1;
    puVar10[1] = 1;
    puVar10[2] = iVar14;
    puVar10[3] = uVar9;
    puVar10[4] = local_48;
    puVar10[5] = uStack_44;
    puVar10[6] = uStack_40;
    puVar10[7] = uStack_3c;
    puVar10[8] = local_38;
    puVar10[9] = uStack_34;
    puVar10[10] = uStack_30;
    puVar10[0xb] = uStack_2c;
    puVar10[0xc] = uVar16;
    puVar10[0xd] = uVar5;
    puVar10[0xe] = local_70;
    puVar10[0xf] = uStack_6c;
    puVar10[0x10] = uStack_68;
    puVar10[0x11] = uStack_64;
    puVar10[0x12] = uStack_60;
    puVar10[0x13] = local_5c;
    puVar10[0x14] = uStack_58;
    puVar10[0x15] = uStack_54;
    puVar10[0x16] = uStack_50;
    puVar10[0x17] = uStack_4c;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar17;
      bVar19 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar19);
    *piVar17 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaca60(*(undefined4 *)(iVar13 + 0x9c));
    }
    piVar17 = (int *)(iVar13 + 0xa0);
    *(undefined4 **)(iVar13 + 0x9c) = puVar10;
    DataMemoryBarrier(0xb);
    do {
      bVar19 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar19);
    *piVar17 = *piVar17 + 2;
    FUN_01282570(piVar6);
    FUN_01282570(local_134);
    if (*piVar6 == 8) {
      DataMemoryBarrier(0xb);
      do {
        bVar19 = (bool)hasExclusiveAccess(piVar6);
        if (bVar19) {
          *piVar6 = 0;
          goto LAB_00a20dbc;
        }
      } while (*piVar6 == 8);
    }
    ClearExclusiveLocal();
    FUN_0127db4c(piVar6);
LAB_00a20dbc:
    FUN_0163b708(iVar13 + 8);
    FUN_0163b708(iVar13 + 0x18);
    FUN_0163b708(iVar13 + 0x28);
    FUN_0163b708(iVar13 + 0x38);
    FUN_0163b708(iVar13 + 0x48);
    FUN_0163b708(iVar13 + 0x58);
    FUN_0163b708(iVar13 + 0x68);
    FUN_0163b708(iVar13 + 0x78);
  } while( true );
}

