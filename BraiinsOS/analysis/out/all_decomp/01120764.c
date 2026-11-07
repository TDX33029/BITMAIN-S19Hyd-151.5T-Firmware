// FUN_01120764 @ 01120764 size=4132 calls_out=22 calls_in=1
// strings: BUG: response handled as request | BUG: Could not write buffercursor position exceeds maximum possible vector length

void FUN_01120764(uint *param_1,uint *param_2)

{
  code *pcVar1;
  uint *******pppppppuVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  uint *******pppppppuVar5;
  uint *******pppppppuVar6;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint uVar9;
  uint *******pppppppuVar10;
  uint uVar11;
  uint *******pppppppuVar12;
  uint uVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  uint *******pppppppuVar17;
  uint *******pppppppuVar18;
  byte bVar19;
  uint *******pppppppuVar20;
  uint *******pppppppuVar21;
  uint *******pppppppuVar22;
  uint *******pppppppuVar23;
  uint ******ppppppuVar24;
  uint uVar25;
  undefined8 uVar26;
  uint *******local_170;
  uint *******local_164;
  uint *******local_160;
  uint *******local_15c;
  uint *******local_158;
  uint *******local_154;
  uint *******local_150;
  uint *******local_14c;
  uint *******local_148;
  uint *******local_144;
  uint *******local_140;
  uint local_110;
  uint uStack_10c;
  uint *******local_108;
  uint *******pppppppuStack_104;
  uint *******pppppppuStack_100;
  uint ******local_f8;
  uint local_f4;
  uint *******pppppppuStack_f0;
  uint *******pppppppuStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint *******local_e0;
  uint *******pppppppuStack_dc;
  uint *******pppppppuStack_d8;
  uint *******local_d0;
  uint *******local_cc;
  uint local_c8;
  uint *******local_c4;
  uint *******local_c0;
  uint *******local_bc;
  uint *******local_b8;
  uint *******local_b4;
  uint *******local_b0;
  uint *******local_ac;
  uint *******local_a8;
  uint *******local_a4;
  uint *******local_a0;
  uint *******local_9c;
  uint *******local_98;
  uint *******local_94;
  uint *******local_90;
  uint *******pppppppuStack_8c;
  uint *******pppppppuStack_88;
  uint *******local_84;
  uint *******local_80;
  uint *******local_7c;
  byte local_78;
  undefined4 local_70;
  uint *******local_6c;
  uint *******local_68;
  uint local_64;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  uint *******pppppppuStack_4c;
  uint *******pppppppuStack_48;
  uint *******local_44;
  uint *******local_40;
  uint *******local_3c;
  uint *******local_38;
  uint *******local_34;
  uint *******local_30;
  uint *******local_2c;
  uint local_28;
  
  uVar9 = *param_2;
  if ((uVar9 & 1) != 0) {
    uVar9 = thunk_FUN_016d4a50(0x20);
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x20);
    }
    FUN_016dd1aa(uVar9,"BUG: response handled as request",0x20);
    param_1[1] = 0x80000006;
    *param_1 = 2;
    param_1[2] = 1;
    param_1[3] = 0x20;
    param_1[4] = uVar9;
    param_1[5] = 0x20;
    goto LAB_011207dc;
  }
  uVar11 = param_2[2];
  uVar13 = param_2[3];
  local_110 = param_2[10];
  uStack_10c = param_2[0xb];
  if ((char)local_110 != '\a') {
    FUN_0111fd7c(&local_110,&DAT_0040c2b4,&DAT_0188711c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1121648);
    (*pcVar1)();
  }
  pppppppuVar23 = (uint *******)(param_2 + 4);
  local_f8 = *pppppppuVar23;
  local_f4 = param_2[5];
  pppppppuVar14 = (uint *******)param_2[6];
  pppppppuVar17 = (uint *******)param_2[7];
  uStack_e8 = param_2[8];
  uStack_e4 = param_2[9];
  pppppppuStack_f0 = pppppppuVar14;
  pppppppuStack_ec = pppppppuVar17;
  if ((char)local_f8 != '\x04') {
    pppppppuVar8 = (uint *******)FUN_00f36124(pppppppuVar23,&local_58,&DAT_01887548);
    FUN_01111ad8(pppppppuVar23);
    goto LAB_01120920;
  }
  local_c4 = pppppppuVar14 + (int)pppppppuVar17 * 6;
  pppppppuVar15 = pppppppuVar14;
  local_cc = pppppppuVar14;
  local_d0 = pppppppuVar14;
  local_c8 = local_f4;
  if (pppppppuVar17 == (uint *******)0x0) {
LAB_011208c4:
    local_170 = (uint *******)FUN_00f2c2f0(0,&local_58,&DAT_01887548);
LAB_011208dc:
    pppppppuVar8 = local_170;
    pppppppuVar20 = (uint *******)&DAT_80000000;
    bVar19 = 0;
    pppppppuVar22 = pppppppuVar17;
  }
  else {
    local_cc = pppppppuVar14 + 6;
    pppppppuVar15 = (uint *******)(uint)*(byte *)pppppppuVar14;
    if (pppppppuVar15 == (uint *******)&DAT_00000006) goto LAB_011208c4;
    pppppppuVar21 = (uint *******)((uint)&local_c0 | 1);
    local_c0 = (uint *******)CONCAT31(local_c0._1_3_,*(byte *)pppppppuVar14);
    FUN_016dd1aa(pppppppuVar21,(byte *)((int)pppppppuVar14 + 1),0x17);
    pppppppuVar3 = local_b4;
    pppppppuVar8 = local_b8;
    pppppppuVar20 = local_bc;
    if (pppppppuVar15 != (uint *******)0x3) {
      local_170 = (uint *******)FUN_00f36124(&local_c0,&local_58,&DAT_01887598);
      FUN_01111ad8(&local_c0);
      goto LAB_011208dc;
    }
    if (local_bc == (uint *******)&DAT_80000000) {
      local_170 = local_b8;
      pppppppuVar23 = pppppppuVar8;
      goto LAB_011208dc;
    }
    if (pppppppuVar17 == (uint *******)&DAT_00000001) {
LAB_01120a40:
      local_170 = (uint *******)FUN_00f2c2f0(1,&local_58,&DAT_01887548);
LAB_01120a58:
LAB_01120a5c:
      pppppppuVar15 = pppppppuVar20;
      pppppppuVar23 = pppppppuVar8;
      if (pppppppuVar20 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar8);
      }
      goto LAB_011208dc;
    }
    bVar19 = *(byte *)(pppppppuVar14 + 6);
    local_cc = pppppppuVar14 + 0xc;
    if (bVar19 == 6) goto LAB_01120a40;
    local_140 = local_b4;
    local_70 = (uint *******)CONCAT31(local_70._1_3_,bVar19);
    FUN_016dd1aa((uint)&local_70 | 1,(byte *)((int)pppppppuVar14 + 0x19),0x17);
    pppppppuVar4 = local_68;
    pppppppuVar15 = local_6c;
    if (bVar19 != 3) {
      local_170 = (uint *******)FUN_00f36124(&local_70,&local_58,&DAT_01887598);
      FUN_01111ad8(&local_70);
      goto LAB_01120a58;
    }
    if (local_6c == (uint *******)&DAT_80000000) {
      local_170 = local_68;
      goto LAB_01120a58;
    }
    local_148 = local_6c;
    local_bc = (uint *******)0x0;
    local_c0 = (uint *******)0x0;
    local_b0 = (uint *******)0x0;
    local_b4 = (uint *******)&DAT_00000001;
    local_b8 = (uint *******)0x0;
    local_28 = local_64;
    local_2c = local_68;
    local_14c = local_68;
    if ((local_64 & 1) == 0) {
      FUN_01126c98(&local_44);
    }
    else {
      local_44 = (uint *******)&local_2c;
      local_40 = (uint *******)&DAT_0157d360;
      FUN_00600d2c(&local_58,&DAT_0057f748,&local_44);
      FUN_01126a54(&local_44,&local_58);
    }
    pppppppuVar5 = local_40;
    pppppppuVar18 = local_44;
    pppppppuVar16 = local_c0;
    local_144 = local_40;
    if (local_44 == (uint *******)&DAT_80000000) {
      pppppppuVar23 = (uint *******)0x80000007;
      pppppppuVar16 = local_3c;
      pppppppuVar18 = (uint *******)&local_c0;
LAB_01121060:
      if (local_b8 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(local_b4);
      }
      local_bc = local_144;
      local_b0 = local_58;
      local_ac = local_54;
      local_a8 = local_50;
      local_a4 = pppppppuStack_4c;
      local_a0 = pppppppuStack_48;
      local_c0 = pppppppuVar23;
      local_b8 = pppppppuVar16;
      local_b4 = pppppppuVar18;
      FUN_0111dea8();
      pppppppuVar12 = (uint *******)0x0;
      pppppppuVar23 = (uint *******)&DAT_00000001;
      pppppppuVar10 = (uint *******)0x0;
    }
    else {
      local_158 = local_44;
      if (local_3c != (uint *******)&DAT_00000020) {
        local_2c = local_3c;
        local_40 = (uint *******)&LAB_00fac484;
        local_44 = (uint *******)&local_2c;
        FUN_00600d2c(&local_38,&DAT_0057a0f4,&local_44);
        pppppppuVar23 = (uint *******)0x80000006;
        local_58 = local_30;
        if (pppppppuVar18 != (uint *******)0x0) {
          thunk_FUN_016d3fb4(pppppppuVar5);
        }
        local_144 = (uint *******)0x0;
        pppppppuVar16 = local_38;
        pppppppuVar18 = local_34;
        goto LAB_01121060;
      }
      local_150 = local_bc;
      if (local_bc != (uint *******)0x0) {
LAB_0112160c:
        local_58 = (uint *******)0x2;
        local_54 = (uint *******)&DAT_018873e4;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: Could not write buffercursor position exceeds maximum possible vector length"
                     ,0x1b,&local_58,&DAT_0188739c,&DAT_018873ac);
      }
      local_15c = (uint *******)&local_b8;
      ppppppuVar24 = *local_40;
      pppppppuVar23 = local_c0 + 1;
      if ((uint *******)0xfffffffb < local_c0) {
        pppppppuVar23 = (uint *******)0xffffffff;
      }
      local_154 = local_c0;
      if ((local_b8 < pppppppuVar23) &&
         ((uint)((int)local_b8 - (int)local_b0) < (uint)((int)pppppppuVar23 - (int)local_b0))) {
        FUN_00f58340(local_15c);
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar23 = local_b4;
      }
      else {
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar23 = local_b4;
      }
      local_b4 = pppppppuVar23;
      if (local_b0 < pppppppuVar16) {
        FUN_016dd606((byte *)((int)pppppppuVar23 + (int)local_b0),0,
                     (int)pppppppuVar16 - (int)local_b0);
        local_b0 = pppppppuVar16;
      }
      *(uint *)((int)pppppppuVar23 + (int)pppppppuVar16) = uVar25;
      if (local_b0 < pppppppuVar16 + 1) {
        local_b0 = pppppppuVar16 + 1;
      }
      pppppppuVar23 = pppppppuVar16 + 1;
      local_bc = (uint *******)(uint)((uint *******)0xfffffffb < pppppppuVar16);
      ppppppuVar24 = pppppppuVar5[1];
      local_c0 = pppppppuVar23;
      if ((uint *******)0xfffffffb < pppppppuVar16) goto LAB_0112160c;
      pppppppuVar12 = pppppppuVar16 + 2;
      if ((uint *******)0xfffffffb < pppppppuVar23) {
        pppppppuVar12 = (uint *******)0xffffffff;
      }
      if ((local_b8 < pppppppuVar12) &&
         ((uint)((int)local_b8 - (int)local_b0) < (uint)((int)pppppppuVar12 - (int)local_b0))) {
        FUN_00f58340(local_15c);
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      else {
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      local_b4 = pppppppuVar12;
      if (local_b0 < pppppppuVar23) {
        FUN_016dd606((byte *)((int)pppppppuVar12 + (int)local_b0),0,
                     (int)pppppppuVar23 - (int)local_b0);
        local_b0 = pppppppuVar23;
      }
      *(uint *)((int)pppppppuVar12 + (int)pppppppuVar23) = uVar25;
      if (local_b0 < pppppppuVar16 + 2) {
        local_b0 = pppppppuVar16 + 2;
      }
      pppppppuVar23 = pppppppuVar16 + 2;
      ppppppuVar24 = pppppppuVar5[2];
      local_bc = (uint *******)(uint)((uint *******)0xfffffff7 < pppppppuVar16);
      local_c0 = pppppppuVar23;
      if ((uint *******)0xfffffff7 < pppppppuVar16) goto LAB_0112160c;
      pppppppuVar12 = pppppppuVar16 + 3;
      if ((uint *******)0xfffffffb < pppppppuVar23) {
        pppppppuVar12 = (uint *******)0xffffffff;
      }
      if ((local_b8 < pppppppuVar12) &&
         ((uint)((int)local_b8 - (int)local_b0) < (uint)((int)pppppppuVar12 - (int)local_b0))) {
        FUN_00f58340(local_15c);
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      else {
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      local_b4 = pppppppuVar12;
      if (local_b0 < pppppppuVar23) {
        FUN_016dd606((byte *)((int)pppppppuVar12 + (int)local_b0),0,
                     (int)pppppppuVar23 - (int)local_b0);
        local_b0 = pppppppuVar23;
      }
      *(uint *)((int)pppppppuVar12 + (int)pppppppuVar23) = uVar25;
      if (local_b0 < pppppppuVar16 + 3) {
        local_b0 = pppppppuVar16 + 3;
      }
      pppppppuVar23 = pppppppuVar16 + 3;
      ppppppuVar24 = pppppppuVar5[3];
      local_bc = (uint *******)(uint)((uint *******)0xfffffff3 < pppppppuVar16);
      local_c0 = pppppppuVar23;
      if ((uint *******)0xfffffff3 < pppppppuVar16) goto LAB_0112160c;
      pppppppuVar12 = pppppppuVar16 + 4;
      if ((uint *******)0xfffffffb < pppppppuVar23) {
        pppppppuVar12 = (uint *******)0xffffffff;
      }
      if ((local_b8 < pppppppuVar12) &&
         ((uint)((int)local_b8 - (int)local_b0) < (uint)((int)pppppppuVar12 - (int)local_b0))) {
        FUN_00f58340(local_15c);
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      else {
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      local_b4 = pppppppuVar12;
      if (local_b0 < pppppppuVar23) {
        FUN_016dd606((byte *)((int)pppppppuVar12 + (int)local_b0),0,
                     (int)pppppppuVar23 - (int)local_b0);
        local_b0 = pppppppuVar23;
      }
      *(uint *)((int)pppppppuVar12 + (int)pppppppuVar23) = uVar25;
      if (local_b0 < pppppppuVar16 + 4) {
        local_b0 = pppppppuVar16 + 4;
      }
      pppppppuVar23 = pppppppuVar16 + 4;
      ppppppuVar24 = pppppppuVar5[4];
      local_bc = (uint *******)(uint)((uint *******)0xffffffef < pppppppuVar16);
      local_c0 = pppppppuVar23;
      if ((uint *******)0xffffffef < pppppppuVar16) goto LAB_0112160c;
      pppppppuVar12 = pppppppuVar16 + 5;
      if ((uint *******)0xfffffffb < pppppppuVar23) {
        pppppppuVar12 = (uint *******)0xffffffff;
      }
      if ((local_b8 < pppppppuVar12) &&
         ((uint)((int)local_b8 - (int)local_b0) < (uint)((int)pppppppuVar12 - (int)local_b0))) {
        FUN_00f58340(local_15c);
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      else {
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      local_b4 = pppppppuVar12;
      if (local_b0 < pppppppuVar23) {
        FUN_016dd606((byte *)((int)pppppppuVar12 + (int)local_b0),0,
                     (int)pppppppuVar23 - (int)local_b0);
        local_b0 = pppppppuVar23;
      }
      *(uint *)((int)pppppppuVar12 + (int)pppppppuVar23) = uVar25;
      if (local_b0 < pppppppuVar16 + 5) {
        local_b0 = pppppppuVar16 + 5;
      }
      pppppppuVar23 = pppppppuVar16 + 5;
      ppppppuVar24 = pppppppuVar5[5];
      local_bc = (uint *******)(uint)((uint *******)0xffffffeb < pppppppuVar16);
      local_c0 = pppppppuVar23;
      if ((uint *******)0xffffffeb < pppppppuVar16) goto LAB_0112160c;
      pppppppuVar12 = pppppppuVar16 + 6;
      if ((uint *******)0xfffffffb < pppppppuVar23) {
        pppppppuVar12 = (uint *******)0xffffffff;
      }
      if ((local_b8 < pppppppuVar12) &&
         ((uint)((int)local_b8 - (int)local_b0) < (uint)((int)pppppppuVar12 - (int)local_b0))) {
        FUN_00f58340(local_15c);
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      else {
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      local_b4 = pppppppuVar12;
      if (local_b0 < pppppppuVar23) {
        FUN_016dd606((byte *)((int)pppppppuVar12 + (int)local_b0),0,
                     (int)pppppppuVar23 - (int)local_b0);
        local_b0 = pppppppuVar23;
      }
      *(uint *)((int)pppppppuVar12 + (int)pppppppuVar23) = uVar25;
      if (local_b0 < pppppppuVar16 + 6) {
        local_b0 = pppppppuVar16 + 6;
      }
      pppppppuVar23 = pppppppuVar16 + 6;
      ppppppuVar24 = pppppppuVar5[6];
      local_bc = (uint *******)(uint)((uint *******)0xffffffe7 < pppppppuVar16);
      local_c0 = pppppppuVar23;
      if ((uint *******)0xffffffe7 < pppppppuVar16) goto LAB_0112160c;
      pppppppuVar12 = pppppppuVar16 + 7;
      if ((uint *******)0xfffffffb < pppppppuVar23) {
        pppppppuVar12 = (uint *******)0xffffffff;
      }
      if ((local_b8 < pppppppuVar12) &&
         ((uint)((int)local_b8 - (int)local_b0) < (uint)((int)pppppppuVar12 - (int)local_b0))) {
        FUN_00f58340(local_15c);
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      else {
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar12 = local_b4;
      }
      local_b4 = pppppppuVar12;
      if (local_b0 < pppppppuVar23) {
        FUN_016dd606((byte *)((int)pppppppuVar12 + (int)local_b0),0,
                     (int)pppppppuVar23 - (int)local_b0);
        local_b0 = pppppppuVar23;
      }
      *(uint *)((int)pppppppuVar12 + (int)pppppppuVar23) = uVar25;
      if (local_b0 < pppppppuVar16 + 7) {
        local_b0 = pppppppuVar16 + 7;
      }
      pppppppuVar12 = pppppppuVar16 + 7;
      ppppppuVar24 = pppppppuVar5[7];
      local_bc = (uint *******)(uint)((uint *******)0xffffffe3 < pppppppuVar16);
      local_c0 = pppppppuVar12;
      if ((uint *******)0xffffffe3 < pppppppuVar16) goto LAB_0112160c;
      pppppppuVar23 = pppppppuVar16 + 8;
      if ((uint *******)0xfffffffb < pppppppuVar12) {
        pppppppuVar23 = (uint *******)0xffffffff;
      }
      if ((local_b8 < pppppppuVar23) &&
         ((uint)((int)local_b8 - (int)local_b0) < (uint)((int)pppppppuVar23 - (int)local_b0))) {
        FUN_00f58340(local_15c);
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar2 = local_b4;
      }
      else {
        uVar25 = (int)ppppppuVar24 << 0x18 | ((uint)ppppppuVar24 >> 8 & 0xff) << 0x10 |
                 ((uint)ppppppuVar24 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar24 >> 0x18;
        pppppppuVar2 = local_b4;
      }
      local_b4 = pppppppuVar2;
      if (local_b0 < pppppppuVar12) {
        FUN_016dd606((byte *)((int)pppppppuVar2 + (int)local_b0),0,
                     (int)pppppppuVar12 - (int)local_b0);
        local_b0 = pppppppuVar12;
      }
      pppppppuVar23 = local_b4;
      pppppppuVar10 = local_b8;
      *(uint *)((int)pppppppuVar2 + (int)pppppppuVar12) = uVar25;
      pppppppuVar12 = local_b0;
      if (local_b0 < pppppppuVar16 + 8) {
        pppppppuVar12 = pppppppuVar16 + 8;
      }
      if (pppppppuVar18 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar5);
      }
    }
    if (pppppppuVar15 != (uint *******)0x0) {
      thunk_FUN_016d3fb4(pppppppuVar4);
    }
    local_170 = pppppppuVar23;
    local_164 = pppppppuVar21;
    if (pppppppuVar10 == (uint *******)&DAT_80000000) goto LAB_01120a58;
    local_144 = pppppppuVar10;
    local_14c = pppppppuVar4;
    if (pppppppuVar17 == (uint *******)&SUB_00000002) {
LAB_01121104:
      local_170 = (uint *******)FUN_00f2c2f0(2,&local_58,&DAT_01887548);
      local_148 = pppppppuVar15;
joined_r0x01121128:
      if (pppppppuVar10 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar23);
      }
      goto LAB_01120a5c;
    }
    local_cc = pppppppuVar14 + 0x12;
    if (*(byte *)(pppppppuVar14 + 0xc) == 6) goto LAB_01121104;
    local_c0 = (uint *******)CONCAT31(local_c0._1_3_,*(byte *)(pppppppuVar14 + 0xc));
    FUN_016dd1aa(pppppppuVar21,(byte *)((int)pppppppuVar14 + 0x31),0x17);
    FUN_0111dd00(&local_70,&local_c0);
    pppppppuVar18 = local_68;
    pppppppuVar16 = local_6c;
    pppppppuVar4 = local_70;
    local_170 = local_6c;
    local_148 = pppppppuVar12;
    if (local_70 == (uint *******)&DAT_80000000) goto joined_r0x01121128;
    local_150 = local_70;
    local_14c = local_6c;
    if (pppppppuVar17 == (uint *******)0x3) {
LAB_01121198:
      local_170 = (uint *******)FUN_00f2c2f0(3,&local_58,&DAT_01887548);
LAB_011211b0:
      if (pppppppuVar4 != (uint *******)0x0) {
LAB_011211c4:
        thunk_FUN_016d3fb4(pppppppuVar16);
      }
      goto joined_r0x01121128;
    }
    local_cc = pppppppuVar14 + 0x18;
    if (*(byte *)(pppppppuVar14 + 0x12) == 6) goto LAB_01121198;
    local_154 = local_68;
    local_c0 = (uint *******)CONCAT31(local_c0._1_3_,*(byte *)(pppppppuVar14 + 0x12));
    FUN_016dd1aa(pppppppuVar21,(byte *)((int)pppppppuVar14 + 0x49),0x17);
    FUN_0111dd00(&local_70,&local_c0);
    pppppppuVar22 = local_68;
    pppppppuVar2 = local_6c;
    pppppppuVar5 = local_70;
    local_170 = local_6c;
    if (local_70 == (uint *******)&DAT_80000000) goto LAB_011211b0;
    local_158 = local_70;
    local_15c = local_6c;
    if (pppppppuVar17 == (uint *******)&DAT_00000004) {
LAB_01121298:
      local_170 = (uint *******)FUN_00f2c2f0(4,&local_58,&DAT_01887548);
LAB_011212b0:
      if (pppppppuVar5 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar2);
      }
      if (pppppppuVar4 == (uint *******)0x0) goto joined_r0x01121128;
      goto LAB_011211c4;
    }
    local_cc = pppppppuVar14 + 0x1e;
    if (*(byte *)(pppppppuVar14 + 0x18) == 6) goto LAB_01121298;
    local_c0 = (uint *******)CONCAT31(local_c0._1_3_,*(byte *)(pppppppuVar14 + 0x18));
    FUN_016dd1aa(pppppppuVar21,(byte *)((int)pppppppuVar14 + 0x61),0x17);
    FUN_01111b68(&local_70,&local_c0);
    pppppppuVar7 = local_6c;
    pppppppuVar6 = local_70;
    if (local_70 == (uint *******)&DAT_80000000) {
      local_170 = local_6c;
      goto LAB_011212b0;
    }
    local_50 = local_68;
    local_54 = local_6c;
    local_58 = local_70;
    if (pppppppuVar17 == (uint *******)&DAT_00000005) {
LAB_011213a4:
      local_170 = (uint *******)FUN_00f2c2f0(5,&local_58,&DAT_01887548);
LAB_011213bc:
      pppppppuVar15 = pppppppuVar7 + 1;
      for (pppppppuVar14 = local_68; pppppppuVar14 != (uint *******)0x0;
          pppppppuVar14 = (uint *******)((int)pppppppuVar14 + -1)) {
        if (pppppppuVar15[-1] != (uint ******)0x0) {
          thunk_FUN_016d3fb4(*pppppppuVar15);
        }
        pppppppuVar15 = pppppppuVar15 + 3;
      }
      if (pppppppuVar6 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar7);
      }
      goto LAB_011212b0;
    }
    local_cc = pppppppuVar14 + 0x24;
    if (*(byte *)(pppppppuVar14 + 0x1e) == 6) goto LAB_011213a4;
    local_c0 = (uint *******)CONCAT31(local_c0._1_3_,*(byte *)(pppppppuVar14 + 0x1e));
    FUN_016dd1aa(pppppppuVar21,(byte *)((int)pppppppuVar14 + 0x79),0x17);
    uVar26 = FUN_0111e0cc(&local_c0);
    pppppppuVar15 = (uint *******)((ulonglong)uVar26 >> 0x20);
    local_170 = pppppppuVar15;
    if ((int)uVar26 == 1) goto LAB_011213bc;
    if (pppppppuVar17 == (uint *******)&DAT_00000006) {
LAB_0112144c:
      local_170 = (uint *******)FUN_00f2c2f0(6,&local_58,&DAT_01887548);
      goto LAB_011213bc;
    }
    local_cc = pppppppuVar14 + 0x2a;
    if (*(byte *)(pppppppuVar14 + 0x24) == 6) goto LAB_0112144c;
    local_c0 = (uint *******)CONCAT31(local_c0._1_3_,*(byte *)(pppppppuVar14 + 0x24));
    FUN_016dd1aa(pppppppuVar21,(byte *)((int)pppppppuVar14 + 0x91),0x17);
    uVar26 = FUN_0111e0cc(&local_c0);
    local_160 = (uint *******)((ulonglong)uVar26 >> 0x20);
    if ((int)uVar26 == 1) {
      local_170 = local_160;
      goto LAB_011213bc;
    }
    if (pppppppuVar17 == (uint *******)&DAT_00000007) {
LAB_011215bc:
      local_170 = (uint *******)FUN_00f2c2f0(7,&local_58,&DAT_01887548);
      goto LAB_011213bc;
    }
    local_cc = pppppppuVar14 + 0x30;
    if (*(byte *)(pppppppuVar14 + 0x2a) == 6) goto LAB_011215bc;
    local_c0 = (uint *******)CONCAT31(local_c0._1_3_,*(byte *)(pppppppuVar14 + 0x2a));
    FUN_016dd1aa(pppppppuVar21,(byte *)((int)pppppppuVar14 + 0xa9),0x17);
    uVar26 = FUN_0111e0cc(&local_c0);
    local_164 = (uint *******)((ulonglong)uVar26 >> 0x20);
    if ((int)uVar26 == 1) {
      local_170 = local_164;
      goto LAB_011213bc;
    }
    FUN_0111d5a0(&local_70,&local_d0);
    if ((char)local_70 == '\x01') {
      local_170 = local_6c;
      goto LAB_011213bc;
    }
    bVar19 = local_70._1_1_;
    if (local_70._1_1_ == 2) {
      local_170 = (uint *******)FUN_00f2c2f0(8,&local_58,&DAT_01887548);
      goto LAB_011213bc;
    }
    local_78 = local_70._1_1_;
    local_e0 = local_58;
    pppppppuStack_dc = local_54;
    pppppppuStack_d8 = local_50;
    local_94 = pppppppuVar22;
    local_98 = pppppppuVar2;
    local_9c = pppppppuVar5;
    local_a0 = pppppppuVar18;
    local_a4 = pppppppuVar16;
    local_a8 = pppppppuVar4;
    local_b8 = pppppppuVar3;
    local_bc = pppppppuVar8;
    local_c0 = pppppppuVar20;
    local_90 = local_58;
    pppppppuStack_8c = local_54;
    pppppppuStack_88 = local_50;
    local_b4 = pppppppuVar10;
    local_b0 = pppppppuVar23;
    local_ac = pppppppuVar12;
    local_84 = pppppppuVar15;
    local_80 = local_160;
    local_7c = local_164;
    if (local_c4 != local_cc) {
      pppppppuVar8 = (uint *******)FUN_00f2c2f0(pppppppuVar17,&DAT_0188738c,&DAT_018ab990);
      FUN_0111d680(&local_c0);
      pppppppuVar20 = (uint *******)&DAT_80000000;
    }
  }
  FUN_01127284(local_cc,((uint)((int)local_c4 - (int)local_cc) >> 3) * -0x55555555);
  if (local_c8 != 0) {
    thunk_FUN_016d3fb4(local_d0);
  }
  if (pppppppuVar20 == (uint *******)&DAT_80000000) {
LAB_01120920:
    *param_1 = 2;
    param_1[1] = 0x80000003;
    param_1[2] = (uint)pppppppuVar8;
    return;
  }
  param_1[0x11] = (uint)pppppppuVar15;
  param_1[0xe] = (uint)local_e0;
  local_108 = local_e0;
  pppppppuStack_104 = pppppppuStack_dc;
  pppppppuStack_100 = pppppppuStack_d8;
  param_1[0x10] = (uint)pppppppuStack_d8;
  *param_1 = uVar11;
  param_1[0x12] = (uint)local_160;
  param_1[0x13] = (uint)local_164;
  param_1[1] = uVar13;
  param_1[2] = (uint)pppppppuVar20;
  param_1[8] = (uint)local_150;
  param_1[4] = (uint)local_140;
  param_1[9] = (uint)local_14c;
  param_1[5] = (uint)local_144;
  param_1[10] = (uint)local_154;
  param_1[7] = (uint)local_148;
  param_1[0xb] = (uint)local_158;
  *(byte *)(param_1 + 0x14) = bVar19 & 1;
  param_1[0xc] = (uint)local_15c;
  param_1[0xd] = (uint)pppppppuVar22;
  param_1[0xf] = (uint)pppppppuStack_dc;
  param_1[3] = (uint)pppppppuVar8;
  param_1[6] = (uint)pppppppuVar23;
  if ((uVar9 & 1) == 0) {
    return;
  }
LAB_011207dc:
  if ((char)param_2[2] != '\x06') {
    FUN_01120384();
  }
  if (param_2[8] != 0x80000000) {
    if (param_2[8] != 0) {
      thunk_FUN_016d3fb4(param_2[9]);
    }
    if ((param_2[0xb] & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_2[0xc]);
      return;
    }
  }
  return;
}

