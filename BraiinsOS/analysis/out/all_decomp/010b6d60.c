// FUN_010b6d60 @ 010b6d60 size=3356 calls_out=23 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010b6d60(int *param_1,char *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  undefined8 uVar30;
  int *local_1ec;
  int *local_1e8;
  uint local_1e4;
  uint local_1d0;
  int *local_1cc;
  int *local_1c8;
  int *local_1c4;
  undefined4 local_1c0;
  int *local_1bc;
  int *local_1b8;
  int *local_1b4;
  int *local_1b0;
  int *local_1ac;
  int *local_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  int *piStack_19c;
  int *local_198;
  int *piStack_194;
  int *piStack_190;
  int *piStack_18c;
  int *local_188;
  int *piStack_184;
  int *piStack_180;
  int *piStack_17c;
  int *piStack_178;
  int *piStack_174;
  int *local_170;
  int *local_16c;
  int *local_168;
  int *piStack_164;
  int *piStack_160;
  int *local_15c;
  int *local_158;
  int *piStack_154;
  int *piStack_150;
  int *piStack_14c;
  undefined2 local_142;
  undefined4 local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  undefined4 local_130;
  int *local_12c;
  int *local_128;
  int *piStack_124;
  int *local_120;
  int *local_11c;
  int *piStack_118;
  int *piStack_114;
  int *piStack_110;
  int *local_10c;
  int *piStack_108;
  int *piStack_104;
  int *piStack_100;
  int *piStack_fc;
  undefined4 local_b8;
  code *local_b4;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  int *local_a0;
  int *piStack_9c;
  int *local_98;
  int *local_94;
  int *piStack_90;
  int *local_8c;
  int *local_88;
  int *piStack_84;
  int *piStack_80;
  int *piStack_7c;
  undefined4 local_30;
  
  if (*param_2 == '\0') {
    *param_1 = 5;
    param_1[1] = 0;
    return;
  }
  if (*param_2 == '\x01') {
    iVar4 = *(int *)(param_2 + 8);
    piVar28 = (int *)(param_2 + 4);
    piVar11 = (int *)(iVar4 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = 2;
    DataMemoryBarrier(0xb);
    if (iVar16 != 2) {
      puVar12 = (uint *)(iVar4 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar17 = *puVar12;
        bVar2 = (bool)hasExclusiveAccess(puVar12);
      } while (!bVar2);
      *puVar12 = uVar17 | 2;
      DataMemoryBarrier(0xb);
      if (uVar17 == 0) {
        iVar16 = *(int *)(iVar4 + 0xc);
        *(undefined4 *)(iVar4 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar2);
        *puVar12 = *puVar12 & 0xfffffffd;
        if (iVar16 != 0) {
          (**(code **)(iVar16 + 4))(*(undefined4 *)(iVar4 + 0x10));
        }
      }
    }
    if (*piVar28 != 0) {
      FUN_010b8420(&local_140,piVar28);
      if (local_140 == (int *)&SUB_00000002) {
        iVar4 = *piVar28;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a4ce8);
        }
        piVar11 = (int *)(iVar4 + 0x2c);
        do {
          iVar16 = *piVar11;
          if (iVar16 != 0) {
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            if (iVar16 != 2) goto LAB_010b6e88;
            iVar16 = param_3[1];
            pcVar18 = *(code **)(*param_3 + 8);
            goto LAB_010b7514;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar2);
        *piVar11 = 1;
        DataMemoryBarrier(0xb);
LAB_010b6e88:
        if (iVar16 == 0) {
          if (*(undefined4 **)(iVar4 + 0x24) == (undefined4 *)0x0) {
            iVar16 = param_3[1];
LAB_010b7480:
            uVar30 = (**(code **)*param_3)(iVar16);
            if (*(int *)(iVar4 + 0x24) != 0) {
              (**(code **)(*(int *)(iVar4 + 0x24) + 0xc))(*(undefined4 *)(iVar4 + 0x28));
            }
            *(undefined8 *)(iVar4 + 0x24) = uVar30;
          }
          else {
            iVar16 = param_3[1];
            if (*(int *)(iVar4 + 0x28) != iVar16 ||
                *(undefined4 **)(iVar4 + 0x24) != (undefined4 *)*param_3) goto LAB_010b7480;
          }
          if (*piVar11 == 1) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar11);
              if (bVar2) {
                *piVar11 = 0;
                DataMemoryBarrier(0xb);
                goto LAB_010b751c;
              }
            } while (*piVar11 == 1);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          iVar7 = *(int *)(iVar4 + 0x24);
          iVar16 = *(int *)(iVar4 + 0x28);
          *(undefined4 *)(iVar4 + 0x24) = 0;
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01882284);
          }
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar2);
          *piVar11 = 0;
          DataMemoryBarrier(0xb);
          pcVar18 = *(code **)(iVar7 + 4);
LAB_010b7514:
          (*pcVar18)(iVar16);
        }
LAB_010b751c:
        FUN_010b8420(&local_1c8,piVar28);
      }
      else {
        local_b8 = (int **)local_140;
        local_b4 = (code *)local_13c;
        local_b0 = local_138;
        local_ac = local_134;
        local_a8 = local_130;
        if (local_140 == (int *)0x0) {
          piVar11 = (int *)*piVar28;
          if (piVar11 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar11;
              bVar2 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar2);
            *piVar11 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_010b52b8(*piVar28);
            }
          }
          *piVar28 = 0;
        }
        local_1c8 = (int *)local_b8;
        local_1c4 = (int *)local_b4;
        local_1c0 = local_b0;
        local_1bc = local_ac;
        local_1b8 = local_a8;
      }
      if (local_1c8 == (int *)&SUB_00000002) {
        *param_1 = 6;
        param_1[1] = 0;
        return;
      }
      if (((uint)local_1c8 & 1) != 0) {
        if (local_1c4 != (int *)0x0) {
          piVar11 = *(int **)(param_2 + 0x10);
          iVar4 = *(int *)(param_2 + 0x14);
          if (iVar4 != -1 || -iVar4 - 1U < (uint)(piVar11 < (int *)0xfffffffe)) {
            *(int *)(param_2 + 0x10) = (int)piVar11 - (int)local_1bc;
            *(uint *)(param_2 + 0x14) = iVar4 - (uint)(piVar11 < local_1bc);
          }
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = (int)local_1c4;
          param_1[3] = (int)local_1c0;
          param_1[4] = (int)local_1bc;
          param_1[5] = (int)local_1b8;
          return;
        }
        goto LAB_010b79f8;
      }
    }
    iVar4 = *(int *)(param_2 + 0xc);
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar4 + 0x68) == '\0') {
      uVar30 = (**(code **)*param_3)(param_3[1]);
      pcVar8 = (char *)(iVar4 + 0x58);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar8;
        bVar2 = (bool)hasExclusiveAccess(pcVar8);
      } while (!bVar2);
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        if (*(int *)(iVar4 + 0x50) != 0) {
          (**(code **)(*(int *)(iVar4 + 0x50) + 0xc))(*(undefined4 *)(iVar4 + 0x54));
        }
        *(undefined8 *)(iVar4 + 0x50) = uVar30;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar4 + 0x58) = 0;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if (*(char *)(iVar4 + 0x68) == '\0') goto LAB_010b76e8;
      }
      else {
        (**(code **)((int)uVar30 + 0xc))((int)((ulonglong)uVar30 >> 0x20));
      }
    }
    pcVar8 = (char *)(iVar4 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar8;
      bVar2 = (bool)hasExclusiveAccess(pcVar8);
    } while (!bVar2);
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 != '\0') {
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    iVar16 = *(int *)(iVar4 + 8);
    iVar7 = *(int *)(iVar4 + 0xc);
    *(int *)(iVar4 + 8) = 3;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    if (iVar16 == 3 && iVar7 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar4 + 0x48) = 0;
      DataMemoryBarrier(0xb);
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    iVar13 = *(int *)(iVar4 + 0x14);
    iVar21 = *(int *)(iVar4 + 0x18);
    iVar25 = *(int *)(iVar4 + 0x1c);
    iVar9 = *(int *)(iVar4 + 0x20);
    iVar14 = *(int *)(iVar4 + 0x24);
    iVar19 = *(int *)(iVar4 + 0x28);
    iVar22 = *(int *)(iVar4 + 0x2c);
    iVar26 = *(int *)(iVar4 + 0x30);
    iVar10 = *(int *)(iVar4 + 0x34);
    iVar15 = *(int *)(iVar4 + 0x38);
    iVar20 = *(int *)(iVar4 + 0x3c);
    iVar23 = *(int *)(iVar4 + 0x40);
    iVar27 = *(int *)(iVar4 + 0x44);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar4 + 0x48) = 0;
    DataMemoryBarrier(0xb);
    if (iVar16 != 4 || iVar7 != 0) {
      param_1[2] = *(int *)(iVar4 + 0x10);
      param_1[3] = iVar13;
      param_1[4] = iVar21;
      param_1[5] = iVar25;
      param_1[6] = iVar9;
      param_1[7] = iVar14;
      param_1[8] = iVar19;
      param_1[9] = iVar22;
      param_1[10] = iVar26;
      param_1[0xb] = iVar10;
      param_1[0xc] = iVar15;
      param_1[0xd] = iVar20;
      param_1[0xe] = iVar23;
      param_1[0xf] = iVar27;
      *param_1 = iVar16;
      param_1[1] = iVar7;
      return;
    }
LAB_010b76e8:
    *param_1 = 6;
    param_1[1] = 0;
    return;
  }
  piVar11 = (int *)(param_2 + 8);
  if (param_2[1] == '\0') {
    FUN_010276e0(&local_1c8,piVar11,param_3);
    piVar28 = local_1bc;
    uVar17 = (uint)local_1c8 & 0xff;
    if (uVar17 == 5) {
      local_134 = local_1b8;
      local_140 = local_1c4;
      local_13c = local_1c0;
      local_138 = local_1bc;
      FUN_01027b5c(&local_b8,piVar11,local_1bc);
      if ((char)local_b8 != '\x05') {
        FUN_014ed8bc(&local_b8);
      }
      piVar11 = *(int **)(param_2 + 0x18);
      iVar4 = *(int *)(param_2 + 0x1c);
      if (iVar4 != -1 || -iVar4 - 1U < (uint)(piVar11 < (int *)0xfffffffe)) {
        *(int *)(param_2 + 0x18) = (int)piVar11 - (int)piVar28;
        *(uint *)(param_2 + 0x1c) = iVar4 - (uint)(piVar11 < piVar28);
      }
      FUN_010c268c(*(undefined4 *)(param_2 + 4),piVar28,
                   -1 - (iVar4 + (uint)(piVar11 >= (int *)0xfffffffe)),-3 - (int)piVar11);
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = (int)local_1c4;
      param_1[3] = (int)local_1c0;
      param_1[4] = (int)local_1bc;
      param_1[5] = (int)local_1b8;
      return;
    }
    if (uVar17 != 6) {
      if (uVar17 != 7) {
        local_140 = (int *)CONCAT31(local_140._1_3_,local_1c8._0_1_);
        FUN_016dd1aa((uint)&local_140 | 1,(uint)&local_1c8 | 1,0x13);
        local_12c = local_1b4;
        if (uVar17 - 1 < 2) {
          ppiVar5 = (int **)((uint)&local_140 | 4);
        }
        else {
          if (uVar17 != 0) goto LAB_010b7364;
          ppiVar5 = &local_138;
        }
        if (((uint)*ppiVar5 & 0xfffffff7) == 0) {
          *param_1 = 5;
          param_1[1] = 0;
          FUN_014ed8bc(&local_140);
          return;
        }
LAB_010b7364:
        local_b8 = (int **)local_140;
        local_b4 = (code *)local_13c;
        local_b0 = local_138;
        local_ac = local_134;
        local_a8 = local_130;
        local_a4 = local_1b4;
        iVar4 = FUN_010bf05c(&local_b8);
        *param_1 = 4;
        param_1[1] = 0;
        param_1[2] = iVar4;
        return;
      }
      goto LAB_010b76e8;
    }
    param_2[1] = '\x01';
  }
  iVar4 = *piVar11;
  piVar11 = (int *)(iVar4 + 8);
  do {
    if (*piVar11 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar11);
      goto LAB_010b6f20;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = 1;
  DataMemoryBarrier(0xb);
LAB_010b6f20:
  local_1d0 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar4 + 0xc);
  }
  else {
    local_1d0 = FUN_015bf3f8();
    local_1d0 = local_1d0 ^ 1;
    cVar1 = *(char *)(iVar4 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar17 = (uint)local_b4 >> 8;
    local_b4 = (code *)CONCAT31((int3)uVar17,(char)local_1d0);
    local_b8 = (int **)piVar11;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_b8,&DAT_01882f54,&DAT_01882e94);
  }
  local_140 = *(int **)(param_2 + 0xc);
  local_13c = *(int **)(param_2 + 0x10);
  if (((*(int **)(iVar4 + 0x198) <= local_140) ||
      (piVar28 = (int *)(*(int *)(iVar4 + 0x194) + (int)local_140 * 0xf8),
      *piVar28 == 3 && piVar28[1] == 0)) || ((int *)piVar28[0x35] != local_13c)) {
    local_b8 = &local_13c;
    local_b4 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_b8,&DAT_01882560);
  }
  FUN_0102fb64(&local_140,piVar28 + 0x2d,iVar4 + 0xa4);
  piVar3 = local_13c;
  piVar6 = local_140;
  if (((uint)local_140 & 7) == 5) {
    local_1e4 = (uint)local_130 >> 8 & 0xff;
    local_1cc = local_12c;
    local_142 = local_130._2_2_;
    local_1ec = piStack_124;
    local_1e8 = local_128;
    uVar17 = (uint)local_130 & 0xff;
    local_170 = local_120;
    local_16c = local_11c;
    local_168 = piStack_118;
    piStack_164 = piStack_114;
    piStack_160 = piStack_110;
    local_15c = local_10c;
    local_158 = piStack_108;
    piStack_154 = piStack_104;
    piStack_150 = piStack_100;
    piStack_14c = piStack_fc;
    piVar28 = local_134;
    piVar29 = local_138;
LAB_010b73a0:
    if (piVar3 != (int *)(uint)(piVar6 < &DAT_00000005) ||
        (uint)((int)piVar3 - (int)(uint)(piVar6 < &DAT_00000005)) < (uint)(1 < (int)piVar6 - 5U)) {
      iVar16 = 0;
      if ((uint)(piVar6 < &DAT_00000004) <= (uint)-(int)piVar3) {
        iVar16 = (int)piVar6 + -3;
      }
      if (iVar16 == 0) {
        FUN_01015a80(&local_140,-((int)piVar3 + (uint)(piVar6 >= &DAT_00000004)));
      }
      else if (iVar16 == 1) {
        (*(code *)local_138[4])(&local_12c,local_134,local_130);
      }
      else {
        FUN_01015c1c(&local_138);
      }
    }
  }
  else {
    local_1cc = param_3;
    if (local_140 == (int *)&DAT_00000006) {
      FUN_01020140(&local_b8,piVar28 + 8);
      uVar17 = (uint)local_b8 & 0xff;
      if (uVar17 == 3) {
        if (((uint)local_b8 & 0x100) == 0) {
          piVar29 = (int *)&DAT_00000004;
        }
        else {
          uVar30 = (**(code **)*param_3)(param_3[1]);
          if (piVar28[0x14] != 0) {
            (**(code **)(piVar28[0x14] + 0xc))(piVar28[0x15]);
          }
          piVar29 = (int *)&DAT_00000005;
          *(undefined8 *)(piVar28 + 0x14) = uVar30;
        }
        uVar17 = 0;
        piVar28 = (int *)0x0;
      }
      else {
        local_1e8 = local_b0;
        local_1ec = local_ac;
        local_170 = local_a8;
        local_16c = local_a4;
        local_1cc = (int *)local_b4;
        local_142 = local_b8._2_2_;
        piVar28 = (int *)0x0;
        piVar29 = (int *)0x3;
        local_1e4 = (uint)local_b8 >> 8 & 0xff;
      }
      goto LAB_010b73a0;
    }
    FUN_016dd1aa(&local_b8,&local_140,0x88);
    uVar17 = *(uint *)(iVar4 + 0xb4);
    local_30 = 0;
    FUN_01029f4c(iVar4 + 0xa4,uVar17,&local_b8);
    if (piVar28[0x2d] == 1) {
      if ((*(uint *)(iVar4 + 0xac) <= uVar17) ||
         (piVar6 = (int *)(*(int *)(iVar4 + 0xa8) + uVar17 * 0x90), *piVar6 == 6 && piVar6[1] == 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_015be724(&DAT_00412edc,0xb,&DAT_018a58ac);
      }
      iVar16 = piVar28[0x2e];
      piVar6[0x22] = 1;
      piVar6[0x23] = iVar16;
      piVar28[0x2e] = uVar17;
    }
    else {
      piVar28[0x2e] = uVar17;
      piVar28[0x2d] = 1;
      piVar28[0x2f] = uVar17;
    }
    uVar17 = 0;
    piVar29 = (int *)&DAT_00000005;
    piVar28 = (int *)0x0;
  }
  if (((local_1d0 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
    *(undefined1 *)(iVar4 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar11,0x81,1);
    if (piVar29 == (int *)&DAT_00000005 && piVar28 == (int *)0x0) goto LAB_010b7464;
  }
  else if (piVar29 == (int *)&DAT_00000005 && piVar28 == (int *)0x0) {
LAB_010b7464:
    *param_1 = 6;
    param_1[1] = 0;
    return;
  }
  if (((uint)piVar29 & 7) == 3) {
    if (uVar17 == 0) {
      uVar24 = 0;
    }
    else if (uVar17 == 1) {
      uVar24 = 1;
      local_b4 = (code *)local_16c;
      local_b8 = (int **)local_170;
      piVar11 = local_1ec;
    }
    else {
      if (local_1cc == (int *)&DAT_80000000) {
        local_140 = (int *)CONCAT31(CONCAT21(local_140._2_2_,(char)local_1e4),1);
      }
      else {
        local_b0 = local_1ec;
        local_b4 = (code *)local_1e8;
        local_b8 = (int **)local_1cc;
        FUN_01650c14(&local_140,local_1e4,&local_b8);
        local_1e8 = local_13c;
      }
      uVar24 = 4;
      local_1cc = local_140;
    }
    local_1c0 = (int *)CONCAT31(CONCAT21(local_1c0._2_2_,(char)local_1e4),uVar24);
    local_1b8 = local_1e8;
    local_1b4 = piVar11;
  }
  else {
    if (piVar29 == (int *)&DAT_00000004) {
      piVar28 = (int *)0x0;
      piVar29 = (int *)0x3;
LAB_010b78a0:
      local_b0 = local_1c0;
      local_ac = local_1bc;
      local_a8 = local_1b8;
      local_a4 = local_1b4;
      local_a0 = local_1b0;
      piStack_9c = local_1ac;
      local_98 = local_1a8;
      local_94 = piStack_1a4;
      piStack_90 = piStack_1a0;
      local_8c = piStack_19c;
      local_88 = local_198;
      piStack_84 = piStack_194;
      piStack_80 = piStack_190;
      piStack_7c = piStack_18c;
      local_b8 = (int **)piVar29;
      local_b4 = (code *)piVar28;
      FUN_010c2a14(*(undefined4 *)(param_2 + 4));
      if (piVar29 == (int *)0x3 && piVar28 == (int *)0x0) {
        piVar28 = (int *)0x0;
        piVar29 = (int *)&DAT_00000005;
      }
      else {
        local_140 = local_b0;
        local_13c = local_ac;
        local_138 = local_a8;
        local_134 = local_a4;
        local_130 = local_a0;
        local_12c = piStack_9c;
        local_128 = local_98;
        piStack_124 = local_94;
        local_120 = piStack_90;
        local_11c = local_8c;
        piStack_118 = local_88;
        piStack_114 = piStack_84;
        piStack_110 = piStack_80;
        local_10c = piStack_7c;
      }
      *param_1 = (int)piVar29;
      param_1[1] = (int)piVar28;
      param_1[2] = (int)local_140;
      param_1[3] = (int)local_13c;
      param_1[4] = (int)local_138;
      param_1[5] = (int)local_134;
      param_1[6] = (int)local_130;
      param_1[7] = (int)local_12c;
      param_1[8] = (int)local_128;
      param_1[9] = (int)piStack_124;
      param_1[10] = (int)local_120;
      param_1[0xb] = (int)local_11c;
      param_1[0xc] = (int)piStack_118;
      param_1[0xd] = (int)piStack_114;
      param_1[0xe] = (int)piStack_110;
      param_1[0xf] = (int)local_10c;
      return;
    }
    local_1b0 = local_170;
    local_1bc = local_1cc;
    local_1b8 = local_1e8;
    local_1ac = local_16c;
    local_1b4 = local_1ec;
    local_1c0 = (int *)CONCAT22(local_142,(short)CONCAT31((int3)local_1e4,(char)uVar17));
    local_1a8 = local_168;
    piStack_1a4 = piStack_164;
    piStack_1a0 = piStack_160;
    piStack_19c = local_15c;
    local_198 = local_158;
    piStack_194 = piStack_154;
    piStack_190 = piStack_150;
    piStack_18c = piStack_14c;
    if (piVar29 != (int *)&DAT_00000004 || piVar28 != (int *)0x0) goto LAB_010b78a0;
  }
  local_188 = local_1c0;
  piStack_184 = local_1cc;
  piStack_180 = local_1b8;
  piStack_17c = local_1b4;
  piStack_178 = local_1b0;
  piStack_174 = local_1ac;
  local_1bc = local_1cc;
  local_1c0 = (int *)FUN_010bed08();
LAB_010b79f8:
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = (int)local_1c0;
  return;
}

