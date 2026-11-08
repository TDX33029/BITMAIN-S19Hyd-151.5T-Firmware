// FUN_0153a0c0 @ 0153a0c0 size=2420 calls_out=15 calls_in=1
// strings: 

void FUN_0153a0c0(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  int iVar16;
  undefined1 *local_2a8 [3];
  undefined4 uStack_29c;
  undefined1 *local_298;
  undefined1 *local_294;
  undefined1 *local_290;
  undefined1 *local_28c;
  undefined4 local_288;
  undefined4 local_284;
  int iStack_280;
  undefined4 local_27c;
  uint local_278;
  undefined1 *local_270;
  int iStack_26c;
  undefined4 uStack_268;
  uint uStack_264;
  undefined1 *local_260;
  undefined1 *local_25c;
  undefined1 *local_258;
  undefined1 *local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined3 uStack_248;
  undefined1 *local_240;
  undefined1 *local_23c;
  undefined1 *local_238;
  undefined1 *local_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined3 uStack_228;
  undefined1 *local_220;
  int iStack_21c;
  undefined4 uStack_218;
  uint uStack_214;
  undefined1 *local_210;
  undefined1 *local_20c;
  undefined1 *local_208;
  undefined1 *local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined3 uStack_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e4;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1dc;
  undefined4 uStack_1d8;
  undefined1 *local_1d0;
  int local_1cc;
  undefined1 local_1c8;
  undefined1 uStack_1c7;
  undefined2 uStack_1c6;
  undefined1 uStack_1c4;
  undefined1 uStack_1c3;
  undefined2 uStack_1c2;
  undefined1 *local_1c0;
  undefined1 *local_1bc;
  undefined1 *local_1b8;
  undefined1 *local_1b4;
  undefined1 *local_1b0;
  undefined1 *local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  uint local_1a0;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  undefined1 *local_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  int local_70;
  undefined4 local_6c;
  uint uStack_68;
  int local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x80000007)) {
    FUN_0151eddc(param_2 + 0x2e,param_4);
    if (param_4[4] == 0x80000000) {
      local_94 = param_4[6];
      local_90 = param_4[7];
      local_8c = 0;
      if (*(char *)(param_2[0x3b] + 0x30) == '\0') {
        FUN_0150dac0(&local_50,&local_94);
        if (local_50 != &DAT_80000000) {
          local_60 = iStack_38;
          uStack_5c = uStack_34;
          uStack_58 = uStack_30;
          puVar5 = local_4c;
          local_74 = local_3c;
          puVar12 = local_44;
          puVar14 = local_40;
          puVar10 = local_50;
          local_80 = local_48;
          goto LAB_0153a218;
        }
      }
      else {
        FUN_0150d960(&local_50,&local_94);
        if (local_50 != &DAT_80000000) {
          puVar5 = local_50;
          local_74 = local_40;
          puVar12 = local_48;
          puVar14 = local_44;
          puVar10 = &DAT_80000000;
          local_80 = local_4c;
LAB_0153a218:
          local_70 = local_60;
          local_6c = uStack_5c;
          uStack_68 = uStack_58;
          local_88 = puVar10;
          local_84 = puVar5;
          local_7c = puVar12;
          local_78 = puVar14;
          FUN_0152a528(&local_50,&local_94);
          puVar3 = local_4c;
          puVar2 = local_50;
          if ((char)local_50 == '\x18') {
            FUN_01540ae4(&local_50,&local_94);
            puVar4 = local_48;
            puVar1 = (undefined1 *)0x153a280;
            if (local_50 != &DAT_00000001) {
              puVar1 = local_4c;
            }
            if (local_50 == &DAT_00000001 || puVar1 == &DAT_80000000) goto LAB_0153a294;
            uStack_1c6 = local_44._2_2_;
            uStack_1c2 = SUB42(puVar3,0);
            uStack_1c4 = (undefined1)((uint)puVar2 >> 0x10);
            uStack_1c3 = (undefined1)((uint)puVar2 >> 0x18);
            local_1c8 = SUB41(local_44,0);
            uStack_1c7 = (undefined1)((uint)local_44 >> 8);
            local_1cc = (int)local_48;
            local_1c0 = local_88;
            local_1bc = local_84;
            local_1b8 = local_80;
            local_1b4 = local_7c;
            local_1b0 = local_78;
            local_1ac = local_74;
            local_1a8 = local_70;
            local_1a4 = local_6c;
            local_1a0 = uStack_68;
            local_1d0 = puVar1;
            if (local_90 <= local_8c) {
              local_250 = CONCAT13(uStack_1c4,(int3)((uint)local_44 >> 8));
              local_204 = local_78;
              local_1fc = CONCAT13((char)local_88,CONCAT21(uStack_1c2,uStack_1c3));
              uStack_1f8 = (undefined3)((uint)local_88 >> 8);
              local_210 = local_84;
              local_208 = local_7c;
              local_20c = local_80;
              local_220 = local_74;
              iStack_21c = local_70;
              uStack_218 = local_6c;
              uStack_214 = uStack_68;
              local_240 = local_84;
              uStack_228 = uStack_1f8;
              uStack_22c = local_1fc;
              local_23c = local_80;
              local_238 = local_7c;
              local_234 = local_78;
              local_270 = local_74;
              iStack_26c = local_70;
              uStack_268 = local_6c;
              uStack_264 = uStack_68;
              uStack_248 = uStack_1f8;
              local_24c = local_1fc;
              local_254 = local_78;
              local_258 = local_7c;
              local_25c = local_80;
              local_260 = local_84;
              local_298 = local_88;
              uStack_29c = CONCAT31(CONCAT21(uStack_1c2,uStack_1c3),uStack_1c4);
              local_2a8[2] = local_44;
              local_294 = local_84;
              local_290 = local_80;
              local_28c = local_7c;
              local_288 = local_78;
              local_284 = local_74;
              puVar5 = local_284;
              iStack_280 = local_70;
              local_27c = local_6c;
              local_278 = uStack_68;
              local_48 = (undefined1 *)0x0;
              local_50 = (undefined1 *)0x0;
              local_2a8[1] = puVar4;
              local_4c = &DAT_00000001;
              local_2a8[0] = puVar1;
              local_230 = local_250;
              local_200 = local_250;
              if (local_88 == &DAT_80000000) {
                local_284._1_1_ = (undefined1)((uint)local_74 >> 8);
                uVar15 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch((uint)local_74 & 0xff) {
                case 1:
                  uVar15 = 2;
                  break;
                case 2:
                  uVar15 = 3;
                  break;
                case 3:
                  uVar15 = local_284._1_1_;
                }
                local_284 = puVar5;
                FUN_006029c0(&local_50);
                *local_4c = uVar15;
                local_48 = (undefined1 *)0x1;
                    /* WARNING: Could not recover jumptable at 0x0153a78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_0153a790 + *(int *)(&DAT_0153a790 + ((uint)local_288 & 0xffff) * 4))
                )(local_4c,local_288._2_2_);
                return;
              }
              FUN_0154e5f8(&local_50,0,2,1,1);
              iVar16 = (int)local_48 + 2;
              *(ushort *)(local_4c + (int)local_48) =
                   (ushort)(((uint)local_80 & 0xff) << 8) | (ushort)((uint)local_80 >> 8) & 0xff;
              local_48 = (undefined1 *)iVar16;
              if (local_50 + -iVar16 < local_80) {
                FUN_0154e5f8(&local_50,iVar16,local_80,1,1);
              }
              puVar2 = local_48;
              puVar10 = local_4c;
              puVar14 = local_50;
              FUN_016dd1aa(local_4c + (int)local_48,local_84,local_80);
              puVar12 = local_284;
              puVar5 = local_288;
              local_48 = local_80 + (int)puVar2;
              if ((uint)((int)puVar14 - (int)local_48) < 2) {
                FUN_0154e5f8(&local_50,local_48,2,1,1);
                puVar10 = local_4c;
                puVar14 = local_50;
              }
              puVar8 = (ushort *)(puVar10 + (int)local_48);
              local_48 = local_48 + 2;
              *puVar8 = (ushort)((uint)((int)puVar12 << 0x18) >> 0x10) |
                        (ushort)((uint)puVar12 >> 8) & 0xff;
              if (puVar14 + -(int)local_48 < puVar12) {
                FUN_0154e5f8(&local_50,local_48,puVar12,1,1);
                puVar10 = local_4c;
                puVar14 = local_50;
              }
              puVar2 = local_48;
              FUN_016dd1aa(puVar10 + (int)local_48,puVar5,puVar12);
              uVar6 = local_278;
              uVar7 = local_27c;
              local_48 = puVar2 + (int)puVar12;
              if ((uint)((int)puVar14 - (int)local_48) < 2) {
                FUN_0154e5f8(&local_50,local_48,2,1,1);
                puVar10 = local_4c;
                puVar14 = local_50;
              }
              else {
              }
              puVar8 = (ushort *)(puVar10 + (int)local_48);
              local_48 = local_48 + 2;
              *puVar8 = (ushort)((uVar6 << 0x18) >> 0x10) | (ushort)(uVar6 >> 8) & 0xff;
              if ((uint)((int)puVar14 - (int)local_48) < uVar6) {
                FUN_0154e5f8(&local_50,local_48,uVar6,1,1);
                puVar10 = local_4c;
              }
              puVar5 = local_48;
              FUN_016dd1aa(puVar10 + (int)local_48,uVar7,uVar6);
              local_1e8 = puVar5 + uVar6;
              local_1e4 = local_2a8[0];
              puStack_1e0 = local_2a8[1];
              puStack_1dc = local_2a8[2];
              uStack_1d8 = uStack_29c;
              uVar7 = param_2[0x3a];
              local_1f0 = local_50;
              local_1ec = local_4c;
              local_48 = local_1e8;
              FUN_016dd1aa(&local_1b8,param_2 + 6,0x60);
              local_c4 = param_2[0x3c];
              uStack_c0 = param_2[0x3d];
              uStack_bc = param_2[0x3e];
              uStack_b8 = param_2[0x3f];
              local_b4 = param_2[0x40];
              uStack_b0 = param_2[0x41];
              uStack_ac = param_2[0x42];
              uStack_a8 = param_2[0x43];
              uStack_a4 = param_2[0x44];
              local_e0 = param_2[0x35];
              uStack_dc = param_2[0x36];
              uStack_d8 = param_2[0x37];
              uStack_d4 = param_2[0x38];
              uStack_d0 = param_2[0x39];
              local_158 = param_2[0x1e];
              uStack_154 = param_2[0x1f];
              uStack_150 = param_2[0x20];
              uStack_14c = param_2[0x21];
              uStack_148 = param_2[0x22];
              local_144 = param_2[0x23];
              uStack_140 = param_2[0x24];
              uStack_13c = param_2[0x25];
              uStack_138 = param_2[0x26];
              uStack_134 = param_2[0x27];
              local_130 = param_2[0x28];
              uStack_12c = param_2[0x29];
              uStack_128 = param_2[0x2a];
              uStack_124 = param_2[0x2b];
              uStack_120 = param_2[0x2c];
              uStack_11c = param_2[0x2d];
              local_a0 = *(undefined1 *)(param_2 + 0x45);
              local_fc = param_2[0x2e];
              uStack_f8 = param_2[0x2f];
              uStack_f4 = param_2[0x30];
              local_f0 = param_2[0x31];
              uStack_ec = param_2[0x32];
              uStack_e8 = param_2[0x33];
              uStack_e4 = param_2[0x34];
              local_c8 = param_2[0x3b];
              local_1d0 = (undefined1 *)*param_2;
              local_1cc = param_2[1];
              uVar11 = param_2[2];
              uVar13 = param_2[3];
              local_1c0 = (undefined1 *)param_2[4];
              local_1bc = (undefined1 *)param_2[5];
              local_1c8 = (undefined1)uVar11;
              uStack_1c7 = (undefined1)((uint)uVar11 >> 8);
              uStack_1c6 = (undefined2)((uint)uVar11 >> 0x10);
              uStack_1c4 = (undefined1)uVar13;
              uStack_1c3 = (undefined1)((uint)uVar13 >> 8);
              uStack_1c2 = (undefined2)((uint)uVar13 >> 0x10);
              local_9f = *(undefined1 *)((int)param_2 + 0x115);
              local_118 = local_1f0;
              puStack_114 = local_1ec;
              puStack_110 = local_1e8;
              local_10c = local_1e4;
              puStack_108 = puStack_1e0;
              puStack_104 = puStack_1dc;
              uStack_100 = uStack_1d8;
              local_cc = uVar7;
              iVar16 = thunk_FUN_016d4a50(0x138);
              if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,0x138);
              }
              FUN_016dd1aa(iVar16,&local_1d0,0x138);
              *param_1 = 0x80000029;
              param_1[1] = iVar16;
              param_1[2] = &PTR_FUN_018a7b5c;
              if (local_298 == &DAT_80000000) {
                iVar16 = 0x14;
              }
              else {
                if (local_298 != (undefined1 *)0x0) {
                  thunk_FUN_016d3fb4(local_294);
                }
                iVar16 = 0x28;
                if (local_28c != (undefined1 *)0x0) {
                  thunk_FUN_016d3fb4(local_288);
                }
              }
              if (*(int *)((int)local_2a8 + iVar16) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)((int)local_2a8 + iVar16 + 4));
              }
              iVar16 = 1;
              if (0x80000000 < *param_4) {
                iVar16 = *param_4 + 0x7fffffff;
              }
              switch(iVar16) {
              case 0:
              case 3:
                goto switchD_0153aa54_caseD_0;
              case 1:
                FUN_015396bc(param_4 + 3);
                uVar6 = *param_4;
                break;
              default:
                param_4 = param_4 + 1;
                uVar6 = *param_4;
              }
              if (uVar6 != 0x80000000 && uVar6 != 0) {
                thunk_FUN_016d3fb4(param_4[1]);
                thunk_FUN_016d3fb4(param_2);
                return;
              }
              goto switchD_0153aa54_caseD_0;
            }
            if (local_88 == &DAT_80000000) {
              iVar16 = 0x14;
            }
            else {
              if (local_88 != (undefined1 *)0x0) {
                thunk_FUN_016d3fb4(local_84);
              }
              iVar16 = 0x28;
              if (local_1b4 != (undefined1 *)0x0) {
                thunk_FUN_016d3fb4(local_1b0);
              }
            }
            if (*(int *)((int)&local_1d0 + iVar16) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)((int)&local_1cc + iVar16));
            }
            if (puVar1 == (undefined1 *)0x0) goto LAB_0153a2ec;
          }
          else {
LAB_0153a294:
            if (puVar10 == &DAT_80000000) {
              piVar9 = (int *)((uint)&local_88 | 4);
            }
            else {
              if (puVar10 != (undefined1 *)0x0) {
                thunk_FUN_016d3fb4(puVar5);
              }
              piVar9 = &local_70;
              if (puVar12 != (undefined1 *)0x0) {
                thunk_FUN_016d3fb4(puVar14);
              }
            }
            if (*piVar9 == 0) goto LAB_0153a2ec;
            local_1cc = piVar9[1];
          }
          thunk_FUN_016d3fb4(local_1cc);
        }
      }
    }
LAB_0153a2ec:
    iVar16 = *param_3;
    local_1cc = 0x100001;
    local_1d0 = (undefined1 *)0x80000001;
    local_158 = CONCAT22(local_158._2_2_,4);
    FUN_01525ed4(iVar16,&local_1d0,*(char *)(iVar16 + 0x31) == '\x02');
    *(undefined1 *)(iVar16 + 0x255) = 1;
    local_25c = local_23c;
    local_258 = local_238;
    local_254 = local_234;
    local_24c = uStack_22c;
    uStack_248 = uStack_228;
    *(undefined1 *)(param_1 + 1) = 0xd;
    local_250 = local_230;
    local_260 = local_240;
    *param_1 = 0x80000016;
    *(undefined4 *)((int)param_1 + 9) = uStack_22c;
    *(undefined4 *)((int)param_1 + 5) = local_230;
    param_1[3] = CONCAT31(uStack_228,uStack_22c._3_1_);
    param_1[4] = local_240;
    param_1[5] = local_23c;
    param_1[6] = local_238;
    param_1[7] = local_234;
  }
  else {
    FUN_015622b4(&local_1d0,param_4,&DAT_0040c784,1,&DAT_0040bfb1,1);
    param_1[2] = CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8));
    param_1[3] = CONCAT22(uStack_1c2,CONCAT11(uStack_1c3,uStack_1c4));
    param_1[4] = local_1c0;
    param_1[5] = local_1bc;
    param_1[6] = local_1b8;
    param_1[7] = local_1b4;
    *param_1 = local_1d0;
    param_1[1] = local_1cc;
  }
  iVar16 = 1;
  if (0x80000000 < *param_4) {
    iVar16 = *param_4 + 0x7fffffff;
  }
  switch(iVar16) {
  case 0:
  case 3:
    goto switchD_0153a3b0_caseD_0;
  case 1:
    FUN_015396bc(param_4 + 3);
    uVar6 = *param_4;
    break;
  default:
    param_4 = param_4 + 1;
    uVar6 = *param_4;
  }
  if (uVar6 != 0x80000000 && uVar6 != 0) {
    thunk_FUN_016d3fb4(param_4[1]);
  }
switchD_0153a3b0_caseD_0:
  FUN_01539efc(param_2);
switchD_0153aa54_caseD_0:
  thunk_FUN_016d3fb4(param_2);
  return;
}

