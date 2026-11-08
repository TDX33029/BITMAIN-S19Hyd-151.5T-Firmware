// FUN_006f9674 @ 006f9674 size=2920 calls_out=19 calls_in=1
// strings: internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f9674(undefined4 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  int ****ppppiVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int ***pppiVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int ****ppppiVar16;
  int ****ppppiVar17;
  int ****ppppiVar18;
  int ****ppppiVar19;
  int ****ppppiVar20;
  int ****ppppiVar21;
  int ****ppppiVar22;
  undefined4 uVar23;
  int ****ppppiVar24;
  int ****unaff_r10;
  int ****extraout_r12;
  int ****extraout_r12_00;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int ****local_180;
  int ****local_17c;
  int ****local_178;
  int ****local_174;
  int ****local_170;
  int ****local_16c;
  int ****local_15c;
  int ****local_158;
  int ****local_154;
  int ****local_150;
  int ****local_14c;
  int ****local_148;
  int ****local_144;
  int ****local_140;
  int ****local_138;
  int ****local_134;
  int ****local_128;
  int ****local_124;
  int ****local_108;
  int ****local_104;
  int ****local_100;
  int local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  int ****local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int local_d4;
  int ****local_d0;
  int ****ppppiStack_cc;
  int ****ppppiStack_c8;
  undefined4 local_c4;
  int ****ppppiStack_c0;
  int ****local_b4;
  int ****local_b0;
  int ****local_ac;
  undefined4 uStack_a8;
  int local_a4;
  int ****local_a0;
  int ****local_9c;
  int ****local_98;
  undefined4 local_94;
  int ****ppppiStack_90;
  int ****local_88;
  int ****ppppiStack_84;
  int ****ppppiStack_80;
  undefined4 local_7c;
  int ****ppppiStack_78;
  int local_6c [5];
  int ****local_58;
  int ****local_54;
  int ****local_50;
  int ****local_4c;
  int ****local_48;
  int ****local_44;
  int ****local_40;
  int ****local_3c;
  int local_38 [5];
  
  ppppiVar22 = (int ****)&local_a0;
  local_108 = (int ****)&local_b0;
  puVar14 = *(undefined4 **)(param_2 + 0x24);
  do {
    FUN_006fb748(&local_f8,param_2);
    iVar4 = local_e8;
    uVar10 = uStack_ec;
    uVar11 = uStack_f0;
    uVar12 = local_f4;
    iVar3 = local_f8;
    if (local_f8 == 0) goto LAB_006f9f74;
    uVar23 = *(undefined4 *)(param_2 + 0x1c);
    local_104 = (int ****)**(undefined4 **)(param_2 + 0x20);
    uVar25 = FUN_0070093c(uVar23,local_f8,local_e8);
    uVar8 = FUN_006fb3b4(iVar3,iVar4);
    FUN_006fb414(&local_58,iVar3,uVar12,uVar11,uVar10,iVar4 + 1,uVar8);
    FUN_006fa500(&local_e4,&local_58);
    iVar4 = local_d4;
    iVar3 = local_e4;
    uVar9 = FUN_006fb3b4(local_e4,local_d4);
    uVar11 = uStack_d8;
    uVar12 = uStack_dc;
    ppppiVar19 = local_e0;
    if (*(uint *)(iVar3 + 0x10) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,*(uint *)(iVar3 + 0x10),&DAT_01c06500);
    }
    pcVar15 = (char *)(*(int *)(iVar3 + 0xc) + uVar9 * 0x14);
    if (*pcVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06510);
    }
    cVar1 = pcVar15[1];
    if (cVar1 != '\f') {
      if (cVar1 == '\x0e') {
        uVar27 = FUN_0070093c(uVar23,iVar3,iVar4);
        unaff_r10 = (int ****)((ulonglong)uVar27 >> 0x20);
        uVar12 = FUN_006fb3b4(iVar3,iVar4);
        FUN_006fb414(&local_88,iVar3,local_e0,uStack_dc,uStack_d8,iVar4 + 1,uVar12);
        FUN_006fb748(&local_d0,&local_88);
        if (local_d0 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c063e0);
        }
        local_a0 = local_d0;
        local_9c = ppppiStack_cc;
        local_98 = ppppiStack_c8;
        local_94 = local_c4;
        ppppiStack_90 = ppppiStack_c0;
        FUN_006fc9e8(&local_58,&local_a0,uVar23);
        ppppiVar22 = local_48;
        ppppiVar20 = local_4c;
        ppppiVar16 = local_50;
        ppppiVar19 = local_54;
        if (local_58 != (int ****)&DAT_00000009) {
          local_108 = local_3c;
          local_16c = local_44;
          goto LAB_006f9f40;
        }
        local_128 = local_48;
        FUN_00700408(&local_58,&local_88,uVar23);
        local_124 = local_50;
        if (local_58 == (int ****)&DAT_00000009) {
          local_100 = ppppiVar16;
          FUN_006f6e98(local_88,local_7c);
          uVar26 = CONCAT44(0x6f9c7c,extraout_r2);
          ppppiVar24 = (int ****)&DAT_80000000;
          ppppiVar17 = local_4c;
          local_180 = extraout_r12;
          goto LAB_006f9d70;
        }
        local_108 = local_3c;
        DataMemoryBarrier(0xb);
        do {
          pppiVar13 = *ppppiVar20;
          bVar2 = (bool)hasExclusiveAccess(ppppiVar20);
        } while (!bVar2);
        *ppppiVar20 = (int ***)((int)pppiVar13 + -1);
        if (pppiVar13 == (int ***)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(ppppiVar20,ppppiVar22);
        }
        local_16c = local_44;
      }
      else {
        if (cVar1 != '\x0f') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c063c0);
        }
        uVar27 = FUN_0070093c(uVar23,iVar3,iVar4);
        uVar12 = FUN_006fb3b4(iVar3,iVar4);
        FUN_006fb414(&local_88,iVar3,local_e0,uStack_dc,uStack_d8,iVar4 + 1,uVar12);
        FUN_006fa58c(local_38,&local_88,0x11);
        if ((local_38[0] == 0) ||
           (FUN_006fc8a0(&local_58,local_38,uVar23), local_58 == (int ****)&DAT_0000000a)) {
          local_134 = (int ****)0x0;
          unaff_r10 = (int ****)0x0;
          local_138 = local_e0;
        }
        else {
          if (local_58 != (int ****)&DAT_00000009) {
            local_108 = local_3c;
            local_16c = local_44;
            goto LAB_006f9f40;
          }
          local_108 = local_54;
          local_144 = local_50;
          local_140 = local_40;
          local_134 = local_48;
          local_138 = local_4c;
          unaff_r10 = local_44;
        }
        FUN_00700408(&local_58,&local_88,uVar23);
        ppppiVar17 = local_4c;
        ppppiVar21 = local_50;
        ppppiVar18 = local_54;
        if (local_58 == (int ****)&DAT_00000009) {
          local_ac = local_4c;
          local_124 = local_50;
          local_b0 = local_50;
          local_b4 = local_54;
          ppppiVar16 = (int ****)&local_d0;
          FUN_006fb748(ppppiVar16,&local_88);
          if (local_d0 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01c063f0);
          }
          local_a0 = local_d0;
          local_9c = ppppiStack_cc;
          local_98 = ppppiStack_c8;
          local_94 = local_c4;
          ppppiStack_90 = ppppiStack_c0;
          if (local_104 == (int ****)0x0) {
            FUN_006f6e98(local_d0,local_c4);
            ppppiVar20 = (int ****)0x0;
            ppppiVar16 = (int ****)&DAT_00000008;
            local_104 = (int ****)0x0;
            ppppiVar19 = ppppiStack_c0;
          }
          else {
            FUN_006fc544(&local_58,&local_a0,uVar23,(undefined1 *)((int)local_104 + -1));
            local_104 = local_44;
            local_128 = local_48;
            if (local_58 == (int ****)&DAT_00000009) {
              FUN_006f6e98(local_88,local_7c);
              uVar26 = CONCAT44(0x6f9d54,extraout_r2_00);
              if (ppppiVar18 != (int ****)&DAT_80000000) {
                local_100 = local_50;
                ppppiVar24 = (int ****)&DAT_80000001;
                ppppiVar19 = local_54;
                ppppiVar20 = local_4c;
                local_54 = ppppiVar18;
                local_180 = extraout_r12_00;
                goto LAB_006f9d70;
              }
              ppppiVar18 = local_50;
              local_124 = local_54;
              local_17c = local_4c;
              local_16c = local_48;
              goto LAB_006f9f4c;
            }
            local_108 = local_3c;
            local_138 = local_4c;
            ppppiVar22 = local_50;
            ppppiVar19 = local_40;
            ppppiVar16 = local_58;
            ppppiVar20 = local_48;
            ppppiVar18 = local_54;
          }
          FUN_00b96a8c(&local_b4);
          local_4c = local_138;
          local_50 = ppppiVar22;
          local_40 = ppppiVar19;
          local_58 = ppppiVar16;
          local_48 = ppppiVar20;
          local_54 = ppppiVar18;
        }
        else {
          local_104 = local_44;
          local_108 = local_3c;
        }
        if (unaff_r10 != (int ****)0x0) {
          DataMemoryBarrier(0xb);
          do {
            pppiVar13 = *unaff_r10;
            bVar2 = (bool)hasExclusiveAccess(unaff_r10);
          } while (!bVar2);
          *unaff_r10 = (int ***)((int)pppiVar13 + -1);
          if (pppiVar13 == (int ***)0x1) {
            DataMemoryBarrier(0xb);
            FUN_0070451c(unaff_r10,local_140);
          }
        }
        local_16c = local_104;
      }
LAB_006f9f40:
      local_d0 = local_88;
      local_c4 = local_7c;
      ppppiVar18 = local_4c;
      local_124 = local_50;
      local_104 = local_40;
      ppppiVar21 = local_58;
      local_17c = local_48;
      ppppiVar17 = local_54;
LAB_006f9f48:
      FUN_006f6e98(local_d0,local_c4);
      goto LAB_006f9f4c;
    }
    uVar26 = FUN_0070093c(uVar23,iVar3,iVar4);
    uVar10 = FUN_006fb3b4(iVar3,iVar4);
    FUN_006fb414(&local_d0,iVar3,ppppiVar19,uVar12,uVar11,iVar4 + 1,uVar10);
    FUN_006fa58c(&local_b4,&local_d0,0xd);
    iVar3 = local_a4;
    uVar12 = uStack_a8;
    ppppiVar20 = local_ac;
    ppppiVar16 = local_b0;
    ppppiVar19 = local_b4;
    if (local_b4 == (int ****)0x0) {
      ppppiVar16 = (int ****)0x0;
    }
    else {
      uVar11 = FUN_006fb3b4(local_b4,local_a4);
      FUN_006fb414(&local_88,ppppiVar19,ppppiVar16,ppppiVar20,uVar12,iVar3 + 1,uVar11);
      FUN_006fa500(&local_a0,&local_88);
      FUN_006fc9e8(&local_58,&local_a0,uVar23);
      ppppiVar16 = (int ****)0x0;
      if (local_58 != (int ****)&DAT_0000000a) {
        if (local_58 != (int ****)&DAT_00000009) {
          local_108 = local_3c;
          local_124 = local_50;
          local_104 = local_40;
          local_17c = local_48;
          local_16c = local_44;
          local_170 = local_54;
          goto LAB_006fa170;
        }
        local_140 = local_50;
        local_180 = local_48;
        ppppiVar16 = local_4c;
        unaff_r10 = local_54;
      }
    }
    FUN_006fb748(&local_88,&local_d0);
    if (local_88 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c063b0);
    }
    local_a0 = local_88;
    local_9c = ppppiStack_84;
    local_98 = ppppiStack_80;
    local_94 = local_7c;
    ppppiStack_90 = ppppiStack_78;
    FUN_006fc9e8(&local_58,&local_a0,uVar23);
    ppppiVar19 = local_48;
    local_138 = local_4c;
    ppppiVar5 = local_54;
    local_144 = local_50;
    local_134 = local_48;
    if (local_58 != (int ****)&DAT_00000009) {
      local_104 = local_40;
      local_108 = local_3c;
      local_124 = local_50;
      local_17c = local_48;
      local_16c = local_44;
      local_170 = local_54;
      goto LAB_006fa12c;
    }
    FUN_006fa58c(local_6c,&local_d0,0x4a);
    ppppiVar24 = (int ****)&DAT_80000000;
    if ((local_6c[0] != 0) &&
       (FUN_006ff2fc(&local_58,local_6c,uVar23), local_58 != (int ****)&DAT_0000000a)) {
      if (local_58 == (int ****)&DAT_00000009) {
        local_148 = local_50;
        local_14c = local_4c;
        ppppiVar24 = local_54;
        goto LAB_006f9944;
      }
      local_104 = local_40;
      local_108 = local_3c;
      local_124 = local_50;
      local_17c = local_48;
      local_16c = local_44;
      local_170 = local_54;
LAB_006fa0fc:
      DataMemoryBarrier(0xb);
      do {
        pppiVar13 = *local_138;
        bVar2 = (bool)hasExclusiveAccess(local_138);
      } while (!bVar2);
      *local_138 = (int ***)((int)pppiVar13 + -1);
      if (pppiVar13 == (int ***)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_138,ppppiVar19);
      }
LAB_006fa12c:
      if (ppppiVar16 != (int ****)0x0) {
        DataMemoryBarrier(0xb);
        do {
          pppiVar13 = *ppppiVar16;
          bVar2 = (bool)hasExclusiveAccess(ppppiVar16);
        } while (!bVar2);
        *ppppiVar16 = (int ***)((int)pppiVar13 + -1);
        if (pppiVar13 == (int ***)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(ppppiVar16,local_180);
        }
      }
LAB_006fa170:
      ppppiVar18 = local_4c;
      ppppiVar21 = local_58;
      ppppiVar17 = local_170;
      goto LAB_006f9f48;
    }
LAB_006f9944:
    local_ac = local_14c;
    local_b0 = local_148;
    local_b4 = ppppiVar24;
    FUN_00700408(&local_58,&local_d0,uVar23);
    ppppiVar7 = local_4c;
    ppppiVar18 = local_50;
    ppppiVar6 = local_54;
    local_124 = local_50;
    if (local_58 != (int ****)&DAT_00000009) {
      local_16c = local_44;
      local_104 = local_40;
      local_108 = local_3c;
      local_178 = local_4c;
      local_17c = local_48;
      local_170 = local_54;
LAB_006fa0cc:
      local_4c = local_178;
      if (ppppiVar24 == (int ****)&DAT_80000000) {
      }
      else {
        FUN_006d01e4(&local_b4);
      }
      goto LAB_006fa0fc;
    }
    local_98 = local_4c;
    local_9c = local_50;
    local_a0 = local_54;
    FUN_006fa58c(&local_88,&local_d0,10);
    if (local_88 == (int ****)0x0) {
      ppppiVar20 = (int ****)&DAT_80000000;
    }
    else {
      if (local_104 == (int ****)0x0) {
        FUN_006f6e98(local_88,local_7c);
        ppppiVar22 = (int ****)&DAT_00000008;
        local_104 = (int ****)0x0;
LAB_006fa0b4:
        FUN_00b96a8c(&local_a0);
        local_124 = local_174;
        local_58 = ppppiVar22;
        goto LAB_006fa0cc;
      }
      FUN_006fc544(&local_58,&local_88,uVar23,(undefined1 *)((int)local_104 + -1));
      local_170 = local_54;
      local_174 = local_50;
      local_178 = local_4c;
      local_16c = local_44;
      local_17c = local_48;
      ppppiVar20 = (int ****)&DAT_80000000;
      if (local_58 != (int ****)&DAT_0000000a) {
        if (local_58 != (int ****)&DAT_00000009) {
          local_104 = local_40;
          local_108 = local_3c;
          ppppiVar22 = local_58;
          goto LAB_006fa0b4;
        }
        local_150 = local_54;
        local_154 = local_50;
        local_158 = local_48;
        local_15c = local_44;
        ppppiVar20 = local_4c;
      }
    }
    ppppiVar21 = local_b0;
    ppppiVar17 = local_ac;
    if (ppppiVar24 == (int ****)&DAT_80000000) {
      ppppiVar24 = (int ****)0x0;
      ppppiVar21 = (int ****)&DAT_00000008;
      ppppiVar17 = (int ****)0x0;
    }
    uVar27 = CONCAT44(ppppiVar17,ppppiVar21);
    local_128 = local_158;
    local_104 = local_15c;
    local_100 = local_154;
    ppppiVar19 = local_150;
    if (ppppiVar20 == (int ****)&DAT_80000000) {
      ppppiVar19 = (int ****)0x0;
      local_128 = (int ****)&SUB_00000004;
      local_100 = (int ****)0x0;
      ppppiVar20 = (int ****)0x0;
      local_104 = (int ****)0x0;
    }
    FUN_006f6e98(local_d0,local_c4);
  } while (ppppiVar24 == (int ****)0x80000003);
  if (ppppiVar24 == (int ****)0x80000002) {
    local_124 = ppppiVar6;
    local_104 = local_100;
    local_17c = ppppiVar7;
    local_16c = ppppiVar19;
    local_108 = ppppiVar20;
LAB_006f9f4c:
    FUN_006f6e10(puVar14);
    *puVar14 = ppppiVar21;
    puVar14[1] = ppppiVar17;
    puVar14[3] = ppppiVar18;
    puVar14[4] = local_17c;
    puVar14[5] = local_16c;
    puVar14[2] = local_124;
    puVar14[6] = local_104;
    puVar14[7] = local_108;
LAB_006f9f74:
    ppppiVar22 = (int ****)0x80000002;
  }
  else {
    local_108 = ppppiVar5;
    ppppiVar17 = ppppiVar7;
    local_54 = ppppiVar6;
LAB_006f9d70:
    ppppiVar22 = (int ****)0x80000002;
    if (((uint)ppppiVar24 & 0xfffffffe) != 0x80000002) {
      param_1[7] = local_54;
      param_1[0xb] = local_100;
      *(undefined8 *)(param_1 + 5) = uVar27;
      param_1[0x15] = ppppiVar16;
      param_1[8] = local_124;
      param_1[9] = ppppiVar17;
      param_1[10] = ppppiVar19;
      *param_1 = (int)uVar25;
      param_1[0x13] = unaff_r10;
      param_1[1] = (int)((ulonglong)uVar25 >> 0x20);
      *(undefined8 *)(param_1 + 2) = uVar26;
      param_1[0xd] = local_128;
      param_1[0xe] = local_104;
      param_1[0xf] = local_108;
      param_1[0x10] = local_144;
      param_1[0x11] = local_138;
      param_1[0x12] = local_134;
      param_1[0x14] = local_140;
      param_1[0xc] = ppppiVar20;
      param_1[0x16] = local_180;
      ppppiVar22 = ppppiVar24;
    }
  }
  param_1[4] = ppppiVar22;
  return;
}

