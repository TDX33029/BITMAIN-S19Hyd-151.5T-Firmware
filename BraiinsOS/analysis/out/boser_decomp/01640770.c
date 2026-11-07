// FUN_01640770 @ 01640770 size=5484 calls_out=28 calls_in=1
// strings: netlink_packet_route::link::sriov::vf_list | netlink_packet_route::link::sriov::vf_list

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01640770(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint **ppuVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  uint ***pppuVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint **ppuVar18;
  undefined1 *puVar19;
  uint **ppuVar20;
  uint **ppuVar21;
  undefined1 uVar22;
  undefined *puVar23;
  uint uVar24;
  uint **ppuVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  uint **local_184;
  int local_170;
  int local_16c;
  int local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int local_154 [3];
  undefined8 local_148;
  uint **local_140;
  uint **local_13c;
  undefined1 *local_138;
  uint **local_134;
  undefined8 local_130;
  undefined4 uStack_128;
  int local_124 [3];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined8 local_100;
  uint **local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined8 local_b8;
  uint **local_b0;
  undefined8 local_ac;
  uint **local_a4;
  uint **ppuStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  uint **local_88;
  uint **local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint **local_78;
  uint **local_74;
  uint **local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_54;
  ushort local_4a;
  undefined8 local_48;
  uint **local_40;
  undefined4 local_3c;
  undefined8 local_38;
  uint **ppuStack_30;
  
  local_16c = 4;
  uStack_158 = 0;
  puVar14 = (undefined2 *)((uint)&local_b8 | 1);
  local_168 = 0;
  local_170 = 0;
  local_160 = param_2;
  uStack_15c = param_3;
  while( true ) {
    FUN_0162385c(local_154,&local_160);
    if (local_154[0] == -0x7fffffff) {
      param_1[1] = local_170;
      param_1[2] = local_16c;
      param_1[3] = local_168;
      *param_1 = 0;
      return;
    }
    uVar28 = FUN_01623bf0(param_2,param_3);
    local_100._4_4_ = (code *)&LAB_0141634c;
    local_100._0_4_ = &local_90;
    local_90 = uVar28;
    FUN_00664898(&local_b8,&DAT_005727c0,&local_100);
    local_f8 = local_b0;
    local_100 = local_b8;
    FUN_0160f56c(&local_b8,local_154,&local_100);
    ppuVar25 = local_b0;
    uVar10 = local_b8._4_4_;
    uVar28 = local_b8;
    if ((char *)local_b8 != &DAT_80000000) break;
    sVar4 = FUN_01623bc0(local_b8._4_4_,local_b0);
    if (sVar4 == 1) {
      uVar28 = FUN_01623bf0(uVar10,ppuVar25);
      uVar13 = (undefined4)((ulonglong)uVar28 >> 0x20);
      uVar10 = (undefined4)uVar28;
      FUN_016238f4(&local_b8,uVar10,uVar13);
      if ((char *)local_b8 != &DAT_80000000) {
        ppuVar25 = local_b0;
        uVar28 = local_b8;
        break;
      }
      local_134 = (uint **)0x0;
      local_138 = &DAT_00000008;
      local_13c = (uint **)0x0;
      uStack_128 = 0;
      while( true ) {
        ppuVar25 = local_134;
        puVar19 = local_138;
        ppuVar21 = (uint **)&local_90;
        local_130 = uVar28;
        FUN_0162385c(local_124,&local_130);
        iVar7 = local_124[0];
        uVar28 = CONCAT44(puVar19,local_13c);
        if (local_124[0] == -0x7fffffff) break;
        uVar28 = FUN_01623bf0(uVar10,uVar13);
        local_90._4_4_ = &LAB_0141634c;
        local_90._0_4_ = (uint *)&local_d0;
        local_d0 = uVar28;
        FUN_00664898(&local_b8,&DAT_00581b59,ppuVar21);
        local_88 = local_b0;
        local_90 = local_b8;
        FUN_0160f56c(&local_b8,local_124,ppuVar21);
        ppuVar18 = local_b0;
        uVar27 = local_b8._4_4_;
        puVar23 = &DAT_01d06328;
        if ((char *)local_b8 != &DAT_80000000) {
          ppuVar25 = local_b0;
          uVar28 = local_b8;
LAB_01641b2c:
          FUN_01631c48(&local_13c);
          if (iVar7 != -0x7fffffff) goto LAB_01641bc4;
          break;
        }
        uVar29 = FUN_01623bf0(local_b8._4_4_,local_b0);
        uVar16 = (undefined4)(uVar29 >> 0x20);
        puVar11 = (undefined4 *)uVar29;
        local_d8 = uVar29;
        uVar5 = FUN_01623bc0(uVar27,ppuVar18);
        pppuVar8 = &local_b0;
        switch(uVar5) {
        case 1:
          if (uVar29 < 0x400000000) {
            uVar13 = 4;
            uVar10 = 0;
LAB_01641d6c:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar10,uVar13,uVar16,puVar23);
          }
          if (uVar29 < 0x2400000000) {
            uVar13 = 0x24;
            uVar10 = 4;
            goto LAB_01641d6c;
          }
          uVar27 = *puVar11;
          ppuVar25 = (uint **)puVar11[1];
          ppuVar18 = (uint **)puVar11[2];
          FUN_01bed4e2(ppuVar21,puVar11 + 3,0x18);
          local_38._4_4_ = &LAB_0141634c;
          local_38._0_4_ = &local_d8;
          FUN_00664898(&local_48,&DAT_005713c3,&local_38);
          uVar22 = 0;
          local_b8._0_4_ = (char *)0x0;
          local_a4 = local_88;
          ppuStack_a0 = local_84;
          uStack_9c = local_80;
          local_98 = uStack_7c;
          local_b8._4_4_ = (code *)ppuVar25;
          local_b0 = ppuVar18;
          local_94 = uVar27;
          local_ac = local_90;
          FUN_0134bd64((uint **)local_48,local_48._4_4_);
          local_d0 = CONCAT44(ppuStack_a0,local_a4);
          uStack_c8 = uStack_9c;
          local_c4 = local_98;
          uStack_c0 = local_94;
          uVar26 = (uint)local_b0 & 0xffffff00;
          ppuVar18 = local_b0;
          local_f4 = local_ac;
          break;
        case 2:
          if (uVar29 < 0x400000000) {
            uVar13 = 4;
            uVar10 = 0;
            puVar23 = &DAT_01d063c8;
            goto LAB_01641d6c;
          }
          if (uVar29 < 0x800000000) {
            uVar13 = 8;
            uVar10 = 4;
            puVar23 = &DAT_01d063c8;
            goto LAB_01641d6c;
          }
          if (uVar29 < 0xc00000000) {
            uVar13 = 0xc;
            uVar10 = 8;
            puVar23 = &DAT_01d063c8;
            goto LAB_01641d6c;
          }
          ppuVar25 = (uint **)*puVar11;
          ppuVar18 = (uint **)puVar11[1];
          uVar27 = puVar11[2];
          local_48._4_4_ = &LAB_0141634c;
          local_48._0_4_ = (uint **)&local_d8;
          FUN_00664898(ppuVar21,&DAT_005775db,&local_48);
          local_b8._0_4_ = (char *)0x0;
          local_b8._4_4_ = (code *)ppuVar25;
          local_b0 = ppuVar18;
          local_ac._0_4_ = (undefined1 *)uVar27;
          FUN_0134bd64((uint *)local_90,local_90._4_4_);
          uVar22 = 2;
          goto LAB_01641994;
        case 3:
          if (uVar29 < 0x400000000) {
            uVar13 = 4;
            uVar10 = 0;
            puVar23 = &DAT_01d063d8;
            goto LAB_01641d6c;
          }
          if (uVar29 < 0x800000000) {
            uVar13 = 8;
            uVar10 = 4;
            puVar23 = &DAT_01d063d8;
            goto LAB_01641d6c;
          }
          ppuVar25 = (uint **)*puVar11;
          ppuVar18 = (uint **)puVar11[1];
          local_90._4_4_ = &LAB_0141634c;
          local_90._0_4_ = (uint *)&local_d8;
          FUN_00664898(&local_b8,&DAT_005bb582,ppuVar21);
          FUN_0134bd64((char *)local_b8,local_b8._4_4_);
          uVar26 = (uint)ppuVar18 & 0xffffff00;
          uVar22 = 4;
          local_f4 = CONCAT44(ppuVar21,0x1640f90);
          break;
        case 4:
          if (uVar29 < 0x400000000) {
            uVar13 = 4;
            uVar10 = 0;
            puVar23 = &DAT_01d06338;
            goto LAB_01641d6c;
          }
          ppuVar25 = (uint **)*puVar11;
          iVar7 = FUN_01640518(puVar11,uVar16);
          if (iVar7 == 0) {
            ppuVar18 = (uint **)0x0;
          }
          else {
            iVar7 = FUN_01640518(puVar11,uVar16);
            ppuVar18 = (uint **)(uint)(iVar7 != -1);
          }
          local_90._4_4_ = &LAB_0141634c;
          local_90._0_4_ = (uint *)&local_d8;
          FUN_00664898(&local_b8,&DAT_0059ec08,ppuVar21);
          uVar27 = 0x16418ec;
          FUN_0134bd64((char *)local_b8,local_b8._4_4_);
          uVar22 = 5;
          goto LAB_01641978;
        case 5:
          if (uVar29 < 0x400000000) {
            uVar13 = 4;
            uVar10 = 0;
            puVar23 = &DAT_01d06028;
            goto LAB_01641d6c;
          }
          if (uVar29 < 0x800000000) {
            uVar13 = 8;
            uVar10 = 4;
            puVar23 = &DAT_01d06028;
            goto LAB_01641d6c;
          }
          uVar27 = *puVar11;
          ppuVar18 = (uint **)puVar11[1];
          local_48._4_4_ = &LAB_0141634c;
          local_48._0_4_ = (uint **)&local_d8;
          FUN_00664898(ppuVar21,&DAT_005a2614,&local_48);
          ppuVar25 = ppuVar18;
          if ((uint **)0x2 < ppuVar18) {
            ppuVar25 = (uint **)&DAT_00000003;
          }
          local_b8._0_4_ = (char *)0x0;
          local_b8._4_4_ = (code *)ppuVar25;
          local_b0 = ppuVar18;
          local_ac._0_4_ = (undefined1 *)uVar27;
          FUN_0134bd64((uint *)local_90,local_90._4_4_);
          uVar22 = 6;
          goto LAB_01641994;
        case 6:
          if (uVar29 < 0x400000000) {
            uVar13 = 4;
            uVar10 = 0;
            puVar23 = &DAT_01d06198;
            goto LAB_01641d6c;
          }
          if (uVar29 < 0x800000000) {
            uVar13 = 8;
            uVar10 = 4;
            puVar23 = &DAT_01d06198;
            goto LAB_01641d6c;
          }
          if (uVar29 < 0xc00000000) {
            uVar13 = 0xc;
            uVar10 = 8;
            puVar23 = &DAT_01d06198;
            goto LAB_01641d6c;
          }
          ppuVar25 = (uint **)*puVar11;
          ppuVar18 = (uint **)puVar11[1];
          uVar27 = puVar11[2];
          local_48._4_4_ = &LAB_0141634c;
          local_48._0_4_ = (uint **)&local_d8;
          FUN_00664898(ppuVar21,&DAT_0057b616,&local_48);
          local_b8._0_4_ = (char *)0x0;
          local_b8._4_4_ = (code *)ppuVar25;
          local_b0 = ppuVar18;
          local_ac._0_4_ = (undefined1 *)uVar27;
          FUN_0134bd64((uint *)local_90,local_90._4_4_);
          uVar22 = 3;
          goto LAB_01641994;
        case 7:
          if (uVar29 < 0x400000000) {
            uVar13 = 4;
            uVar10 = 0;
            puVar23 = &DAT_01d06228;
            goto LAB_01641d6c;
          }
          ppuVar25 = (uint **)*puVar11;
          iVar7 = FUN_016335e0(puVar11,uVar16);
          if (iVar7 == 0) {
            ppuVar18 = (uint **)0x0;
          }
          else {
            iVar7 = FUN_016335e0(puVar11,uVar16);
            ppuVar18 = (uint **)(uint)(iVar7 != -1);
          }
          local_90._4_4_ = &LAB_0141634c;
          local_90._0_4_ = (uint *)&local_d8;
          FUN_00664898(&local_b8,&DAT_00587d89,ppuVar21);
          uVar27 = 0x164192c;
          FUN_0134bd64((char *)local_b8,local_b8._4_4_);
          uVar22 = 7;
          goto LAB_01641978;
        case 8:
          local_70 = (uint **)0x0;
          local_74 = (uint **)0x8;
          local_78 = (uint **)0x0;
          local_64 = 0;
          local_184 = (uint **)0x8;
          iVar15 = 8;
          while( true ) {
            ppuVar3 = local_70;
            local_6c = uVar29;
            FUN_0162385c(&local_60,&local_6c);
            if (local_60 == -0x7fffffff) break;
            uVar28 = FUN_01623bf0(uVar27,ppuVar18);
            local_90._4_4_ = &LAB_0141634c;
            local_90._0_4_ = (uint *)&local_48;
            local_48 = uVar28;
            FUN_00664898(&local_b8,&DAT_005bca1c,&local_90);
            local_88 = local_b0;
            local_90 = local_b8;
            FUN_0160f56c(&local_b8,&local_60,&local_90);
            ppuVar25 = local_b0;
            uVar16 = local_b8._4_4_;
            uVar2 = local_90;
            uVar28 = local_b8;
            if ((char *)local_b8 != &DAT_80000000) {
LAB_01641afc:
              local_90 = uVar2;
              FUN_016404e8(&local_78);
              goto LAB_01641b2c;
            }
            uVar29 = FUN_01623bf0(local_b8._4_4_,local_b0);
            uVar12 = (undefined4)(uVar29 >> 0x20);
            uVar17 = (undefined4)uVar29;
            local_54 = uVar29;
            uVar6 = FUN_01623bc0(uVar16,ppuVar25);
            switch(uVar6) {
            case 0:
              FUN_0160f460(&local_b8,uVar17,uVar12);
              local_38._4_4_ = &LAB_0141634c;
              local_38._0_4_ = &local_54;
              FUN_00664898(&local_48,&DAT_00592e05,&local_38);
              ppuStack_30 = local_40;
              local_38 = local_48;
              FUN_0160f964(&local_90,&local_b8,&local_38);
              uVar2 = local_90;
              if ((uint *)local_90 == (uint *)&DAT_00000001) {
LAB_01641af0:
                local_90._4_4_ = (undefined1 *)((ulonglong)uVar2 >> 0x20);
                uVar28 = CONCAT44(local_88,local_90._4_4_);
                ppuVar25 = local_84;
                goto LAB_01641afc;
              }
              puVar19 = &DAT_80000000;
              break;
            case 1:
              FUN_0160f460(&local_b8,uVar17,uVar12);
              local_38._4_4_ = &LAB_0141634c;
              local_38._0_4_ = &local_54;
              FUN_00664898(&local_48,&DAT_005b4b3a,&local_38);
              ppuStack_30 = local_40;
              local_38 = local_48;
              FUN_0160f964(&local_90,&local_b8,&local_38);
              uVar2 = local_90;
              if ((uint *)local_90 == (uint *)&DAT_00000001) goto LAB_01641af0;
              puVar19 = &DAT_80000001;
              break;
            case 2:
              FUN_0160f460(&local_b8,uVar17,uVar12);
              local_38._4_4_ = &LAB_0141634c;
              local_38._0_4_ = &local_54;
              FUN_00664898(&local_48,&DAT_0059b3d4,&local_38);
              ppuStack_30 = local_40;
              local_38 = local_48;
              FUN_0160f964(&local_90,&local_b8,&local_38);
              uVar2 = local_90;
              if ((uint *)local_90 == (uint *)&DAT_00000001) goto LAB_01641af0;
              puVar19 = (undefined1 *)0x80000002;
              break;
            case 3:
              FUN_0160f460(&local_b8,uVar17,uVar12);
              local_38._4_4_ = &LAB_0141634c;
              local_38._0_4_ = &local_54;
              FUN_00664898(&local_48,&DAT_00597aaf,&local_38);
              ppuStack_30 = local_40;
              local_38 = local_48;
              FUN_0160f964(&local_90,&local_b8,&local_38);
              uVar2 = local_90;
              if ((uint *)local_90 == (uint *)&DAT_00000001) goto LAB_01641af0;
              puVar19 = (undefined1 *)0x80000003;
              break;
            case 4:
              FUN_0160f460(&local_b8,uVar17,uVar12);
              local_38._4_4_ = &LAB_0141634c;
              local_38._0_4_ = &local_54;
              FUN_00664898(&local_48,&DAT_005a4f9e,&local_38);
              ppuStack_30 = local_40;
              local_38 = local_48;
              FUN_0160f964(&local_90,&local_b8,&local_38);
              uVar2 = local_90;
              if ((uint *)local_90 == (uint *)&DAT_00000001) goto LAB_01641af0;
              puVar19 = &DAT_80000004;
              break;
            case 5:
              FUN_0160f460(&local_b8,uVar17,uVar12);
              local_38._4_4_ = &LAB_0141634c;
              local_38._0_4_ = &local_54;
              FUN_00664898(&local_48,&DAT_00572dec,&local_38);
              ppuStack_30 = local_40;
              local_38 = local_48;
              FUN_0160f964(&local_90,&local_b8,&local_38);
              uVar2 = local_90;
              if ((uint *)local_90 == (uint *)&DAT_00000001) goto LAB_01641af0;
              puVar19 = &DAT_80000005;
              break;
            default:
              local_4a = uVar6;
              FUN_01623ae4(&local_90,uVar16,ppuVar25);
              local_ac._0_4_ = &LAB_0141634c;
              local_b0 = (uint **)&local_54;
              local_b8._4_4_ = FUN_012fcf18;
              local_b8._0_4_ = (char *)&local_4a;
              FUN_00664898(&local_38,&DAT_005b3722,&local_b8);
              local_b0 = ppuStack_30;
              local_b8 = local_38;
              FUN_0160f810(&local_48,&local_90,&local_b8);
              uVar28 = CONCAT44(local_40,local_48._4_4_);
              ppuVar20 = local_40;
              ppuVar25 = local_3c;
              ppuVar21 = local_3c;
              uVar1 = local_48;
              uVar2 = local_90;
              if ((uint **)local_48 == (uint **)&DAT_80000000) goto LAB_01641afc;
              goto LAB_016415b8;
            case 7:
              FUN_0160f460(&local_b8,uVar17,uVar12);
              local_38._4_4_ = &LAB_0141634c;
              local_38._0_4_ = &local_54;
              FUN_00664898(&local_48,&DAT_00582d90,&local_38);
              ppuStack_30 = local_40;
              local_38 = local_48;
              FUN_0160f964(&local_90,&local_b8,&local_38);
              uVar2 = local_90;
              if ((uint *)local_90 == (uint *)&DAT_00000001) goto LAB_01641af0;
              puVar19 = (undefined1 *)0x80000006;
              break;
            case 8:
              FUN_0160f460(&local_b8,uVar17,uVar12);
              local_38._4_4_ = &LAB_0141634c;
              local_38._0_4_ = &local_54;
              FUN_00664898(&local_48,&DAT_005b179b,&local_38);
              ppuStack_30 = local_40;
              local_38 = local_48;
              FUN_0160f964(&local_90,&local_b8,&local_38);
              uVar2 = local_90;
              if ((uint *)local_90 == (uint *)&DAT_00000001) goto LAB_01641af0;
              puVar19 = (undefined1 *)0x80000007;
            }
            ppuVar20 = local_88;
            ppuVar21 = local_84;
            uVar1 = CONCAT44(&DAT_80000000,puVar19);
LAB_016415b8:
            uVar29 = local_6c;
            if (ppuVar3 == local_78) {
              FUN_015f5b78(&local_78);
              local_184 = local_74;
              uVar29 = local_6c;
            }
            local_70 = (uint **)((int)ppuVar3 + 1);
            *(undefined8 *)(local_184 + (int)ppuVar3 * 4) = uVar1;
            *(undefined4 *)((int)local_184 + iVar15) = ppuVar20;
            ((undefined4 *)((int)local_184 + iVar15))[1] = ppuVar21;
            iVar15 = iVar15 + 0x10;
          }
          uVar22 = 0xc;
          goto LAB_01641990;
        case 9:
          if (uVar29 < 0x400000000) {
            uVar13 = 4;
            uVar10 = 0;
            puVar23 = &DAT_01d06118;
            goto LAB_01641d6c;
          }
          ppuVar25 = (uint **)*puVar11;
          iVar7 = FUN_016242e4(puVar11,uVar16);
          if (iVar7 == 0) {
            ppuVar18 = (uint **)0x0;
          }
          else {
            iVar7 = FUN_016242e4(puVar11,uVar16);
            ppuVar18 = (uint **)(uint)(iVar7 != -1);
          }
          local_90._4_4_ = &LAB_0141634c;
          local_90._0_4_ = (uint *)&local_d8;
          FUN_00664898(&local_b8,&DAT_005a04ec,ppuVar21);
          uVar27 = 0x1641974;
          FUN_0134bd64((char *)local_b8,local_b8._4_4_);
          uVar22 = 8;
LAB_01641978:
          uVar26 = 0;
          local_f4 = CONCAT44(ppuVar21,uVar27);
          break;
        case 10:
          FUN_016277b0(&local_b8,puVar11,uVar16);
          local_38._4_4_ = &LAB_0141634c;
          local_38._0_4_ = &local_d8;
          FUN_00664898(&local_48,&DAT_0057eb89,&local_38);
          ppuStack_30 = local_40;
          local_38 = local_48;
          FUN_0160f880(&local_90,&local_b8,&local_38);
          uVar2 = local_90;
          if ((uint *)local_90 == (uint *)&DAT_00000001) {
LAB_01641b80:
            local_90._4_4_ = (undefined1 *)((ulonglong)uVar2 >> 0x20);
            uVar28 = CONCAT44(local_88,local_90._4_4_);
            ppuVar25 = local_84;
            local_90 = uVar2;
            goto LAB_01641b2c;
          }
          uVar22 = 9;
          goto LAB_01641858;
        case 0xb:
          FUN_016277b0(&local_b8,puVar11,uVar16);
          local_38._4_4_ = &LAB_0141634c;
          local_38._0_4_ = &local_d8;
          FUN_00664898(&local_48,&DAT_005ba421,&local_38);
          ppuStack_30 = local_40;
          local_38 = local_48;
          FUN_0160f880(&local_90,&local_b8,&local_38);
          uVar2 = local_90;
          if ((uint *)local_90 == (uint *)&DAT_00000001) goto LAB_01641b80;
          uVar22 = 10;
LAB_01641858:
          ppuVar25 = (uint **)&DAT_01d06328;
          uVar26 = (uint)local_88 & 0xffffff00;
          ppuVar18 = local_88;
          local_f4 = CONCAT44(local_80,local_84);
          break;
        case 0xc:
          iVar15 = 0;
          local_184 = (uint **)0x4;
          local_70 = (uint **)0x0;
          local_74 = (uint **)0x4;
          local_78 = (uint **)0x0;
          local_64 = 0;
          while( true ) {
            ppuVar3 = local_70;
            local_6c = uVar29;
            FUN_0162385c(&local_60,&local_6c);
            if (local_60 == -0x7fffffff) break;
            uVar28 = FUN_01623bf0(uVar27,ppuVar18);
            local_90._4_4_ = &LAB_0141634c;
            local_90._0_4_ = (uint *)&local_48;
            local_48 = uVar28;
            FUN_00664898(&local_b8,&DAT_0059cc6e,&local_90);
            local_88 = local_b0;
            local_90 = local_b8;
            FUN_0160f56c(&local_b8,&local_60,&local_90);
            ppuVar21 = local_b0;
            uVar16 = local_b8._4_4_;
            ppuVar25 = local_b0;
            uVar28 = local_b8;
            uVar2 = local_ac;
            if ((char *)local_b8 != &DAT_80000000) {
LAB_01641b24:
              local_ac = uVar2;
              FUN_016404b8(&local_78);
              goto LAB_01641b2c;
            }
            uVar29 = FUN_01623bf0(local_b8._4_4_,local_b0);
            puVar11 = (undefined4 *)uVar29;
            local_54 = uVar29;
            uVar6 = FUN_01623bc0(uVar16,ppuVar21);
            if (uVar6 == 1) {
              if (uVar29 < 0x400000000) {
                uVar13 = 4;
                uVar10 = 0;
LAB_01641c18:
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar10,uVar13,(int)(uVar29 >> 0x20),&DAT_01d061a8);
              }
              if (uVar29 < 0x800000000) {
                uVar13 = 8;
                uVar10 = 4;
                goto LAB_01641c18;
              }
              if (uVar29 < 0xc00000000) {
                uVar13 = 0xc;
                uVar10 = 8;
                goto LAB_01641c18;
              }
              if (uVar29 < 0xe00000000) {
                uVar13 = 0xe;
                uVar10 = 0xc;
                goto LAB_01641c18;
              }
              uVar17 = *puVar11;
              uVar16 = puVar11[1];
              ppuVar25 = (uint **)puVar11[2];
              uVar26 = FUN_016401dc(*(ushort *)(puVar11 + 3) << 8 | *(ushort *)(puVar11 + 3) >> 8);
              local_48._4_4_ = &LAB_0141634c;
              local_48._0_4_ = (uint **)&local_54;
              FUN_00664898(&local_90,&DAT_005a13ad,&local_48);
              local_b8._0_4_ = (char *)uVar17;
              local_b8._4_4_ = (code *)uVar16;
              local_b0 = ppuVar25;
              FUN_0134bd64((uint *)local_90,local_90._4_4_);
              uVar16 = 0;
              ppuVar25 = local_b0;
              uVar28 = CONCAT44(local_b8._4_4_,uVar17);
              uVar2 = local_ac;
            }
            else {
              local_4a = uVar6;
              FUN_01623ae4(&local_90,uVar16,ppuVar21);
              local_ac._0_4_ = &LAB_0141634c;
              local_b0 = (uint **)&local_54;
              local_b8._4_4_ = FUN_012fcf18;
              local_b8._0_4_ = (char *)&local_4a;
              FUN_00664898(&local_38,&DAT_005b3722,&local_b8);
              local_b0 = ppuStack_30;
              local_b8 = local_38;
              FUN_0160f810(&local_48,&local_90,&local_b8);
              uVar2 = CONCAT44(local_ac._4_4_,(undefined1 *)local_ac);
              uVar28 = CONCAT44(local_40,local_48._4_4_);
              uVar26 = (uint)local_3c & 0xffff;
              if ((uint **)local_48 == (uint **)&DAT_80000000) {
                ppuVar25 = local_3c;
                goto LAB_01641b24;
              }
              uVar16 = 1;
              ppuVar25 = local_40;
              local_ac._2_2_ = local_3c._2_2_;
              uVar28 = local_48;
            }
            uVar24 = (uint)local_ac._2_2_;
            uVar29 = local_6c;
            local_ac = uVar2;
            if (ppuVar3 == local_78) {
              FUN_0161d664(&local_78);
              local_184 = local_74;
              uVar29 = local_6c;
            }
            puVar11 = (undefined4 *)((int)local_184 + iVar15);
            *puVar11 = uVar16;
            iVar15 = iVar15 + 0x14;
            *(undefined8 *)(puVar11 + 1) = uVar28;
            puVar11[4] = (uVar26 & 0xffff) + uVar24 * 0x10000;
            puVar11[3] = ppuVar25;
            local_70 = (uint **)((int)ppuVar3 + 1);
          }
          uVar22 = 0xb;
LAB_01641990:
          pppuVar8 = &local_74;
          ppuVar25 = local_78;
          goto LAB_01641994;
        case 0xd:
          if (uVar29 < 0x2000000000) {
            uVar13 = 0x20;
            uVar10 = 0;
            puVar23 = &DAT_01d06218;
            goto LAB_01641d6c;
          }
          local_60 = CONCAT22(CONCAT11(local_60._3_1_,*(undefined1 *)((int)puVar11 + 2)),
                              *(undefined2 *)puVar11);
          ppuVar18 = *(uint ***)((int)puVar11 + 7);
          ppuVar25 = *(uint ***)((int)puVar11 + 3);
          FUN_01bed4e2(ppuVar21,(int)puVar11 + 0xb,0x15);
          local_38._4_4_ = &LAB_0141634c;
          local_38._0_4_ = &local_d8;
          FUN_00664898(&local_48,&DAT_005a6328,&local_38);
          *(undefined1 *)(puVar14 + 1) = local_60._2_1_;
          *puVar14 = (undefined2)local_60;
          local_b8._0_4_ = (char *)((uint)(char *)local_b8 & 0xffffff00);
          local_a4 = local_88;
          ppuStack_a0 = local_84;
          uStack_9c = local_80;
          local_98 = uStack_7c;
          local_b8._4_4_ = (code *)ppuVar25;
          local_b0 = ppuVar18;
          local_ac = local_90;
          FUN_0134bd64((uint **)local_48,local_48._4_4_);
          local_ba = *(undefined1 *)(puVar14 + 1);
          local_bc = *puVar14;
          uVar22 = 1;
          uVar26 = (uint)local_b0 & 0xffffff00;
          local_d0 = CONCAT44(ppuStack_a0,local_a4);
          uStack_c8 = uStack_9c;
          local_c4 = CONCAT31(local_c4._1_3_,(undefined1)local_98);
          ppuVar18 = local_b0;
          local_f4 = local_ac;
          break;
        default:
          local_60 = CONCAT22(local_60._2_2_,uVar5);
          FUN_01623ae4(ppuVar21,uVar27,ppuVar18);
          local_ac._0_4_ = &LAB_0141634c;
          local_b0 = (uint **)&local_d8;
          local_b8._4_4_ = FUN_012fcf18;
          local_b8._0_4_ = (char *)&local_60;
          FUN_00664898(&local_38,&DAT_005b3722,&local_b8);
          local_b0 = ppuStack_30;
          local_b8 = local_38;
          FUN_0160f810(&local_48,&local_90,&local_b8);
          if ((uint **)local_48 == (uint **)&DAT_80000000) {
            ppuVar25 = local_3c;
            uVar28 = CONCAT44(local_40,local_48._4_4_);
            goto LAB_01641b2c;
          }
          uVar22 = 0xd;
          pppuVar8 = (uint ***)((int)&local_48 + 4);
          ppuVar21 = local_3c;
          ppuVar25 = (uint **)local_48;
LAB_01641994:
          uVar26 = (uint)*pppuVar8 & 0xffffff00;
          ppuVar18 = *pppuVar8;
          local_f4 = CONCAT44(ppuVar21,pppuVar8[1]);
        }
        ppuVar21 = local_134;
        local_102 = local_ba;
        local_104 = local_bc;
        uStack_110 = uStack_c8;
        uStack_10c = local_c4;
        uStack_108 = uStack_c0;
        *(undefined1 *)((undefined2 *)((uint)&local_100 | 1) + 1) = local_ba;
        *(undefined2 *)((uint)&local_100 | 1) = local_bc;
        uStack_e4 = uStack_c8;
        uStack_e0 = local_c4;
        uStack_dc = uStack_c0;
        local_f8 = (uint **)(uVar26 | (uint)ppuVar18 & 0xff);
        local_100._0_4_ = (undefined8 *)CONCAT31(local_100._1_3_,uVar22);
        local_100._4_4_ = (code *)ppuVar25;
        uVar28 = local_130;
        local_118 = local_d0;
        local_ec = local_d0;
        if (local_134 == local_13c) {
          FUN_0161d694(&local_13c);
          uVar28 = local_130;
        }
        local_134 = (uint **)((int)ppuVar21 + 1);
        puVar11 = (undefined4 *)(local_138 + (int)ppuVar21 * 0x28);
        *puVar11 = (undefined8 *)local_100;
        puVar11[1] = local_100._4_4_;
        puVar11[2] = local_f8;
        *(undefined8 *)(puVar11 + 3) = local_f4;
        *(undefined8 *)(puVar11 + 5) = local_ec;
        puVar11[7] = uStack_e4;
        puVar11[8] = uStack_e0;
        puVar11[9] = uStack_dc;
      }
      iVar7 = local_168;
      local_140 = ppuVar25;
      local_148 = uVar28;
      if (local_168 == local_170) {
        FUN_018c4418(&local_170);
      }
      puVar9 = (undefined8 *)(local_16c + iVar7 * 0xc);
      *puVar9 = uVar28;
      *(uint ***)(puVar9 + 1) = ppuVar25;
      local_168 = iVar7 + 1;
    }
    else if (1 < DAT_01d51b00) {
      uVar5 = FUN_01623bc0(uVar10,ppuVar25);
      local_90._0_4_ = (uint *)CONCAT22(local_90._2_2_,uVar5);
      local_100._4_4_ = FUN_012fcf18;
      local_ac._0_4_ = &DAT_0000002a;
      local_ac._4_4_ = &DAT_01d062f8;
      local_b8._4_4_ = (code *)&DAT_0000002a;
      local_b0 = (uint **)0x4bfbbb;
      local_b8._0_4_ = "netlink_packet_route::link::sriov::vf_list";
      local_100._0_4_ = &local_90;
      FUN_0161d588(&DAT_005adf22,&local_100,2,&local_b8);
    }
  }
LAB_01641bc4:
  *param_1 = 1;
  *(undefined8 *)(param_1 + 1) = uVar28;
  param_1[3] = ppuVar25;
  FUN_016310e8(&local_170);
  return;
}

