// FUN_0094d594 @ 0094d594 size=5064 calls_out=21 calls_in=1
// strings: user-- | enabled | user-- | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094d594(uint *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  int iVar30;
  undefined1 uVar31;
  int iVar32;
  int *piVar33;
  byte bVar34;
  int iVar35;
  uint *puVar36;
  uint uVar37;
  uint local_228;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_200;
  uint local_1f8;
  uint local_1e0;
  uint local_1d0;
  uint local_1cc;
  uint local_1b8;
  uint local_1b0;
  uint *local_1a0;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint uStack_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint *local_fc;
  int *local_f8;
  int local_f4;
  int *local_f0;
  int *local_ec;
  uint *local_e8;
  int *local_e4;
  undefined4 local_e0;
  int local_d8 [4];
  int *local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint *local_b8;
  uint *local_b4;
  uint local_b0;
  uint *local_ac;
  int local_a8;
  int local_a0;
  int local_9c;
  int iStack_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  uint local_78;
  uint local_74;
  uint *local_70;
  int *local_6c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  
  if (*param_2 != -0x7fffffec) {
    FUN_008f73e8(&local_58,param_2,&uStack_25,&DAT_01867c48);
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = local_4c;
    param_1[4] = local_48;
    param_1[5] = uStack_44;
    param_1[6] = local_40;
    param_1[7] = uStack_3c;
    param_1[8] = local_38;
    param_1[9] = uStack_34;
    param_1[10] = uStack_30;
    param_1[0xb] = uStack_2c;
    return;
  }
  local_228 = param_2[3];
  puVar5 = (uint *)param_2[2];
  iVar12 = param_2[1];
  puVar36 = puVar5 + local_228 * 4;
  uVar21 = 0x6666;
  if (local_228 < 0x6666) {
    uVar21 = local_228;
  }
  local_18c = 4;
  local_194 = 0;
  local_190 = 0;
  if (local_228 != 0) {
    local_18c = thunk_FUN_016d4a50(uVar21 * 0x28);
    local_190 = uVar21;
    if (local_18c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar21 * 0x28);
    }
  }
  local_1d0 = local_228 * 0x10;
  iVar32 = (int)&local_54 + 1;
  piVar13 = (int *)((uint)&local_130 | 4);
  uVar14 = (uint)&local_130 | 5;
  piVar22 = (int *)((uint)local_d8 | 4);
  puVar15 = (undefined4 *)((uint)&local_f0 | 4);
  puVar16 = (uint *)((uint)&local_78 | 4);
  puVar23 = (undefined4 *)((uint)&local_c8 | 4);
  puVar17 = (uint *)((uint)&local_100 | 4);
  puVar18 = (uint *)((uint)&local_158 | 4);
  local_188 = 0;
  puVar11 = puVar5;
  local_1a0 = puVar5;
LAB_0094d740:
  iVar35 = local_f4;
  piVar2 = local_f8;
  puVar6 = local_fc;
  local_1d0 = local_1d0 - 0x10;
  puVar11 = puVar11 + 4;
  if (local_1a0 == puVar36) {
    puVar10 = puVar36;
  }
  else {
    puVar10 = local_1a0 + 4;
    uVar37 = *local_1a0;
    if (uVar37 != 0x80000015) {
      uVar24 = local_1a0[2];
      uVar27 = local_1a0[3];
      local_194 = local_194 + 1;
      *puVar17 = local_1a0[1];
      puVar17[1] = uVar24;
      puVar17[2] = uVar27;
      uVar24 = 0x15;
      if ((int)uVar37 < 0) {
        uVar24 = uVar37 ^ 0x80000000;
      }
      local_100 = uVar37;
      if (uVar24 == 0x14) {
        local_e0 = 0;
        piVar7 = local_f8 + local_f4 * 4;
        local_e8 = local_fc;
        local_ec = local_f8;
        local_f0 = local_f8;
        local_e4 = piVar7;
        if (local_f4 != 0) {
          piVar33 = local_f8 + 4;
          iVar8 = *local_f8;
          local_ec = piVar33;
          if (iVar8 == -0x7fffffeb) goto LAB_0094dcc4;
          iVar26 = local_f8[2];
          iVar30 = local_f8[3];
          *piVar22 = local_f8[1];
          piVar22[1] = iVar26;
          piVar22[2] = iVar30;
          local_e0 = 1;
          local_d8[0] = iVar8;
          FUN_0093ff14(&local_58,local_d8);
          uVar21 = local_58;
          uVar31 = (undefined1)local_54;
          if (local_58 != 2) {
            FUN_016dd1aa(uVar14,iVar32,0x2b);
            local_12c = CONCAT31(local_12c._1_3_,uVar31);
            local_130 = uVar21;
            goto LAB_0094de64;
          }
          iVar8 = 1;
          if (iVar35 == 1) {
LAB_0094ddf8:
            FUN_00f3cf48(&local_130,1,&DAT_01867d18,&DAT_018ab990);
            goto LAB_0094dce4;
          }
          iVar26 = piVar2[4];
          piVar33 = piVar2 + 8;
          local_ec = piVar33;
          if (iVar26 == -0x7fffffeb) goto LAB_0094ddf8;
          iVar8 = piVar2[6];
          iVar30 = piVar2[7];
          *piVar22 = piVar2[5];
          piVar22[1] = iVar8;
          piVar22[2] = iVar30;
          local_e0 = 2;
          local_d8[0] = iVar26;
          FUN_0094ad08(&local_58,local_d8);
          uVar27 = local_4c;
          uVar24 = local_50;
          uVar21 = local_54;
          if (local_58 != 2) {
            local_120 = local_48;
            local_11c = uStack_44;
            local_118 = local_40;
            local_114 = uStack_3c;
            local_110 = local_38;
            uStack_10c = uStack_34;
            local_108 = uStack_30;
            local_104 = uStack_2c;
            local_12c = local_54;
            local_128 = local_50;
            local_124 = local_4c;
            local_130 = local_58;
            goto LAB_0094de64;
          }
          if (local_54 == 0x80000000) {
            iVar8 = 2;
            goto LAB_0094ddf8;
          }
          iVar8 = 2;
          if (iVar35 == 2) {
LAB_0094e0c0:
            FUN_00f3cf48(&local_58,2,&DAT_01867d18,&DAT_018ab990);
            local_130 = local_58;
            local_12c = local_54;
            local_128 = local_50;
            local_124 = local_4c;
            local_120 = local_48;
            local_11c = uStack_44;
            local_118 = local_40;
            local_114 = uStack_3c;
            local_110 = local_38;
            uStack_10c = uStack_34;
            local_108 = uStack_30;
            local_104 = uStack_2c;
LAB_0094e0fc:
            if (uVar21 != 0) {
              thunk_FUN_016d3fb4(uVar24);
            }
            goto LAB_0094dce4;
          }
          iVar26 = piVar2[8];
          piVar33 = piVar2 + 0xc;
          local_ec = piVar33;
          if (iVar26 == -0x7fffffeb) goto LAB_0094e0c0;
          iVar8 = piVar2[10];
          iVar30 = piVar2[0xb];
          *piVar22 = piVar2[9];
          piVar22[1] = iVar8;
          piVar22[2] = iVar30;
          local_e0 = 3;
          local_d8[0] = iVar26;
          FUN_0094ad08(&local_58,local_d8);
          uVar4 = local_4c;
          uVar28 = local_50;
          uVar20 = local_54;
          if (local_58 != 2) {
            iVar8 = 3;
            local_130 = local_58;
            local_12c = local_54;
            local_128 = local_50;
            local_124 = local_4c;
            local_120 = local_48;
            local_11c = uStack_44;
            local_118 = local_40;
            local_114 = uStack_3c;
            local_110 = local_38;
            uStack_10c = uStack_34;
            local_108 = uStack_30;
            local_104 = uStack_2c;
            goto LAB_0094e0fc;
          }
          if (local_54 == 0x80000000) {
            iVar8 = 3;
            goto LAB_0094e0c0;
          }
          iVar8 = 3;
          if (iVar35 == 3) {
LAB_0094e464:
            FUN_00f3cf48(&local_58,3,&DAT_01867d18,&DAT_018ab990);
            local_130 = local_58;
            local_12c = local_54;
            local_128 = local_50;
            local_124 = local_4c;
            local_120 = local_48;
            local_11c = uStack_44;
            local_118 = local_40;
            local_114 = uStack_3c;
            local_110 = local_38;
            uStack_10c = uStack_34;
            local_108 = uStack_30;
            local_104 = uStack_2c;
            if (uVar20 != 0) {
LAB_0094e4ac:
              local_130 = local_58;
              local_12c = local_54;
              local_128 = local_50;
              local_124 = local_4c;
              local_120 = local_48;
              local_11c = uStack_44;
              local_118 = local_40;
              local_114 = uStack_3c;
              local_110 = local_38;
              uStack_10c = uStack_34;
              local_108 = uStack_30;
              local_104 = uStack_2c;
              thunk_FUN_016d3fb4(uVar28);
            }
            goto LAB_0094e0fc;
          }
          iVar35 = piVar2[0xc];
          piVar33 = piVar2 + 0x10;
          local_ec = piVar33;
          if (iVar35 == -0x7fffffeb) goto LAB_0094e464;
          iVar8 = piVar2[0xe];
          iVar26 = piVar2[0xf];
          *piVar22 = piVar2[0xd];
          piVar22[1] = iVar8;
          piVar22[2] = iVar26;
          local_e0 = 4;
          local_d8[0] = iVar35;
          FUN_009415d0(&local_58,local_d8);
          if (local_58 != 2) {
            iVar8 = 4;
            local_120 = local_48;
            local_11c = uStack_44;
            local_118 = local_40;
            local_114 = uStack_3c;
            local_110 = local_38;
            uStack_10c = uStack_34;
            local_108 = uStack_30;
            local_104 = uStack_2c;
            local_12c = local_54;
            local_128 = local_50;
            local_124 = local_4c;
            local_130 = local_58;
            if (uVar20 == 0) goto LAB_0094e0fc;
            goto LAB_0094e4ac;
          }
          if (local_54 == 0x80000001) {
            iVar8 = 4;
            goto LAB_0094e464;
          }
          iVar8 = 4;
          local_114 = local_54;
          local_110 = local_50;
          uStack_10c = local_4c;
          local_11c = uVar28;
          local_120 = uVar20;
          local_124 = uVar27;
          local_128 = uVar24;
          local_12c = uVar21;
          local_118 = uVar4;
          local_108 = CONCAT31(local_108._1_3_,uVar31);
          local_130 = 2;
LAB_0094dcf0:
          local_a0 = *piVar13;
          local_9c = piVar13[1];
          iStack_98 = piVar13[2];
          local_94 = piVar13[3];
          local_90 = piVar13[4];
          local_8c = piVar13[5];
          local_88 = piVar13[6];
          local_84 = piVar13[7];
          iStack_80 = piVar13[8];
          iStack_7c = piVar13[9];
          iVar35 = ((uint)((int)piVar7 - (int)piVar33) >> 4) + 1;
          piVar9 = piVar33;
          while (iVar35 = iVar35 + -1, iVar35 != 0) {
            FUN_008f7448(piVar9);
            piVar9 = piVar9 + 4;
          }
          if (puVar6 != (uint *)0x0) {
            thunk_FUN_016d3fb4(piVar2);
          }
          if (piVar7 == piVar33) {
LAB_0094dd54:
            *piVar13 = local_a0;
            piVar13[1] = local_9c;
            piVar13[2] = iStack_98;
            piVar13[3] = local_94;
            piVar13[4] = local_90;
            piVar13[5] = local_8c;
            piVar13[6] = local_88;
            piVar13[7] = local_84;
            piVar13[8] = iStack_80;
            piVar13[9] = iStack_7c;
            local_130 = 2;
          }
          else {
            local_d8[0] = iVar8;
            FUN_00f3cf48(&local_58,((uint)((int)piVar7 - (int)piVar33) >> 4) + iVar8,local_d8,
                         &DAT_01887234);
            if (local_58 == 2) goto LAB_0094dd54;
            local_130 = local_58;
            local_12c = local_54;
            local_128 = local_50;
            local_124 = local_4c;
            local_120 = local_48;
            local_11c = uStack_44;
            local_118 = local_40;
            local_114 = uStack_3c;
            local_110 = local_38;
            uStack_10c = uStack_34;
            local_108 = uStack_30;
            local_104 = uStack_2c;
            FUN_008f82d4(&local_a0);
          }
          goto joined_r0x0094dd80;
        }
LAB_0094dcc4:
        piVar33 = local_ec;
        iVar8 = 0;
        FUN_00f3cf48(&local_130,0,&DAT_01867d18,&DAT_018ab990);
LAB_0094dce4:
        if (local_130 == 2) goto LAB_0094dcf0;
LAB_0094de64:
        iVar35 = ((uint)((int)piVar7 - (int)piVar33) >> 4) + 1;
        while (iVar35 = iVar35 + -1, iVar35 != 0) {
          FUN_008f7448(piVar33);
          piVar33 = piVar33 + 4;
        }
        if (puVar6 != (uint *)0x0) {
          thunk_FUN_016d3fb4(piVar2);
          goto joined_r0x0094dd80;
        }
        goto LAB_0094e298;
      }
      if (uVar24 == 0x15) {
        local_a8 = 0;
        local_c8 = (int *)0x80000015;
        puVar6 = local_fc + (int)local_f8 * 8;
        local_b4 = local_fc;
        local_b8 = local_fc;
        local_b0 = uVar37;
        local_ac = puVar6;
        if (local_f8 != (int *)0x0) {
          local_1e0 = 3;
          local_1b0 = 0x80000000;
          local_1cc = 0x80000001;
          iVar35 = 0;
          local_1b8 = 0x80000000;
          iVar8 = 1;
          puVar1 = local_fc;
LAB_0094d83c:
          iVar26 = iVar8;
          puVar3 = local_70;
          uVar24 = local_74;
          puVar19 = puVar1 + 8;
          uVar27 = *puVar1;
          if (uVar27 == 0x80000015) goto LAB_0094deb8;
          uVar20 = puVar1[2];
          uVar28 = puVar1[3];
          local_c8 = (int *)puVar1[4];
          *puVar16 = puVar1[1];
          puVar16[1] = uVar20;
          puVar16[2] = uVar28;
          uVar20 = 0x15;
          if ((int)uVar27 < 0) {
            uVar20 = uVar27 ^ 0x80000000;
          }
          local_c4 = puVar1[5];
          local_c0 = puVar1[6];
          local_bc = puVar1[7];
          local_78 = uVar27;
          switch(uVar20) {
          case 1:
            switch((uint *)(local_74 & 0xff)) {
            case (uint *)0x0:
              uVar31 = 0;
              break;
            case (uint *)0x1:
              uVar31 = 1;
              break;
            case (uint *)0x2:
              uVar31 = 2;
              break;
            case (uint *)0x3:
              uVar31 = 3;
              break;
            default:
              local_e4 = (int *)0x0;
              local_f0 = (int *)CONCAT31(local_f0._1_3_,1);
              local_e8 = (uint *)(local_74 & 0xff);
              FUN_00924358(&local_58,&local_f0,&DAT_018679f0,&DAT_018ab990);
              goto LAB_0094da08;
            }
            local_58 = 2;
            local_54 = CONCAT31(local_54._1_3_,uVar31);
            break;
          default:
            FUN_008f73e8(&local_58,&local_78,&uStack_25,&DAT_018671b8);
            goto LAB_0094da10;
          case 4:
            if ((uint)-(int)local_6c < (uint)(local_70 < &DAT_00000004)) {
                    /* WARNING: Could not recover jumptable at 0x0094d984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_0094d988 + *(int *)(&DAT_0094d988 + (int)local_70 * 4)))();
              return;
            }
            local_e8 = local_70;
            local_e4 = local_6c;
            local_f0 = (int *)CONCAT31(local_f0._1_3_,1);
            FUN_00924358(&local_58,&local_f0,&DAT_018679f0,&DAT_018ab990);
            break;
          case 0xc:
            FUN_0090f7cc(&local_58,local_70,local_6c);
            goto joined_r0x0094d95c;
          case 0xd:
            FUN_0090f7cc(&local_58);
            break;
          case 0xe:
            FUN_008fbe64(&local_58,local_70,local_6c);
joined_r0x0094d95c:
            if (uVar24 != 0) {
              thunk_FUN_016d3fb4(puVar3);
            }
            goto LAB_0094da10;
          case 0xf:
            FUN_008fbe64(&local_58);
          }
LAB_0094da08:
          FUN_008f7448(&local_78);
LAB_0094da10:
          uVar24 = local_58;
          piVar2 = local_c8;
          uVar31 = (undefined1)local_54;
          if (local_58 == 2) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(local_54 & 0xff) {
            case 0:
              if (local_1e0 == 3) {
                local_c8 = (int *)0x80000015;
                if (piVar2 == (int *)0x80000015) {
LAB_0094e8f0:
                  local_c8 = (int *)0x80000015;
                  local_b4 = puVar19;
                  local_a8 = iVar26;
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                               ,0x2c,&DAT_01887244);
                }
                local_f0 = piVar2;
                uVar25 = puVar23[1];
                uVar29 = puVar23[2];
                *puVar15 = *puVar23;
                puVar15[1] = uVar25;
                puVar15[2] = uVar29;
                FUN_0093ff14(&local_58,&local_f0);
                uVar24 = local_58;
                uVar31 = (undefined1)local_54;
                local_1e0 = local_54 & 0xff;
                if (local_58 == 2) goto LAB_0094d81c;
                local_b4 = puVar19;
                local_a8 = iVar26;
                FUN_016dd1aa(uVar14,iVar32,0x2b);
                local_12c = CONCAT31(local_12c._1_3_,uVar31);
                local_130 = uVar24;
                goto LAB_0094de38;
              }
              local_b4 = puVar19;
              local_a8 = iVar26;
              FUN_009244cc(&local_58,"enabled",7);
              break;
            case 1:
              if (local_1b8 != 0x80000000) {
                local_b4 = puVar19;
                local_a8 = iVar26;
                FUN_009244cc(&local_58,"url",3);
                break;
              }
              local_c8 = (int *)0x80000015;
              if (piVar2 == (int *)0x80000015) goto LAB_0094e8f0;
              local_f0 = piVar2;
              uVar25 = puVar23[1];
              uVar29 = puVar23[2];
              *puVar15 = *puVar23;
              puVar15[1] = uVar25;
              puVar15[2] = uVar29;
              FUN_0094ad08(&local_58,&local_f0);
              local_1b8 = local_54;
              if (local_58 != 2) goto LAB_0094dfcc;
              local_1f8 = local_50;
              uVar21 = local_4c;
LAB_0094d81c:
              iVar35 = iVar35 + 1;
              iVar8 = iVar26 + 1;
              puVar1 = puVar19;
              if (puVar19 == puVar6) goto LAB_0094deb4;
              goto LAB_0094d83c;
            case 2:
              if (local_1b0 == 0x80000000) {
                local_c8 = (int *)0x80000015;
                if (piVar2 == (int *)0x80000015) goto LAB_0094e8f0;
                local_f0 = piVar2;
                uVar25 = puVar23[1];
                uVar29 = puVar23[2];
                *puVar15 = *puVar23;
                puVar15[1] = uVar25;
                puVar15[2] = uVar29;
                FUN_0094ad08(&local_58,&local_f0);
                local_1b0 = local_54;
                local_210 = local_4c;
                if (local_58 == 2) {
                  local_208 = local_50;
                  goto LAB_0094d81c;
                }
                bVar34 = 1;
                local_1b0 = 0;
                local_b4 = puVar19;
                local_a8 = iVar26;
                local_128 = local_50;
                local_12c = local_54;
                local_124 = local_4c;
                local_130 = local_58;
                local_120 = local_48;
                local_11c = uStack_44;
                local_118 = local_40;
                local_114 = uStack_3c;
                local_110 = local_38;
                uStack_10c = uStack_34;
                local_108 = uStack_30;
                local_104 = uStack_2c;
                goto joined_r0x0094e184;
              }
              local_b4 = puVar19;
              local_a8 = iVar26;
              FUN_009244cc(&local_58,"user--",4);
              break;
            case 3:
              if (local_1cc == 0x80000001) {
                local_c8 = (int *)0x80000015;
                if (piVar2 == (int *)0x80000015) goto LAB_0094e8f0;
                local_f0 = piVar2;
                uVar25 = puVar23[1];
                uVar29 = puVar23[2];
                *puVar15 = *puVar23;
                puVar15[1] = uVar25;
                puVar15[2] = uVar29;
                FUN_009415d0(&local_58,&local_f0);
                local_1cc = local_54;
                local_200 = local_50;
                if (local_58 == 2) {
                  local_20c = local_4c;
                  goto LAB_0094d81c;
                }
                bVar34 = 1;
                local_120 = local_48;
                local_11c = uStack_44;
                local_118 = local_40;
                local_114 = uStack_3c;
                local_110 = local_38;
                uStack_10c = uStack_34;
                local_108 = uStack_30;
                local_104 = uStack_2c;
                local_128 = local_50;
                local_124 = local_4c;
                local_12c = local_54;
                local_130 = local_58;
                local_b4 = puVar19;
                local_a8 = iVar26;
                goto LAB_0094e1a4;
              }
              local_b4 = puVar19;
              local_a8 = iVar26;
              FUN_009244cc(&local_58,&DAT_0056aa78,8);
            }
            local_130 = local_58;
            local_12c = local_54;
            local_128 = local_50;
            local_124 = local_4c;
            local_120 = local_48;
            local_11c = uStack_44;
            local_118 = local_40;
            local_114 = uStack_3c;
            local_110 = local_38;
            uStack_10c = uStack_34;
            local_108 = uStack_30;
            local_104 = uStack_2c;
          }
          else {
            local_b4 = puVar19;
            local_a8 = iVar26;
            FUN_016dd1aa(uVar14,iVar32,0x2b);
            local_12c = CONCAT31(local_12c._1_3_,uVar31);
            local_130 = uVar24;
          }
LAB_0094de38:
          bVar34 = 1;
          goto joined_r0x0094e184;
        }
        uVar31 = 2;
        local_1cc = 0x80000001;
        local_1b0 = 0x80000000;
        goto LAB_0094dee8;
      }
      FUN_008f73e8(&local_130,&local_100,&uStack_25,&DAT_01867558);
      goto LAB_0094e2b4;
    }
    local_228 = local_194;
  }
LAB_0094e828:
  param_1[3] = local_188;
  param_1[2] = local_18c;
  uVar37 = param_1[2];
  iVar32 = ((uint)((int)puVar36 - (int)puVar10) >> 4) + 1;
  uVar14 = param_1[3];
  *param_1 = 2;
  param_1[1] = local_190;
  uVar21 = param_1[1];
  puVar11 = puVar10;
  while (iVar32 = iVar32 + -1, iVar32 != 0) {
    FUN_008f7448(puVar11);
    puVar11 = puVar11 + 4;
  }
  if (iVar12 != 0) {
    thunk_FUN_016d3fb4(puVar5);
  }
  if (puVar36 != puVar10) {
    local_130 = local_228;
    FUN_00f3cf48(&local_58,((uint)((int)puVar36 - (int)puVar10) >> 4) + local_228,&local_130,
                 &DAT_01887234);
    if (local_58 != 2) {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      param_1[3] = local_4c;
      param_1[4] = local_48;
      param_1[5] = uStack_44;
      param_1[6] = local_40;
      param_1[7] = uStack_3c;
      param_1[8] = local_38;
      param_1[9] = uStack_34;
      param_1[10] = uStack_30;
      param_1[0xb] = uStack_2c;
      FUN_0094ac98(uVar37,uVar14);
      if (uVar21 != 0) {
        thunk_FUN_016d3fb4(uVar37);
      }
      goto LAB_0094e8ac;
    }
  }
  *param_1 = 2;
  goto LAB_0094e8ac;
LAB_0094deb4:
  iVar35 = iVar26;
LAB_0094deb8:
  bVar34 = 0;
  uVar31 = (undefined1)local_1e0;
  if (local_1e0 == 3) {
    uVar31 = 2;
  }
  uVar24 = local_1f8;
  uVar27 = local_1b8;
  local_b4 = puVar19;
  local_a8 = iVar35;
  if (local_1b8 == 0x80000000) {
LAB_0094dee8:
    FUN_009243d8(&local_58,"url",3);
    puVar19 = local_b4;
    iVar26 = local_a8;
    if (local_58 == 2) {
      bVar34 = 1;
      local_1b8 = 0;
      uVar21 = local_4c;
      uVar24 = local_50;
      uVar27 = local_54;
      goto LAB_0094df1c;
    }
LAB_0094dfcc:
    local_a8 = iVar26;
    local_b4 = puVar19;
    bVar34 = 1;
    local_1b8 = 0;
    local_128 = local_50;
    local_12c = local_54;
    local_124 = local_4c;
    local_130 = local_58;
    local_120 = local_48;
    local_11c = uStack_44;
    local_118 = local_40;
    local_114 = uStack_3c;
    local_110 = local_38;
    uStack_10c = uStack_34;
    local_108 = uStack_30;
    local_104 = uStack_2c;
joined_r0x0094e184:
    if (-0x7fffffff < (int)local_1cc) {
      if (local_1cc != 0) {
        thunk_FUN_016d3fb4(local_200);
      }
    }
LAB_0094e1a4:
    if ((local_1b0 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_208);
    }
    if ((bool)(bVar34 & (local_1b8 & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(local_1f8);
    }
    if (local_130 == 2) goto LAB_0094e1e4;
    FUN_00927214(&local_b8);
    if (local_c8 != (int *)0x80000015) {
      FUN_008f7448(&local_c8);
    }
LAB_0094e298:
    if (0x7fffffff < uVar37) {
LAB_0094e2a0:
      if ((uVar37 & 0xfffffffe) != 0x80000014) {
        FUN_008f7448(&local_100);
      }
    }
  }
  else {
LAB_0094df1c:
    if (local_1b0 == 0x80000000) {
      FUN_009243d8(&local_58,"user--",4);
      local_118 = local_4c;
      local_120 = local_54;
      local_11c = local_50;
      if (local_58 != 2) {
        local_120 = local_48;
        local_11c = uStack_44;
        local_118 = local_40;
        local_114 = uStack_3c;
        local_110 = local_38;
        uStack_10c = uStack_34;
        local_108 = uStack_30;
        local_104 = uStack_2c;
        local_124 = local_4c;
        local_130 = local_58;
        local_12c = local_54;
        local_128 = local_50;
        local_1b0 = 0;
        if (uVar27 != 0) {
          thunk_FUN_016d3fb4(uVar24);
        }
        goto joined_r0x0094e184;
      }
    }
    else {
      local_118 = local_210;
      local_120 = local_1b0;
      local_11c = local_208;
    }
    local_130 = 2;
    if (local_1cc == 0x80000001) {
      local_1cc = 0x80000000;
    }
    local_110 = local_200;
    uStack_10c = local_20c;
    local_108 = CONCAT31(local_108._1_3_,uVar31);
    local_12c = uVar27;
    local_128 = uVar24;
    local_124 = uVar21;
    local_114 = local_1cc;
LAB_0094e1e4:
    local_a0 = *piVar13;
    local_9c = piVar13[1];
    iStack_98 = piVar13[2];
    local_94 = piVar13[3];
    local_90 = piVar13[4];
    local_8c = piVar13[5];
    local_88 = piVar13[6];
    local_84 = piVar13[7];
    iStack_80 = piVar13[8];
    iStack_7c = piVar13[9];
    FUN_008f78f0(&local_58,&local_c8);
    if (local_58 == 2) {
      local_130 = 2;
    }
    else {
      local_130 = local_58;
      local_12c = local_54;
      local_128 = local_50;
      local_124 = local_4c;
      local_120 = local_48;
      local_11c = uStack_44;
      local_118 = local_40;
      local_114 = uStack_3c;
      local_110 = local_38;
      uStack_10c = uStack_34;
      local_108 = uStack_30;
      local_104 = uStack_2c;
      if (local_a0 != 0) {
        thunk_FUN_016d3fb4(local_9c);
      }
      if (local_94 != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      if ((local_88 & 0x7fffffff) == 0) goto LAB_0094e298;
      thunk_FUN_016d3fb4(local_84);
    }
joined_r0x0094dd80:
    if ((int)uVar37 < 0) goto LAB_0094e2a0;
  }
LAB_0094e2b4:
  uVar37 = local_188;
  uVar21 = local_18c;
  if (local_130 == 2) {
    local_180 = local_128;
    uStack_17c = local_124;
    uStack_178 = local_120;
    uStack_174 = local_11c;
    local_170 = local_118;
    uStack_16c = local_114;
    uStack_168 = local_110;
    uStack_164 = uStack_10c;
    uStack_160 = local_108;
    if (local_12c == 0x80000000) {
      local_228 = local_194;
      goto LAB_0094e828;
    }
    local_158 = local_12c;
    *puVar18 = local_128;
    puVar18[1] = local_124;
    puVar18[2] = local_120;
    puVar18[3] = local_11c;
    puVar18[4] = local_118;
    puVar18[5] = local_114;
    puVar18[6] = local_110;
    puVar18[7] = uStack_10c;
    puVar18[8] = local_108;
    if (local_188 == local_190) {
      FUN_00933464(&local_190);
    }
    puVar6 = (uint *)(local_18c + uVar37 * 0x28);
    *puVar6 = local_158;
    puVar6[1] = uStack_154;
    puVar6[2] = uStack_150;
    puVar6[3] = uStack_14c;
    puVar6[4] = uStack_148;
    puVar6[5] = local_144;
    puVar6[6] = uStack_140;
    puVar6[7] = uStack_13c;
    puVar6[8] = uStack_138;
    puVar6[9] = uStack_134;
    local_188 = uVar37 + 1;
    uVar21 = uStack_13c;
    local_1a0 = puVar10;
    goto LAB_0094d740;
  }
  local_180 = local_128;
  uStack_17c = local_124;
  uStack_178 = local_120;
  uStack_174 = local_11c;
  local_170 = local_118;
  uStack_16c = local_114;
  uStack_168 = local_110;
  uStack_164 = uStack_10c;
  uStack_160 = local_108;
  *param_1 = local_130;
  param_1[1] = local_12c;
  param_1[2] = local_128;
  param_1[3] = local_124;
  param_1[4] = local_120;
  param_1[5] = local_11c;
  param_1[6] = local_118;
  param_1[7] = local_114;
  param_1[8] = local_110;
  param_1[9] = uStack_10c;
  param_1[10] = local_108;
  param_1[0xb] = local_104;
  if (local_188 != 0) {
    puVar15 = (undefined4 *)(local_18c + 0x10);
    uVar14 = local_188;
    do {
      if (puVar15[-4] != 0) {
        thunk_FUN_016d3fb4(puVar15[-3]);
      }
      if (puVar15[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar15);
      }
      if ((puVar15[2] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar15[3]);
      }
      puVar15 = puVar15 + 10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (local_190 != 0) {
    thunk_FUN_016d3fb4(uVar21);
  }
  iVar32 = (local_1d0 >> 4) + 1;
  while (iVar32 = iVar32 + -1, iVar32 != 0) {
    FUN_008f7448(puVar11);
    puVar11 = puVar11 + 4;
  }
  if (iVar12 != 0) {
    thunk_FUN_016d3fb4(puVar5);
  }
LAB_0094e8ac:
  if (*param_2 == -0x7fffffec) {
    return;
  }
  FUN_008f7448(param_2);
  return;
}

