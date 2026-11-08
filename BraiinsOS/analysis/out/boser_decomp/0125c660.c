// FUN_0125c660 @ 0125c660 size=4496 calls_out=31 calls_in=1
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | of_node | bosminer_fan::hwmonopen/bosminer/bosminer-fan/src/hwmon.rs

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0125c660(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte *****pppppbVar15;
  byte *pbVar16;
  byte *******pppppppbVar17;
  uint uVar18;
  byte *******pppppppbVar19;
  char *pcVar20;
  char cVar21;
  byte ******ppppppbVar22;
  undefined1 uVar23;
  byte *******pppppppbVar24;
  uint uVar25;
  byte ******ppppppbVar26;
  undefined1 uVar27;
  undefined8 uVar28;
  byte *******local_1fc;
  byte *******local_1f8;
  byte *******local_1c0;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  byte *******local_19c;
  byte *******local_198;
  undefined4 local_194;
  undefined4 local_190;
  byte *******local_188;
  byte *******pppppppbStack_184;
  byte *******pppppppbStack_180;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  byte ******local_158;
  byte *******pppppppbStack_154;
  undefined4 uStack_150;
  byte *******local_148;
  byte *******local_144;
  byte *******pppppppbStack_140;
  byte ******local_138;
  byte *******local_134;
  undefined4 local_130;
  byte *******local_128;
  byte *******local_124;
  byte *******local_120;
  undefined4 uStack_11c;
  undefined2 local_118;
  undefined1 local_116;
  byte *******local_110;
  byte *******local_10c;
  byte *******local_108;
  undefined2 local_f4;
  undefined1 local_f2;
  byte *******local_f0;
  byte *******local_ec;
  undefined4 local_e8;
  code *local_e4;
  undefined1 local_d4;
  undefined1 local_d3;
  char local_d2;
  byte *******local_d0;
  byte *******local_cc;
  byte *******local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  byte *******local_b4;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte *******local_98;
  byte *******local_94;
  byte *******local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  byte *******local_78;
  byte *******local_74;
  byte *******local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [12];
  byte *******local_50;
  byte *******local_4c;
  byte *******local_48;
  byte *******local_40;
  byte *******local_3c;
  byte *******local_38;
  byte ******local_30;
  byte *******local_2c;
  byte *******local_28;
  
  piVar7 = *(int **)(param_2 + 0x70);
LAB_0125c6c0:
  do {
    FUN_01ae28dc(&local_1b0,param_2);
    uVar5 = local_190;
    uVar4 = local_194;
    pppppppbVar14 = local_198;
    pppppppbVar17 = local_19c;
    uVar3 = local_1a0;
    if (local_1b0 == 2) goto LAB_0125d744;
    if ((local_1b0 & 1) == 0) {
      if (local_198 == (byte *******)0x0) {
        cVar6 = false;
      }
      else {
        cVar6 = *(byte *)local_19c == 0x2f;
      }
      cVar21 = '\x06';
      local_108 = (byte *******)CONCAT31(local_108._1_3_,6);
      local_f2 = 0;
      local_f4 = 0x201;
      local_10c = (byte *******)&SUB_00000004;
      local_110 = (byte *******)&DAT_0056ee18;
      local_ec = local_198;
      local_f0 = local_19c;
      uVar23 = 2;
      uVar27 = 1;
      while( true ) {
        if (cVar21 != '\x06') {
          local_d0 = local_128;
          local_cc = local_124;
          local_c8 = local_120;
          local_c4 = uStack_11c;
          local_c0._0_3_ = CONCAT12(local_116,local_118);
        }
        local_e8 = (byte *******)CONCAT31(local_e8._1_3_,cVar21);
        FUN_01bed4e2((int)&local_e8 + 1,&local_d0,0x13);
        local_d4 = uVar27;
        local_d3 = uVar23;
        local_d2 = cVar6;
        FUN_01982524(&local_98,&local_f0);
        FUN_01982524(&local_78,&local_110);
        local_d0 = local_98;
        local_cc = local_94;
        local_c8 = local_90;
        local_c4 = local_8c;
        local_c0 = uStack_88;
        uStack_bc = uStack_84;
        uStack_b8 = uStack_80;
        local_b4 = local_78;
        pppppppbStack_b0 = local_74;
        pppppppbStack_ac = local_70;
        local_a8 = local_6c;
        uStack_a4 = uStack_68;
        uStack_a0 = uStack_64;
        uStack_9c = uStack_60;
        if ((char)local_98 == '\n') break;
        if (((uint)local_78 & 0xff) == 10) goto LAB_0125c8d4;
        iVar8 = FUN_0199f550(&local_d0,&local_b4);
        if (iVar8 == 0) goto LAB_0125c8e0;
        cVar21 = (char)local_e8;
        FUN_01bed4e2(&local_128,(int)&local_e8 + 1,0x13);
        uVar23 = local_d3;
        uVar27 = local_d4;
        cVar6 = local_d2;
      }
      if (((uint)local_78 & 0xff) == 10) {
LAB_0125c8d4:
        if (cVar6 != '\x02') {
          FUN_01ae5434(&local_170,pppppppbVar17,pppppppbVar14);
          iVar8 = local_170;
          local_164 = uVar4;
          local_160 = uVar5;
          FUN_0134bd64(uVar3,pppppppbVar17);
          uVar4 = local_168;
          uVar3 = local_16c;
          if (iVar8 == -0x80000000) goto LAB_0125c6c0;
          FUN_019a5900(&local_50);
          pppppppbVar14 = local_4c;
          pppppppbVar17 = local_50;
          if (local_50 != (byte *******)&DAT_80000000) {
            pbVar16 = (byte *)0x0;
            pppppppbVar13 = (byte *******)((int)local_4c + (int)local_48);
            pbVar11 = pbVar16;
            pppppppbVar19 = local_4c;
            if (local_48 != (byte *******)0x0) break;
            pbVar11 = (byte *)0x0;
            pppppppbVar24 = local_4c;
            goto joined_r0x0125ccac;
          }
          local_148 = local_4c;
          local_144 = local_48;
          if (((DAT_01d50f88 < 4) &&
              ((DAT_01d4ebd4 - 1 < 2 ||
               ((DAT_01d4ebd4 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4ebcc), cVar6 != '\0')))))) &&
             (iVar9 = FUN_01aaa278(DAT_01d4ebcc), iVar9 != 0)) {
            pppppppbVar17 = (byte *******)(DAT_01d4ebcc + 0x1c);
            if (*(byte ********)(DAT_01d4ebcc + 0x20) == (byte *******)0x0) {
LAB_0125d7ac:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c2511c);
            }
            local_c8 = *(byte ********)(DAT_01d4ebcc + 0x24);
            local_c4 = *(undefined4 *)(DAT_01d4ebcc + 0x28);
            local_c0 = 0;
            local_d0 = (byte *******)*pppppppbVar17;
            local_cc = *(byte ********)(DAT_01d4ebcc + 0x20);
            FUN_006643f0(&local_98,uVar3,uVar4);
            local_134 = (byte *******)&local_f0;
            local_124 = &local_138;
            local_128 = (byte *******)&local_d0;
            local_40 = (byte *******)&local_128;
            local_e8 = (byte *******)&local_148;
            local_f0 = (byte *******)&local_98;
            local_3c = (byte *******)&DAT_00000001;
            local_e4 = FUN_019a7d7c;
            local_ec = (byte *******)&LAB_012b97d8;
            local_138 = (byte ******)&DAT_00585754;
            local_120 = (byte *******)&DAT_01d2ea4c;
            local_38 = pppppppbVar17;
            FUN_01aaaecc(DAT_01d4ebcc,&local_40);
            iVar9 = DAT_01d4ebcc;
            if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
              local_74 = *(byte ********)(DAT_01d4ebcc + 0x14);
              local_70 = *(byte ********)(DAT_01d4ebcc + 0x18);
              local_78 = (byte *******)0x2;
              DataMemoryBarrier(0xb);
              pcVar20 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar20 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar12 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar12 = &DAT_01cfc5e0;
              }
              iVar10 = (*(code *)puVar12[3])(pcVar20,&local_78);
              if (iVar10 != 0) {
                local_110 = local_78;
                local_10c = local_74;
                local_108 = local_70;
                FUN_01aaa328(iVar9,pcVar20,puVar12[4],&local_110,&local_40);
              }
            }
            if (local_98 != (byte *******)&DAT_80000000) {
              pppppppbVar17 = local_98;
              pppppppbVar14 = local_94;
LAB_0125d00c:
              FUN_0134bd64(pppppppbVar17,pppppppbVar14);
            }
          }
          else {
            iVar9 = DAT_01d4ebcc;
            if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
              local_3c = *(byte ********)(DAT_01d4ebcc + 0x14);
              local_38 = *(byte ********)(DAT_01d4ebcc + 0x18);
              local_40 = (byte *******)0x2;
              DataMemoryBarrier(0xb);
              pcVar20 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar20 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar12 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar12 = &DAT_01cfc5e0;
              }
              iVar10 = (*(code *)puVar12[3])(pcVar20,&local_40);
              if (iVar10 != 0) {
                pppppppbVar17 = (byte *******)(DAT_01d4ebcc + 0x1c);
                if (*(byte ********)(DAT_01d4ebcc + 0x20) == (byte *******)0x0) goto LAB_0125d7ac;
                local_c8 = *(byte ********)(DAT_01d4ebcc + 0x24);
                local_c4 = *(undefined4 *)(DAT_01d4ebcc + 0x28);
                local_c0 = 0;
                local_d0 = (byte *******)*pppppppbVar17;
                local_cc = *(byte ********)(DAT_01d4ebcc + 0x20);
                FUN_006643f0(&local_78,uVar3,uVar4);
                local_134 = (byte *******)&local_f0;
                local_94 = &local_138;
                local_98 = (byte *******)&local_d0;
                local_128 = (byte *******)&local_98;
                local_e8 = (byte *******)&local_148;
                local_f0 = (byte *******)&local_78;
                local_124 = (byte *******)&DAT_00000001;
                local_e4 = FUN_019a7d7c;
                local_ec = (byte *******)&LAB_012b97d8;
                local_138 = (byte ******)&DAT_00585754;
                local_90 = (byte *******)&DAT_01d2ea4c;
                local_110 = local_40;
                local_10c = local_3c;
                local_108 = local_38;
                local_120 = pppppppbVar17;
                FUN_01aaa328(iVar9,pcVar20,puVar12[4],&local_110,&local_128);
                if (local_78 != (byte *******)&DAT_80000000) {
                  pppppppbVar17 = local_78;
                  pppppppbVar14 = local_74;
                  goto LAB_0125d00c;
                }
              }
            }
          }
          FUN_0069263c((uint)local_148 & 0xff,local_144);
          goto LAB_0125d024;
        }
      }
LAB_0125c8e0:
      FUN_0134bd64(uVar3,pppppppbVar17);
    }
    else if (local_1ac == -0x80000000) {
      if (local_1a8 != -0x80000000) {
        FUN_0134bd64(local_1a8,local_1a4);
      }
      FUN_0069263c(pppppppbVar17,pppppppbVar14);
    }
    else {
      FUN_0134bd64();
      FUN_0134bd64(uVar3,pppppppbVar17);
    }
  } while( true );
  do {
    pppppppbVar24 = (byte *******)((int)pppppppbVar19 + 1);
    uVar18 = (uint)*(byte *)pppppppbVar19;
    if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppbVar19) {
      uVar25 = *(byte *)((int)pppppppbVar19 + 1) & 0x3f;
      if (uVar18 < 0xe0) {
        uVar18 = uVar25 | (uVar18 & 0x1f) << 6;
        pppppppbVar24 = (byte *******)((int)pppppppbVar19 + 2);
      }
      else {
        uVar25 = *(byte *)((int)pppppppbVar19 + 2) & 0x3f | uVar25 << 6;
        if (uVar18 < 0xf0) {
          uVar18 = uVar25 | (uVar18 & 0x1f) << 0xc;
          pppppppbVar24 = (byte *******)((int)pppppppbVar19 + 3);
        }
        else {
          uVar18 = *(byte *)((int)pppppppbVar19 + 3) & 0x3f | uVar25 << 6 | (uVar18 & 7) << 0x12;
          pppppppbVar24 = pppppppbVar19 + 1;
        }
      }
    }
    pbVar16 = pbVar11 + ((int)pppppppbVar24 - (int)pppppppbVar19);
    if ((4 < uVar18 - 9) && (uVar18 != 0x20)) {
      if (uVar18 < 0x80) goto joined_r0x0125ccac;
      uVar25 = uVar18 >> 8;
      if (uVar25 < 0x20) {
        if (uVar25 == 0) {
          bVar1 = (&DAT_00533bcd)[uVar18 & 0xff] & 1;
          goto joined_r0x0125cc90;
        }
        if (uVar25 != 0x16) goto joined_r0x0125ccac;
        if (uVar18 != 0x1680) goto joined_r0x0125ccac;
      }
      else if (uVar25 == 0x20) {
        bVar1 = (&DAT_00533bcd)[uVar18 & 0xff] & 2;
joined_r0x0125cc90:
        if (bVar1 == 0) goto joined_r0x0125ccac;
      }
      else {
        if (uVar25 != 0x30) goto joined_r0x0125ccac;
        if (uVar18 != 0x3000) goto joined_r0x0125ccac;
      }
    }
    pbVar11 = pbVar16;
    pppppppbVar19 = pppppppbVar24;
  } while (pppppppbVar24 != pppppppbVar13);
  pbVar11 = (byte *)0x0;
  pbVar16 = (byte *)0x0;
LAB_0125cdcc:
  if ((int)pbVar16 - (int)pbVar11 != *(int *)(param_2 + 0x68)) {
    FUN_0134bd64(local_50,local_4c);
LAB_0125d024:
    FUN_0134bd64(iVar8,uVar3);
    goto LAB_0125c6c0;
  }
  iVar9 = thunk_FUN_01bed842((byte *)((int)local_4c + (int)pbVar11),*(undefined4 *)(param_2 + 100));
  FUN_0134bd64(pppppppbVar17,pppppppbVar14);
  if (iVar9 != 0) goto LAB_0125d024;
  uVar28 = FUN_019aff98(uVar3,uVar4);
  if ((int)uVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: Wrong path",0xf,&DAT_01c2510c);
  }
  FUN_006643f0(&local_d0,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
  pppppppbVar14 = local_c8;
  pppppppbVar17 = local_cc;
  pppppppbVar19 = (byte *******)0x0;
  if ((int)local_c8 < 0) {
LAB_0125d7cc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(pppppppbVar19,local_1f8);
  }
  if (local_c8 == (byte *******)0x0) {
    local_1f8 = (byte *******)&DAT_00000001;
  }
  else {
    pppppppbVar19 = (byte *******)&DAT_00000001;
    local_1f8 = (byte *******)FUN_01298504(local_c8,1);
    if (local_1f8 == (byte *******)0x0) {
      local_1f8 = pppppppbVar14;
      goto LAB_0125d7cc;
    }
    pppppppbVar19 = pppppppbVar14;
  }
  FUN_01bed4e2(local_1f8,pppppppbVar17,pppppppbVar14);
  FUN_012c1060(&local_158,local_1f8,pppppppbVar14);
  FUN_0134bd64(pppppppbVar19,local_1f8);
  if (local_d0 != (byte *******)&DAT_80000000) {
    FUN_0134bd64(local_d0,pppppppbVar17);
  }
  FUN_0134bd64(iVar8,uVar3);
  local_138 = local_158;
  local_134 = pppppppbStack_154;
  local_130 = uStack_150;
  FUN_01ae5434(auStack_5c,pppppppbStack_154,uStack_150);
  FUN_019b0140(auStack_5c,"of_node",7);
  FUN_019b0140(auStack_5c,&DAT_0056ee18,4);
  FUN_0125e64c(&local_d0,auStack_5c);
  pppppppbVar17 = local_c8;
  if (local_d0 == (byte *******)&DAT_80000000) {
    local_50 = (byte *******)&DAT_80000000;
    if ((char)local_cc == '\x03') {
      ppppppbVar22 = *local_c8;
      ppppppbVar26 = local_c8[1];
      pppppbVar15 = *ppppppbVar26;
      if (pppppbVar15 != (byte *****)0x0) {
        (*(code *)pppppbVar15)(ppppppbVar22);
      }
      if (ppppppbVar26[1] != (byte *****)0x0) {
        thunk_FUN_01be4678(ppppppbVar22);
      }
      thunk_FUN_01be4678(pppppppbVar17);
    }
  }
  else {
    local_50 = local_d0;
    local_4c = local_cc;
    local_48 = local_c8;
  }
  FUN_014b73c4(&local_d0,local_134,local_130,&DAT_0056d4f8,4);
  pppppppbVar19 = local_c8;
  pppppppbVar14 = local_cc;
  pppppppbVar17 = local_d0;
  local_1c0 = local_cc;
  local_94 = (byte *******)0x90100;
  local_98 = &local_138;
  local_90 = (byte *******)((uint)local_90 & 0xffffff00);
  FUN_0125dacc(&local_110,&local_98);
  if (local_110 == (byte *******)&DAT_80000000) {
    local_38 = (byte *******)0x0;
    local_3c = (byte *******)&SUB_00000004;
    local_40 = (byte *******)0x0;
  }
  else {
    pppppppbVar13 = (byte *******)thunk_FUN_01be5118(0x30);
    if (pppppppbVar13 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x30);
    }
    iVar8 = 0xc;
    *pppppppbVar13 = (byte ******)local_110;
    pppppppbVar13[1] = (byte ******)local_10c;
    pppppppbVar13[2] = (byte ******)local_108;
    local_78 = (byte *******)&SUB_00000004;
    local_70 = (byte *******)&DAT_00000001;
    local_f0 = local_98;
    local_ec = local_94;
    local_e8 = local_90;
    local_74 = pppppppbVar13;
    while( true ) {
      pppppppbVar24 = local_70;
      FUN_0125dacc(&local_d0,&local_f0);
      if (local_d0 == (byte *******)&DAT_80000000) break;
      if (pppppppbVar24 == local_78) {
        FUN_006520b4(&local_78,pppppppbVar24,1,4,0xc);
        pppppppbVar13 = local_74;
      }
      pbVar11 = (byte *)((int)pppppppbVar13 + iVar8);
      local_70 = (byte *******)((int)pppppppbVar24 + 1);
      iVar8 = iVar8 + 0xc;
      *(byte ********)pbVar11 = local_d0;
      *(byte ********)(pbVar11 + 4) = local_cc;
      *(byte ********)(pbVar11 + 8) = local_c8;
    }
    local_40 = local_78;
    local_3c = local_74;
    local_38 = local_70;
  }
  if ((DAT_01d50f88 < 3) &&
     (((DAT_01d4cc4c - 1 < 2 ||
       ((DAT_01d4cc4c != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4cc44), cVar6 != '\0')))) &&
      (iVar8 = FUN_01aaa278(DAT_01d4cc44), iVar8 != 0)))) {
    if (*(byte ********)(DAT_01d4cc44 + 0x20) == (byte *******)0x0) {
LAB_0125d7ec:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c25068);
    }
    local_120 = (byte *******)(DAT_01d4cc44 + 0x1c);
    local_d0 = (byte *******)*local_120;
    local_94 = &local_30;
    local_c8 = *(byte ********)(DAT_01d4cc44 + 0x24);
    local_c4 = *(undefined4 *)(DAT_01d4cc44 + 0x28);
    local_c0 = 0;
    local_98 = (byte *******)&local_d0;
    local_28 = local_38;
    local_90 = (byte *******)&DAT_01d2ea4c;
    local_2c = (byte *******)&local_f0;
    local_30 = (byte ******)&DAT_00593834;
    local_e4 = FUN_012fd02c;
    local_e8 = (byte *******)&local_28;
    local_ec = (byte *******)FUN_0075db40;
    local_f0 = (byte *******)&local_50;
    local_124 = (byte *******)&DAT_00000001;
    local_128 = (byte *******)&local_98;
    local_cc = *(byte ********)(DAT_01d4cc44 + 0x20);
    FUN_01aaaecc(DAT_01d4cc44,&local_128);
    iVar8 = DAT_01d4cc44;
    if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
      local_74 = *(byte ********)(DAT_01d4cc44 + 0x14);
      local_70 = *(byte ********)(DAT_01d4cc44 + 0x18);
      local_78 = (byte *******)&DAT_00000003;
      DataMemoryBarrier(0xb);
      pcVar20 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar20 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      puVar12 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar12 = &DAT_01cfc5e0;
      }
      iVar9 = (*(code *)puVar12[3])(pcVar20,&local_78);
      if (iVar9 != 0) {
        local_110 = local_78;
        local_10c = local_74;
        local_108 = local_70;
        FUN_01aaa328(iVar8,pcVar20,puVar12[4],&local_110,&local_128);
      }
    }
  }
  else {
    iVar8 = DAT_01d4cc44;
    if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
      local_124 = *(byte ********)(DAT_01d4cc44 + 0x14);
      local_120 = *(byte ********)(DAT_01d4cc44 + 0x18);
      local_128 = (byte *******)&DAT_00000003;
      DataMemoryBarrier(0xb);
      pcVar20 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar20 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      puVar12 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar12 = &DAT_01cfc5e0;
      }
      iVar9 = (*(code *)puVar12[3])(pcVar20,&local_128);
      if (iVar9 != 0) {
        if (*(byte ********)(DAT_01d4cc44 + 0x20) == (byte *******)0x0) goto LAB_0125d7ec;
        local_c4 = *(undefined4 *)(DAT_01d4cc44 + 0x28);
        local_c8 = *(byte ********)(DAT_01d4cc44 + 0x24);
        local_74 = &local_30;
        local_78 = (byte *******)&local_d0;
        local_c0 = 0;
        local_28 = local_38;
        local_70 = (byte *******)&DAT_01d2ea4c;
        local_2c = (byte *******)&local_f0;
        local_30 = (byte ******)&DAT_00593834;
        local_e4 = FUN_012fd02c;
        local_e8 = (byte *******)&local_28;
        local_ec = (byte *******)FUN_0075db40;
        local_f0 = (byte *******)&local_50;
        local_94 = (byte *******)&DAT_00000001;
        local_98 = (byte *******)&local_78;
        local_110 = local_128;
        local_10c = local_124;
        local_108 = local_120;
        local_d0 = *(byte ********)(DAT_01d4cc44 + 0x1c);
        local_cc = *(byte ********)(DAT_01d4cc44 + 0x20);
        local_90 = (byte *******)(DAT_01d4cc44 + 0x1c);
        FUN_01aaa328(iVar8,pcVar20,puVar12[4],&local_110,&local_98);
      }
    }
  }
  if (local_38 == (byte *******)0x0) {
    FUN_012fbd94(&local_d0,local_134,local_130);
    local_10c = local_c8;
    local_110 = local_cc;
    if (local_d0 != (byte *******)0x0) {
      local_110 = (byte *******)0x0;
    }
    local_ec = (byte *******)FUN_0143db80;
    local_f0 = (byte *******)&local_110;
    FUN_00664898(&local_d0,&DAT_005851d7,&local_f0);
    local_f0 = local_d0;
    local_ec = local_cc;
    local_e8 = local_c8;
    local_1c0 = (byte *******)FUN_006679ac();
    FUN_0125c3a0(&local_40);
    FUN_0134bd64(pppppppbVar17,pppppppbVar14);
    pppppppbVar17 = (byte *******)&DAT_80000000;
    if (local_50 == (byte *******)&DAT_80000000) goto LAB_0125d5fc;
  }
  else {
    local_148 = local_40;
    local_144 = local_3c;
    pppppppbStack_140 = local_38;
    local_1fc = pppppppbVar19;
    if (local_50 == (byte *******)&DAT_80000000) goto LAB_0125d5fc;
  }
  FUN_0134bd64(local_50,local_4c);
LAB_0125d5fc:
  FUN_0134bd64(local_138,local_134);
  if (pppppppbVar17 == (byte *******)&DAT_80000000) {
    puVar12 = (undefined4 *)*piVar7;
    if (puVar12 != (undefined4 *)0x0) {
      (**(code **)*puVar12)();
    }
    *piVar7 = (int)local_1c0;
LAB_0125d744:
    pppppppbVar17 = (byte *******)&DAT_80000000;
    goto LAB_0125d74c;
  }
  local_188 = local_148;
  pppppppbStack_184 = local_144;
  pppppppbStack_180 = pppppppbStack_140;
  if (pppppppbVar17 != (byte *******)&DAT_80000001) {
    param_1[1] = local_1c0;
    param_1[2] = local_1fc;
    param_1[3] = local_148;
    param_1[4] = local_144;
    param_1[5] = pppppppbStack_140;
LAB_0125d74c:
    *param_1 = pppppppbVar17;
    return;
  }
  goto LAB_0125c6c0;
joined_r0x0125ccac:
  do {
    pppppppbVar19 = pppppppbVar13;
    if (pppppppbVar24 == pppppppbVar19) goto LAB_0125cdcc;
    pppppppbVar13 = (byte *******)((int)pppppppbVar19 + -1);
    uVar18 = (uint)(char)*(byte *)pppppppbVar13;
    if (0x7fffffff < uVar18) {
      pppppppbVar13 = (byte *******)((int)pppppppbVar19 + -2);
      bVar1 = *(byte *)pppppppbVar13;
      if ((char)bVar1 < -0x40) {
        pppppppbVar13 = (byte *******)((int)pppppppbVar19 + -3);
        bVar2 = *(byte *)pppppppbVar13;
        if ((char)bVar2 < -0x40) {
          pppppppbVar13 = pppppppbVar19 + -1;
          uVar25 = (int)(char)bVar2 & 0x3fU | (*(byte *)pppppppbVar13 & 7) << 6;
        }
        else {
          uVar25 = bVar2 & 0xf;
        }
        uVar25 = (int)(char)bVar1 & 0x3fU | uVar25 << 6;
      }
      else {
        uVar25 = bVar1 & 0x1f;
      }
      uVar18 = uVar18 & 0x3f | uVar25 << 6;
    }
  } while ((uVar18 - 9 < 5) || (uVar18 == 0x20));
  if (uVar18 < 0x80) goto LAB_0125cdc0;
  uVar25 = uVar18 >> 8;
  if (0x1f < uVar25) {
    if (uVar25 == 0x20) {
      bVar1 = (&DAT_00533bcd)[uVar18 & 0xff] & 2;
joined_r0x0125cdbc:
      if (bVar1 == 0) goto LAB_0125cdc0;
    }
    else if (uVar25 != 0x30 || uVar18 != 0x3000) goto LAB_0125cdc0;
    goto joined_r0x0125ccac;
  }
  if (uVar25 == 0) {
    bVar1 = (&DAT_00533bcd)[uVar18 & 0xff] & 1;
    goto joined_r0x0125cdbc;
  }
  if ((uVar25 != 0x16) || (uVar18 != 0x1680)) goto LAB_0125cdc0;
  goto joined_r0x0125ccac;
LAB_0125cdc0:
  pbVar16 = (byte *)((int)pppppppbVar19 + ((int)pbVar16 - (int)pppppppbVar24));
  goto LAB_0125cdcc;
}

