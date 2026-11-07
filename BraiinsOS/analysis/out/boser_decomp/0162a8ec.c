// FUN_0162a8ec @ 0162a8ec size=4976 calls_out=16 calls_in=1
// strings: invalid TCA_ACT_OPTIONS | mirred | TcMirrorBuffer | tunnel_key | TcfBuffer | failed to parse action options

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0162a8ec(undefined4 *param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint ****ppppuVar6;
  uint *****extraout_r1;
  uint *****extraout_r1_00;
  uint *****extraout_r1_01;
  uint *****extraout_r1_02;
  uint *****extraout_r1_03;
  uint *****extraout_r1_04;
  uint *****extraout_r1_05;
  uint *****pppppuVar7;
  uint *****extraout_r2;
  char *pcVar8;
  undefined1 uVar9;
  uint *****pppppuVar10;
  uint *****extraout_r3;
  uint *****extraout_r3_00;
  uint *****extraout_r3_01;
  uint *****extraout_r3_02;
  uint *****extraout_r3_03;
  uint *****extraout_r3_04;
  uint *****extraout_r3_05;
  undefined4 *puVar11;
  uint *****pppppuVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint *****pppppuVar15;
  int iVar16;
  uint *****pppppuVar17;
  uint *****extraout_r12;
  uint *****extraout_r12_00;
  ulonglong uVar18;
  uint *****local_1e8;
  uint *****local_1e4;
  uint *****local_1e0;
  uint *****local_1d0;
  uint *****local_188;
  uint *****pppppuStack_184;
  uint *****pppppuStack_180;
  uint ****local_178;
  uint ****ppppuStack_174;
  uint ****ppppuStack_170;
  undefined1 local_168 [4];
  uint *****local_164;
  uint *****pppppuStack_160;
  uint *****pppppuStack_15c;
  undefined4 local_158;
  uint *****local_120;
  uint *****local_11c;
  uint *****local_118;
  int iStack_114;
  uint *****local_e0;
  uint *****pppppuStack_dc;
  uint *****pppppuStack_d8;
  uint *****pppppuStack_d4;
  uint *****pppppuStack_d0;
  uint *****pppppuStack_cc;
  uint *****local_c8;
  uint *****local_c4;
  uint *****local_c0;
  uint *****local_bc;
  uint *****local_b8;
  uint *****local_a0 [2];
  uint *****local_98;
  uint *****local_94;
  uint *****local_90;
  uint *****local_8c;
  uint *****local_88;
  uint *****local_84;
  uint *****local_80;
  uint *****local_7c;
  uint *****local_78;
  uint *****local_74;
  uint *****local_70;
  uint *****local_6c;
  uint ****local_64;
  undefined4 local_60;
  uint ****local_5c;
  uint *****local_58;
  uint *****local_54;
  uint *****local_50;
  uint *****local_4c;
  uint *****local_48;
  code *local_44;
  uint ****local_3c;
  uint *****local_38;
  uint *****local_34;
  uint *****local_30;
  
  pppppuVar17 = *(uint ******)(param_2 + 0x10);
  FUN_0162385c(&local_188);
  if (local_188 == (uint *****)&DAT_80000001) goto LAB_0162bbec;
  if (local_188 == (uint *****)&DAT_80000000) {
    local_c8 = local_188;
    local_c4 = pppppuStack_184;
    local_c0 = pppppuStack_180;
  }
  else {
    local_90 = local_188;
    local_8c = pppppuStack_184;
    local_88 = pppppuStack_180;
    FUN_016403ac(&local_c8,&local_90,"invalid TCA_ACT_OPTIONS",0x17);
  }
  pppppuVar7 = local_c0;
  pppppuVar15 = local_c4;
  piVar13 = (int *)((uint)local_168 | 4);
  if (local_c8 != (uint *****)&DAT_80000000) {
    local_164 = local_c8;
    pppppuStack_160 = local_c4;
    pppppuStack_15c = local_c0;
    goto LAB_0162bbc4;
  }
  pppppuVar12 = (uint *****)&local_120;
  local_1d0 = (uint *****)&local_80;
  puVar2 = (undefined4 *)((uint)pppppuVar12 | 4);
  uVar3 = **(undefined4 **)(param_2 + 0xc);
  iVar5 = (*(undefined4 **)(param_2 + 0xc))[1];
  puVar14 = (undefined4 *)((uint)&local_c8 | 4);
  if (iVar5 == 3) {
    iVar5 = thunk_FUN_01bed842(uVar3,"nat",3);
    if (iVar5 != 0) goto LAB_0162aca0;
    uVar18 = FUN_01623bf0(pppppuVar15,pppppuVar7);
    pppppuVar10 = (uint *****)(uVar18 >> 0x20);
    iVar5 = (int)uVar18;
    sVar1 = FUN_01623bc0(pppppuVar15,pppppuVar7);
    if (sVar1 == 1) {
      if (uVar18 < 0x2400000000) {
        local_7c = (uint *****)FUN_012fd02c;
        local_84 = (uint *****)FUN_012fd02c;
        local_88 = &local_64;
        local_90 = (uint *****)&local_38;
        local_8c = (uint *****)&LAB_018a13b8;
        local_64 = (uint ****)0x24;
        local_38 = (uint *****)0x4c01c4;
        local_80 = (uint *****)&local_98;
        local_34 = (uint *****)&DAT_0000000b;
        local_98 = pppppuVar10;
        FUN_00664898(&local_58,&DAT_005ab249,&local_90);
        if (local_58 != (uint *****)&DAT_80000000) {
          local_88 = local_54;
          pppppuVar15 = local_50;
          local_8c = local_58;
          goto LAB_0162b444;
        }
        if (uVar18 < 0x1400000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,0x14,pppppuVar10,&DAT_01d06398);
        }
      }
      FUN_01642884(&local_90,iVar5);
      if (local_90 == (uint *****)&DAT_0000000b) {
        pppppuVar15 = local_84;
LAB_0162b444:
LAB_0162b44c:
        local_90 = local_8c;
        local_8c = local_88;
        local_88 = pppppuVar15;
        FUN_016403ac(puVar14,&local_90,"failed to parse nat action",0x1a);
        local_120 = (uint *****)*puVar14;
        local_11c = (uint *****)puVar14[1];
        goto LAB_0162bb98;
      }
      if (uVar18 < 0x1800000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0x14,0x18,pppppuVar10,&DAT_01d06398);
      }
      if (uVar18 < 0x1c00000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0x18,0x1c,pppppuVar10,&DAT_01d06398);
      }
      if (uVar18 < 0x2000000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0x1c,0x20,pppppuVar10,&DAT_01d06398);
      }
      if (uVar18 < 0x2400000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0x20,0x24,pppppuVar10,&DAT_01d06398);
      }
      local_78 = *(uint ******)(iVar5 + 0x14);
      pppppuVar10 = *(uint ******)(iVar5 + 0x18);
      local_70 = *(uint ******)(iVar5 + 0x1c);
      pppppuVar12 = *(uint ******)(iVar5 + 0x20);
      local_8c = local_90;
    }
    else if (sVar1 == 2) {
      if (uVar18 < 0x2000000000) {
        local_44 = FUN_012fd02c;
        local_4c = (uint *****)FUN_012fd02c;
        local_50 = (uint *****)&local_98;
        local_58 = &local_64;
        local_54 = (uint *****)&LAB_018a13b8;
        local_98 = (uint *****)&DAT_00000020;
        local_64 = (uint ****)0x4c01cf;
        local_48 = (uint *****)local_a0;
        local_60 = 9;
        local_a0[0] = pppppuVar10;
        FUN_00664898(&local_38,&DAT_005ab249,&local_58);
        if (local_38 != (uint *****)&DAT_80000000) {
          local_88 = local_34;
          pppppuVar15 = local_30;
          local_8c = local_38;
          goto LAB_0162b444;
        }
      }
      FUN_016427bc(&local_90,iVar5,pppppuVar10);
      if (local_90 == (uint *****)&DAT_00000001) {
        pppppuVar15 = local_84;
        goto LAB_0162b444;
      }
      pppppuVar12 = local_6c;
      local_8c = (uint *****)&DAT_0000000b;
      pppppuVar10 = local_74;
    }
    else {
      pppppuVar10 = (uint *****)0x162af7c;
      FUN_01623ae4(&local_90,pppppuVar15,pppppuVar7);
      if (local_90 == (uint *****)&DAT_80000000) {
        pppppuVar15 = local_84;
        goto LAB_0162b44c;
      }
      local_80 = local_84;
      local_70 = extraout_r2;
      local_84 = local_88;
      local_8c = (uint *****)&DAT_0000000d;
      local_7c = pppppuVar7;
      local_78 = extraout_r12;
    }
    pppppuVar17 = (uint *****)*puVar14;
    pppppuVar15 = (uint *****)puVar14[1];
    uVar3 = 1;
    local_90 = local_70;
    local_1d0 = local_84;
    local_e0 = local_80;
    pppppuStack_dc = local_7c;
    pppppuStack_d8 = local_78;
    pppppuStack_d4 = pppppuVar10;
    pppppuStack_d0 = local_70;
    pppppuStack_cc = pppppuVar12;
LAB_0162b938:
    puVar2[1] = pppppuVar17;
    puVar2[2] = pppppuVar15;
    *piVar13 = (int)local_90;
    piVar13[1] = (int)local_8c;
    piVar13[2] = (int)local_118;
    piVar13[3] = iStack_114;
    iVar5 = piVar13[1];
    iVar16 = piVar13[2];
    param_1[1] = *piVar13;
    param_1[2] = iVar5;
    param_1[3] = iVar16;
    param_1[4] = local_158;
    param_1[5] = local_1d0;
    param_1[6] = local_e0;
    param_1[7] = pppppuStack_dc;
    param_1[8] = pppppuStack_d8;
    param_1[9] = pppppuStack_d4;
    param_1[10] = pppppuStack_d0;
    param_1[0xb] = pppppuStack_cc;
    goto LAB_0162bbf0;
  }
  if (iVar5 != 10) {
    if ((iVar5 != 6) || (iVar5 = thunk_FUN_01bed842(uVar3,"mirred",6), iVar5 != 0))
    goto LAB_0162aca0;
    uVar18 = FUN_01623bf0(pppppuVar15,pppppuVar7);
    pppppuVar10 = (uint *****)(uVar18 >> 0x20);
    iVar5 = (int)uVar18;
    sVar1 = FUN_01623bc0(pppppuVar15,pppppuVar7);
    if (sVar1 != 1) {
      if (sVar1 == 2) {
        if (uVar18 < 0x1c00000000) {
          local_7c = (uint *****)FUN_012fd02c;
          local_84 = (uint *****)FUN_012fd02c;
          local_88 = &local_64;
          local_90 = (uint *****)&local_38;
          local_8c = (uint *****)&LAB_018a13b8;
          local_64 = (uint ****)0x1c;
          local_38 = (uint *****)0x4bea27;
          local_80 = (uint *****)&local_98;
          local_34 = (uint *****)&DAT_0000000e;
          local_98 = pppppuVar10;
          FUN_00664898(&local_58,&DAT_005ab249,&local_90);
          if (local_58 != (uint *****)&DAT_80000000) {
            local_88 = local_54;
            local_8c = local_58;
            pppppuVar15 = local_50;
            goto LAB_0162b48c;
          }
          if (uVar18 < 0x1400000000) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,0x14,pppppuVar10,&DAT_01d06178);
          }
        }
        FUN_01642884(&local_90,iVar5);
        if (local_90 == (uint *****)&DAT_0000000b) goto LAB_0162afcc;
        if (uVar18 < 0x1800000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0x14,0x18,pppppuVar10,&DAT_01d06178);
        }
        if (uVar18 < 0x1c00000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0x18,0x1c,pppppuVar10,&DAT_01d06178);
        }
        pppppuVar15 = (uint *****)&DAT_00000001;
        local_6c = *(uint ******)(iVar5 + 0x18);
        local_1d0 = local_90;
        local_e0 = local_8c;
        local_74 = local_80;
        local_90 = local_7c;
      }
      else {
        FUN_01623ae4(&local_90,pppppuVar15,pppppuVar7);
        if (local_90 == (uint *****)&DAT_80000000) {
LAB_0162afcc:
          pppppuVar15 = local_84;
          goto LAB_0162b48c;
        }
        pppppuVar15 = (uint *****)0x2;
        local_1d0 = local_88;
        local_e0 = local_84;
        local_74 = pppppuVar12;
        local_90 = pppppuVar17;
        local_6c = extraout_r12_00;
      }
LAB_0162b08c:
      uVar3 = 0;
      local_8c = pppppuVar15;
      pppppuVar17 = (uint *****)*puVar14;
      pppppuVar15 = (uint *****)puVar14[1];
      pppppuStack_dc = local_88;
      pppppuStack_d8 = local_84;
      pppppuStack_d4 = local_74;
      pppppuStack_d0 = local_90;
      pppppuStack_cc = local_6c;
      goto LAB_0162b938;
    }
    if (uVar18 < 0x2000000000) {
      local_44 = FUN_012fd02c;
      local_4c = (uint *****)FUN_012fd02c;
      local_50 = (uint *****)&local_98;
      local_58 = &local_64;
      local_54 = (uint *****)&LAB_018a13b8;
      local_98 = (uint *****)&DAT_00000020;
      local_64 = (uint ****)0x4c01cf;
      local_48 = (uint *****)local_a0;
      local_60 = 9;
      local_a0[0] = pppppuVar10;
      FUN_00664898(&local_38,&DAT_005ab249,&local_58);
      if (local_38 == (uint *****)&DAT_80000000) goto LAB_0162af3c;
      local_88 = local_34;
      local_8c = local_38;
      pppppuVar15 = local_30;
    }
    else {
LAB_0162af3c:
      FUN_016427bc(&local_90,iVar5,pppppuVar10);
      if (local_90 != (uint *****)&DAT_00000001) {
        pppppuVar15 = (uint *****)0x0;
        local_88 = local_7c;
        local_1d0 = local_84;
        local_e0 = local_80;
        local_84 = local_78;
        local_90 = local_70;
        goto LAB_0162b08c;
      }
      pppppuVar15 = local_84;
    }
LAB_0162b48c:
    local_90 = local_8c;
    local_8c = local_88;
    local_88 = pppppuVar15;
    FUN_016403ac(puVar14,&local_90,"failed to parse mirror action",0x1d);
    local_120 = (uint *****)*puVar14;
    local_11c = (uint *****)puVar14[1];
    goto LAB_0162bb98;
  }
  iVar5 = thunk_FUN_01bed842(uVar3,"tunnel_key",10);
  if (iVar5 != 0) {
LAB_0162aca0:
    FUN_01623ae4(&local_90,pppppuVar15,pppppuVar7);
    if (local_90 == (uint *****)&DAT_80000000) {
      puVar11 = (undefined4 *)((uint)&local_90 | 4);
      local_58 = (uint *****)*puVar11;
      local_54 = (uint *****)puVar11[1];
      local_50 = (uint *****)puVar11[2];
      FUN_016403ac(puVar14,&local_58,"failed to parse action options",0x1e);
    }
    else {
      local_c8 = local_90;
      local_c4 = local_8c;
      local_c0 = local_88;
      local_bc = local_84;
      if (local_90 != (uint *****)&DAT_80000000) {
        uVar3 = 3;
        pppppuVar17 = local_88;
        pppppuVar15 = local_84;
        goto LAB_0162b938;
      }
    }
    *puVar2 = local_c0;
    puVar2[1] = local_bc;
    local_120 = local_c4;
    goto LAB_0162bba0;
  }
  uVar18 = FUN_01623bf0(pppppuVar15,pppppuVar7);
  ppppuVar6 = (uint ****)(uVar18 >> 0x20);
  iVar5 = (int)uVar18;
  uVar4 = FUN_01623bc0(pppppuVar15,pppppuVar7);
  if (0xc < (uVar4 & 0xffff) - 1) {
switchD_0162ab90_caseD_8:
    FUN_01623ae4(&local_90,pppppuVar15,pppppuVar7);
    pppppuVar10 = (uint *****)((uint)local_84 & 0xff);
    pppppuVar7 = (uint *****)((uint)local_84 >> 8);
    if (local_90 != (uint *****)&DAT_80000000) {
      uVar4 = 0xb;
      local_1d0 = local_88;
      uVar9 = local_84._0_1_;
LAB_0162b898:
      pppppuVar17 = (uint *****)*puVar14;
      pppppuVar15 = (uint *****)puVar14[1];
      local_b8 = (uint *****)CONCAT31((int3)pppppuVar7,uVar9);
      local_e0 = local_b8;
      pppppuStack_dc = local_1e0;
      pppppuStack_d8 = local_1e4;
      pppppuStack_d0 = local_98;
      uVar3 = 2;
      local_8c = (uint *****)(uVar4 | (uint)*(uint3 *)((uint)&local_c8 | 1) << 8);
      local_90 = local_94;
      pppppuStack_d4 = local_1e8;
      pppppuStack_cc = local_94;
      goto LAB_0162b938;
    }
LAB_0162bb38:
    pppppuVar15 = local_88;
LAB_0162bb40:
    uVar4 = (uint)pppppuVar15 >> 8;
    pppppuVar12 = pppppuVar15;
    goto LAB_0162bb48;
  }
  puVar11 = (undefined4 *)((uint)&local_90 | 4);
  switch(uVar4 & 0xffff) {
  case 1:
    if (uVar18 < 0x2000000000) {
      local_44 = FUN_012fd02c;
      local_4c = (uint *****)FUN_012fd02c;
      local_50 = &local_3c;
      local_58 = &local_64;
      local_54 = (uint *****)&LAB_018a13b8;
      local_3c = (uint ****)0x20;
      local_64 = (uint ****)0x4c01cf;
      local_48 = &local_5c;
      local_60 = 9;
      local_5c = ppppuVar6;
      FUN_00664898(&local_38,&DAT_005ab249,&local_58);
      if (local_38 != (uint *****)&DAT_80000000) {
        pppppuVar10 = local_30;
        local_88 = local_34;
        local_8c = local_38;
LAB_0162bb34:
        pppppuVar7 = (uint *****)((uint)pppppuVar10 >> 8);
        goto LAB_0162bb38;
      }
    }
    FUN_016427bc(&local_90,iVar5,ppppuVar6);
    if (local_90 != (uint *****)&DAT_00000001) {
      uVar4 = 0;
      pppppuVar7 = (uint *****)((uint)local_80 >> 8);
      local_1e4 = local_78;
      local_1e0 = local_7c;
      local_1d0 = local_84;
      local_94 = local_6c;
      local_1e8 = local_74;
      local_98 = local_70;
      uVar9 = local_80._0_1_;
      goto LAB_0162b898;
    }
    pppppuVar10 = local_84;
    pppppuVar15 = local_88;
    goto LAB_0162b228;
  case 2:
    if (uVar18 < 0x1800000000) {
      local_7c = (uint *****)FUN_012fd02c;
      local_84 = (uint *****)FUN_012fd02c;
      local_88 = &local_64;
      local_90 = (uint *****)&local_38;
      local_8c = (uint *****)&LAB_018a13b8;
      local_64 = (uint ****)0x18;
      local_38 = (uint *****)0x4c01b3;
      local_80 = &local_3c;
      local_34 = (uint *****)&DAT_00000011;
      local_3c = ppppuVar6;
      FUN_00664898(&local_58,&DAT_005ab249,&local_90);
      if (local_58 != (uint *****)&DAT_80000000) {
        pppppuVar10 = local_50;
        local_88 = local_54;
        local_8c = local_58;
        goto LAB_0162bb34;
      }
      if (uVar18 < 0x1400000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,0x14,ppppuVar6,&DAT_01d06388);
      }
    }
    FUN_01642884(&local_90,iVar5);
    pppppuVar7 = (uint *****)((uint)local_84 >> 8);
    pppppuVar10 = (uint *****)((uint)local_84 & 0xff);
    if (local_90 != (uint *****)&DAT_0000000b) {
      if (uVar18 < 0x1800000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0x14,0x18,ppppuVar6,&DAT_01d06388);
      }
      uVar4 = 1;
      local_1d0 = local_88;
      local_1e0 = local_80;
      local_1e4 = local_7c;
      local_1e8 = *(uint ******)(iVar5 + 0x14);
      uVar9 = local_84._0_1_;
      goto LAB_0162b898;
    }
    goto LAB_0162bb38;
  case 3:
    FUN_0162a4b8(&local_58,iVar5,ppppuVar6);
    if (local_58 == (uint *****)&DAT_80000000) {
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      pppppuVar7 = (uint *****)0x0;
      pppppuVar15 = local_50;
    }
    else {
      local_90 = local_58;
      local_8c = local_54;
      local_88 = local_50;
      FUN_016403ac(&local_38,&local_90,"failed to parse TCA_TUNNEL_KEY_ENC_IPV4_SRC",0x2b);
      pppppuVar7 = extraout_r1_01;
      pppppuVar15 = extraout_r3_01;
    }
    uVar9 = SUB41(pppppuVar15,0);
    if (local_38 == (uint *****)&DAT_80000000) {
      uVar4 = 2;
LAB_0162b698:
      local_1d0 = (uint *****)0x0;
      goto LAB_0162b898;
    }
    goto LAB_0162b6b0;
  case 4:
    FUN_0162a4b8(&local_58,iVar5,ppppuVar6);
    if (local_58 == (uint *****)&DAT_80000000) {
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      pppppuVar7 = (uint *****)0x0;
      pppppuVar15 = local_50;
    }
    else {
      local_90 = local_58;
      local_8c = local_54;
      local_88 = local_50;
      FUN_016403ac(&local_38,&local_90,"failed to parse TCA_TUNNEL_KEY_ENC_IPV4_DST",0x2b);
      pppppuVar7 = extraout_r1_00;
      pppppuVar15 = extraout_r3_00;
    }
    uVar9 = SUB41(pppppuVar15,0);
    if (local_38 == (uint *****)&DAT_80000000) {
      uVar4 = 3;
      goto LAB_0162b698;
    }
LAB_0162b6b0:
    uVar4 = (uint)local_34 >> 8;
    pppppuVar15 = local_34;
    goto LAB_0162ba34;
  case 5:
    FUN_0162902c(&local_90,iVar5,ppppuVar6);
    if (((uint)local_90 & 1) == 0) {
      local_58 = local_90;
      local_54 = local_8c;
      local_50 = local_88;
      local_4c = local_84;
      local_48 = local_80;
      if (((uint)local_90 & 1) != 0) goto LAB_0162b21c;
      local_48._0_1_ = SUB41(local_80,0);
      uVar4 = 4;
LAB_0162b5f8:
      pppppuVar7 = local_8c;
      uVar9 = local_48._0_1_;
      local_1d0 = local_84;
      goto LAB_0162b898;
    }
    pcVar8 = "failed to parse TCA_TUNNEL_KEY_ENC_IPV6_SRC";
LAB_0162b1fc:
    local_38 = (uint *****)*puVar11;
    local_34 = (uint *****)puVar11[1];
    local_30 = (uint *****)puVar11[2];
    FUN_016403ac((uint)&local_58 | 4,&local_38,pcVar8,0x2b);
    goto LAB_0162b21c;
  case 6:
    FUN_0162902c(&local_90,iVar5,ppppuVar6);
    if (((uint)local_90 & 1) != 0) {
      pcVar8 = "failed to parse TCA_TUNNEL_KEY_ENC_IPV6_DST";
      goto LAB_0162b1fc;
    }
    local_58 = local_90;
    local_54 = local_8c;
    local_50 = local_88;
    local_4c = local_84;
    local_48 = local_80;
    if (((uint)local_90 & 1) == 0) {
      local_48._0_1_ = SUB41(local_80,0);
      uVar4 = 5;
      goto LAB_0162b5f8;
    }
LAB_0162b21c:
    pppppuVar10 = local_4c;
    pppppuVar15 = local_50;
    local_8c = local_54;
LAB_0162b228:
    uVar4 = (uint)pppppuVar15 >> 8;
    pppppuVar12 = pppppuVar15;
    goto LAB_0162ba38;
  case 7:
    FUN_0160f178(&local_58,iVar5,ppppuVar6);
    if (local_58 == (uint *****)&DAT_80000000) {
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      pppppuVar7 = (uint *****)0x0;
      pppppuVar15 = local_50;
    }
    else {
      local_90 = local_58;
      local_8c = local_54;
      local_88 = local_50;
      FUN_016403ac(&local_38,&local_90,"failed to parse TCA_TUNNEL_KEY_ENC_KEY_ID",0x29);
      pppppuVar7 = extraout_r1_02;
      pppppuVar15 = extraout_r3_02;
    }
    if (local_38 == (uint *****)&DAT_80000000) {
      local_1d0 = (uint *****)0x0;
      uVar4 = 6;
      uVar9 = (char)pppppuVar15;
      goto LAB_0162b898;
    }
    pppppuVar7 = (uint *****)((uint)local_30 >> 8);
    pppppuVar10 = local_30;
    pppppuVar15 = local_34;
    local_8c = local_38;
    goto LAB_0162bb40;
  default:
    goto switchD_0162ab90_caseD_8;
  case 9:
    FUN_0160f104(&local_58,iVar5,ppppuVar6);
    if (local_58 == (uint *****)&DAT_80000000) {
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      pppppuVar7 = (uint *****)0x0;
      pppppuVar12 = local_50;
    }
    else {
      local_90 = local_58;
      local_8c = local_54;
      local_88 = local_50;
      FUN_016403ac(&local_38,&local_90,"failed to parse TCA_TUNNEL_KEY_ENC_DST_PORT",0x2b);
      pppppuVar7 = extraout_r1_03;
      pppppuVar12 = extraout_r3_03;
    }
    pppppuVar15 = (uint *****)((uint)local_34 & 0xffff);
    if (local_38 == (uint *****)&DAT_80000000) {
      uVar4 = 7;
      local_1d0 = (uint *****)0x0;
      uVar9 = (char)pppppuVar12;
      goto LAB_0162b898;
    }
    uVar4 = (uint)local_34 >> 8 & 0xff;
    pppppuVar7 = (uint *****)((uint)local_30 >> 8);
    pppppuVar10 = local_30;
    local_90 = local_38;
    pppppuVar12 = local_34;
    goto LAB_0162bb4c;
  case 10:
    FUN_0160f290(&local_58,iVar5,ppppuVar6);
    if (local_58 == (uint *****)&DAT_80000000) {
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      pppppuVar7 = (uint *****)0x0;
      pppppuVar15 = local_50;
    }
    else {
      local_90 = local_58;
      local_8c = local_54;
      local_88 = local_50;
      FUN_016403ac(&local_38,&local_90,"invalid TCA_TUNNEL_KEY_NO_CSUM value",0x24);
      pppppuVar7 = extraout_r1_05;
      pppppuVar15 = extraout_r3_05;
    }
    uVar9 = SUB41(pppppuVar15,0);
    pppppuVar15 = (uint *****)((uint)local_34 & 0xff);
    if (local_38 == (uint *****)&DAT_80000000) {
      uVar4 = 10;
LAB_0162b890:
      local_1d0 = (uint *****)0x0;
      goto LAB_0162b898;
    }
    break;
  case 0xc:
    FUN_0160f290(&local_58,iVar5,ppppuVar6);
    if (local_58 == (uint *****)&DAT_80000000) {
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      pppppuVar7 = (uint *****)0x0;
      pppppuVar15 = local_50;
    }
    else {
      local_90 = local_58;
      local_8c = local_54;
      local_88 = local_50;
      FUN_016403ac(&local_38,&local_90,"failed to parse TCA_TUNNEL_KEY_ENC_TOS",0x26);
      pppppuVar7 = extraout_r1_04;
      pppppuVar15 = extraout_r3_04;
    }
    uVar9 = SUB41(pppppuVar15,0);
    pppppuVar15 = (uint *****)((uint)local_34 & 0xff);
    if (local_38 == (uint *****)&DAT_80000000) {
      uVar4 = 8;
      goto LAB_0162b890;
    }
    break;
  case 0xd:
    FUN_0160f290(&local_58,iVar5,ppppuVar6);
    if (local_58 == (uint *****)&DAT_80000000) {
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      pppppuVar7 = (uint *****)0x0;
      pppppuVar15 = local_50;
    }
    else {
      local_90 = local_58;
      local_8c = local_54;
      local_88 = local_50;
      FUN_016403ac(&local_38,&local_90,"failed to parse TCA_TUNNEL_KEY_ENC_TTL",0x26);
      pppppuVar7 = extraout_r1;
      pppppuVar15 = extraout_r3;
    }
    uVar9 = SUB41(pppppuVar15,0);
    pppppuVar15 = (uint *****)((uint)local_34 & 0xff);
    if (local_38 == (uint *****)&DAT_80000000) {
      uVar4 = 9;
      goto LAB_0162b890;
    }
  }
  uVar4 = (uint)local_34 >> 8 & 0xff;
LAB_0162ba34:
  pppppuVar10 = local_30;
  local_8c = local_38;
  pppppuVar12 = local_34;
LAB_0162ba38:
  pppppuVar7 = (uint *****)((uint)pppppuVar10 >> 8);
LAB_0162bb48:
  local_90 = local_8c;
LAB_0162bb4c:
  local_88 = (uint *****)((uint)pppppuVar10 & 0xff | (int)pppppuVar7 << 8);
  local_8c = (uint *****)
             ((uint)pppppuVar15 & 0xff | (uVar4 & 0xff) << 8 | (uint)pppppuVar12 & 0xffff0000);
  FUN_016403ac(puVar14,&local_90,"failed to parse tunnel_key action",0x21);
  local_120 = (uint *****)*puVar14;
  local_11c = (uint *****)puVar14[1];
LAB_0162bb98:
  local_118 = local_bc;
LAB_0162bba0:
  local_90 = local_120;
  local_8c = local_11c;
  local_88 = local_118;
  FUN_016403ac(piVar13,&local_90,"failed to parse TCA_ACT_OPTIONS",0x1f);
LAB_0162bbc4:
  local_178 = (uint ****)*piVar13;
  ppppuStack_174 = (uint ****)piVar13[1];
  ppppuStack_170 = (uint ****)piVar13[2];
  if (*pppppuVar17 != (uint ****)0x80000000) {
    FUN_0134bd64(*pppppuVar17,pppppuVar17[1]);
  }
  *pppppuVar17 = local_178;
  pppppuVar17[1] = ppppuStack_174;
  pppppuVar17[2] = ppppuStack_170;
LAB_0162bbec:
  uVar3 = 4;
LAB_0162bbf0:
  *param_1 = uVar3;
  return;
}

