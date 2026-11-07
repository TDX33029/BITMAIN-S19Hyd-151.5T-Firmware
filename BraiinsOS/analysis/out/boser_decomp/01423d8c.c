// FUN_01423d8c @ 01423d8c size=2200 calls_out=21 calls_in=2
// strings: 

void FUN_01423d8c(uint *param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  bool bVar24;
  undefined8 uVar25;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint local_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint local_104;
  undefined4 local_100;
  uint uStack_fc;
  uint local_f8;
  uint local_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint uStack_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 local_3c;
  undefined1 local_38;
  
  if (*param_2 == '\0') {
    uVar12 = 5;
    goto LAB_0142409c;
  }
  if (*param_2 != '\x01') {
    puVar13 = (undefined4 *)*param_3;
    piVar6 = (int *)(param_2 + 8);
    if (param_2[1] == '\0') {
      FUN_0137ca40(&local_160,piVar6);
      uVar12 = uStack_154;
      uVar22 = local_160 & 0xff;
      if (uVar22 == 5) {
        local_108 = local_15c;
        local_104 = local_158;
        local_100 = uStack_154;
        uStack_fc = uStack_150;
        FUN_0137cc98(&local_c8,piVar6,uStack_154);
        if ((char)local_c8 != '\x05') {
          FUN_01433424(&local_c8);
        }
        uVar22 = *(uint *)(param_2 + 0x18);
        iVar2 = *(int *)(param_2 + 0x1c);
        iVar11 = -1 - (iVar2 + (uint)(uVar22 >= 0xfffffffe));
        if (iVar2 != -1 || -iVar2 - 1U < (uint)(uVar22 < 0xfffffffe)) {
          bVar24 = uVar22 < uVar12;
          uVar22 = uVar22 - uVar12;
          iVar11 = iVar2 - (uint)bVar24;
          *(uint *)(param_2 + 0x18) = uVar22;
          *(int *)(param_2 + 0x1c) = iVar11;
        }
        FUN_014259a8(*(undefined4 *)(param_2 + 4),uVar12,uVar22,iVar11);
        param_1[2] = local_15c;
        param_1[3] = local_158;
        param_1[4] = uStack_154;
        param_1[5] = uStack_150;
        *param_1 = 3;
        param_1[1] = 0;
        return;
      }
      if (uVar22 != 6) {
        if (uVar22 == 7) goto LAB_01424094;
        local_108 = CONCAT31(local_108._1_3_,(undefined1)local_160);
        FUN_01bed4e2((uint)&local_108 | 1,(uint)&local_160 | 1,0x13);
        local_f4 = local_14c;
        if (uVar22 - 1 < 2) {
          puVar7 = (uint *)((uint)&local_108 | 4);
LAB_014243b8:
          if ((*puVar7 & 0xfffffff7) == 0) {
            *param_1 = 5;
            param_1[1] = 0;
            FUN_01433424(&local_108);
            return;
          }
        }
        else if (uVar22 == 0) {
          puVar7 = &local_100;
          goto LAB_014243b8;
        }
        local_c8 = local_108;
        local_c4 = local_104;
        local_c0 = local_100;
        local_bc = uStack_fc;
        local_b8 = local_f8;
        uStack_b4 = local_14c;
        local_158 = FUN_01427ef8();
LAB_014243fc:
        *param_1 = 4;
        param_1[1] = 0;
        param_1[2] = local_158;
        return;
      }
      param_2[1] = '\x01';
    }
    FUN_01933ff0(&local_c8,*piVar6 + 8);
    uVar12 = local_c4;
    if (local_c8 == 1) {
      local_38 = (undefined1)local_c0;
      local_3c = local_c4;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_3c,&DAT_01ceafc4,&DAT_01cea8ec);
    }
    uVar22 = local_c0 & 0xff;
    iVar2 = FUN_01367cb8(*(undefined4 *)(local_c4 + 0x18c),*(undefined4 *)(local_c4 + 400),
                         *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
    FUN_0138b198(&local_c8,iVar2 + 0xb4,uVar12 + 0x9c);
    if ((local_c8 & 7) == 5) {
      local_108 = local_c0;
      local_104 = local_bc;
      local_100 = local_b8;
      uStack_fc = uStack_b4;
      local_f8 = uStack_b0;
      local_f4 = local_ac;
      uStack_f0 = local_a8;
      uStack_ec = local_a4;
      local_e8 = uStack_a0;
      uStack_e4 = local_9c;
      local_e0 = local_98;
      uStack_dc = uStack_94;
      local_d8 = uStack_90;
      uStack_d4 = uStack_8c;
      uStack_d0 = uStack_88;
      uStack_cc = uStack_84;
    }
    else {
      if (local_c8 != 6) {
        FUN_0138b0e0(iVar2 + 0xb4,uVar12 + 0x9c,&local_c8);
        FUN_00a97e8c(uVar12,uVar22);
        goto LAB_01424460;
      }
      FUN_0137b91c(&local_3c,iVar2 + 0x20);
      if ((char)local_3c == '\x03') {
        if (((ushort)local_3c & 0x100) == 0) {
          local_108 = 4;
        }
        else {
          uVar25 = (**(code **)*puVar13)(puVar13[1]);
          if (*(int *)(iVar2 + 0x50) != 0) {
            (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))(*(undefined4 *)(iVar2 + 0x54));
          }
          local_108 = 5;
          *(undefined8 *)(iVar2 + 0x50) = uVar25;
        }
        local_104 = 0;
      }
      else {
        FUN_01bed4e2((int)&local_100 + 2,(uint)&local_3c | 2,0x16);
        local_104 = 0;
        local_108 = 3;
        local_100 = CONCAT31(CONCAT21(local_100._2_2_,local_3c._1_1_),(char)local_3c);
      }
    }
    if (local_c4 != local_c8 < 5 || local_c4 - (local_c8 < 5) < (uint)(1 < local_c8 - 5)) {
      FUN_01393a7c(&local_c8);
    }
    uVar5 = local_104;
    uVar4 = local_108;
    FUN_00a97e8c(uVar12,uVar22);
    if (uVar4 == 5 && uVar5 == 0) {
LAB_01424460:
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    if ((uVar4 & 7) == 3) {
      FUN_013b8db0(&local_158);
LAB_01424500:
      local_120 = local_158;
      uStack_11c = uStack_154;
      uStack_118 = uStack_150;
      uStack_114 = local_14c;
      uStack_110 = uStack_148;
      uStack_10c = uStack_144;
      uVar12 = FUN_01427dc4();
      *param_1 = 4;
      param_1[1] = 0;
      param_1[2] = uVar12;
      return;
    }
    if (uVar4 == 4) {
      uVar5 = 0;
      uVar4 = 3;
    }
    else {
      local_158 = local_100;
      uStack_154 = uStack_fc;
      uStack_150 = local_f8;
      local_14c = local_f4;
      uStack_148 = uStack_f0;
      uStack_144 = uStack_ec;
      local_140 = local_e8;
      uStack_13c = uStack_e4;
      uStack_138 = local_e0;
      uStack_134 = uStack_dc;
      local_130 = local_d8;
      uStack_12c = uStack_d4;
      uStack_128 = uStack_d0;
      uStack_124 = uStack_cc;
      if (uVar4 == 4 && uVar5 == 0) goto LAB_01424500;
    }
    local_c0 = local_158;
    local_bc = uStack_154;
    local_b8 = uStack_150;
    uStack_b4 = local_14c;
    uStack_b0 = uStack_148;
    local_ac = uStack_144;
    local_a8 = local_140;
    local_a4 = uStack_13c;
    uStack_a0 = uStack_138;
    local_9c = uStack_134;
    local_98 = local_130;
    uStack_94 = uStack_12c;
    uStack_90 = uStack_128;
    uStack_8c = uStack_124;
    local_c8 = uVar4;
    local_c4 = uVar5;
    FUN_01425b38(*(undefined4 *)(param_2 + 4));
    if (uVar4 == 3 && uVar5 == 0) {
      uVar5 = 0;
      uVar4 = 5;
      local_c0 = 0;
    }
    else {
      local_108 = local_bc;
      local_104 = local_b8;
      local_100 = uStack_b4;
      uStack_fc = uStack_b0;
      local_f8 = local_ac;
      local_f4 = local_a8;
      uStack_f0 = local_a4;
      uStack_ec = uStack_a0;
      local_e8 = local_9c;
      uStack_e4 = local_98;
      local_e0 = uStack_94;
      uStack_dc = uStack_90;
      local_d8 = uStack_8c;
    }
    param_1[2] = local_c0;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[3] = local_108;
    param_1[4] = local_104;
    param_1[5] = local_100;
    param_1[6] = uStack_fc;
    param_1[7] = local_f8;
    param_1[8] = local_f4;
    param_1[9] = uStack_f0;
    param_1[10] = uStack_ec;
    param_1[0xb] = local_e8;
    param_1[0xc] = uStack_e4;
    param_1[0xd] = local_e0;
    param_1[0xe] = uStack_dc;
    param_1[0xf] = local_d8;
    return;
  }
  iVar2 = *(int *)(param_2 + 8);
  piVar23 = (int *)(param_2 + 4);
  DataMemoryBarrier(0xb);
  piVar6 = (int *)(iVar2 + 8);
  do {
    iVar11 = *piVar6;
    bVar24 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar24);
  *piVar6 = 2;
  DataMemoryBarrier(0xb);
  if (iVar11 != 2) {
    puVar7 = (uint *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar12 = *puVar7;
      bVar24 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar24);
    *puVar7 = uVar12 | 2;
    DataMemoryBarrier(0xb);
    if (uVar12 == 0) {
      iVar11 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar24 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar24);
      *puVar7 = *puVar7 & 0xfffffffd;
      if (iVar11 != 0) {
        (**(code **)(iVar11 + 4))(*(undefined4 *)(iVar2 + 0x10));
      }
    }
  }
  if (*piVar23 == 0) {
LAB_014240fc:
    iVar2 = *(int *)(param_2 + 0xc);
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar2 + 0x68) == '\0') {
      uVar25 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
      pcVar3 = (char *)(iVar2 + 0x58);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar3;
        bVar24 = (bool)hasExclusiveAccess(pcVar3);
      } while (!bVar24);
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        if (*(int *)(iVar2 + 0x50) != 0) {
          (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))(*(undefined4 *)(iVar2 + 0x54));
        }
        *(undefined8 *)(iVar2 + 0x50) = uVar25;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar2 + 0x58) = 0;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if (*(char *)(iVar2 + 0x68) == '\0') goto LAB_01424094;
      }
      else {
        (**(code **)((int)uVar25 + 0xc))((int)((ulonglong)uVar25 >> 0x20));
      }
    }
    pcVar3 = (char *)(iVar2 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar24 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar24);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    uVar12 = 5;
    uVar22 = 0;
    if (cVar1 != '\0') {
LAB_014243a4:
      *param_1 = uVar12;
      param_1[1] = uVar22;
      return;
    }
    uVar12 = *(uint *)(iVar2 + 8);
    uVar22 = *(uint *)(iVar2 + 0xc);
    *(uint *)(iVar2 + 8) = 3;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    if (uVar12 == 3 && uVar22 == 0) {
      DataMemoryBarrier(0xb);
      *pcVar3 = '\0';
      DataMemoryBarrier(0xb);
      uVar12 = 5;
      uVar22 = 0;
      goto LAB_014243a4;
    }
    uVar8 = *(uint *)(iVar2 + 0x14);
    uVar14 = *(uint *)(iVar2 + 0x18);
    uVar17 = *(uint *)(iVar2 + 0x1c);
    uVar4 = *(uint *)(iVar2 + 0x20);
    uVar9 = *(uint *)(iVar2 + 0x24);
    uVar15 = *(uint *)(iVar2 + 0x28);
    uVar18 = *(uint *)(iVar2 + 0x2c);
    uVar20 = *(uint *)(iVar2 + 0x30);
    uVar5 = *(uint *)(iVar2 + 0x34);
    uVar10 = *(uint *)(iVar2 + 0x38);
    uVar16 = *(uint *)(iVar2 + 0x3c);
    uVar19 = *(uint *)(iVar2 + 0x40);
    uVar21 = *(uint *)(iVar2 + 0x44);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar2 + 0x48) = 0;
    DataMemoryBarrier(0xb);
    if (uVar12 != 4 || uVar22 != 0) {
      param_1[2] = *(uint *)(iVar2 + 0x10);
      param_1[3] = uVar8;
      param_1[4] = uVar14;
      param_1[5] = uVar17;
      param_1[6] = uVar4;
      param_1[7] = uVar9;
      param_1[8] = uVar15;
      param_1[9] = uVar18;
      param_1[10] = uVar20;
      param_1[0xb] = uVar5;
      param_1[0xc] = uVar10;
      param_1[0xd] = uVar16;
      param_1[0xe] = uVar19;
      param_1[0xf] = uVar21;
      goto LAB_014243a4;
    }
  }
  else {
    iVar2 = *param_3;
    FUN_0142234c(&local_108,piVar23);
    if (local_108 == 2) {
      if (*piVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2df1c);
      }
      FUN_01348e78(*piVar23 + 0x24,iVar2);
      FUN_0142234c(&local_160,piVar23);
    }
    else {
      local_c8 = local_108;
      local_c4 = local_104;
      local_c0 = local_100;
      local_bc = uStack_fc;
      local_b8 = local_f8;
      if (local_108 == 0) {
        piVar6 = (int *)*piVar23;
        if (piVar6 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar6;
            bVar24 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar24);
          *piVar6 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01421460(*piVar23);
          }
        }
        *piVar23 = 0;
      }
      local_160 = local_c8;
      local_15c = local_c4;
      local_158 = local_c0;
      uStack_154 = local_bc;
      uStack_150 = local_b8;
    }
    if (local_160 != 2) {
      if ((local_160 & 1) != 0) {
        if (local_15c != 0) {
          uVar12 = *(uint *)(param_2 + 0x10);
          iVar2 = *(int *)(param_2 + 0x14);
          if (iVar2 != -1 || -iVar2 - 1U < (uint)(uVar12 < 0xfffffffe)) {
            *(uint *)(param_2 + 0x10) = uVar12 - uStack_154;
            *(uint *)(param_2 + 0x14) = iVar2 - (uint)(uVar12 < uStack_154);
          }
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = local_15c;
          param_1[3] = local_158;
          param_1[4] = uStack_154;
          param_1[5] = uStack_150;
          return;
        }
        goto LAB_014243fc;
      }
      goto LAB_014240fc;
    }
  }
LAB_01424094:
  uVar12 = 6;
LAB_0142409c:
  *param_1 = uVar12;
  param_1[1] = 0;
  return;
}

