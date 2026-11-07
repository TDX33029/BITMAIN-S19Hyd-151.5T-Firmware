// FUN_01419564 @ 01419564 size=3232 calls_out=34 calls_in=2
// strings: original header value plus ascii is valid

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01419564(undefined4 *param_1,uint *param_2,uint *param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 extraout_r3;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined4 unaff_r5;
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint unaff_r9;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  undefined8 uVar24;
  uint local_120;
  int local_11c;
  uint *local_118;
  undefined1 *local_114;
  uint *local_110;
  undefined1 *local_10c;
  uint *local_108;
  undefined1 *local_104;
  undefined1 *local_100;
  undefined4 uStack_fc;
  uint *puStack_f8;
  undefined4 local_f0;
  undefined1 *local_ec;
  uint *local_e8;
  undefined1 *local_e4;
  undefined1 *local_e0;
  undefined4 uStack_dc;
  uint *puStack_d8;
  undefined4 local_d0;
  code *local_cc;
  uint **local_c8;
  undefined1 *local_c4;
  undefined1 *local_c0;
  undefined4 uStack_bc;
  uint *puStack_b8;
  undefined4 local_b0;
  undefined3 uStack_ac;
  uint *local_a8;
  undefined1 *local_a4;
  uint *local_a0;
  undefined1 *local_9c;
  undefined1 local_98;
  undefined4 local_97;
  undefined3 uStack_93;
  uint local_90;
  uint *local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  uint *local_74;
  uint local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  undefined1 *puStack_5c;
  uint local_58;
  undefined1 *local_50;
  uint *local_4c;
  undefined1 *local_48;
  undefined1 *puStack_44;
  int local_40;
  undefined1 *local_38;
  uint *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int iStack_28;
  
  uVar24 = CONCAT44(param_2,unaff_r5);
  puVar20 = (undefined4 *)param_2[4];
  bVar1 = *(byte *)(puVar20 + 0x1b);
  if (8 < bVar1) {
    if (bVar1 == 9) {
      unaff_r9 = (uint)*(byte *)(puVar20 + 0x1f);
      uVar24 = *(undefined8 *)(puVar20 + 0x1c);
      param_4 = puVar20[0x1e];
      local_d0 = (uint **)CONCAT22(CONCAT11(local_d0._3_1_,*(undefined1 *)((int)puVar20 + 0x6f)),
                                   *(undefined2 *)((int)puVar20 + 0x6d));
    }
    else {
      uVar24 = FUN_013d4df8(puVar20[0x1c],puVar20[0x1d]);
      param_4 = extraout_r3;
    }
  }
  pbVar13 = (byte *)param_2[5];
  local_f0 = (uint *)CONCAT22(CONCAT11(local_f0._3_1_,local_d0._2_1_),(undefined2)local_d0);
  if (((*pbVar13 != 0xb) && (9 < *pbVar13)) && (*(int *)(pbVar13 + 8) != 0)) {
    thunk_FUN_01be4678(*(undefined4 *)(pbVar13 + 4));
  }
  pbVar13[3] = local_f0._2_1_;
  *(int *)(pbVar13 + 8) = (int)((ulonglong)uVar24 >> 0x20);
  *(undefined4 *)(pbVar13 + 0xc) = param_4;
  *(uint *)(pbVar13 + 0x10) = unaff_r9;
  *pbVar13 = bVar1;
  *(undefined2 *)(pbVar13 + 1) = (undefined2)local_f0;
  *(int *)(pbVar13 + 4) = (int)uVar24;
  uVar9 = *param_2;
  if (uVar9 == 2 && param_2[1] == 0) {
    local_f0 = (uint *)0x0;
    local_ec = (undefined1 *)0x45;
    local_e8 = (uint *)0x0;
    local_e4 = (undefined1 *)0x0;
    FUN_0141dc00(&local_d0,puVar20);
    if ((char)local_c0 != '\x02') {
      (*(code *)local_d0[4])(&local_c4,local_cc,local_c8);
    }
LAB_0141965c:
    local_e4 = (undefined1 *)0x0;
    local_e8 = (uint *)0x0;
  }
  else {
    uVar4 = param_2[2];
    uVar15 = param_2[3];
    cVar2 = *(char *)(puVar20 + 0x21);
    FUN_01429b04(&local_120,puVar20);
    if (cVar2 == '\x02') {
      local_d0 = (uint **)0x0;
      local_cc = (code *)0x45;
      local_c8 = (uint **)0x0;
      local_c4 = (undefined1 *)0x0;
      FUN_0141d2a4(&local_110,puVar20);
      puVar19 = local_108;
      uVar5 = (uint)puStack_f8 >> 0x10 & 0xff;
      if (uVar5 == 2) {
        FUN_0141c42c(&local_d0,local_110,1,local_108);
        iVar22 = FUN_0141c10c(&local_d0);
        if ((iVar22 == 0) ||
           (iVar22 = FUN_0142994c(*(undefined4 *)(iVar22 + 4),*(undefined4 *)(iVar22 + 8)),
           iVar22 == 0)) {
          if ((uint *)local_110[10] <= puVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(puVar19,(uint *)local_110[10],&DAT_01cf45a0);
          }
          piVar6 = (int *)(local_110[9] + (int)puVar19 * 0x34);
          iVar22 = *piVar6;
          uVar11 = 0;
          if (iVar22 != 0) {
            uVar11 = 2 - iVar22;
          }
          if ((uVar11 & 1) == 0) {
            piVar6 = (int *)((int)puVar19 * 0x34 + local_110[9] + 0xc);
          }
          else {
            uVar11 = piVar6[2];
            if (local_110[0xd] <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar11,local_110[0xd],&DAT_01cf4580);
            }
            piVar6 = (int *)(local_110[0xc] + uVar11 * 0x24 + 0x10);
          }
          puVar14 = (undefined1 *)piVar6[2];
          puVar21 = (undefined1 *)0x0;
          puVar18 = puVar14 + 9;
          if ((int)puVar18 < 0) {
LAB_014198d4:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(puVar21,puVar18);
          }
          local_38 = (undefined1 *)0x1;
          local_30 = puVar21;
          if (puVar18 != (undefined1 *)0x0) {
            puVar21 = (undefined1 *)0x1;
            local_38 = (undefined1 *)FUN_01298504(puVar18);
            if (local_38 == (undefined1 *)0x0) goto LAB_014198d4;
            puVar14 = (undefined1 *)piVar6[2];
            local_30 = puVar18;
          }
          local_34 = (uint *)0x0;
          uVar11 = 0x20 - LZCOUNT((uint)local_30 >> 10);
          iVar22 = piVar6[1];
          if (6 < uVar11) {
            uVar11 = 7;
          }
          local_2c = (undefined1 *)(uVar11 << 2 | 1);
          if (local_30 < puVar14) {
            FUN_01283c9c(&local_38,puVar14);
          }
          puVar21 = local_30;
          puVar19 = local_34;
          puVar18 = local_38;
          FUN_01bed4e2(local_38 + (int)local_34,iVar22,puVar14);
          puVar12 = puVar21 + -(int)puVar19;
          if (puVar12 < puVar14) {
            local_d0 = (uint **)puVar14;
            goto LAB_0141a170;
          }
          local_34 = (uint *)((int)puVar19 + (int)puVar14);
          if ((uint)((int)puVar21 - (int)local_34) < 2) {
            FUN_01283c9c(&local_38,2);
            puVar18 = local_38;
          }
          *(undefined2 *)(puVar18 + (int)local_34) = 0x202c;
          puVar12 = local_30 + -(int)local_34;
          if (puVar12 < (undefined1 *)0x2) {
            local_d0 = (uint **)0x2;
LAB_0141a16c:
LAB_0141a170:
            local_cc = (code *)puVar12;
                    /* WARNING: Subroutine does not return */
            FUN_01284540();
          }
          local_34 = (uint *)((int)local_34 + 2);
          if ((uint)((int)local_30 - (int)local_34) < 7) {
            FUN_01283c9c(&local_38,7);
            *(undefined4 *)(local_38 + (int)local_34) = 0x6e756863;
            *(undefined4 *)((int)(local_38 + (int)local_34) + 3) = 0x64656b6e;
            puVar12 = local_30 + -(int)local_34;
            if (puVar12 < (undefined1 *)0x7) {
              local_d0 = (uint **)0x7;
              goto LAB_0141a16c;
            }
          }
          else {
            *(undefined4 *)(local_38 + (int)local_34) = 0x6e756863;
            *(undefined4 *)((int)(local_38 + (int)local_34) + 3) = 0x64656b6e;
          }
          puVar14 = local_2c;
          local_a0 = (uint *)((int)local_34 + 7);
          local_34 = local_a0;
          if (((uint)local_2c & 1) == 0) {
            local_9c = local_2c;
            local_a8 = &DAT_01d2e520;
            local_a4 = local_38;
          }
          else {
            local_48 = (undefined1 *)((int)local_a0 + ((uint)local_2c >> 5));
            local_4c = (uint *)(local_38 + -((uint)local_2c >> 5));
            local_50 = local_30 + ((uint)local_2c >> 5);
            FUN_01283524(&local_f0,&local_50);
            local_68 = (uint)puVar14 >> 5;
            if (local_e8 < (uint *)((uint)puVar14 >> 5)) {
              local_c8 = &local_a8;
              local_a8 = local_e8;
              local_c4 = &LAB_01a6a304;
              local_cc = (code *)&LAB_01a6a304;
              local_d0 = (uint **)&local_68;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_d0,&DAT_01d2e534);
            }
            local_e8 = (uint *)((int)local_e8 - local_68);
            local_ec = local_ec + local_68;
            local_a8 = local_f0;
            local_9c = local_e4;
            local_a4 = local_ec;
            local_a0 = local_e8;
          }
          FUN_01429274(&local_d0,&local_a8);
          if ((char)local_c0 == '\x02') {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc("original header value plus ascii is valid",0x29,&local_f0,&DAT_01d210e8,
                         &DAT_01cf4c2c);
          }
          local_f0 = (uint *)local_d0;
          local_ec = local_cc;
          local_e8 = (uint *)local_c8;
          local_e4 = local_c4;
          local_e0 = local_c0;
          (**(code **)(*piVar6 + 0x10))(piVar6 + 3,piVar6[1],piVar6[2]);
          *piVar6 = (int)local_f0;
          piVar6[1] = (int)local_ec;
          piVar6[2] = (int)local_e8;
          piVar6[3] = (int)local_e4;
          piVar6[4] = (int)local_e0;
        }
LAB_01419b80:
        local_100 = (undefined1 *)((uint)local_100 & 0xffffff00);
        local_10c = (undefined1 *)0x80000000;
        local_110 = (uint *)0x0;
        local_d0 = (uint **)0x0;
        local_cc = (code *)0x44;
        local_c8 = (uint **)0x0;
        local_c4 = (undefined1 *)0x0;
        FUN_0141e078(&local_84,puVar20);
        FUN_0141c42c(&local_d0,local_7c,local_84,local_80);
        puVar14 = local_c4;
        local_f0 = (uint *)local_d0;
        local_ec = local_cc;
        local_e8 = (uint *)local_c8;
        local_e4 = local_c4;
        local_e0 = local_c0;
        uStack_dc = uStack_bc;
        puVar19 = &local_68;
        FUN_01426734(puVar19,&local_f0);
        if ((char)local_58 == '\x02') {
          local_88 = 0;
          local_8c = (uint *)&SUB_00000004;
          local_90 = 0;
LAB_01419d70:
          FUN_0141a4fc(&local_90);
          puVar23 = (uint *)0x0;
          goto LAB_01419d80;
        }
        local_d0 = (uint **)local_68;
        local_cc = (code *)uStack_64;
        local_c8 = (uint **)uStack_60;
        local_c4 = puStack_5c;
        local_c0 = (undefined1 *)local_58;
        puVar23 = (uint *)FUN_01298504(0x50,4);
        if (puVar23 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x50);
        }
        *puVar23 = local_68;
        puVar23[1] = uStack_64;
        puVar23[2] = uStack_60;
        puVar23[3] = (uint)puStack_5c;
        puVar23[4] = local_58;
        local_78 = 4;
        iVar22 = 0x14;
        local_70 = 1;
        local_d0 = (uint **)local_f0;
        local_cc = (code *)local_ec;
        local_c8 = (uint **)local_e8;
        local_c4 = local_e4;
        local_c0 = local_e0;
        uStack_bc = uStack_dc;
        puVar19 = &local_78;
        puVar14 = local_e4;
        local_74 = puVar23;
        while( true ) {
          uVar11 = local_70;
          FUN_01426734(&local_50,&local_d0);
          if ((char)local_40 == '\x02') break;
          local_38 = local_50;
          local_34 = local_4c;
          local_30 = local_48;
          local_2c = puStack_44;
          iStack_28 = local_40;
          if (uVar11 == local_78) {
            uVar10 = 2;
            if (local_d0 == (uint **)0x2) {
              uVar10 = 1;
            }
            FUN_016092cc(&local_78,uVar11,uVar10,4,0x14);
            puVar23 = local_74;
          }
          piVar6 = (int *)((int)puVar23 + iVar22);
          local_70 = uVar11 + 1;
          iVar22 = iVar22 + 0x14;
          *piVar6 = (int)local_50;
          piVar6[1] = (int)local_4c;
          piVar6[2] = (int)local_48;
          piVar6[3] = (int)puStack_44;
          piVar6[4] = local_40;
          puVar14 = local_48;
        }
        local_90 = local_78;
        local_8c = local_74;
        local_88 = local_70;
        if (local_70 == 0) goto LAB_01419d70;
        local_cc = (code *)0x80000000;
        local_c0 = (undefined1 *)((uint)local_c0 & 0xffffff00);
        local_d0 = (uint **)0x0;
        FUN_01428bac(&local_a8,&local_d0,&local_90);
        local_b0 = local_97;
        uStack_ac = uStack_93;
        puVar14 = local_9c;
        puVar19 = local_a0;
        puVar23 = local_a8;
        puVar18 = local_a4;
        if (local_a8 == (uint *)0x3) goto LAB_01419a50;
      }
      else {
        local_f0 = local_110;
        local_ec = local_10c;
        local_e8 = local_108;
        local_e4 = local_104;
        local_e0 = local_100;
        uStack_dc = uStack_fc;
        puStack_d8 = puStack_f8;
        if ((local_120 & 1) == 0) {
          if ((uVar9 & 1) != 0) {
            if ((7 < *(byte *)(puVar20 + 0x1b)) ||
               ((1 << (uint)*(byte *)(puVar20 + 0x1b) & 0xa2U) == 0)) {
              local_d0 = (uint **)local_110;
              local_cc = (code *)local_10c;
              local_c8 = (uint **)local_108;
              local_c4 = local_104;
              local_c0 = local_100;
              uStack_bc = uStack_fc;
              puStack_b8 = puStack_f8;
              FUN_0141a54c(&local_a8);
              FUN_0141e5bc(&local_110,&local_a8);
              goto LAB_01419b80;
            }
            local_118 = (uint *)0x0;
            local_114 = (undefined1 *)0x0;
            goto LAB_014198ac;
          }
          puVar23 = (uint *)0x3;
          bVar3 = true;
          puVar14 = local_100;
          puVar19 = puStack_f8;
        }
        else {
LAB_014198ac:
          puVar23 = (uint *)0x1;
          bVar3 = false;
          puVar14 = local_114;
          puVar19 = local_118;
        }
        if (local_10c != (undefined1 *)0x0) {
          (**(code **)(local_10c + 0x10))(&local_e0,local_108,local_104);
        }
        if (bVar3) {
LAB_01419a50:
          if ((uVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00477b16,0x9f,&DAT_01cf4448);
          }
          FUN_0141a460(&local_f0,puVar20,uVar4,uVar15);
          goto LAB_01419e34;
        }
        local_100 = (undefined1 *)((uint)local_100 & 0xffffff00);
        local_110 = puVar23;
        local_108 = puVar19;
        local_104 = puVar14;
LAB_01419d80:
        local_98 = 0;
        puVar18 = (undefined1 *)0x80000000;
      }
      uStack_bc = CONCAT31(uStack_ac,local_b0._3_1_);
      local_c0 = (undefined1 *)CONCAT31((int3)local_b0,local_98);
      local_d0 = (uint **)puVar23;
      local_cc = (code *)puVar18;
      local_c8 = (uint **)puVar19;
      local_c4 = puVar14;
      if ((uVar5 == 2) && (local_120 != 0 || local_11c != 0)) {
        local_110 = (uint *)0x0;
        local_10c = (undefined1 *)0x18;
        local_108 = (uint *)0x0;
        local_104 = (undefined1 *)0x0;
        FUN_0141dc00(&local_f0,puVar20);
        if ((char)local_e0 != '\x02') {
          (*(code *)local_f0[4])(&local_e4,local_ec,local_e8);
        }
      }
      local_f0 = (uint *)local_d0;
      local_ec = local_cc;
      local_e8 = (uint *)local_c8;
      local_e4 = local_c4;
      local_e0 = local_c0;
      uStack_dc = uStack_bc;
      goto LAB_01419e34;
    }
    local_f0 = (uint *)0x0;
    local_ec = (undefined1 *)0x45;
    local_e8 = (uint *)0x0;
    local_e4 = (undefined1 *)0x0;
    FUN_0141dc00(&local_d0,puVar20);
    if ((char)local_c0 != '\x02') {
      (*(code *)local_d0[4])(&local_c4,local_cc,local_c8);
    }
    if ((local_120 & 1) == 0) {
      if ((uVar9 & 1) == 0) {
        FUN_0141a460(&local_f0,puVar20,uVar4,uVar15);
        goto LAB_01419e34;
      }
      goto LAB_0141965c;
    }
    local_e8 = local_118;
    local_e4 = local_114;
  }
  local_e0 = (undefined1 *)((uint)local_e0 & 0xffffff00);
  local_f0 = (uint *)0x1;
LAB_01419e34:
  uVar9 = (puVar20[0xd] + puVar20[10]) * 0x1e + 0x1e;
  if (*param_3 - param_3[2] < uVar9) {
    FUN_016092cc(param_3,param_3[2],uVar9,1,1);
  }
  puVar16 = &DAT_00477ddd;
  uVar9 = 7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(puVar20 + 0x1b)) {
  case 1:
    uVar9 = 3;
    puVar16 = &DAT_00477de4;
    break;
  case 2:
    uVar9 = 4;
    puVar16 = &DAT_0056e630;
    break;
  case 3:
    uVar9 = 3;
    puVar16 = &DAT_00477de7;
    break;
  case 4:
    uVar9 = 6;
    puVar16 = &DAT_00477dea;
    break;
  case 5:
    uVar9 = 4;
    puVar16 = &DAT_0056efe0;
    break;
  case 6:
    uVar9 = 5;
    puVar16 = &DAT_005319d2;
    break;
  case 7:
    puVar16 = &DAT_00477df0;
    break;
  case 8:
    uVar9 = 5;
    puVar16 = &DAT_00477df7;
    break;
  case 9:
    uVar9 = (uint)*(byte *)(puVar20 + 0x1f);
    if (0xf < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar9,0xf,&DAT_01cf40b4);
    }
    puVar16 = (undefined *)((int)puVar20 + 0x6d);
    break;
  case 10:
    puVar16 = (undefined *)puVar20[0x1c];
    uVar9 = puVar20[0x1d];
  }
  FUN_01ac6cbc(param_3,puVar16,uVar9);
  FUN_01ac6cbc(param_3,&DAT_005319c3,1);
  local_cc = FUN_01415570;
  local_110 = param_3;
  local_d0 = (uint **)(puVar20 + 0x10);
  FUN_012fa178(&local_110,&DAT_01cf4498,&DAT_005b3d9f,&local_d0);
  uVar9 = *(byte *)(puVar20 + 0x21) - 1;
  if (2 < (uVar9 & 0xff)) {
    local_110 = (uint *)CONCAT31(local_110._1_3_,*(byte *)(puVar20 + 0x21));
    local_cc = (code *)&LAB_0141457c;
    local_d0 = &local_110;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0057aa1f,&local_d0,&DAT_01cf4510);
  }
  FUN_01ac6cbc(param_3,*(undefined4 *)(&DAT_01d32510 + uVar9 * 4),8);
  FUN_01ac6cbc(param_3,&DAT_00531047,2);
  iVar22 = FUN_014204a4(puVar20[0x20]);
  if (iVar22 == 0) {
    if (*(char *)((int)param_2 + 0x19) == '\0') {
      FUN_01417d58(puVar20,param_3);
    }
    else {
      FUN_01417f04(puVar20,param_3);
    }
  }
  else {
    FUN_0141a5c0(puVar20,iVar22,param_3);
  }
  FUN_01ac6cbc(param_3,&DAT_00531047,2);
  iVar17 = puVar20[10] + 1;
  puVar20[10] = 0;
  iVar22 = puVar20[9];
  while (iVar17 = iVar17 + -1, iVar17 != 0) {
    FUN_0137bfa4(iVar22);
    iVar22 = iVar22 + 0x34;
  }
  iVar22 = puVar20[0xd] + 1;
  puVar20[0xd] = 0;
  piVar6 = (int *)(puVar20[0xc] + 0x10);
  while (iVar22 = iVar22 + -1, iVar22 != 0) {
    (**(code **)(*piVar6 + 0x10))(piVar6 + 3,piVar6[1],piVar6[2]);
    piVar6 = piVar6 + 9;
  }
  puVar7 = (undefined4 *)puVar20[6];
  iVar22 = puVar20[7];
  *puVar20 = 0;
  puVar20[1] = 0;
  if (iVar22 != 0) {
    puVar20 = puVar7;
    do {
      puVar8 = puVar20 + 1;
      *puVar20 = 0xffff;
      puVar20 = puVar8;
    } while (puVar8 != puVar7 + iVar22);
  }
  *param_1 = local_f0;
  param_1[1] = local_ec;
  param_1[2] = local_e8;
  param_1[3] = local_e4;
  param_1[4] = local_e0;
  param_1[5] = uStack_dc;
  return;
}

