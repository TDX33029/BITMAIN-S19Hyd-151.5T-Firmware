// FUN_00dd22b0 @ 00dd22b0 size=7788 calls_out=41 calls_in=0
// strings: netmask | gateway | dnsServers | Network settings could not be updated | Invalid IP address syntax | Network settings could not be updated

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dd22b0(undefined4 *param_1,undefined4 *param_2,int ****param_3)

{
  int ****ppppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  byte bVar4;
  undefined1 uVar5;
  int ***pppiVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  int ****ppppiVar12;
  int iVar13;
  int ****ppppiVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int ****ppppiVar18;
  undefined4 uVar19;
  int *piVar20;
  int ****ppppiVar21;
  undefined4 uVar22;
  int iVar23;
  int ****ppppiVar24;
  int ****unaff_r10;
  int ****ppppiVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  int iVar29;
  undefined4 uVar30;
  int ****local_288;
  int ****local_284;
  int ****local_280;
  int ****local_27c;
  int ****local_270;
  int ****local_26c;
  int ****local_268;
  int ****local_264;
  int ****local_260;
  int ****local_25c;
  int ****local_258;
  undefined4 *local_254;
  int ****local_250;
  int ****local_24c;
  undefined4 *local_248;
  int ****local_244;
  undefined4 *local_240;
  int ****local_23c;
  int ****local_234;
  int ****local_230;
  int ****local_228;
  int ****ppppiStack_224;
  int ****ppppiStack_220;
  int ****local_21c;
  int ****ppppiStack_218;
  int ****ppppiStack_214;
  int ****ppppiStack_210;
  int ****local_208;
  int ****ppppiStack_204;
  int ****ppppiStack_200;
  int ****local_1f8;
  int ****local_1f4;
  int ****local_1f0;
  int ****ppppiStack_1ec;
  int ****ppppiStack_1e8;
  int ****ppppiStack_1e4;
  int ****ppppiStack_1e0;
  int ****local_1d8;
  int ****ppppiStack_1d4;
  int ****ppppiStack_1d0;
  int ****local_1c8;
  int ****ppppiStack_1c4;
  int ****ppppiStack_1c0;
  int ****local_1bc;
  int ****ppppiStack_1b8;
  int ****ppppiStack_1b4;
  int ****ppppiStack_1b0;
  int ****local_1a8;
  int ****ppppiStack_1a4;
  int ****ppppiStack_1a0;
  int ****local_198;
  int ****local_194;
  int ****local_190;
  int ****local_188;
  int ****local_184;
  int ****local_180;
  undefined4 local_17c;
  int ****local_178;
  int ****local_174;
  int ****local_170;
  int ****local_16c;
  int ****local_168;
  int ****local_164;
  int ****local_160;
  int ****local_15c;
  int ****local_158;
  int ****local_154;
  undefined4 local_150;
  int ****local_148;
  int ****ppppiStack_144;
  int ****ppppiStack_140;
  int ****ppppiStack_13c;
  int ****local_138;
  int ****ppppiStack_134;
  int ****local_130;
  int ****ppppiStack_12c;
  int ****ppppiStack_128;
  int ****local_124;
  int ****ppppiStack_120;
  int ****ppppiStack_11c;
  int ****ppppiStack_118;
  int ****ppppiStack_114;
  int ****local_110;
  int ****ppppiStack_10c;
  int ****ppppiStack_108;
  int ****local_100;
  int ****local_fc;
  int ****local_f8;
  int ****local_f4;
  int ****ppppiStack_f0;
  int ****ppppiStack_ec;
  int ****ppppiStack_e8;
  int ****local_e0;
  int ****ppppiStack_dc;
  int ****ppppiStack_d8;
  int ****local_d0;
  int ****ppppiStack_cc;
  int ****ppppiStack_c8;
  int ****local_c0;
  int ****local_bc;
  int ****local_b8;
  int ****local_b4;
  int ****local_b0;
  int ****local_ac;
  int ****local_a8;
  int ****local_a4;
  int ****local_a0;
  int ****local_9c;
  int ****local_98;
  int ****local_94;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  int ****local_84;
  int ****local_80;
  int ****local_7c;
  int ****local_78;
  int ****local_74;
  int ****ppppiStack_70;
  int ****ppppiStack_6c;
  int ****ppppiStack_68;
  int ****local_60;
  int ****ppppiStack_5c;
  int ****ppppiStack_58;
  int ****local_50;
  int ****ppppiStack_4c;
  int ****ppppiStack_48;
  int ****local_44;
  int ****ppppiStack_40;
  int ****ppppiStack_3c;
  int ****ppppiStack_38;
  int ****local_30;
  int ****local_2c;
  int ****local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    unaff_r10 = (int ****)*param_2;
    iVar26 = param_2[1];
    param_2[2] = iVar26;
    bVar4 = FUN_00a41e64(*(undefined4 *)(*(int *)(iVar26 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar26 + 0x10) + 0x40));
    if (bVar4 != 2) {
      param_2[4] = unaff_r10;
      param_2[5] = iVar26;
      *(undefined1 *)(param_2 + 7) = 0;
      if ((bVar4 & 1) == 0) goto LAB_00dd23ec;
LAB_00dd23c8:
      *(undefined1 *)((int)param_2 + 0xd7) = 0;
      param_2[6] = iVar26;
      param_2[0x32] = iVar26;
      param_2[0x33] = unaff_r10;
LAB_00dd2588:
      *(undefined4 *)((int)param_2 + 0xd3) = 0;
      param_2[0x34] = 0;
      FUN_00a203b4(&local_188,iVar26,&DAT_004cfb47,7);
      ppppiVar14 = local_174;
      ppppiVar12 = local_178;
      ppppiVar21 = local_17c;
      if (local_188 == (int ****)0x2) {
        *(undefined2 *)((int)param_2 + 0xd5) = 1;
        FUN_00a203b4(&local_188,param_2[0x32],"netmask",7);
        ppppiVar25 = local_174;
        ppppiVar24 = local_178;
        ppppiVar18 = local_17c;
        if (local_188 == (int ****)0x2) {
          *(undefined2 *)((int)param_2 + 0xd3) = 1;
          FUN_00a203b4(&local_188,param_2[0x32],"gateway",7);
          ppppiVar3 = local_174;
          ppppiVar2 = local_178;
          ppppiVar1 = local_17c;
          if (local_188 == (int ****)0x2) {
            *(undefined2 *)((int)param_2 + 0xd1) = 1;
            FUN_011ce168(&local_188,param_2[0x32],"dnsServers",10);
            if (local_188 == (int ****)0x2) {
              param_2[8] = ppppiVar21;
              param_2[0xd] = ppppiVar25;
              param_2[0xb] = ppppiVar18;
              param_2[0xe] = ppppiVar1;
              local_190 = local_174;
              param_2[0x10] = ppppiVar3;
              local_194 = local_178;
              local_198 = local_17c;
              *(undefined1 *)((int)param_2 + 0xd5) = 0;
              *(undefined1 *)((int)param_2 + 0xd3) = 0;
              *(undefined2 *)(param_2 + 0x34) = 0;
              param_2[9] = ppppiVar12;
              param_2[10] = ppppiVar14;
              param_2[0xc] = ppppiVar24;
              param_2[0xf] = ppppiVar2;
              uVar22 = param_2[0x33];
              param_2[0x11] = local_17c;
              param_2[0x12] = local_178;
              param_2[0x13] = local_174;
              *(undefined1 *)(param_2 + 0x31) = 0;
              param_2[0x14] = uVar22;
              param_2[0x15] = param_2[0x32];
              goto LAB_00dd2bec;
            }
            local_244 = local_188;
            local_258 = local_184;
            local_25c = local_180;
            local_260 = local_16c;
            local_264 = local_168;
            local_234 = local_154;
            local_26c = local_174;
            local_268 = (int ****)local_150;
            local_23c = local_158;
            FUN_019bb7e0(ppppiVar1,ppppiVar2);
            *(undefined2 *)((int)param_2 + 0xd1) = 0;
            local_24c = local_164;
            local_270 = local_170;
            local_250 = local_17c;
          }
          else {
            local_244 = local_188;
            local_258 = local_184;
            local_25c = local_180;
            local_260 = local_16c;
            local_264 = local_168;
            local_234 = local_154;
            local_23c = local_158;
            local_268 = (int ****)local_150;
            local_26c = local_174;
            local_24c = local_164;
            local_270 = local_170;
            local_250 = local_17c;
          }
          FUN_019bb7e0(ppppiVar18,ppppiVar24);
          *(undefined2 *)((int)param_2 + 0xd3) = 0;
        }
        else {
          local_244 = local_188;
          local_258 = local_184;
          local_25c = local_180;
          local_260 = local_16c;
          local_264 = local_168;
          local_234 = local_154;
          local_23c = local_158;
          local_24c = local_164;
          local_250 = local_17c;
          local_26c = local_174;
          local_268 = (int ****)local_150;
          local_270 = local_170;
        }
        FUN_019bb7e0(ppppiVar21,ppppiVar12);
        *(undefined2 *)((int)param_2 + 0xd5) = 0;
      }
      else {
        local_234 = local_154;
        local_23c = local_158;
        local_244 = local_188;
        local_24c = local_164;
        local_250 = local_17c;
        local_258 = local_184;
        local_25c = local_180;
        local_260 = local_16c;
        local_268 = (int ****)local_150;
        local_264 = local_168;
        local_270 = local_170;
        local_26c = local_174;
      }
      local_154 = local_234;
      local_188 = local_244;
      local_17c = local_250;
      local_164 = local_24c;
      *(undefined1 *)((int)param_2 + 0xd7) = 1;
      local_158 = local_23c;
      local_184 = local_258;
      local_180 = local_25c;
      local_174 = local_26c;
      local_170 = local_270;
      local_16c = local_260;
      local_168 = local_264;
      local_150 = local_268;
      FUN_009ed8c0((uint)&local_c0 | 4,param_2[6],&local_188);
      uVar22 = 1;
      local_23c = local_bc;
      local_1a8 = local_b8;
      ppppiStack_1a4 = local_b4;
      ppppiStack_1a0 = local_b0;
      local_50 = local_a4;
      ppppiStack_4c = local_a0;
      ppppiStack_48 = local_9c;
      local_44 = local_98;
      ppppiStack_40 = local_94;
      ppppiStack_3c = local_90;
      ppppiStack_38 = local_8c;
      local_230 = local_84;
      local_1c8 = local_a4;
      ppppiStack_1c4 = local_a0;
      ppppiStack_1c0 = local_9c;
      local_1bc = local_98;
      ppppiStack_1b8 = local_94;
      ppppiStack_1b4 = local_90;
      ppppiStack_1b0 = local_8c;
      param_3 = local_ac;
      unaff_r10 = local_88;
      local_234 = local_a8;
      local_60 = local_1a8;
      ppppiStack_5c = ppppiStack_1a4;
      ppppiStack_58 = ppppiStack_1a0;
      goto LAB_00dd3910;
    }
    uVar22 = 0;
    local_234 = (int ****)0x80000007;
    local_23c = (int ****)0x2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1e018);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1e018);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      unaff_r10 = (int ****)param_2[4];
      iVar26 = param_2[5];
LAB_00dd23ec:
      param_2[8] = unaff_r10;
      param_2[9] = iVar26;
      param_2[6] = iVar26;
      *(undefined1 *)(param_2 + 0x11) = 0;
LAB_00dd2438:
      param_2[10] = unaff_r10;
      param_2[0xb] = iVar26;
      *(undefined1 *)(param_2 + 0x10) = 0;
LAB_00dd2450:
      *(undefined1 *)((int)param_2 + 0x3d) = 0;
      param_2[0xe] = unaff_r10;
LAB_00dd246c:
      *(undefined1 *)(param_2 + 0xf) = 1;
      pppiVar6 = *unaff_r10;
      *(undefined1 *)(param_2 + 0xf) = 0;
      local_bc = (int ****)&DAT_80000000;
      local_c0 = (int ****)&DAT_80000000;
      uVar22 = FUN_00b7bbe0(pppiVar6 + 2,&local_c0);
      param_2[0xc] = uVar22;
      param_2[0xd] = &DAT_01c13650;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1e018);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1e018);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x11)) {
      case 0:
        unaff_r10 = (int ****)param_2[8];
        iVar26 = param_2[9];
        goto LAB_00dd2438;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e018);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e018);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x10)) {
      case 0:
        unaff_r10 = (int ****)param_2[10];
        goto LAB_00dd2450;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e018);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e018);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x3d)) {
      case 0:
        unaff_r10 = (int ****)param_2[0xe];
        goto LAB_00dd246c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e018);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e018);
      case 3:
        uVar22 = param_2[0xc];
      }
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x2f)) {
      case 0:
        ppppiVar21 = (int ****)param_2[0x2c];
        unaff_r10 = (int ****)param_2[0x2d];
        goto LAB_00dd2894;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c16230);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c16230);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x2a)) {
        case 0:
          unaff_r10 = (int ****)param_2[0x28];
          ppppiVar21 = (int ****)param_2[0x29];
          goto LAB_00dd28ac;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21b3c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21b3c);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)param_2 + 0x65)) {
          case 0:
            unaff_r10 = (int ****)param_2[0x17];
            ppppiVar21 = (int ****)param_2[0x18];
            bVar4 = *(byte *)((int)param_2 + 0x66);
            goto LAB_00dd28cc;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21b4c);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c21b4c);
          case 4:
            uVar22 = param_2[0x20];
            iVar26 = param_2[0x21];
            goto LAB_00dd44f0;
          }
        }
      }
      goto switchD_00dd2df8_caseD_3;
    }
    local_230 = (int ****)(param_2 + 0x10);
    local_234 = (int ****)(param_2 + 10);
    local_23c = (int ****)(param_2 + 8);
    (**(code **)(param_2[0xd] + 0xc))(&local_c0,uVar22,param_3);
    if (local_c0 == (int ****)0x80000017) {
      uVar5 = 3;
      *(undefined1 *)((int)param_2 + 0x3d) = 3;
      *(undefined1 *)(param_2 + 0x11) = 3;
      *(undefined1 *)local_230 = 3;
LAB_00dd46d8:
      local_240 = param_2 + 7;
      *(undefined1 *)local_240 = uVar5;
      *param_1 = 2;
      uVar5 = 3;
      goto LAB_00dd46f0;
    }
    local_188 = local_c0;
    local_184 = local_bc;
    local_180 = local_b8;
    local_17c = local_b4;
    local_178 = local_b0;
    local_174 = local_ac;
    FUN_00fe4378(param_2[0xc],param_2[0xd]);
    if (local_188 == (int ****)&DAT_80000016) {
      uVar22 = 0x80000000;
    }
    else {
      uVar22 = 0x25;
      unaff_r10 = (int ****)thunk_FUN_01be5118(0x25);
      if (unaff_r10 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x25);
      }
      FUN_01bed4e2(unaff_r10,"Network settings could not be updated",0x25);
      FUN_00dc8870(&local_188);
    }
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined2 *)(param_2 + 0xf) = 0x100;
    FUN_00cb6270(local_234);
    piVar20 = (int *)param_2[6];
    param_2[9] = unaff_r10;
    param_2[10] = 0x25;
    unaff_r10 = (int ****)(param_2 + 0xb);
    param_2[8] = uVar22;
    *(undefined1 *)(param_2 + 0x11) = 1;
    iVar9 = piVar20[4];
    iVar29 = piVar20[5];
    iVar27 = piVar20[6];
    iVar23 = piVar20[7];
    iVar26 = piVar20[8];
    iVar11 = piVar20[1];
    iVar13 = piVar20[2];
    iVar17 = piVar20[3];
    *unaff_r10 = (int ***)*piVar20;
    param_2[0xc] = iVar11;
    param_2[0xd] = iVar13;
    param_2[0xe] = iVar17;
    param_2[0xf] = iVar9 + 0x20;
    param_2[0x10] = iVar29;
    param_2[0x11] = iVar27;
    param_2[0x12] = iVar23;
    *(char *)(param_2 + 0x13) = (char)iVar26;
    iVar26 = piVar20[4];
    *(undefined1 *)(param_2 + 0x2f) = 0;
    param_2[0x2c] = local_23c;
    param_2[0x2d] = unaff_r10;
    param_2[0x2e] = iVar26;
    ppppiVar21 = local_23c;
LAB_00dd2894:
    *(undefined1 *)(param_2 + 0x2a) = 0;
    param_2[0x28] = unaff_r10;
    param_2[0x29] = ppppiVar21;
LAB_00dd28ac:
    *(undefined2 *)((int)param_2 + 0x65) = 0x100;
    bVar4 = 1;
    param_2[0x17] = unaff_r10;
    param_2[0x18] = ppppiVar21;
LAB_00dd28cc:
    puVar8 = param_2 + 0x14;
    *puVar8 = 0;
    param_2[0x16] = 0;
    param_2[0x15] = 4;
    *(undefined1 *)(param_2 + 0x19) = 1;
    ppppiVar12 = (int ****)&local_c0;
    FUN_00cb62b0(ppppiVar12,puVar8,unaff_r10,ppppiVar21);
    if (local_c0 == (int ****)0x2) {
      if ((bVar4 & 1) == 0) {
        uVar16 = param_2[0x16];
        if (0x2492492 < uVar16) {
          uVar22 = 0;
LAB_00dd2b40:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar22,ppppiVar12);
        }
        ppppiVar12 = (int ****)(uVar16 * 0x38);
        if (ppppiVar12 == (int ****)0x0) {
          iVar26 = 8;
          uVar16 = 0;
        }
        else {
          uVar22 = 8;
          iVar26 = FUN_01298504(ppppiVar12,8);
          if (iVar26 == 0) goto LAB_00dd2b40;
        }
        puVar7 = (undefined4 *)param_2[0x15];
        param_2[0x1b] = iVar26;
        puVar8 = puVar7 + param_2[0x16] * 2;
        param_2[0x1c] = 0;
        *(undefined1 *)(param_2 + 0x19) = 0;
        param_2[0x1a] = uVar16;
        param_2[0x22] = puVar7;
        param_2[0x23] = puVar7;
        param_2[0x24] = param_2[0x14];
        param_2[0x25] = puVar8;
        while (puVar7 != puVar8) {
          uVar22 = *puVar7;
          iVar26 = puVar7[1];
          param_2[0x23] = puVar7 + 2;
          param_2[0x20] = uVar22;
          param_2[0x1d] = param_2 + 0x1a;
          param_2[0x1e] = uVar22;
          param_2[0x1f] = iVar26;
          param_2[0x21] = iVar26;
LAB_00dd44f0:
          (**(code **)(iVar26 + 0xc))(&local_c0,uVar22,param_3);
          ppppiVar24 = local_84;
          ppppiVar18 = local_88;
          ppppiVar14 = local_a8;
          ppppiVar12 = local_ac;
          ppppiVar21 = local_c0;
          if (local_c0 == (int ****)0x2) {
            uVar5 = 4;
            goto LAB_00dd46b8;
          }
          local_23c = local_bc;
          local_30 = local_b8;
          local_2c = local_b4;
          local_28 = local_b0;
          local_234 = local_a8;
          local_80 = local_a4;
          local_7c = local_a0;
          local_78 = local_9c;
          local_74 = local_98;
          ppppiStack_70 = local_94;
          ppppiStack_6c = local_90;
          ppppiStack_68 = local_8c;
          local_230 = local_84;
          FUN_00fe4378(param_2[0x20],param_2[0x21]);
          if (((uint)ppppiVar21 & 1) != 0) {
            local_1f8 = local_30;
            local_1f4 = local_2c;
            local_1f0 = local_28;
            local_50 = local_80;
            ppppiStack_4c = local_7c;
            ppppiStack_48 = local_78;
            local_44 = local_74;
            ppppiStack_40 = ppppiStack_70;
            ppppiStack_3c = ppppiStack_6c;
            ppppiStack_38 = ppppiStack_68;
            FUN_009495dc(param_2 + 0x22);
            FUN_007bc140(param_2 + 0x1a);
            unaff_r10 = ppppiVar18;
            param_3 = ppppiVar12;
            goto LAB_00dd29f8;
          }
          local_188 = local_30;
          local_184 = local_2c;
          local_180 = local_28;
          local_178 = ppppiVar14;
          local_17c = ppppiVar12;
          local_174 = local_80;
          local_170 = local_7c;
          local_16c = local_78;
          local_168 = local_74;
          local_164 = ppppiStack_70;
          local_160 = ppppiStack_6c;
          local_15c = ppppiStack_68;
          piVar20 = (int *)param_2[0x1d];
          local_154 = ppppiVar24;
          local_158 = ppppiVar18;
          iVar26 = piVar20[2];
          if (iVar26 == *piVar20) {
            FUN_006e4ec8(piVar20);
          }
          puVar8 = (undefined4 *)(piVar20[1] + iVar26 * 0x38);
          *puVar8 = local_30;
          puVar8[1] = local_2c;
          puVar8[2] = local_28;
          puVar8[3] = ppppiVar12;
          puVar8[4] = ppppiVar14;
          unaff_r10 = (int ****)&local_74;
          puVar8[5] = local_80;
          puVar8[6] = local_7c;
          puVar8[7] = local_78;
          puVar8[8] = local_74;
          puVar8[9] = ppppiStack_70;
          puVar8[10] = ppppiStack_6c;
          puVar8[0xb] = ppppiStack_68;
          puVar8[0xc] = ppppiVar18;
          puVar8[0xd] = ppppiVar24;
          piVar20[2] = iVar26 + 1;
          puVar8 = (undefined4 *)param_2[0x25];
          puVar7 = (undefined4 *)param_2[0x23];
        }
        param_2[0x1e] = 0;
        FUN_009495dc(param_2 + 0x22);
        local_60 = (int ****)param_2[0x1a];
        ppppiStack_5c = (int ****)param_2[0x1b];
        ppppiStack_58 = (int ****)param_2[0x1c];
      }
      else {
        *(undefined1 *)(param_2 + 0x19) = 0;
        local_e0 = (int ****)*puVar8;
        ppppiStack_dc = (int ****)param_2[0x15];
        ppppiStack_d8 = (int ****)param_2[0x16];
        FUN_009ec520(&local_c0);
        local_148 = local_c0;
        ppppiStack_144 = local_bc;
        ppppiStack_140 = local_b8;
        ppppiStack_13c = local_b4;
        local_138 = local_b0;
        ppppiStack_134 = local_ac;
        local_130 = local_a8;
        ppppiStack_12c = local_a4;
        ppppiStack_128 = local_a0;
        local_124 = local_9c;
        ppppiStack_120 = local_98;
        ppppiStack_11c = local_94;
        ppppiStack_118 = local_90;
        ppppiStack_114 = local_8c;
        param_2[0x1a] = local_c0;
        param_2[0x1b] = local_bc;
        param_2[0x1c] = local_b8;
        param_2[0x1d] = local_b4;
        param_2[0x1e] = local_b0;
        param_2[0x1f] = local_ac;
        param_2[0x20] = local_a8;
        param_2[0x21] = local_a4;
        param_2[0x22] = local_a0;
        param_2[0x23] = local_9c;
        param_2[0x24] = local_98;
        param_2[0x25] = local_94;
        param_2[0x26] = local_90;
        param_2[0x27] = local_8c;
switchD_00dd2df8_caseD_3:
        FUN_009ecbe0(&local_c0,param_2 + 0x1a,param_3);
        param_3 = local_b0;
        ppppiVar21 = local_c0;
        if (local_c0 == (int ****)&DAT_00000003) {
          uVar5 = 3;
LAB_00dd46b8:
          local_250 = (int ****)((int)param_2 + 0x65);
          local_258 = (int ****)(param_2 + 0x2a);
          local_254 = param_2 + 0x2f;
          *(undefined1 *)local_250 = uVar5;
          *(undefined1 *)local_254 = 3;
          *(undefined1 *)local_258 = 3;
          uVar5 = 4;
          goto LAB_00dd46d8;
        }
        local_23c = local_c0;
        puVar8 = (undefined4 *)((uint)&local_c0 | 4);
        local_d0 = (int ****)*puVar8;
        ppppiStack_cc = (int ****)puVar8[1];
        ppppiStack_c8 = (int ****)puVar8[2];
        local_234 = local_ac;
        local_100 = local_a8;
        local_fc = local_a4;
        local_f8 = local_a0;
        local_f4 = local_9c;
        ppppiStack_f0 = local_98;
        ppppiStack_ec = local_94;
        ppppiStack_e8 = local_90;
        local_230 = local_88;
        FUN_00db1814(param_2 + 0x1a);
        if (ppppiVar21 != (int ****)0x2) {
          local_50 = local_100;
          ppppiStack_4c = local_fc;
          ppppiStack_48 = local_f8;
          local_44 = local_f4;
          ppppiStack_40 = ppppiStack_f0;
          ppppiStack_3c = ppppiStack_ec;
          ppppiStack_38 = ppppiStack_e8;
          local_1f8 = local_d0;
          local_1f4 = ppppiStack_cc;
          local_1f0 = ppppiStack_c8;
          unaff_r10 = local_8c;
          goto LAB_00dd29f8;
        }
        local_60 = local_d0;
        ppppiStack_5c = ppppiStack_cc;
        ppppiStack_58 = ppppiStack_c8;
      }
      FUN_006cac18(&local_c0,&local_60);
      uVar22 = 0;
      local_1f8 = local_c0;
      local_1f4 = local_bc;
      local_1f0 = local_b8;
      local_234 = local_b0;
      local_50 = local_ac;
      ppppiStack_4c = local_a8;
      ppppiStack_48 = local_a4;
      local_44 = local_a0;
      ppppiStack_40 = local_9c;
      ppppiStack_3c = local_98;
      ppppiStack_38 = local_94;
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_3 = local_b4;
    }
    else {
      local_23c = local_c0;
      puVar8 = (undefined4 *)((uint)ppppiVar12 | 4);
      local_1f8 = (int ****)*puVar8;
      local_1f4 = (int ****)puVar8[1];
      local_1f0 = (int ****)puVar8[2];
      local_234 = local_ac;
      local_50 = local_a8;
      ppppiStack_4c = local_a4;
      ppppiStack_48 = local_a0;
      local_44 = local_9c;
      ppppiStack_40 = local_98;
      ppppiStack_3c = local_94;
      ppppiStack_38 = local_90;
      local_230 = local_88;
      unaff_r10 = local_8c;
      param_3 = local_b0;
LAB_00dd29f8:
      if (*(char *)(param_2 + 0x19) != '\0') {
        FUN_00b7d620(param_2 + 0x14);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x19) = 0;
    }
    local_240 = param_2 + 7;
    local_248 = param_2 + 4;
    local_250 = (int ****)((int)param_2 + 0x65);
    local_110 = local_1f8;
    ppppiStack_10c = local_1f4;
    ppppiStack_108 = local_1f0;
    local_1c8 = local_50;
    ppppiStack_1c4 = ppppiStack_4c;
    ppppiStack_1c0 = ppppiStack_48;
    local_1bc = local_44;
    ppppiStack_1b8 = ppppiStack_40;
    ppppiStack_1b4 = ppppiStack_3c;
    ppppiStack_1b0 = ppppiStack_38;
    *(undefined1 *)local_250 = 1;
    FUN_00db1dcc(param_2 + 0x14);
    *(undefined1 *)(param_2 + 0x2f) = 1;
    *(undefined1 *)(param_2 + 0x2a) = 1;
    local_208 = local_110;
    ppppiStack_204 = ppppiStack_10c;
    ppppiStack_200 = ppppiStack_108;
    local_228 = local_1c8;
    ppppiStack_224 = ppppiStack_1c4;
    ppppiStack_220 = ppppiStack_1c0;
    local_21c = local_1bc;
    ppppiStack_218 = ppppiStack_1b8;
    ppppiStack_214 = ppppiStack_1b4;
    ppppiStack_210 = ppppiStack_1b0;
    if (param_2[8] != -0x80000000) {
      FUN_019bb7e0(param_2[8],param_2[9]);
    }
    *(undefined1 *)local_240 = 1;
    FUN_00dd4ad4(local_248);
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      unaff_r10 = (int ****)param_2[4];
      iVar26 = param_2[5];
      goto LAB_00dd23c8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1e018);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1e018);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0xd7)) {
      case 0:
        iVar26 = param_2[0x32];
        goto LAB_00dd2588;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e018);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e018);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x31)) {
      case 0:
        uVar22 = param_2[0x14];
LAB_00dd2bec:
        local_188 = (int ****)param_2[8];
        local_184 = (int ****)param_2[9];
        local_180 = (int ****)param_2[10];
        local_17c = (int ****)param_2[0xb];
        local_178 = (int ****)param_2[0xc];
        local_174 = (int ****)param_2[0xd];
        local_170 = (int ****)param_2[0xe];
        local_16c = (int ****)param_2[0xf];
        local_168 = (int ****)param_2[0x10];
        local_164 = (int ****)param_2[0x11];
        local_160 = (int ****)param_2[0x12];
        local_15c = (int ****)param_2[0x13];
        param_2[0x16] = local_188;
        param_2[0x17] = local_184;
        param_2[0x18] = local_180;
        param_2[0x19] = local_17c;
        param_2[0x1a] = local_178;
        param_2[0x1b] = local_174;
        param_2[0x1c] = local_170;
        param_2[0x1d] = local_16c;
        param_2[0x1e] = local_168;
        param_2[0x1f] = local_164;
        param_2[0x20] = local_160;
        param_2[0x21] = local_15c;
        *(undefined1 *)(param_2 + 0x2f) = 0;
        param_2[0x22] = uVar22;
        local_148 = local_188;
        ppppiStack_144 = local_184;
        ppppiStack_140 = local_180;
        ppppiStack_13c = local_17c;
        local_138 = local_178;
        ppppiStack_134 = local_174;
        local_130 = local_170;
        ppppiStack_12c = local_16c;
        ppppiStack_128 = local_168;
        local_124 = local_164;
        ppppiStack_120 = local_160;
        ppppiStack_11c = local_15c;
switchD_00dd2e38_caseD_0:
        *(undefined2 *)(param_2 + 0x30) = 0;
        *(undefined4 *)((int)param_2 + 0xbd) = 0x1010101;
        local_80 = (int ****)(param_2 + 0x16);
        local_7c = (int ****)(param_2 + 0x19);
        local_78 = (int ****)(param_2 + 0x1c);
        FUN_010d7a6c(&local_188,&local_80);
        FUN_011787b0(&local_80,param_2[0x20],param_2[0x20] + param_2[0x21] * 0xc);
        param_2[0x23] = local_188;
        param_2[0x24] = local_184;
        param_2[0x25] = local_180;
        *(undefined2 *)(param_2 + 0x26) = (undefined2)local_17c;
        *(undefined1 *)((int)param_2 + 0x9a) = local_17c._2_1_;
        piVar20 = param_2 + 0x27;
        *piVar20 = (int)local_80;
        param_2[0x28] = local_7c;
        param_2[0x29] = local_78;
        if (((*(char *)(param_2 + 0x23) == '\x01') && (*(char *)((int)param_2 + 0x91) != '\0')) &&
           (*(char *)((int)param_2 + 0x96) == '\x01')) {
          if (*piVar20 != -0x80000000) {
            ppppiVar21 = *(int *****)((int)param_2 + 0x8d);
            ppppiVar12 = *(int *****)((int)param_2 + 0x92);
            ppppiVar14 = *(int *****)((int)param_2 + 0x97);
            param_2[0x2a] = *piVar20;
            param_2[0x2b] = param_2[0x28];
            param_2[0x2c] = param_2[0x29];
            FUN_00745244(&local_188,param_2[0x2b],param_2[0x2c]);
            *(undefined1 *)((int)param_2 + 0xc1) = 1;
            iVar26 = *(int *)param_2[0x22];
            local_17c = local_180;
            *(undefined1 *)((int)param_2 + 0xc1) = 0;
            local_180 = local_184;
            local_184 = local_188;
            local_188 = (int ****)&DAT_80000000;
            local_178 = ppppiVar21;
            local_174 = ppppiVar12;
            local_170 = ppppiVar14;
            uVar22 = FUN_00b7bbe0(iVar26 + 8,&local_188);
            puVar10 = &DAT_01c13650;
            param_2[0x2d] = uVar22;
            param_2[0x2e] = &DAT_01c13650;
            goto LAB_00dd39b8;
          }
        }
        else if (*piVar20 != -0x80000000) {
          FUN_0134aee0(*piVar20,param_2[0x28],1,4);
        }
        local_26c = (int ****)thunk_FUN_01be5118(0x19);
        if (local_26c == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x19);
        }
        FUN_01bed4e2(local_26c,"Invalid IP address syntax",0x19);
        *(undefined1 *)(param_2 + 0x30) = 0;
        local_188 = (int ****)param_2[0x16];
        ppppiVar21 = (int ****)param_2[0x17];
        local_180 = (int ****)param_2[0x18];
        local_184 = ppppiVar21;
        FUN_01304e7c(&local_80,ppppiVar21,local_180);
        local_260 = (int ****)0x19;
        if ((char)local_80 == '\x01') {
          local_7c = (int ****)&LAB_00632348;
          local_80 = (int ****)&local_188;
          FUN_00664898(&local_30,&DAT_00593d0a,&local_80);
          ppppiVar21 = local_184;
        }
        else {
          local_30 = (int ****)&DAT_80000000;
        }
        FUN_019bb7e0(local_188,ppppiVar21);
        *(undefined1 *)((int)param_2 + 0xbf) = 0;
        local_188 = (int ****)param_2[0x19];
        ppppiVar21 = (int ****)param_2[0x1a];
        local_180 = (int ****)param_2[0x1b];
        local_184 = ppppiVar21;
        FUN_01304e7c(&local_80,ppppiVar21,local_180);
        if ((char)local_80 == '\x01') {
          local_7c = (int ****)&LAB_00632348;
          local_80 = (int ****)&local_188;
          FUN_00664898(&local_1f8,&DAT_00593d0a,&local_80);
          ppppiVar21 = local_184;
        }
        else {
          local_1f8 = (int ****)&DAT_80000000;
        }
        FUN_019bb7e0(local_188,ppppiVar21);
        *(undefined1 *)((int)param_2 + 0xbe) = 0;
        local_188 = (int ****)param_2[0x1c];
        ppppiVar21 = (int ****)param_2[0x1d];
        local_180 = (int ****)param_2[0x1e];
        local_184 = ppppiVar21;
        FUN_01304e7c(&local_80,ppppiVar21,local_180);
        if ((char)local_80 == '\x01') {
          local_7c = (int ****)&LAB_00632348;
          local_80 = (int ****)&local_188;
          FUN_00664898(&local_100,&DAT_00593d0a,&local_80);
          ppppiVar21 = local_184;
        }
        else {
          local_100 = (int ****)&DAT_80000000;
        }
        FUN_019bb7e0(local_188,ppppiVar21);
        *(undefined1 *)((int)param_2 + 0xbd) = 0;
        local_180 = (int ****)param_2[0x1f];
        local_188 = (int ****)param_2[0x20];
        local_17c = local_188 + param_2[0x21] * 3;
        local_184 = local_188;
        FUN_00dd4b60(&local_80,&local_188);
        ppppiVar14 = (int ****)&DAT_00000019;
        local_264 = local_100;
        local_268 = local_1f8;
        local_288 = local_1f4;
        local_280 = local_1f0;
        local_284 = local_28;
        local_27c = local_80;
        local_270 = local_7c;
        ppppiVar12 = local_f8;
        ppppiVar18 = local_30;
        ppppiVar21 = local_78;
        ppppiVar24 = local_fc;
        ppppiVar25 = local_2c;
LAB_00dd3254:
        local_234 = (int ****)(param_2 + 8);
        local_23c = (int ****)(param_2 + 0x16);
        local_258 = (int ****)(param_2 + 0x31);
        local_25c = (int ****)(param_2 + 0x2f);
        if (*(char *)(param_2 + 0x30) != '\0') {
          FUN_019bb7e0(*local_23c,param_2[0x17]);
        }
        if (*(char *)((int)param_2 + 0xbf) != '\0') {
          FUN_019bb7e0(param_2[0x19],param_2[0x1a]);
        }
        if (*(char *)((int)param_2 + 0xbe) != '\0') {
          FUN_019bb7e0(param_2[0x1c],param_2[0x1d]);
        }
        if (*(char *)((int)param_2 + 0xbd) != '\0') {
          FUN_006a41c0(param_2 + 0x1f);
        }
        *(undefined1 *)local_25c = 1;
        FUN_00cb6b38(local_23c);
        *(undefined1 *)local_258 = 1;
        FUN_00cb6be0(local_234);
        local_94 = local_288;
        *(undefined4 *)((int)param_2 + 0xd3) = 0;
        param_2[0x34] = 0;
        *(undefined1 *)((int)param_2 + 0xd7) = 1;
        local_9c = local_284;
        local_90 = local_280;
        local_98 = local_268;
        local_8c = local_264;
        local_188 = local_26c;
        local_180 = local_27c;
        ppppiStack_48 = local_284;
        local_44 = local_268;
        ppppiStack_40 = local_288;
        ppppiStack_3c = local_280;
        ppppiStack_38 = local_264;
        local_b8 = local_284;
        local_b4 = local_268;
        local_b0 = local_288;
        local_ac = local_280;
        local_a8 = local_264;
        param_2[8] = local_260;
        param_2[9] = local_26c;
        param_2[10] = ppppiVar14;
        param_2[0xb] = local_27c;
        param_2[0xc] = local_270;
        param_2[0xd] = ppppiVar21;
        puVar8 = param_2 + 0x17;
        param_2[0xe] = ppppiVar18;
        param_2[0xf] = ppppiVar25;
        param_2[0x10] = local_284;
        param_2[0x11] = local_268;
        param_2[0x12] = local_288;
        param_2[0x13] = local_280;
        param_2[0x14] = local_264;
        param_2[0x15] = ppppiVar24;
        param_2[0x16] = ppppiVar12;
        puVar7 = (undefined4 *)param_2[6];
        iVar26 = puVar7[4];
        uVar30 = puVar7[5];
        uVar28 = puVar7[6];
        unaff_r10 = (int ****)puVar7[7];
        uVar5 = *(undefined1 *)(puVar7 + 8);
        uVar22 = puVar7[1];
        uVar15 = puVar7[2];
        uVar19 = puVar7[3];
        *puVar8 = *puVar7;
        param_2[0x18] = uVar22;
        param_2[0x19] = uVar15;
        param_2[0x1a] = uVar19;
        param_2[0x1b] = iVar26 + 0x20;
        param_2[0x1c] = uVar30;
        param_2[0x1d] = uVar28;
        param_2[0x1e] = unaff_r10;
        *(undefined1 *)(param_2 + 0x1f) = uVar5;
        uVar22 = puVar7[4];
        *(undefined1 *)(param_2 + 0x3b) = 0;
        param_2[0x3a] = uVar22;
        param_2[0x38] = local_234;
        param_2[0x39] = puVar8;
        local_23c = ppppiVar12;
        local_230 = (int ****)&local_b8;
        local_184 = ppppiVar14;
        local_c0 = ppppiVar18;
        local_bc = ppppiVar25;
        local_a4 = ppppiVar18;
        local_a0 = ppppiVar25;
        local_88 = ppppiVar24;
        local_84 = ppppiVar12;
        local_60 = local_188;
        ppppiStack_5c = ppppiVar14;
        ppppiStack_58 = local_180;
        local_50 = ppppiVar18;
        ppppiStack_4c = ppppiVar25;
        goto LAB_00dd3464;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e018);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e018);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x2f)) {
        case 0:
          goto switchD_00dd2e38_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1e018);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1e018);
        case 3:
          uVar22 = param_2[0x2d];
          puVar10 = (undefined *)param_2[0x2e];
          ppppiVar21 = param_3;
        }
LAB_00dd39b8:
        local_258 = (int ****)(param_2 + 0x31);
        ppppiVar14 = (int ****)(param_2 + 0x16);
        (**(code **)(puVar10 + 0xc))(&local_188,uVar22,param_3);
        ppppiVar12 = local_178;
        if (local_188 != (int ****)0x80000017) {
          local_80 = local_188;
          local_7c = local_184;
          local_78 = local_180;
          local_74 = local_17c;
          ppppiStack_70 = local_178;
          ppppiStack_6c = local_174;
          FUN_00fe4378(param_2[0x2d],param_2[0x2e]);
          if (local_80 == (int ****)&DAT_80000016) {
            local_260 = (int ****)0x80000000;
          }
          else {
            local_26c = (int ****)thunk_FUN_01be5118(0x25);
            if (local_26c == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,0x25);
            }
            ppppiVar14 = (int ****)&DAT_00000025;
            FUN_01bed4e2(local_26c,"Network settings could not be updated",0x25);
            local_188 = (int ****)&DAT_80000000;
            FUN_0101714c(&local_100,&local_188,param_2[0x2c]);
            ppppiVar21 = local_f8;
            local_27c = local_100;
            local_260 = (int ****)0x25;
            local_270 = local_fc;
            FUN_00dc8870(&local_80);
          }
          *(undefined1 *)((int)param_2 + 0xc1) = 0;
          FUN_0134aee0(param_2[0x2a],param_2[0x2b],1,4);
          local_268 = (int ****)&DAT_80000000;
          local_264 = (int ****)&DAT_80000000;
          ppppiVar18 = (int ****)&DAT_80000000;
          ppppiVar24 = (int ****)(param_2 + 8);
          ppppiVar25 = param_3;
          goto LAB_00dd3254;
        }
        uVar5 = 3;
        *(undefined1 *)(param_2 + 0x2f) = 3;
        *(undefined1 *)((int)param_2 + 0xd7) = 3;
        *(undefined1 *)local_258 = 3;
      }
LAB_00dd49a8:
      local_240 = param_2 + 7;
      *(undefined1 *)local_240 = uVar5;
      *param_1 = 2;
      uVar5 = 4;
      goto LAB_00dd46f0;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x3b)) {
    case 0:
      local_234 = (int ****)param_2[0x38];
      puVar8 = (undefined4 *)param_2[0x39];
LAB_00dd3464:
      *(undefined1 *)(param_2 + 0x36) = 0;
      param_2[0x34] = puVar8;
      param_2[0x35] = local_234;
LAB_00dd347c:
      *(undefined2 *)((int)param_2 + 0x95) = 0x100;
      bVar4 = 1;
      param_2[0x23] = puVar8;
      param_2[0x24] = local_234;
LAB_00dd349c:
      puVar7 = param_2 + 0x20;
      *puVar7 = 0;
      param_2[0x22] = 0;
      param_2[0x21] = 4;
      *(undefined1 *)(param_2 + 0x25) = 1;
      ppppiVar21 = (int ****)&local_c0;
      FUN_00cb6c2c(ppppiVar21,puVar7,puVar8,local_234);
      if (local_c0 != (int ****)0x2) {
        local_23c = local_c0;
        puVar8 = (undefined4 *)((uint)ppppiVar21 | 4);
        local_30 = (int ****)*puVar8;
        local_2c = (int ****)puVar8[1];
        local_28 = (int ****)puVar8[2];
        local_234 = local_ac;
        local_50 = local_a8;
        ppppiStack_4c = local_a4;
        ppppiStack_48 = local_a0;
        local_44 = local_9c;
        ppppiStack_40 = local_98;
        ppppiStack_3c = local_94;
        ppppiStack_38 = local_90;
        local_230 = local_88;
        ppppiVar12 = local_8c;
        ppppiVar21 = local_b0;
        goto LAB_00dd35d4;
      }
      if ((bVar4 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x25) = 0;
        local_110 = (int ****)*puVar7;
        ppppiStack_10c = (int ****)param_2[0x21];
        ppppiStack_108 = (int ****)param_2[0x22];
        FUN_009ec520(&local_c0);
        local_148 = local_c0;
        ppppiStack_144 = local_bc;
        ppppiStack_140 = local_b8;
        ppppiStack_13c = local_b4;
        local_138 = local_b0;
        ppppiStack_134 = local_ac;
        local_130 = local_a8;
        ppppiStack_12c = local_a4;
        ppppiStack_128 = local_a0;
        local_124 = local_9c;
        ppppiStack_120 = local_98;
        ppppiStack_11c = local_94;
        ppppiStack_118 = local_90;
        ppppiStack_114 = local_8c;
        param_2[0x26] = local_c0;
        param_2[0x27] = local_bc;
        param_2[0x28] = local_b8;
        param_2[0x29] = local_b4;
        param_2[0x2a] = local_b0;
        param_2[0x2b] = local_ac;
        param_2[0x2c] = local_a8;
        param_2[0x2d] = local_a4;
        param_2[0x2e] = local_a0;
        param_2[0x2f] = local_9c;
        param_2[0x30] = local_98;
        param_2[0x31] = local_94;
        param_2[0x32] = local_90;
        param_2[0x33] = local_8c;
        goto switchD_00dd3094_caseD_3;
      }
      uVar16 = param_2[0x22];
      if (0x2492492 < uVar16) {
        uVar22 = 0;
LAB_00dd3698:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar22,ppppiVar21);
      }
      ppppiVar21 = (int ****)(uVar16 * 0x38);
      if (ppppiVar21 == (int ****)0x0) {
        iVar26 = 8;
        uVar16 = 0;
      }
      else {
        uVar22 = 8;
        iVar26 = FUN_01298504(ppppiVar21,8);
        if (iVar26 == 0) goto LAB_00dd3698;
      }
      puVar7 = (undefined4 *)param_2[0x21];
      param_2[0x28] = 0;
      *(undefined1 *)(param_2 + 0x25) = 0;
      param_2[0x27] = iVar26;
      puVar8 = puVar7 + param_2[0x22] * 2;
      param_2[0x26] = uVar16;
      param_2[0x2e] = puVar7;
      param_2[0x2f] = puVar7;
      param_2[0x30] = param_2[0x20];
      param_2[0x31] = puVar8;
      while (puVar7 != puVar8) {
        uVar22 = *puVar7;
        iVar26 = puVar7[1];
        param_2[0x2f] = puVar7 + 2;
        param_2[0x2c] = uVar22;
        param_2[0x29] = param_2 + 0x26;
        param_2[0x2a] = uVar22;
        param_2[0x2b] = iVar26;
        param_2[0x2d] = iVar26;
LAB_00dd4790:
        (**(code **)(iVar26 + 0xc))(&local_c0,uVar22,param_3);
        ppppiVar24 = local_84;
        ppppiVar12 = local_88;
        ppppiVar18 = local_a8;
        ppppiVar21 = local_ac;
        ppppiVar14 = local_c0;
        if (local_c0 == (int ****)0x2) {
          uVar5 = 4;
          goto LAB_00dd4988;
        }
        local_23c = local_bc;
        local_60 = local_b8;
        ppppiStack_5c = local_b4;
        ppppiStack_58 = local_b0;
        local_234 = local_a8;
        local_80 = local_a4;
        local_7c = local_a0;
        local_78 = local_9c;
        local_74 = local_98;
        ppppiStack_70 = local_94;
        ppppiStack_6c = local_90;
        ppppiStack_68 = local_8c;
        local_230 = local_84;
        FUN_00fe4378(param_2[0x2c],param_2[0x2d]);
        if (((uint)ppppiVar14 & 1) != 0) {
          local_30 = local_60;
          local_2c = ppppiStack_5c;
          local_28 = ppppiStack_58;
          local_50 = local_80;
          ppppiStack_4c = local_7c;
          ppppiStack_48 = local_78;
          local_44 = local_74;
          ppppiStack_40 = ppppiStack_70;
          ppppiStack_3c = ppppiStack_6c;
          ppppiStack_38 = ppppiStack_68;
          FUN_009495dc(param_2 + 0x2e);
          FUN_007bc140(param_2 + 0x26);
          goto LAB_00dd35d4;
        }
        local_188 = local_60;
        local_184 = ppppiStack_5c;
        local_180 = ppppiStack_58;
        local_178 = ppppiVar18;
        local_17c = ppppiVar21;
        local_174 = local_80;
        local_170 = local_7c;
        local_16c = local_78;
        local_168 = local_74;
        local_164 = ppppiStack_70;
        local_160 = ppppiStack_6c;
        local_15c = ppppiStack_68;
        local_158 = ppppiVar12;
        piVar20 = (int *)param_2[0x29];
        local_154 = ppppiVar24;
        iVar26 = piVar20[2];
        if (iVar26 == *piVar20) {
          FUN_006e4ec8(piVar20);
        }
        puVar8 = (undefined4 *)(piVar20[1] + iVar26 * 0x38);
        *puVar8 = local_60;
        puVar8[1] = ppppiStack_5c;
        puVar8[2] = ppppiStack_58;
        puVar8[3] = ppppiVar21;
        puVar8[4] = ppppiVar18;
        unaff_r10 = (int ****)&local_74;
        puVar8[5] = local_80;
        puVar8[6] = local_7c;
        puVar8[7] = local_78;
        puVar8[8] = local_74;
        puVar8[9] = ppppiStack_70;
        puVar8[10] = ppppiStack_6c;
        puVar8[0xb] = ppppiStack_68;
        puVar8[0xc] = ppppiVar12;
        puVar8[0xd] = ppppiVar24;
        piVar20[2] = iVar26 + 1;
        puVar8 = (undefined4 *)param_2[0x31];
        puVar7 = (undefined4 *)param_2[0x2f];
      }
      param_2[0x2a] = 0;
      FUN_009495dc(param_2 + 0x2e);
      local_d0 = (int ****)param_2[0x26];
      ppppiStack_cc = (int ****)param_2[0x27];
      ppppiStack_c8 = (int ****)param_2[0x28];
LAB_00dd4930:
      FUN_006cac18(&local_c0,&local_d0);
      uVar22 = 0;
      local_30 = local_c0;
      local_2c = local_bc;
      local_28 = local_b8;
      local_234 = local_b0;
      local_50 = local_ac;
      ppppiStack_4c = local_a8;
      ppppiStack_48 = local_a4;
      local_44 = local_a0;
      ppppiStack_40 = local_9c;
      ppppiStack_3c = local_98;
      ppppiStack_38 = local_94;
      *(undefined1 *)(param_2 + 0x25) = 0;
      ppppiVar21 = local_b4;
      ppppiVar12 = unaff_r10;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c15fec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c15fec);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x36)) {
      case 0:
        puVar8 = (undefined4 *)param_2[0x34];
        local_234 = (int ****)param_2[0x35];
        goto LAB_00dd347c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b3c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b3c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x95)) {
      case 0:
        puVar8 = (undefined4 *)param_2[0x23];
        local_234 = (int ****)param_2[0x24];
        bVar4 = *(byte *)((int)param_2 + 0x96);
        goto LAB_00dd349c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b4c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b4c);
      case 4:
        uVar22 = param_2[0x2c];
        iVar26 = param_2[0x2d];
        goto LAB_00dd4790;
      }
switchD_00dd3094_caseD_3:
      FUN_009ecbe0(&local_c0,param_2 + 0x26,param_3);
      ppppiVar12 = local_8c;
      ppppiVar21 = local_b0;
      ppppiVar14 = local_c0;
      if (local_c0 == (int ****)&DAT_00000003) {
        uVar5 = 3;
LAB_00dd4988:
        local_250 = (int ****)((int)param_2 + 0x95);
        local_254 = param_2 + 0x3b;
        local_258 = (int ****)(param_2 + 0x36);
        *(undefined1 *)local_250 = uVar5;
        *(undefined1 *)local_254 = 3;
        *(undefined1 *)local_258 = 3;
        uVar5 = 4;
        goto LAB_00dd49a8;
      }
      local_23c = local_c0;
      puVar8 = (undefined4 *)((uint)&local_c0 | 4);
      local_e0 = (int ****)*puVar8;
      ppppiStack_dc = (int ****)puVar8[1];
      ppppiStack_d8 = (int ****)puVar8[2];
      local_234 = local_ac;
      local_100 = local_a8;
      local_fc = local_a4;
      local_f8 = local_a0;
      local_f4 = local_9c;
      ppppiStack_f0 = local_98;
      ppppiStack_ec = local_94;
      ppppiStack_e8 = local_90;
      local_230 = local_88;
      FUN_00db1814(param_2 + 0x26);
      if (ppppiVar14 == (int ****)0x2) {
        local_d0 = local_e0;
        ppppiStack_cc = ppppiStack_dc;
        ppppiStack_c8 = ppppiStack_d8;
        goto LAB_00dd4930;
      }
      local_50 = local_100;
      ppppiStack_4c = local_fc;
      ppppiStack_48 = local_f8;
      local_44 = local_f4;
      ppppiStack_40 = ppppiStack_f0;
      ppppiStack_3c = ppppiStack_ec;
      ppppiStack_38 = ppppiStack_e8;
      local_30 = local_e0;
      local_2c = ppppiStack_dc;
      local_28 = ppppiStack_d8;
LAB_00dd35d4:
      local_24c = (int ****)(param_2 + 0x20);
      if (*(char *)(param_2 + 0x25) != '\0') {
        FUN_00b7d620(local_24c);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x25) = 0;
    }
    local_24c = (int ****)(param_2 + 0x20);
    local_250 = (int ****)((int)param_2 + 0x95);
    local_1d8 = local_30;
    ppppiStack_1d4 = local_2c;
    ppppiStack_1d0 = local_28;
    local_1f8 = local_50;
    local_1f4 = ppppiStack_4c;
    local_1f0 = ppppiStack_48;
    ppppiStack_1ec = local_44;
    ppppiStack_1e8 = ppppiStack_40;
    ppppiStack_1e4 = ppppiStack_3c;
    ppppiStack_1e0 = ppppiStack_38;
    *(undefined1 *)local_250 = 1;
    FUN_00db1dcc(local_24c);
    *(undefined1 *)(param_2 + 0x3b) = 1;
    *(undefined1 *)(param_2 + 0x36) = 1;
    local_1a8 = local_1d8;
    ppppiStack_1a4 = ppppiStack_1d4;
    ppppiStack_1a0 = ppppiStack_1d0;
    local_1c8 = local_1f8;
    ppppiStack_1c4 = local_1f4;
    ppppiStack_1c0 = local_1f0;
    local_1bc = ppppiStack_1ec;
    ppppiStack_1b8 = ppppiStack_1e8;
    ppppiStack_1b4 = ppppiStack_1e4;
    ppppiStack_1b0 = ppppiStack_1e0;
    FUN_00dd4d10(param_2 + 8);
    param_3 = ppppiVar21;
    unaff_r10 = ppppiVar12;
LAB_00dd3910:
    local_240 = param_2 + 7;
    local_248 = param_2 + 4;
    local_208 = local_1a8;
    ppppiStack_204 = ppppiStack_1a4;
    ppppiStack_200 = ppppiStack_1a0;
    local_228 = local_1c8;
    ppppiStack_224 = ppppiStack_1c4;
    ppppiStack_220 = ppppiStack_1c0;
    local_21c = local_1bc;
    ppppiStack_218 = ppppiStack_1b8;
    ppppiStack_214 = ppppiStack_1b4;
    ppppiStack_210 = ppppiStack_1b0;
    *(undefined1 *)local_240 = 1;
    FUN_00dd4d68(local_248);
  }
  *param_1 = uVar22;
  param_1[1] = local_23c;
  param_1[2] = local_208;
  param_1[3] = ppppiStack_204;
  param_1[4] = ppppiStack_200;
  param_1[5] = param_3;
  param_1[6] = local_234;
  param_1[7] = local_228;
  param_1[8] = ppppiStack_224;
  param_1[9] = ppppiStack_220;
  param_1[10] = local_21c;
  param_1[0xb] = ppppiStack_218;
  param_1[0xc] = ppppiStack_214;
  param_1[0xd] = ppppiStack_210;
  param_1[0xe] = unaff_r10;
  param_1[0xf] = local_230;
  uVar5 = 1;
LAB_00dd46f0:
  *(undefined1 *)(param_2 + 3) = uVar5;
  return;
}

