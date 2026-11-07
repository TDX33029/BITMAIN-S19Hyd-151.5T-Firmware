// FUN_01606444 @ 01606444 size=1988 calls_out=10 calls_in=0
// strings: VarSeq_64k

void FUN_01606444(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  bool bVar21;
  undefined8 uVar22;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int iStack_30;
  int iStack_2c;
  
  piVar19 = *(int **)(param_2 + 4);
  piVar18 = piVar19 + 2;
  if (piVar19[0x16] == -0x7fffffff) {
    local_c8 = -0x80000000;
    if (*(char *)(param_2 + 8) != '\0') goto LAB_016065bc;
LAB_01606480:
    *(undefined1 *)(param_2 + 8) = 1;
LAB_01606680:
    uVar2 = piVar19[0x16];
    bVar21 = uVar2 != 0x80000001;
    if (bVar21) {
      uVar2 = (uint)*(byte *)((int)piVar19 + 0x69);
    }
    if (bVar21 && uVar2 != 1) {
      uVar2 = piVar19[0x1c];
      if (uVar2 <= (uint)piVar19[0xe]) {
        iVar10 = piVar19[0x14];
        uVar17 = piVar19[0x15];
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          piVar12 = (int *)piVar19[0x1e];
          iVar14 = piVar12[2];
          if ((uint)(*piVar12 - iVar14) < uVar17) {
            FUN_016225b8(piVar12,iVar14,uVar17);
            iVar14 = piVar12[2];
          }
          FUN_016dd1aa(piVar12[1] + iVar14,iVar10,uVar17);
          piVar12[2] = piVar12[2] + uVar17;
        }
      }
      if (piVar19[10] != -0x80000000) {
        local_54 = piVar19[0xb];
        iStack_50 = piVar19[0xc];
        local_40 = CONCAT31(local_40._1_3_,1);
        local_34 = local_34 & 0xffff0000;
        local_3c = 0;
        local_44 = 10;
        iStack_4c = 0;
        local_58 = 10;
        local_48 = iStack_50;
        local_38 = iStack_50;
        while( true ) {
          uVar22 = FUN_01605f78(&local_58);
          uVar2 = (uint)((ulonglong)uVar22 >> 0x20);
          iVar10 = (int)uVar22;
          if (iVar10 == 0) break;
          uVar17 = 0;
          if ((uVar2 != 0) && (uVar17 = uVar2, *(char *)(iVar10 + uVar2 + -1) == '\n')) {
            uVar9 = uVar2 - 1;
            uVar17 = 0;
            if (uVar9 != 0) {
              if (*(char *)(iVar10 + uVar9 + -1) == '\r') {
                uVar9 = uVar2 - 2;
              }
              uVar17 = uVar9;
            }
          }
          piVar12 = (int *)piVar19[0x1e];
          iVar14 = piVar12[2];
          if ((uint)(*piVar12 - iVar14) < 4) {
            FUN_016225b8(piVar12,iVar14,4);
            iVar14 = piVar12[2];
          }
          *(undefined4 *)(piVar12[1] + iVar14) = 0x202f2f2f;
          piVar12[2] = piVar12[2] + 4;
          piVar12 = (int *)piVar19[0x1e];
          iVar14 = piVar12[2];
          if ((uint)(*piVar12 - iVar14) < uVar17) {
            FUN_016225b8(piVar12,iVar14,uVar17);
            iVar14 = piVar12[2];
          }
          FUN_016dd1aa(piVar12[1] + iVar14,iVar10,uVar17);
          piVar12[2] = piVar12[2] + uVar17;
          piVar12 = (int *)piVar19[0x1e];
          iVar14 = piVar12[2];
          iVar10 = iVar14;
          if (*piVar12 == iVar14) {
            FUN_016225b8(piVar12,iVar14,1);
            iVar10 = piVar12[2];
          }
          *(undefined1 *)(piVar12[1] + iVar10) = 10;
          piVar12[2] = iVar14 + 1;
          uVar2 = piVar19[0x1c];
          if (uVar2 <= (uint)piVar19[0xe]) {
            iVar10 = piVar19[0x14];
            uVar17 = piVar19[0x15];
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              piVar12 = (int *)piVar19[0x1e];
              iVar14 = piVar12[2];
              if ((uint)(*piVar12 - iVar14) < uVar17) {
                FUN_016225b8(piVar12,iVar14,uVar17);
                iVar14 = piVar12[2];
              }
              FUN_016dd1aa(piVar12[1] + iVar14,iVar10,uVar17);
              piVar12[2] = piVar12[2] + uVar17;
            }
          }
        }
      }
    }
  }
  else {
    local_c8 = -0x80000000;
    local_a8 = *piVar18;
    iStack_a4 = piVar19[3];
    iStack_a0 = piVar19[4];
    iStack_9c = piVar19[5];
    local_98 = piVar19[6];
    iStack_94 = piVar19[7];
    iStack_90 = piVar19[8];
    iStack_8c = piVar19[9];
    local_b8 = piVar19[0xb];
    iStack_b4 = piVar19[0xc];
    iStack_b0 = piVar19[0xd];
    iVar10 = piVar19[10];
    *piVar18 = local_e8;
    piVar19[3] = local_e4;
    piVar19[4] = local_e0;
    piVar19[5] = local_dc;
    piVar19[6] = local_d8;
    piVar19[7] = local_d4;
    piVar19[8] = local_d0;
    piVar19[9] = local_cc;
    piVar19[10] = -0x80000000;
    piVar19[0xb] = local_c4;
    piVar19[0xc] = local_c0;
    piVar19[0xd] = local_bc;
    if (iVar10 != -0x80000000) {
      local_88 = local_a8;
      iStack_84 = iStack_a4;
      iStack_80 = iStack_a0;
      iStack_7c = iStack_9c;
      local_78 = local_98;
      iStack_74 = iStack_94;
      local_70 = iStack_90;
      iStack_6c = iStack_8c;
      local_68 = iVar10;
      local_64 = local_b8;
      iStack_60 = iStack_b4;
      iStack_5c = iStack_b0;
      if (local_a8 != 0) {
        FUN_01622bf8(&local_58,&local_88,param_3,0x12);
        if (piVar19[10] != -0x80000000) {
          if (piVar19[10] != 0) {
            thunk_FUN_016d3fb4(piVar19[0xb]);
          }
          if (*piVar18 != 0) {
            FUN_0161b2f0(piVar18);
          }
        }
        *piVar18 = local_58;
        piVar19[3] = local_54;
        piVar19[4] = iStack_50;
        piVar19[5] = iStack_4c;
        piVar19[6] = local_48;
        piVar19[7] = local_44;
        piVar19[8] = local_40;
        piVar19[9] = local_3c;
        piVar19[10] = local_38;
        piVar19[0xb] = local_34;
        piVar19[0xc] = iStack_30;
        piVar19[0xd] = iStack_2c;
      }
      local_e8 = local_88;
      local_e4 = iStack_84;
      local_e0 = iStack_80;
      local_dc = iStack_7c;
      local_d8 = local_78;
      local_d4 = iStack_74;
      local_d0 = local_70;
      local_cc = iStack_6c;
      local_c8 = local_68;
      local_c4 = local_64;
      local_c0 = iStack_60;
      local_bc = iStack_5c;
    }
    if (*(char *)(param_2 + 8) == '\0') goto LAB_01606480;
LAB_016065bc:
    piVar12 = (int *)piVar19[0x1e];
    iVar14 = piVar12[2];
    iVar10 = iVar14;
    if (*piVar12 == iVar14) {
      FUN_016225b8(piVar12,iVar14,1);
      iVar10 = piVar12[2];
    }
    *(undefined1 *)(piVar12[1] + iVar10) = 0x2c;
    piVar12[2] = iVar14 + 1;
    if (piVar19[0x16] != -0x7fffffff) {
      if (((uint)piVar19[0xe] < (uint)piVar19[0x1c]) || (*(char *)((int)piVar19 + 0x69) == '\x01'))
      {
        piVar12 = (int *)piVar19[0x1e];
        iVar14 = piVar19[0x17];
        uVar2 = piVar19[0x18];
        iVar10 = piVar12[2];
        if ((uint)(*piVar12 - iVar10) < uVar2) {
          FUN_016225b8(piVar12,iVar10,uVar2);
          goto LAB_01606c00;
        }
      }
      else {
        piVar12 = (int *)piVar19[0x1e];
        iVar14 = piVar19[0x11];
        uVar2 = piVar19[0x12];
        iVar10 = piVar12[2];
        if ((uint)(*piVar12 - iVar10) < uVar2) {
          FUN_016225b8(piVar12,iVar10,uVar2);
LAB_01606c00:
          iVar10 = piVar12[2];
        }
      }
      FUN_016dd1aa(piVar12[1] + iVar10,iVar14,uVar2);
      piVar12[2] = piVar12[2] + uVar2;
      goto LAB_01606680;
    }
  }
  FUN_01605b78(&local_58,piVar19[0x1e],param_3,0x12);
  if ((char)local_58 == '3') {
    piVar12 = (int *)piVar19[0x1e];
    iVar14 = piVar12[2];
    iVar10 = iVar14;
    if (*piVar12 == iVar14) {
      FUN_016225b8(piVar12,iVar14,1);
      iVar10 = piVar12[2];
    }
    *(undefined1 *)(piVar12[1] + iVar10) = 0x3a;
    piVar12[2] = iVar14 + 1;
    if (piVar19[0x16] != -0x7fffffff) {
      piVar12 = (int *)piVar19[0x1e];
      iVar14 = piVar19[0x17];
      uVar2 = piVar19[0x18];
      iVar10 = piVar12[2];
      if ((uint)(*piVar12 - iVar10) < uVar2) {
        FUN_016225b8(piVar12,iVar10,uVar2);
        iVar10 = piVar12[2];
      }
      FUN_016dd1aa(piVar12[1] + iVar10,iVar14,uVar2);
      piVar12[2] = piVar12[2] + uVar2;
    }
    if (*piVar19 != 0) {
      if (piVar19[1] == 0) {
        *(undefined1 *)param_1 = 0x31;
        goto joined_r0x016068a8;
      }
      piVar19[1] = piVar19[1] + -1;
    }
    FUN_0160cd80(&local_58,piVar19,"VarSeq_64k",param_4,param_5);
    if ((char)local_58 == '3') {
      if (*piVar19 == 1) {
        iVar10 = piVar19[1] + 1;
        if (piVar19[1] == -1) {
          iVar10 = -1;
        }
        piVar19[1] = iVar10;
      }
      if (piVar19[0x16] != -0x7fffffff) {
        iVar20 = piVar19[2];
        iVar16 = piVar19[3];
        piVar19[2] = local_e8;
        piVar19[3] = local_e4;
        iVar11 = piVar19[6];
        piVar19[6] = local_d8;
        iVar14 = piVar19[7];
        iVar3 = piVar19[8];
        piVar19[7] = local_d4;
        iVar4 = piVar19[9];
        piVar19[8] = local_d0;
        iVar5 = piVar19[10];
        piVar19[9] = local_cc;
        iVar6 = piVar19[0xb];
        bVar21 = local_c8 != -0x80000000;
        iVar15 = piVar19[4];
        piVar19[4] = local_e0;
        iVar7 = piVar19[0xc];
        piVar19[0xb] = local_c4;
        iVar8 = piVar19[0xd];
        piVar19[0xc] = local_c0;
        iVar10 = iVar8;
        if (bVar21) {
          iVar10 = *piVar18;
        }
        iVar13 = piVar19[5];
        piVar19[5] = local_dc;
        iVar1 = iVar10;
        if (bVar21 && iVar10 != 0) {
          iVar1 = iVar5;
        }
        piVar19[10] = local_c8;
        piVar19[0xd] = local_bc;
        local_e8 = iVar20;
        local_e4 = iVar16;
        local_e0 = iVar15;
        local_dc = iVar13;
        local_d8 = iVar11;
        local_d4 = iVar14;
        local_d0 = iVar3;
        local_cc = iVar4;
        local_c8 = iVar5;
        local_c4 = iVar6;
        local_c0 = iVar7;
        local_bc = iVar8;
        if ((bVar21 && iVar10 != 0) && iVar1 != -0x80000000) {
          FUN_016228e8(&local_58,piVar18,param_3,0x12,&local_e8);
          if (local_38 != -0x80000000) {
            FUN_01605b44(&local_58);
          }
          *(undefined1 *)param_1 = 0x33;
          return;
        }
      }
      *(undefined1 *)param_1 = 0x33;
      goto joined_r0x016068a8;
    }
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = iStack_50;
  param_1[3] = iStack_4c;
  param_1[4] = local_48;
  param_1[5] = local_44;
  param_1[6] = local_40;
  param_1[7] = local_3c;
  param_1[8] = local_38;
joined_r0x016068a8:
  if (local_c8 != -0x80000000) {
    if (local_c8 != 0) {
      thunk_FUN_016d3fb4(local_c4);
    }
    if (local_e8 != 0) {
      FUN_0161b2f0(&local_e8);
      return;
    }
  }
  return;
}

