// FUN_0090cffc @ 0090cffc size=2736 calls_out=14 calls_in=1
// strings: speed | speed | min_fan_rpm | min_fan_rpm | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements | min_fan_rpm

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0090cffc(int *param_1,uint *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int unaff_r4;
  uint uVar15;
  int unaff_r6;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  int in_r12;
  bool bVar21;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint *local_c8;
  uint *local_c4;
  uint local_c0;
  uint *local_bc;
  undefined4 local_b8;
  uint *local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  uint *local_9c;
  uint local_98;
  uint *local_94;
  int local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint *local_7c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint *puStack_2c;
  undefined1 uStack_25;
  
  uVar17 = *param_2;
  uVar2 = 0x15;
  if ((int)uVar17 < 0) {
    uVar2 = uVar17 ^ 0x80000000;
  }
  if (uVar2 == 0x14) {
    uVar9 = param_2[3];
    uVar15 = 0;
    uVar11 = param_2[1];
    puVar19 = (uint *)param_2[2];
    bVar21 = uVar9 != 0;
    uVar2 = 0x14;
    puVar16 = puVar19;
    if (bVar21) {
      puVar16 = puVar19 + 4;
      uVar2 = *puVar19;
    }
    puVar5 = puVar19 + uVar9 * 4;
    local_c4 = puVar19;
    if (bVar21) {
      local_c4 = puVar16;
    }
    local_b8 = 0;
    local_c8 = puVar19;
    local_c0 = uVar11;
    local_bc = puVar5;
    if (!bVar21 || uVar2 == 0x80000015) goto LAB_0090d5b0;
    local_b8 = 1;
    local_34 = puVar19[1];
    local_30 = puVar19[2];
    puStack_2c = (uint *)puVar19[3];
    local_38 = uVar2;
    FUN_0094170c(&local_68,&local_38);
    iVar18 = local_60;
    uVar2 = local_64;
    if (local_68 == 2) {
      uVar15 = 1;
      if (uVar9 == 1) {
LAB_0090d5b0:
        FUN_00f3cf48(param_1,uVar15,&DAT_01867358,&DAT_018ab990);
        if (*param_1 != 2) goto LAB_0090d7d0;
      }
      else {
        puVar16 = puVar19 + 8;
        local_c4 = puVar16;
        if (puVar19[4] == 0x80000015) goto LAB_0090d5b0;
        local_b8 = 2;
        local_34 = puVar19[5];
        local_30 = puVar19[6];
        puStack_2c = (uint *)puVar19[7];
        local_38 = puVar19[4];
        FUN_0094170c(&local_68,&local_38);
        iVar6 = local_60;
        uVar13 = local_64;
        if (local_68 != 2) {
          param_1[3] = local_5c;
          param_1[4] = iStack_58;
          param_1[5] = iStack_54;
          param_1[6] = local_50;
          param_1[7] = local_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = iStack_40;
          param_1[0xb] = iStack_3c;
          goto LAB_0090d7c4;
        }
        uVar15 = 2;
        if (uVar9 == 2) goto LAB_0090d5b0;
        puVar16 = puVar19 + 0xc;
        local_c4 = puVar16;
        if (puVar19[8] == 0x80000015) goto LAB_0090d5b0;
        local_b8 = 3;
        local_34 = puVar19[9];
        local_30 = puVar19[10];
        puStack_2c = (uint *)puVar19[0xb];
        local_38 = puVar19[8];
        FUN_0094170c(&local_68,&local_38);
        if (local_68 != 2) {
          param_1[3] = local_5c;
          param_1[4] = iStack_58;
          param_1[5] = iStack_54;
          param_1[6] = local_50;
          param_1[7] = local_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = iStack_40;
          param_1[0xb] = iStack_3c;
          goto LAB_0090d7c4;
        }
        uVar15 = 3;
        param_1[1] = uVar2;
        param_1[6] = local_60;
        param_1[2] = iVar18;
        param_1[3] = uVar13;
        param_1[4] = iVar6;
        param_1[5] = local_64;
      }
      iVar18 = ((uint)((int)puVar5 - (int)puVar16) >> 4) + 1;
      puVar7 = puVar16;
      while (iVar18 = iVar18 + -1, iVar18 != 0) {
        FUN_008f7448(puVar7);
        puVar7 = puVar7 + 4;
      }
      if (uVar11 != 0) {
        thunk_FUN_016d3fb4(puVar19);
      }
      if ((puVar5 == puVar16) ||
         (local_38 = uVar15,
         FUN_00f3cf48(&local_68,((uint)((int)puVar5 - (int)puVar16) >> 4) + uVar15,&local_38,
                      &DAT_01887234), local_68 == 2)) {
        *param_1 = 2;
      }
      else {
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = local_60;
        param_1[3] = local_5c;
        param_1[4] = iStack_58;
        param_1[5] = iStack_54;
        param_1[6] = local_50;
        param_1[7] = local_4c;
        param_1[8] = iStack_48;
        param_1[9] = iStack_44;
        param_1[10] = iStack_40;
        param_1[0xb] = iStack_3c;
      }
    }
    else {
      param_1[3] = local_5c;
      param_1[4] = iStack_58;
      param_1[5] = iStack_54;
      param_1[6] = local_50;
      param_1[7] = local_4c;
      param_1[8] = iStack_48;
      param_1[9] = iStack_44;
      param_1[10] = iStack_40;
      param_1[0xb] = iStack_3c;
LAB_0090d7c4:
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
LAB_0090d7d0:
      iVar18 = ((uint)((int)puVar5 - (int)puVar16) >> 4) + 1;
      while (iVar18 = iVar18 + -1, iVar18 != 0) {
        FUN_008f7448(puVar16);
        puVar16 = puVar16 + 4;
      }
      if (uVar11 == 0) {
LAB_0090d9a0:
        if (uVar17 < 0x80000000) {
          return;
        }
        goto LAB_0090d9a8;
      }
      thunk_FUN_016d3fb4(puVar19);
    }
  }
  else {
    if (uVar2 != 0x15) {
      FUN_008f73e8(param_1,param_2,&uStack_25,&DAT_018670c8);
      return;
    }
    local_a0 = (uint *)param_2[1];
    local_90 = 0;
    local_b0 = (uint *)0x80000015;
    puVar16 = local_a0 + param_2[2] * 8;
    local_9c = local_a0;
    local_98 = uVar17;
    local_94 = puVar16;
    if (param_2[2] == 0) {
      local_e4 = 2;
      local_e0 = 2;
      local_dc = 2;
      local_f4 = unaff_r4;
      local_f0 = unaff_r6;
      local_f8 = in_r12;
    }
    else {
      puVar3 = (undefined4 *)((uint)&local_c8 | 4);
      puVar4 = (undefined4 *)((uint)&local_b0 | 4);
      puVar5 = (uint *)((uint)&local_88 | 4);
      local_dc = 2;
      iVar18 = 0;
      local_e0 = 2;
      local_e4 = 2;
      iVar6 = 1;
      puVar19 = local_a0;
      do {
        iVar20 = iVar6;
        puVar7 = local_7c;
        uVar15 = local_80;
        uVar2 = local_84;
        puVar8 = puVar19 + 8;
        uVar9 = *puVar19;
        if (uVar9 == 0x80000015) goto LAB_0090d820;
        uVar11 = puVar19[2];
        uVar13 = puVar19[3];
        local_b0 = (uint *)puVar19[4];
        local_ac = puVar19[5];
        *puVar5 = puVar19[1];
        puVar5[1] = uVar11;
        puVar5[2] = uVar13;
        local_a8 = puVar19[6];
        local_a4 = puVar19[7];
        local_34 = local_84;
        local_30 = local_80;
        puStack_2c = local_7c;
        uVar11 = 0x15;
        if ((int)uVar9 < 0) {
          uVar11 = uVar9 ^ 0x80000000;
        }
        local_88 = uVar9;
        local_38 = uVar9;
        switch(uVar11) {
        case 1:
          uVar2 = local_84 & 0xff;
          if (uVar2 == 0) {
LAB_0090d31c:
            uVar1 = 0;
          }
          else if (uVar2 == 1) {
LAB_0090d2f0:
            uVar1 = 1;
          }
          else {
            if (uVar2 != 2) {
              local_bc = (uint *)0x0;
              local_c8 = (uint *)CONCAT31(local_c8._1_3_,1);
              local_c0 = uVar2;
              FUN_00924358(&local_68,&local_c8,&DAT_018679f8,&DAT_018ab990);
              break;
            }
LAB_0090d36c:
            uVar1 = 2;
          }
          local_68 = 2;
          local_64 = CONCAT31(local_64._1_3_,uVar1);
          break;
        default:
          FUN_008f73e8(&local_68,&local_88,&uStack_25,&DAT_01867108);
          goto LAB_0090d3c8;
        case 4:
          if (local_80 == 0 && local_7c == (uint *)0x0) goto LAB_0090d31c;
          if (local_80 == 1 && local_7c == (uint *)0x0) goto LAB_0090d2f0;
          if (local_80 == 2 && local_7c == (uint *)0x0) goto LAB_0090d36c;
          local_c0 = local_80;
          local_bc = local_7c;
          local_c8 = (uint *)CONCAT31(local_c8._1_3_,1);
          FUN_00924358(&local_68,&local_c8,&DAT_018679f8,&DAT_018ab990);
          break;
        case 0xc:
          if (local_7c == (uint *)&DAT_00000005) {
            iVar6 = thunk_FUN_016dd50a(local_80,"speed",5);
            uVar1 = 0;
LAB_0090d3a4:
            if (iVar6 == 0) {
              local_64 = CONCAT31(local_64._1_3_,uVar1);
              local_68 = 2;
              goto LAB_0090d3b8;
            }
          }
          else {
            if (local_7c == (uint *)&DAT_00000008) {
              iVar6 = thunk_FUN_016dd50a(local_80,&DAT_0056a608,8);
              uVar1 = 1;
              goto LAB_0090d3a4;
            }
            if (local_7c == (uint *)&DAT_0000000b) {
              iVar6 = thunk_FUN_016dd50a(local_80,"min_fan_rpm",0xb);
              uVar1 = 2;
              goto LAB_0090d3a4;
            }
          }
          FUN_00924444(&local_68,uVar15,puVar7,&DAT_018679b8,3);
          goto LAB_0090d3b8;
        case 0xd:
          if (local_80 == 5) {
            iVar6 = thunk_FUN_016dd50a(local_84,"speed",5);
            if (iVar6 == 0) goto LAB_0090d31c;
          }
          else if (local_80 == 8) {
            iVar6 = thunk_FUN_016dd50a(local_84,&DAT_0056a608,8);
            if (iVar6 == 0) goto LAB_0090d2f0;
          }
          else if ((local_80 == 0xb) &&
                  (iVar6 = thunk_FUN_016dd50a(local_84,"min_fan_rpm",0xb), iVar6 == 0))
          goto LAB_0090d36c;
          FUN_00924444(&local_68,uVar2,uVar15,&DAT_018679b8,3);
          break;
        case 0xe:
          FUN_008fc594(&local_68,local_80,local_7c);
LAB_0090d3b8:
          if (uVar2 != 0) {
            thunk_FUN_016d3fb4(uVar15);
          }
          goto LAB_0090d3c8;
        case 0xf:
          FUN_008fc594(&local_68,local_84,local_80);
        }
        FUN_008f7448(&local_38);
LAB_0090d3c8:
        iVar6 = local_68;
        puVar19 = local_b0;
        uVar1 = (undefined1)local_64;
        if (local_68 != 2) {
          local_9c = puVar8;
          local_90 = iVar20;
          FUN_016dd1aa((int)param_1 + 5,(int)&local_64 + 1,0x2b);
          *(undefined1 *)(param_1 + 1) = uVar1;
          *param_1 = iVar6;
LAB_0090d984:
          FUN_00927214(&local_a0);
          if (local_b0 != (uint *)0x80000015) {
            FUN_008f7448(&local_b0);
          }
          goto LAB_0090d9a0;
        }
        if ((local_64 & 0xff) == 0) {
          if (local_dc != 2) {
            uVar12 = 5;
            pcVar10 = "speed";
            goto LAB_0090da4c;
          }
          local_b0 = (uint *)0x80000015;
          if (puVar19 == (uint *)0x80000015) goto LAB_0090d9fc;
          local_c8 = puVar19;
          uVar12 = puVar4[1];
          uVar14 = puVar4[2];
          *puVar3 = *puVar4;
          puVar3[1] = uVar12;
          puVar3[2] = uVar14;
          FUN_0094170c(&local_68,&local_c8);
          local_dc = local_64;
          local_f4 = local_60;
          if (local_68 == 2) goto LAB_0090d0dc;
          param_1[3] = local_5c;
          param_1[4] = iStack_58;
          param_1[5] = iStack_54;
          param_1[6] = local_50;
          param_1[7] = local_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = iStack_40;
          param_1[0xb] = iStack_3c;
          *param_1 = local_68;
          param_1[1] = local_64;
LAB_0090d93c:
          param_1[2] = local_60;
          local_9c = puVar8;
          local_90 = iVar20;
          goto LAB_0090d984;
        }
        if ((local_64 & 0xff) == 1) {
          if (local_e0 != 2) {
            uVar12 = 8;
            pcVar10 = &DAT_0056a608;
LAB_0090da4c:
            local_9c = puVar8;
            local_90 = iVar20;
            FUN_009244cc(param_1,pcVar10,uVar12);
            if (*param_1 != 2) goto LAB_0090d984;
            goto LAB_0090d87c;
          }
          local_b0 = (uint *)0x80000015;
          if (puVar19 == (uint *)0x80000015) {
LAB_0090d9fc:
            local_b0 = (uint *)0x80000015;
            local_9c = puVar8;
            local_90 = iVar20;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                         ,0x2c,&DAT_01887244);
          }
          local_c8 = puVar19;
          uVar12 = puVar4[1];
          uVar14 = puVar4[2];
          *puVar3 = *puVar4;
          puVar3[1] = uVar12;
          puVar3[2] = uVar14;
          FUN_0094170c(&local_68,&local_c8);
          local_e0 = local_64;
          local_f0 = local_60;
          if (local_68 != 2) {
            param_1[3] = local_5c;
            param_1[4] = iStack_58;
            param_1[5] = iStack_54;
            param_1[6] = local_50;
            param_1[7] = local_4c;
            param_1[8] = iStack_48;
            param_1[9] = iStack_44;
            param_1[10] = iStack_40;
            param_1[0xb] = iStack_3c;
            *param_1 = local_68;
            param_1[1] = local_64;
            goto LAB_0090d93c;
          }
        }
        else {
          if (local_e4 != 2) {
            uVar12 = 0xb;
            pcVar10 = "min_fan_rpm";
            goto LAB_0090da4c;
          }
          local_b0 = (uint *)0x80000015;
          if (puVar19 == (uint *)0x80000015) goto LAB_0090d9fc;
          local_c8 = puVar19;
          uVar12 = puVar4[1];
          uVar14 = puVar4[2];
          *puVar3 = *puVar4;
          puVar3[1] = uVar12;
          puVar3[2] = uVar14;
          FUN_0094170c(&local_68,&local_c8);
          local_e4 = local_64;
          if (local_68 != 2) {
            param_1[3] = local_5c;
            param_1[4] = iStack_58;
            param_1[5] = iStack_54;
            param_1[6] = local_50;
            param_1[7] = local_4c;
            param_1[8] = iStack_48;
            param_1[9] = iStack_44;
            param_1[10] = iStack_40;
            param_1[0xb] = iStack_3c;
            *param_1 = local_68;
            param_1[1] = local_64;
            param_1[2] = local_60;
            local_9c = puVar8;
            local_90 = iVar20;
            goto LAB_0090d984;
          }
          local_f8 = local_60;
        }
LAB_0090d0dc:
        iVar18 = iVar18 + 1;
        iVar6 = iVar20 + 1;
        puVar19 = puVar8;
      } while (puVar8 != puVar16);
      iVar18 = iVar20;
LAB_0090d820:
      local_9c = puVar8;
      local_90 = iVar18;
    }
    *param_1 = 2;
    uVar2 = 0;
    if (local_e4 != 2) {
      uVar2 = local_e4;
    }
    uVar15 = 0;
    if (local_e0 != 2) {
      uVar15 = local_e0;
    }
    uVar9 = 0;
    if (local_dc != 2) {
      uVar9 = local_dc;
    }
    param_1[3] = uVar15;
    param_1[1] = uVar9;
    param_1[2] = local_f4;
    param_1[4] = local_f0;
    param_1[5] = uVar2;
    param_1[6] = local_f8;
LAB_0090d87c:
    FUN_008f78f0(&local_68,&local_b0);
    if (local_68 == 2) {
      *param_1 = 2;
    }
    else {
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = iStack_58;
      param_1[5] = iStack_54;
      param_1[6] = local_50;
      param_1[7] = local_4c;
      param_1[8] = iStack_48;
      param_1[9] = iStack_44;
      param_1[10] = iStack_40;
      param_1[0xb] = iStack_3c;
    }
  }
  if (-1 < (int)uVar17) {
    return;
  }
LAB_0090d9a8:
  if ((uVar17 & 0xfffffffe) != 0x80000014) {
    FUN_008f7448(param_2);
  }
  return;
}

