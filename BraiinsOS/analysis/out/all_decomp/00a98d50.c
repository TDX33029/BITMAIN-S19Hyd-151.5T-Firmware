// FUN_00a98d50 @ 00a98d50 size=3692 calls_out=8 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00a98d50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  int iVar32;
  int iVar33;
  undefined1 uVar34;
  undefined4 unaff_r7;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  int iVar42;
  undefined4 uVar43;
  int iVar44;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  ushort local_148;
  ushort local_128;
  ushort local_120;
  ushort local_100;
  ushort local_fc;
  ushort local_f4;
  uint local_f0;
  uint local_ec;
  int local_c4;
  int local_bc;
  int local_90;
  ushort local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int *local_68;
  code *pcStack_64;
  uint uStack_60;
  undefined1 uStack_5c;
  int local_5b;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int local_3c;
  int iStack_38;
  int local_30;
  int *local_2c;
  code *local_28;
  
  uVar34 = 2;
  uVar5 = 2;
  if (param_5[0x65] != -0x80000000) {
    local_40 = param_5[0x66];
    local_3c = param_5[0x67];
    FUN_00fb3af4(&local_68,&local_40);
    if ((char)local_68 == '\0') {
      FUN_00fb3f68(&local_68,&local_40);
      if ((char)local_68 == '\x01') {
        unaff_r7 = CONCAT13(pcStack_64._0_1_,local_68._1_3_);
        local_80 = CONCAT13((undefined1)uStack_60,pcStack_64._1_3_);
        local_7c = CONCAT13(uStack_5c,uStack_60._1_3_);
        local_78 = local_5b;
        if (local_3c == 0) {
          iStack_48 = local_5b;
          uVar5 = 1;
          local_50 = local_80;
          iStack_4c = local_7c;
          goto LAB_00a98df8;
        }
      }
      uVar5 = 2;
    }
    else {
      unaff_r7 = CONCAT13(pcStack_64._0_1_,local_68._1_3_);
      uVar5 = 0;
      if (local_3c != 0) {
        uVar5 = 2;
      }
    }
  }
LAB_00a98df8:
  if (param_5[0x1e] == 2) {
    local_ec = 0;
    local_fc = 0;
    local_100 = 0;
    local_f4 = 0;
    local_f0 = 0;
  }
  else {
    local_184 = param_5[0x25];
    local_188 = param_5[0x23];
    local_ec = param_5[0x24] & (uint)(local_184 < 0x80000000);
    local_190 = param_5[0x21];
    local_18c = param_5[0x1f];
    local_f4 = (ushort)param_5[0x22] & (ushort)(local_188 < 0x8000);
    uVar34 = *(undefined1 *)(param_5 + 0x28);
    local_fc = (ushort)param_5[0x20] & (ushort)(local_190 < 0x8000);
    local_100 = (ushort)param_5[0x1e] & (ushort)(local_18c < 0x8000);
    if (param_5[0x26] == 0) {
      local_f0 = 0;
    }
    else {
      local_1a0 = param_5[0x27];
      local_f0 = ~local_1a0 >> 0x1f;
    }
  }
  iVar35 = param_5[0x55];
  iVar27 = 1;
  iVar42 = param_5[0x12];
  iVar6 = 1;
  uVar22 = param_5[0x54];
  if ((iVar35 != 0) && (iVar6 = thunk_FUN_016d4a50(iVar35), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar35);
  }
  FUN_016dd1aa(iVar6,uVar22,iVar35);
  iVar23 = param_5[0x2b];
  uVar22 = param_5[0x2a];
  if ((iVar23 != 0) && (iVar27 = thunk_FUN_016d4a50(iVar23), iVar27 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar23);
  }
  FUN_016dd1aa(iVar27,uVar22,iVar23);
  iVar36 = param_5[100];
  iVar28 = 1;
  uVar22 = param_5[99];
  iVar7 = 1;
  if ((iVar36 != 0) && (iVar7 = thunk_FUN_016d4a50(iVar36), iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar36);
  }
  FUN_016dd1aa(iVar7,uVar22,iVar36);
  iVar24 = param_5[0x58];
  iVar44 = param_5[0x57];
  if ((iVar24 != 0) && (iVar28 = thunk_FUN_016d4a50(iVar24), iVar28 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar24);
  }
  FUN_016dd1aa(iVar28,iVar44,iVar24);
  iVar29 = -0x80000000;
  if (param_5[0x68] == -0x80000000) {
    iVar37 = -0x80000000;
  }
  else {
    iVar37 = param_5[0x6a];
    uVar22 = param_5[0x69];
    if (iVar37 == 0) {
      local_160 = 1;
    }
    else {
      local_160 = thunk_FUN_016d4a50(iVar37);
      if (local_160 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar37);
      }
    }
    FUN_016dd1aa(local_160,uVar22,iVar37);
  }
  uVar8 = param_5[5];
  uVar38 = param_5[4];
  if (param_5[0x2f] != -0x80000000) {
    uVar22 = param_5[0x30];
    iVar29 = param_5[0x31];
    if (iVar29 == 0) {
      local_164 = 1;
    }
    else {
      local_164 = thunk_FUN_016d4a50(iVar29);
      if (local_164 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar29);
      }
    }
    FUN_016dd1aa(local_164,uVar22,iVar29);
  }
  uVar22 = *param_5;
  uVar9 = param_5[1];
  uVar10 = param_5[2];
  uVar11 = param_5[3];
  if (iVar42 == 2) {
    local_120 = 0;
    local_128 = 0;
    local_8c = 0;
  }
  else {
    local_194 = param_5[0x17];
    local_198 = param_5[0x13];
    local_120 = (ushort)param_5[0x16] & (ushort)(local_194 < 0x8000);
    local_8c = 0;
    local_128 = (ushort)iVar42 & (ushort)(local_198 < 0x8000);
    if (param_5[0x14] != 0) {
      local_1a4 = param_5[0x15];
      local_8c = (ushort)(local_1a4 < 0x8000);
    }
  }
  iVar42 = -0x80000000;
  if (param_5[0x32] == -0x80000000) {
    iVar30 = -0x80000000;
  }
  else {
    uVar31 = param_5[0x33];
    iVar30 = param_5[0x34];
    if (iVar30 == 0) {
      local_168 = 1;
    }
    else {
      local_168 = thunk_FUN_016d4a50(iVar30);
      if (local_168 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar30);
      }
    }
    FUN_016dd1aa(local_168,uVar31,iVar30);
  }
  uVar31 = param_5[6];
  uVar19 = param_5[7];
  if (param_5[0x35] != -0x80000000) {
    iVar42 = param_5[0x37];
    uVar25 = param_5[0x36];
    if (iVar42 == 0) {
      local_16c = 1;
    }
    else {
      local_16c = thunk_FUN_016d4a50(iVar42);
      if (local_16c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar42);
      }
    }
    FUN_016dd1aa(local_16c,uVar25,iVar42);
  }
  if (param_5[0x38] == -0x80000000) {
    iVar32 = -0x80000000;
  }
  else {
    uVar25 = param_5[0x39];
    iVar32 = param_5[0x3a];
    if (iVar32 == 0) {
      local_170 = 1;
    }
    else {
      local_170 = thunk_FUN_016d4a50(iVar32);
      if (local_170 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar32);
      }
    }
    FUN_016dd1aa(local_170,uVar25,iVar32);
  }
  iVar33 = param_5[0x5e];
  uVar25 = param_5[0x5d];
  if (iVar33 == 0) {
    iVar12 = 1;
  }
  else {
    iVar12 = thunk_FUN_016d4a50(iVar33);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar33);
    }
  }
  FUN_016dd1aa(iVar12,uVar25,iVar33);
  uVar25 = param_5[8];
  iVar39 = -0x80000000;
  uVar13 = param_5[9];
  uVar14 = param_5[10];
  uVar15 = param_5[0xb];
  uVar1 = *(undefined1 *)(param_5 + 0x4e);
  if (param_5[0x5f] == -0x80000000) {
    iVar16 = param_5[0x3b];
    local_bc = -0x80000000;
  }
  else {
    local_bc = param_5[0x61];
    uVar26 = param_5[0x60];
    if (local_bc == 0) {
      local_174 = 1;
    }
    else {
      local_174 = thunk_FUN_016d4a50(local_bc);
      if (local_174 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_bc);
      }
    }
    FUN_016dd1aa(local_174,uVar26,local_bc);
    iVar16 = param_5[0x3b];
  }
  if (iVar16 != -0x80000000) {
    iVar39 = param_5[0x3d];
    uVar26 = param_5[0x3c];
    if (iVar39 == 0) {
      local_178 = 1;
    }
    else {
      local_178 = thunk_FUN_016d4a50(iVar39);
      if (local_178 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar39);
      }
    }
    FUN_016dd1aa(local_178,uVar26,iVar39);
  }
  iVar16 = -0x80000000;
  if (param_5[0x3e] == -0x80000000) {
    iVar17 = param_5[0x41];
    local_c4 = -0x80000000;
  }
  else {
    uVar26 = param_5[0x3f];
    local_c4 = param_5[0x40];
    if (local_c4 == 0) {
      local_17c = 1;
    }
    else {
      local_17c = thunk_FUN_016d4a50(local_c4);
      if (local_17c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_c4);
      }
    }
    FUN_016dd1aa(local_17c,uVar26,local_c4);
    iVar17 = param_5[0x41];
  }
  if (iVar17 != -0x80000000) {
    iVar17 = param_5[0x43];
    iVar16 = 0;
    local_84 = 1;
    if (iVar17 == 0) {
      local_15c = 0;
    }
    else {
      iVar18 = param_5[0x42];
      pcStack_64 = FUN_01576770;
      local_68 = &local_80;
      local_80 = iVar18;
      FUN_00600d2c(&local_40,&DAT_00569c68,&local_68);
      local_15c = 0;
      if (local_40 != -0x80000000) {
        iVar17 = iVar17 + -1;
        local_80 = local_40;
        local_7c = local_3c;
        local_78 = iStack_38;
        if (iVar17 == 0) {
          local_84 = local_3c;
          local_15c = iStack_38;
        }
        else {
          do {
            iVar18 = iVar18 + 1;
            local_28 = FUN_01576770;
            local_2c = &local_30;
            local_30 = iVar18;
            FUN_00600d2c(&local_68,&DAT_00569c68,&local_2c);
            uVar4 = uStack_60;
            pcVar3 = pcStack_64;
            if ((uint)(local_80 - local_78) < uStack_60) {
              FUN_00a8a86c(&local_80,local_78,uStack_60,1,1);
            }
            iVar44 = local_78;
            local_84 = local_7c;
            FUN_016dd1aa(local_7c + local_78,pcVar3,uVar4);
            local_15c = iVar44 + uVar4;
            local_78 = local_15c;
            if (local_68 != (int *)0x0) {
              thunk_FUN_016d3fb4(pcVar3);
            }
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        iVar16 = local_80;
      }
    }
  }
  if (param_5[0x44] == -0x80000000) {
    local_90 = -0x80000000;
    iVar17 = param_5[0x47];
  }
  else {
    iVar44 = param_5[0x46];
    local_88 = 1;
    local_90 = 0;
    if (iVar44 != 0) {
      iVar17 = param_5[0x45];
      pcStack_64 = FUN_01576770;
      local_68 = &local_80;
      local_80 = iVar17;
      FUN_00600d2c(&local_40,&DAT_00569c68,&local_68);
      if (local_40 != -0x80000000) {
        iVar44 = iVar44 + -1;
        local_80 = local_40;
        local_7c = local_3c;
        local_78 = iStack_38;
        if (iVar44 == 0) {
          local_88 = local_3c;
        }
        else {
          do {
            iVar17 = iVar17 + 1;
            local_2c = &local_30;
            local_28 = FUN_01576770;
            local_30 = iVar17;
            FUN_00600d2c(&local_68,&DAT_00569c68,&local_2c);
            uVar4 = uStack_60;
            pcVar3 = pcStack_64;
            if ((uint)(local_80 - local_78) < uStack_60) {
              FUN_00a8a86c(&local_80,local_78,uStack_60,1,1);
            }
            iVar18 = local_78;
            local_88 = local_7c;
            FUN_016dd1aa(local_7c + local_78,pcVar3,uVar4);
            iStack_38 = iVar18 + uVar4;
            local_78 = iStack_38;
            if (local_68 != (int *)0x0) {
              thunk_FUN_016d3fb4(pcVar3);
            }
            iVar44 = iVar44 + -1;
          } while (iVar44 != 0);
        }
        iVar17 = param_5[0x47];
        iVar44 = iStack_38;
        local_90 = local_80;
        goto joined_r0x00a99858;
      }
    }
    iVar44 = 0;
    iVar17 = param_5[0x47];
  }
joined_r0x00a99858:
  if (iVar17 == -0x80000000) {
    iVar17 = -0x80000000;
    iVar18 = param_5[0xc];
  }
  else {
    iVar17 = param_5[0x49];
    uVar26 = param_5[0x48];
    if (iVar17 == 0) {
      local_180 = 1;
    }
    else {
      local_180 = thunk_FUN_016d4a50(iVar17);
      if (local_180 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar17);
      }
    }
    FUN_016dd1aa(local_180,uVar26,iVar17);
    iVar18 = param_5[0xc];
  }
  if (iVar18 == 0) {
    local_148 = 0;
  }
  else {
    local_19c = param_5[0xd];
    local_148 = (ushort)(local_19c + 0x8000U < 0x10000);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_5 + 0x18)) {
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    uVar26 = *param_8;
    uVar21 = param_8[1];
    uVar40 = param_8[2];
    *param_1 = 1;
    uVar2 = *(undefined2 *)((int)param_5 + 0x139);
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[0x4a] = uVar26;
    param_1[0x4b] = uVar21;
    param_1[0x4c] = uVar40;
    uVar20 = param_5[0x4c];
    *(undefined4 *)((int)param_1 + 0x169) = unaff_r7;
    *(undefined1 *)(param_1 + 0x5a) = uVar5;
    param_1[0x28] = iVar37;
    param_1[0x26] = iVar37;
    param_1[0x24] = iVar28;
    param_1[0x25] = iVar24;
    param_1[0x23] = iVar24;
    param_1[0x27] = local_160;
    param_1[0x1a] = iVar35;
    param_1[0x1c] = iVar35;
    param_1[0x1b] = iVar6;
    param_1[0x1e] = iVar27;
    param_1[0x1f] = iVar23;
    param_1[0x20] = iVar36;
    param_1[0x1d] = iVar23;
    param_1[0x21] = iVar7;
    *(short *)((int)param_1 + 0x136) = (short)uVar9;
    param_1[0x22] = iVar36;
    *(ushort *)(param_1 + 0x4d) = (ushort)uVar22 & (ushort)(uVar9 < 0x8000);
    *(short *)((int)param_1 + 0x142) = (short)local_1a4;
    *(ushort *)(param_1 + 0x50) = local_8c;
    *(short *)((int)param_1 + 0x13e) = (short)local_194;
    *(short *)((int)param_1 + 0x13a) = (short)local_198;
    *(ushort *)(param_1 + 0x4e) = local_128;
    *(ushort *)(param_1 + 0x4f) = local_120;
    param_1[0x2b] = iVar29;
    param_1[0x29] = iVar29;
    param_1[0x2a] = local_164;
    param_1[5] = uVar8;
    uVar43 = param_5[0x4a];
    param_1[4] = uVar38 & uVar8 < 0x80000000;
    param_1[7] = uVar11;
    uVar41 = param_5[0x4b];
    uVar22 = param_5[0x4d];
    uVar26 = param_5[0xe];
    param_1[6] = uVar10 & uVar11 < 0x80000000;
    uVar21 = param_5[0xf];
    *(int *)((int)param_1 + 0x171) = iStack_4c;
    uVar40 = param_5[0x10];
    *(int *)((int)param_1 + 0x16d) = local_50;
    *(short *)((int)param_1 + 0x146) = (short)uVar19;
    param_1[1] = 0;
    *(ushort *)(param_1 + 0x51) = (ushort)uVar31 & (ushort)(uVar19 < 0x8000);
    *(short *)((int)param_1 + 0x152) = (short)local_190;
    *(ushort *)(param_1 + 0x54) = local_fc;
    *(short *)((int)param_1 + 0x14e) = (short)local_18c;
    *(ushort *)(param_1 + 0x53) = local_100;
    *(short *)((int)param_1 + 0x14a) = (short)local_188;
    *(ushort *)(param_1 + 0x52) = local_f4;
    param_1[0x2e] = iVar30;
    param_1[0x2c] = iVar30;
    *(undefined1 *)((int)param_1 + 0x179) = uVar34;
    param_1[8] = local_ec;
    param_1[9] = local_184;
    param_1[10] = local_f0;
    param_1[0xb] = local_1a0;
    param_1[0x2f] = iVar42;
    param_1[0x31] = iVar42;
    param_1[0x32] = iVar32;
    param_1[0x34] = iVar32;
    param_1[0x36] = iVar12;
    param_1[0x35] = iVar33;
    param_1[0x37] = iVar33;
    *(undefined1 *)((int)param_1 + 0x17a) = uVar1;
    param_1[0x42] = local_84;
    param_1[0x43] = local_15c;
    param_1[0x2d] = local_168;
    param_1[0x44] = local_90;
    param_1[0x30] = local_16c;
    param_1[0x45] = local_88;
    param_1[0x33] = local_170;
    param_1[0x47] = iVar17;
    param_1[0x49] = iVar17;
    param_1[0x48] = local_180;
    param_1[0x3a] = local_bc;
    param_1[0x38] = local_bc;
    param_1[0xc] = uVar25;
    param_1[0x3b] = iVar39;
    param_1[0x3d] = iVar39;
    param_1[0xd] = uVar13;
    param_1[0x3e] = local_c4;
    param_1[0x40] = local_c4;
    param_1[0x41] = iVar16;
    param_1[0xe] = uVar14;
    param_1[0x39] = local_174;
    param_1[0xf] = uVar15;
    *(short *)((int)param_1 + 0x156) = (short)local_19c;
    *(ushort *)(param_1 + 0x55) = local_148;
    param_1[0x3c] = local_178;
    param_1[0x3f] = local_17c;
    uVar31 = param_5[0x11];
    *(int *)((int)param_1 + 0x175) = iStack_48;
    param_1[0x46] = iVar44;
    *(undefined1 *)(param_1 + 0x14) = 6;
    FUN_016dd1aa((int)param_1 + 0x51,&local_80,0x17);
    FUN_016dd1aa((int)param_1 + 0x17b,param_6,0x11);
    FUN_016dd1aa(param_1 + 99,param_7,0x11);
    *(undefined2 *)((int)param_1 + 0x19d) = uVar2;
    param_1[0x58] = uVar20;
    param_1[0x59] = uVar22;
    param_1[0x10] = uVar26;
    param_1[0x11] = uVar21;
    param_1[0x56] = uVar43;
    param_1[0x57] = uVar41;
    param_1[0x12] = uVar40;
    param_1[0x13] = uVar31;
    return;
  }
}

