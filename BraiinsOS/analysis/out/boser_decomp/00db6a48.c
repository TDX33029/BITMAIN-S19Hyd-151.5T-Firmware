// FUN_00db6a48 @ 00db6a48 size=2692 calls_out=24 calls_in=1
// strings: user-- | user--

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00db6a48(int *******param_1,int ******param_2)

{
  char cVar1;
  int ******ppppppiVar2;
  int ******ppppppiVar3;
  int iVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  int *****pppppiVar7;
  int *****pppppiVar8;
  int *******extraout_r1;
  int *******extraout_r1_00;
  int *******extraout_r2;
  int *******extraout_r2_00;
  int *******extraout_r2_01;
  int *******extraout_r3;
  int *******extraout_r3_00;
  int *******extraout_r3_01;
  int *******extraout_r3_02;
  int *******extraout_r3_03;
  int *******extraout_r3_04;
  int *******extraout_r3_05;
  int *******extraout_r3_06;
  int *******extraout_r3_07;
  int *******extraout_r3_08;
  int *******extraout_r3_09;
  int *******extraout_r3_10;
  int *******pppppppiVar9;
  int *******extraout_r3_11;
  int *******extraout_r3_12;
  int *******extraout_r3_13;
  int *******extraout_r3_14;
  int *******extraout_r3_15;
  int *******extraout_r3_16;
  int *******unaff_r4;
  uint uVar10;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  int *******extraout_r12;
  int *******extraout_r12_00;
  int *******extraout_r12_01;
  int *******extraout_r12_02;
  int *******extraout_r12_03;
  int *******extraout_r12_04;
  int *******extraout_r12_05;
  int *******extraout_r12_06;
  int *******extraout_r12_07;
  int *******extraout_r12_08;
  int *******extraout_r12_09;
  int *******extraout_r12_10;
  int *******extraout_r12_11;
  int *******extraout_r12_12;
  int *******extraout_r12_13;
  int *******pppppppiVar13;
  int *******local_160;
  int *******local_15c;
  int *******local_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  int *******local_148;
  int *******local_144;
  int *******local_13c;
  int ******local_120;
  undefined1 local_11c;
  int *******local_118;
  int *******local_114;
  int *******local_110;
  int *******local_108;
  int *******pppppppiStack_104;
  int *******pppppppiStack_100;
  int *******local_fc;
  int *******pppppppiStack_f8;
  int *******pppppppiStack_f4;
  int *******pppppppiStack_f0;
  int *******local_e8;
  int *******local_e4;
  int *******local_e0;
  int *******pppppppiStack_dc;
  int *******local_d8;
  int *******local_d4;
  int *******pppppppiStack_d0;
  int *******pppppppiStack_cc;
  int *******pppppppiStack_c8;
  int *******local_c0;
  int *******pppppppiStack_bc;
  int *******pppppppiStack_b8;
  int *******local_b4;
  int *******pppppppiStack_b0;
  int *******pppppppiStack_ac;
  int *******pppppppiStack_a8;
  int *******local_a0;
  int *******pppppppiStack_9c;
  int *******pppppppiStack_98;
  int *******local_94;
  int *******pppppppiStack_90;
  int *******pppppppiStack_8c;
  int *******pppppppiStack_88;
  undefined4 local_80;
  int *******local_7c;
  int *******local_78;
  int *******local_74;
  int *******local_70;
  int *******local_6c;
  int *******pppppppiStack_68;
  int *******pppppppiStack_64;
  int *******pppppppiStack_60;
  int *******local_5c;
  int *******local_58;
  int *******local_54;
  int *******pppppppiStack_50;
  int *******local_4c;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  int *******local_3c;
  int *******local_38;
  int ******local_30;
  undefined1 local_2c;
  undefined1 uStack_25;
  
  pppppiVar7 = param_2[5];
  if (pppppiVar7 < param_2[4]) {
    do {
      uVar10 = *(byte *)((int)param_2[3] + (int)pppppiVar7) - 9;
      if ((0x17 < uVar10) || ((1 << (uVar10 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)((int)param_2[3] + (int)pppppiVar7) != 0x5b) {
          pppppppiVar5 = (int *******)FUN_012c7788(param_2,&uStack_25,&DAT_01c1cb18);
          goto LAB_00db7400;
        }
        cVar1 = *(char *)(param_2 + 7);
        *(char *)(param_2 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          param_2[5] = (int *****)((int)pppppiVar7 + 1);
          local_110 = (int *******)0x0;
          local_118 = (int *******)0x0;
          local_114 = (int *******)&SUB_00000004;
          local_11c = 1;
          pppppppiVar5 = (int *******)&DAT_00000052;
          local_120 = param_2;
          goto LAB_00db6b34;
        }
        local_80 = (int *******)0x18;
        goto LAB_00db6aa0;
      }
      pppppiVar7 = (int *****)((int)pppppiVar7 + 1);
      param_2[5] = pppppiVar7;
    } while (param_2[4] != pppppiVar7);
  }
  local_80 = (int *******)0x5;
LAB_00db6aa0:
  ppppppiVar3 = (int ******)FUN_012c6b30(param_2,&local_80);
  goto LAB_00db740c;
LAB_00db6b34:
  FUN_014db6fc(&local_80,&local_120);
  ppppppiVar3 = local_120;
  if ((char)local_80 != '\x01') {
    if (local_80._1_1_ == '\x01') {
      pppppiVar7 = local_120[4];
      pppppiVar8 = local_120[5];
      if (pppppiVar8 < pppppiVar7) {
        while( true ) {
          uVar10 = *(byte *)((int)local_120[3] + (int)pppppiVar8) - 9;
          if ((0x17 < uVar10) || ((1 << (uVar10 & 0xff) & 0x800013U) == 0)) break;
          pppppiVar8 = (int *****)((int)pppppiVar8 + 1);
          local_120[5] = pppppiVar8;
          if (pppppiVar7 == pppppiVar8) goto LAB_00db7364;
        }
        if (*(byte *)((int)local_120[3] + (int)pppppiVar8) != 0x6e) goto LAB_00db6ba4;
        local_120[5] = (int *****)((int)pppppiVar8 + 1);
        pppppppiVar6 = (int *******)FUN_012c6b8c(local_120,"ull",3);
        pppppppiVar5 = (int *******)&DAT_80000000;
        if (pppppppiVar6 == (int *******)0x0) goto LAB_00db716c;
      }
      else {
LAB_00db6ba4:
        if (pppppiVar8 < pppppiVar7) {
          while( true ) {
            uVar10 = (uint)*(byte *)((int)local_120[3] + (int)pppppiVar8);
            if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) break;
            pppppiVar8 = (int *****)((int)pppppiVar8 + 1);
            local_120[5] = pppppiVar8;
            if (pppppiVar7 == pppppiVar8) goto LAB_00db7364;
          }
          if (uVar10 == 0x5b) {
            cVar1 = *(char *)(local_120 + 7);
            *(char *)(local_120 + 7) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              local_120[5] = (int *****)((int)pppppiVar8 + 1);
              local_54 = (int *******)CONCAT31(local_54._1_3_,1);
              local_58 = (int *******)local_120;
              pppppppiVar13 = (int *******)0xdb6e44;
              FUN_00fac6e0(&local_80,&local_58);
              pppppppiVar9 = local_78;
              pppppppiVar6 = local_7c;
              pppppppiVar5 = local_80;
              if (local_80 == (int *******)&DAT_80000001) {
                local_40 = extraout_r2;
                local_38 = extraout_r3_08;
LAB_00db6e54:
                pppppppiVar5 = (int *******)&DAT_80000000;
                pppppppiVar9 = unaff_r4;
                pppppppiVar11 = param_1;
              }
              else {
                if (local_80 == (int *******)&DAT_80000000) {
                  pppppppiVar13 = (int *******)0xdb72c4;
                  pppppppiVar6 = (int *******)FUN_012cc2c0(0,&DAT_01c1aef4,&DAT_01d064b8);
                  local_40 = extraout_r2_01;
                  local_38 = extraout_r3_15;
                  goto LAB_00db6e54;
                }
                FUN_00fac6e0(&local_80,&local_58);
                pppppppiVar13 = local_7c;
                pppppppiVar11 = local_80;
                if (local_80 == (int *******)&DAT_80000001) {
                  local_14c = local_7c;
LAB_00db6f08:
                  pppppppiVar13 = (int *******)0xdb6f14;
                  FUN_019bb7e0(pppppppiVar5,pppppppiVar6);
                  pppppppiVar5 = (int *******)&DAT_80000000;
                  pppppppiVar6 = local_14c;
                  local_40 = extraout_r2_00;
                  local_38 = extraout_r3_09;
                }
                else {
                  if (local_80 == (int *******)&DAT_80000000) {
                    local_14c = (int *******)FUN_012cc2c0(1,&DAT_01c1aef4,&DAT_01d064b8);
                    goto LAB_00db6f08;
                  }
                  local_150 = local_7c;
                  local_13c = local_78;
                  FUN_00abbb3c(&local_80,&local_58);
                  if (local_80 == (int *******)0x80000002) {
                    local_14c = local_7c;
LAB_00db6efc:
                    FUN_019bb7e0(pppppppiVar11,pppppppiVar13);
                    goto LAB_00db6f08;
                  }
                  if (local_80 == (int *******)&DAT_80000001) {
                    local_14c = (int *******)FUN_012cc2c0(2,&DAT_01c1aef4,&DAT_01d064b8);
                    goto LAB_00db6efc;
                  }
                  local_144 = local_7c;
                  local_40 = local_80;
                  local_38 = local_78;
                }
              }
              *(char *)(ppppppiVar3 + 7) = *(char *)(ppppppiVar3 + 7) + '\x01';
              local_3c = local_144;
              local_44 = local_13c;
              local_58 = pppppppiVar5;
              local_54 = pppppppiVar6;
              pppppppiStack_50 = pppppppiVar9;
              local_4c = pppppppiVar11;
              local_48 = pppppppiVar13;
              local_5c = (int *******)FUN_014d9568(ppppppiVar3);
              local_80 = local_58;
              local_7c = local_54;
              local_78 = pppppppiStack_50;
              local_74 = local_4c;
              local_70 = local_48;
              local_6c = local_44;
              pppppppiStack_68 = local_40;
              pppppppiStack_64 = local_3c;
              pppppppiStack_60 = local_38;
              if (local_58 != (int *******)&DAT_80000000) goto LAB_00db7104;
              pppppppiVar5 = (int *******)&DAT_80000000;
              local_13c = local_54;
              if (local_5c != (int *******)0x0) {
                FUN_00f80260(&local_5c);
              }
              goto LAB_00db7144;
            }
            local_80 = (int *******)&DAT_00000018;
            pppppppiVar6 = (int *******)FUN_012c6b30(local_120,&local_80);
          }
          else {
            if (uVar10 != 0x7b) {
              local_13c = (int *******)FUN_012c7788(local_120,&uStack_25,&DAT_01c1ccb8);
              goto LAB_00db7488;
            }
            cVar1 = *(char *)(local_120 + 7);
            *(char *)(local_120 + 7) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              local_120[5] = (int *****)((int)pppppiVar8 + 1);
              local_2c = 1;
              local_13c = (int *******)&DAT_80000000;
              local_148 = (int *******)&DAT_80000001;
              local_30 = local_120;
              local_144 = (int *******)&DAT_80000000;
LAB_00db6c30:
              pppppppiVar13 = (int *******)0xdb6c3c;
              FUN_01278730(&local_80,&local_30);
              ppppppiVar2 = local_30;
              pppppppiVar6 = local_13c;
              if ((char)local_80 == '\x01') {
                pppppppiVar9 = extraout_r3;
                pppppppiVar5 = local_7c;
                pppppppiVar11 = extraout_r12;
                goto LAB_00db6f84;
              }
              if (local_80._1_1_ == '\x01') {
                local_30[2] = (int *****)0x0;
                local_30[5] = (int *****)((int)local_30[5] + 1);
                pppppppiVar13 = (int *******)0xdb6c7c;
                FUN_01968828(&local_80,local_30 + 3,local_30);
                pppppppiVar12 = local_78;
                pppppppiVar9 = extraout_r3_00;
                pppppppiVar5 = local_7c;
                pppppppiVar11 = extraout_r12_00;
                if (local_80 == (int *******)0x2) goto LAB_00db6f84;
                if (local_78 == (int *******)&DAT_00000008) {
                  iVar4 = thunk_FUN_01bed842(local_7c,&DAT_00571120,8);
                  if (iVar4 != 0) goto LAB_00db6d9c;
                  if (local_148 != (int *******)&DAT_80000001) {
                    local_58 = (int *******)&DAT_00571120;
LAB_00db7328:
                    local_54 = pppppppiVar12;
                    local_7c = (int *******)&DAT_0132b6a0;
                    local_80 = (int *******)&local_58;
                    pppppppiVar13 = (int *******)0xdb735c;
                    pppppppiVar5 = (int *******)FUN_019676ac(&DAT_005ab34f,&local_80);
                    pppppppiVar9 = extraout_r3_16;
                    pppppppiVar11 = extraout_r12_13;
                    goto LAB_00db6f84;
                  }
                  pppppppiVar13 = (int *******)0xdb6dec;
                  FUN_00abbc38(&local_80,ppppppiVar2);
                  local_148 = local_80;
                  pppppppiVar5 = local_7c;
                  if (local_80 == (int *******)&DAT_80000001) {
                    pppppppiVar12 = (int *******)&DAT_00000001;
                    pppppppiVar9 = extraout_r3_07;
                    pppppppiVar11 = extraout_r12_07;
                    goto LAB_00db6f9c;
                  }
                  local_154 = local_7c;
                  local_160 = local_78;
                  goto LAB_00db6c30;
                }
                if (local_78 == (int *******)&SUB_00000004) {
                  if (*local_7c != (int ******)0x72657375) goto LAB_00db6d9c;
                  if (local_13c != (int *******)&DAT_80000000) {
                    local_58 = (int *******)0x56e080;
                    goto LAB_00db7328;
                  }
                  pppppppiVar13 = (int *******)0xdb6d40;
                  pppppppiVar5 = (int *******)FUN_0167459c(ppppppiVar2);
                  pppppppiVar9 = extraout_r3_03;
                  pppppppiVar11 = extraout_r12_03;
                  if (pppppppiVar5 == (int *******)0x0) {
                    pppppppiVar13 = (int *******)0xdb6d5c;
                    FUN_00aeeebc(&local_80,ppppppiVar2);
                    pppppppiVar9 = extraout_r3_04;
                    pppppppiVar5 = local_7c;
                    pppppppiVar11 = extraout_r12_04;
                    if (local_80 != (int *******)&DAT_80000000) {
                      local_158 = local_78;
                      local_150 = local_7c;
                      local_13c = local_80;
                      goto LAB_00db6c30;
                    }
                  }
                  pppppppiVar12 = (int *******)&DAT_00000001;
                  goto LAB_00db7254;
                }
                if ((local_78 != (int *******)&DAT_00000003) ||
                   (iVar4 = thunk_FUN_01bed842(local_7c,"url",3), iVar4 != 0)) {
LAB_00db6d9c:
                  pppppppiVar13 = (int *******)0xdb6da4;
                  pppppppiVar5 = (int *******)FUN_0167459c(ppppppiVar2);
                  pppppppiVar9 = extraout_r3_05;
                  pppppppiVar11 = extraout_r12_05;
                  if (pppppppiVar5 != (int *******)0x0) goto LAB_00db6f84;
                  pppppppiVar13 = (int *******)0xdb6dc0;
                  pppppppiVar5 = (int *******)FUN_012c6c4c(ppppppiVar2);
                  pppppppiVar9 = extraout_r3_06;
                  pppppppiVar11 = extraout_r12_06;
                  if (pppppppiVar5 != (int *******)0x0) goto LAB_00db6f84;
                  goto LAB_00db6c30;
                }
                if (local_144 != (int *******)&DAT_80000000) {
                  local_58 = (int *******)0x50d5da;
                  goto LAB_00db7328;
                }
                pppppppiVar13 = (int *******)0xdb6cd8;
                pppppppiVar5 = (int *******)FUN_0167459c(ppppppiVar2);
                pppppppiVar9 = extraout_r3_01;
                pppppppiVar11 = extraout_r12_01;
                if (pppppppiVar5 == (int *******)0x0) {
                  pppppppiVar13 = (int *******)0xdb6cf4;
                  FUN_00aeeebc(&local_80,ppppppiVar2);
                  local_144 = local_80;
                  pppppppiVar9 = extraout_r3_02;
                  pppppppiVar5 = local_7c;
                  pppppppiVar11 = extraout_r12_02;
                  if (local_80 == (int *******)&DAT_80000000) goto LAB_00db6f78;
                  local_15c = local_78;
                  local_14c = local_7c;
                  goto LAB_00db6c30;
                }
              }
              else {
                if (local_144 != (int *******)&DAT_80000000) {
                  if (local_13c == (int *******)&DAT_80000000) {
                    local_54 = (int *******)&SUB_00000004;
                    local_58 = (int *******)0x56e080;
                    local_7c = (int *******)&LAB_018a13b8;
                    local_80 = (int *******)&local_58;
                    pppppppiVar5 = (int *******)FUN_019676ac(&DAT_0057cd64,&local_80);
                    pppppppiVar13 = (int *******)0xdb7250;
                    FUN_019bb7e0(local_144,local_14c);
                    pppppppiVar12 = (int *******)0x0;
                    pppppppiVar9 = extraout_r3_14;
                    pppppppiVar11 = extraout_r12_12;
LAB_00db7254:
                    pppppppiVar6 = (int *******)&DAT_80000000;
                    goto LAB_00db6f88;
                  }
                  if (local_148 == (int *******)&DAT_80000001) {
                    local_148 = (int *******)&DAT_80000000;
                    pppppppiVar6 = extraout_r1;
                  }
                  else {
                    pppppppiVar6 = local_160;
                    pppppppiVar5 = local_154;
                  }
                  local_58 = local_144;
                  local_54 = local_14c;
                  pppppppiStack_50 = local_15c;
                  local_48 = local_150;
                  local_44 = local_158;
                  goto LAB_00db6fd4;
                }
                local_54 = (int *******)&DAT_00000003;
                local_58 = (int *******)0x50d5da;
                local_7c = (int *******)&LAB_018a13b8;
                local_80 = (int *******)&local_58;
                pppppppiVar13 = (int *******)0xdb6f74;
                pppppppiVar5 = (int *******)FUN_019676ac(&DAT_0057cd64,&local_80);
                pppppppiVar9 = extraout_r3_10;
                pppppppiVar11 = extraout_r12_08;
              }
LAB_00db6f78:
              local_144 = (int *******)&DAT_80000000;
              goto LAB_00db6f84;
            }
            local_80 = (int *******)&DAT_00000018;
            pppppppiVar6 = (int *******)FUN_012c6b30(local_120,&local_80);
          }
        }
        else {
LAB_00db7364:
          local_80 = (int *******)&DAT_00000005;
          pppppppiVar6 = (int *******)FUN_012c6b30(local_120,&local_80);
        }
      }
      goto LAB_00db737c;
    }
    local_58 = local_118;
    local_54 = local_114;
    pppppppiStack_50 = local_110;
    goto LAB_00db7390;
  }
  goto LAB_00db7420;
LAB_00db6f84:
  pppppppiVar12 = (int *******)&DAT_00000001;
LAB_00db6f88:
  if (-0x7fffffff < (int)local_148) {
    pppppppiVar13 = (int *******)0xdb6f9c;
    FUN_019bb7e0(local_148,local_154);
    pppppppiVar9 = extraout_r3_11;
    pppppppiVar11 = extraout_r12_09;
  }
LAB_00db6f9c:
  local_148 = pppppppiVar9;
  if (pppppppiVar6 != (int *******)&DAT_80000000) {
    pppppppiVar13 = (int *******)0xdb6fb0;
    FUN_019bb7e0(pppppppiVar6,local_150);
    local_148 = extraout_r3_12;
    pppppppiVar11 = extraout_r12_10;
  }
  pppppppiVar6 = (int *******)(uint)(local_144 != (int *******)&DAT_80000000);
  if (((uint)pppppppiVar12 & (uint)pppppppiVar6) != 0) {
    pppppppiVar13 = (int *******)0xdb6fcc;
    FUN_019bb7e0(local_144,local_14c);
    pppppppiVar6 = extraout_r1_00;
    local_148 = extraout_r3_13;
    pppppppiVar11 = extraout_r12_11;
  }
  local_58 = (int *******)&DAT_80000000;
  local_54 = pppppppiVar5;
  pppppppiStack_50 = pppppppiVar12;
  local_48 = pppppppiVar11;
  local_44 = pppppppiVar13;
LAB_00db6fd4:
  *(char *)(ppppppiVar3 + 7) = *(char *)(ppppppiVar3 + 7) + '\x01';
  local_4c = local_13c;
  local_40 = local_148;
  local_3c = pppppppiVar5;
  local_38 = pppppppiVar6;
  local_5c = (int *******)FUN_012c7b64(ppppppiVar3);
  local_80 = local_58;
  local_7c = local_54;
  local_78 = pppppppiStack_50;
  local_74 = local_4c;
  local_70 = local_48;
  local_6c = local_44;
  pppppppiStack_68 = local_40;
  pppppppiStack_64 = local_3c;
  pppppppiStack_60 = local_38;
  if (local_58 == (int *******)&DAT_80000000) {
    local_13c = local_54;
    pppppppiVar5 = (int *******)&DAT_80000000;
    if (local_5c != (int *******)0x0) {
      FUN_00f80260(&local_5c);
    }
  }
  else {
LAB_00db7104:
    local_13c = local_5c;
    local_80 = local_58;
    local_7c = local_54;
    local_78 = pppppppiStack_50;
    local_74 = local_4c;
    local_70 = local_48;
    local_6c = local_44;
    pppppppiStack_68 = local_40;
    pppppppiStack_64 = local_3c;
    pppppppiStack_60 = local_38;
    if (local_5c == (int *******)0x0) {
      local_13c = local_54;
      local_a0 = pppppppiStack_50;
      pppppppiStack_9c = local_4c;
      pppppppiStack_98 = local_48;
      local_94 = local_44;
      pppppppiStack_90 = local_40;
      pppppppiStack_8c = local_3c;
      pppppppiStack_88 = local_38;
      pppppppiVar5 = local_58;
    }
    else {
      FUN_00fac7c4(&local_80);
      pppppppiVar5 = (int *******)&DAT_80000000;
    }
  }
LAB_00db7144:
  if (pppppppiVar5 == (int *******)&DAT_80000000) {
LAB_00db7488:
    pppppppiVar6 = (int *******)FUN_0127dee8(local_13c,ppppppiVar3);
    goto LAB_00db737c;
  }
  local_c0 = local_a0;
  pppppppiStack_bc = pppppppiStack_9c;
  pppppppiStack_b8 = pppppppiStack_98;
  local_b4 = local_94;
  pppppppiStack_b0 = pppppppiStack_90;
  pppppppiStack_ac = pppppppiStack_8c;
  pppppppiStack_a8 = pppppppiStack_88;
LAB_00db716c:
  pppppppiVar6 = local_110;
  local_108 = local_c0;
  pppppppiStack_104 = pppppppiStack_bc;
  pppppppiStack_100 = pppppppiStack_b8;
  local_fc = local_b4;
  pppppppiStack_f8 = pppppppiStack_b0;
  pppppppiStack_f4 = pppppppiStack_ac;
  pppppppiStack_f0 = pppppppiStack_a8;
  local_e4 = local_13c;
  local_e0 = local_c0;
  pppppppiStack_dc = pppppppiStack_bc;
  local_d8 = pppppppiStack_b8;
  local_d4 = local_b4;
  pppppppiStack_d0 = pppppppiStack_b0;
  pppppppiStack_cc = pppppppiStack_ac;
  pppppppiStack_c8 = pppppppiStack_a8;
  local_e8 = pppppppiVar5;
  if (local_110 == local_118) {
    FUN_00f9d74c(&local_118);
  }
  pppppppiVar5 = local_114 + (int)pppppppiVar6 * 9;
  *pppppppiVar5 = (int ******)local_e8;
  pppppppiVar5[1] = (int ******)local_e4;
  pppppppiVar5[2] = (int ******)local_e0;
  pppppppiVar5[3] = (int ******)pppppppiStack_dc;
  pppppppiVar5[4] = (int ******)local_d8;
  pppppppiVar5[5] = (int ******)local_d4;
  pppppppiVar5[6] = (int ******)pppppppiStack_d0;
  pppppppiVar5[7] = (int ******)pppppppiStack_cc;
  pppppppiVar5[8] = (int ******)pppppppiStack_c8;
  local_110 = (int *******)((int)pppppppiVar6 + 1);
  unaff_r4 = pppppppiStack_d0;
  pppppppiVar5 = pppppppiStack_cc;
  goto LAB_00db6b34;
LAB_00db7420:
  pppppppiVar6 = local_7c;
LAB_00db737c:
  local_58 = (int *******)&DAT_80000000;
  local_54 = pppppppiVar6;
  FUN_011d1500(&local_118);
LAB_00db7390:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  pppppppiVar6 = (int *******)FUN_014d9568(param_2);
  pppppppiVar5 = local_54;
  local_80 = local_58;
  local_7c = local_54;
  local_78 = pppppppiStack_50;
  local_74 = pppppppiVar6;
  if (local_58 == (int *******)&DAT_80000000) {
    if (pppppppiVar6 != (int *******)0x0) {
      FUN_00f80260(&local_74);
    }
  }
  else {
    if (pppppppiVar6 == (int *******)0x0) {
      *param_1 = (int ******)local_58;
      param_1[1] = (int ******)local_54;
      param_1[2] = (int ******)pppppppiStack_50;
      return;
    }
    FUN_00f85da0(&local_80);
    pppppppiVar5 = pppppppiVar6;
  }
LAB_00db7400:
  ppppppiVar3 = (int ******)FUN_0127dee8(pppppppiVar5,param_2);
LAB_00db740c:
  *param_1 = (int ******)0x80000000;
  param_1[1] = ppppppiVar3;
  return;
}

