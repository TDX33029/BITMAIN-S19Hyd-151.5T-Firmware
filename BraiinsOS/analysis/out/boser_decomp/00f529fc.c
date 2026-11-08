// FUN_00f529fc @ 00f529fc size=4424 calls_out=35 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | user_agents | apisd; | first_access_time | stats | BosminerSender: buffer lock poisoned; dropping messageevent open/boser/boser/src/bosminer/sender.rs:65

/* WARNING: Removing unreachable block (ram,0x00f53ae0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00f529fc(int param_1,undefined4 param_2)

{
  char *pcVar1;
  uint *******pppppppuVar2;
  uint *************pppppppppppppuVar3;
  char cVar4;
  uint uVar5;
  uint ************ppppppppppppuVar6;
  int *piVar7;
  uint **********ppppppppppuVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  uint ***********pppppppppppuVar13;
  uint ***********pppppppppppuVar14;
  int iVar15;
  uint *puVar16;
  uint ***********pppppppppppuVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  uint ************ppppppppppppuVar21;
  uint *************unaff_r8;
  uint ************ppppppppppppuVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  uint ******local_158;
  uint *local_144;
  uint ************local_140;
  uint ************local_13c;
  uint *************local_138;
  uint ******local_134;
  undefined4 local_130;
  uint local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint ************local_100;
  uint ************ppppppppppppuStack_fc;
  uint *************pppppppppppppuStack_f8;
  uint ******ppppppuStack_f4;
  undefined4 uStack_f0;
  uint local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint ************local_c4;
  uint ***********local_c0;
  uint *************local_bc;
  uint ***********local_b8;
  uint ************local_b4;
  uint *************local_b0;
  uint *local_a8 [2];
  uint *local_a0;
  uint ************local_9c;
  uint ************ppppppppppppuStack_98;
  uint *************pppppppppppppuStack_94;
  uint ******ppppppuStack_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint ***********local_60;
  uint ************local_5c;
  uint *************local_58;
  uint ************local_54;
  uint ************local_50;
  uint *******local_4c;
  uint *************local_48;
  uint ************local_44;
  uint ***********local_40;
  uint ************local_3c;
  uint *************local_38;
  uint *************local_30;
  uint ************local_2c;
  uint *************local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar25 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar10 = (undefined4)((ulonglong)uVar25 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x3c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x20);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19754);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19754);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x38)) {
    case 0:
      piVar7 = *(int **)(param_1 + 0x30);
      goto LAB_00f52b14;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23270);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23270);
    case 3:
      piVar7 = *(int **)(param_1 + 0x34);
      goto LAB_00f52b18;
    }
  }
  do {
    *(undefined1 *)(param_1 + 0x38) = 0;
    piVar7 = (int *)(param_1 + 0x24);
    *(int **)(param_1 + 0x30) = piVar7;
LAB_00f52b14:
    *(int **)(param_1 + 0x34) = piVar7;
LAB_00f52b18:
    iVar18 = *piVar7;
    uVar5 = FUN_019ec670(param_2);
    uVar23 = 0;
    if ((uVar5 & 0xff) != 2) {
      unaff_r8 = (uint *************)((uVar5 & 0xffffff) >> 0x10);
      uVar23 = (uVar5 & 0xffffff) >> 8;
      if ((uVar5 & 1) != 0) {
        iVar15 = 1;
        goto LAB_00f53550;
      }
    }
    FUN_0069b5a4(local_a8,iVar18 + 0x70,iVar18 + 0x20);
    if (((uint)local_a8[0] & 1) == 0) {
      FUN_019f79e0(iVar18 + 0x40,param_2);
      FUN_0069b5a4(local_a8,iVar18 + 0x70,iVar18 + 0x20);
      if (((uint)local_a8[0] & 1) != 0) {
        if (local_a0 != (uint *)0x0) {
          local_144 = local_a0;
          FUN_019f8c54(iVar18 + 0x80,1);
          goto LAB_00f52be8;
        }
        DataMemoryBarrier(0xb);
        local_144 = (uint *)0x0;
        if (*(uint *)(iVar18 + 0x94) != *(uint *)(iVar18 + 0x90) >> 1) {
          puVar12 = &DAT_01d2e17c;
          goto LAB_00f53ac0;
        }
        goto LAB_00f52c84;
      }
      iVar15 = 1;
      if ((*(char *)(iVar18 + 0x7c) == '\x01') &&
         (DataMemoryBarrier(0xb), *(uint *)(iVar18 + 0x94) == *(uint *)(iVar18 + 0x90) >> 1)) {
        local_144 = (uint *)0x0;
        goto LAB_00f52c84;
      }
    }
    else {
      if (local_a0 == (uint *)0x0) {
        DataMemoryBarrier(0xb);
        local_144 = (uint *)0x0;
        if (*(uint *)(iVar18 + 0x94) != *(uint *)(iVar18 + 0x90) >> 1) {
          puVar12 = &DAT_01d2e18c;
LAB_00f53ac0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,puVar12);
        }
      }
      else {
        local_144 = local_a0;
        FUN_019f8c54(iVar18 + 0x80,1);
LAB_00f52be8:
        local_140 = local_9c;
        local_13c = ppppppppppppuStack_98;
        local_138 = pppppppppppppuStack_94;
        local_134 = ppppppuStack_90;
        local_130 = uStack_8c;
        local_12c = local_88;
        uStack_128 = uStack_84;
        uStack_124 = uStack_80;
        uStack_120 = uStack_7c;
        uStack_11c = uStack_78;
        local_118 = local_74;
        uStack_114 = uStack_70;
        uStack_110 = uStack_6c;
        uStack_10c = uStack_68;
        uStack_108 = uStack_64;
      }
LAB_00f52c84:
      uVar23 = 0;
      iVar15 = 0;
    }
    FUN_019edbc4(uVar23,unaff_r8);
    if (iVar15 != 0) {
LAB_00f53550:
      *(undefined1 *)(param_1 + 0x38) = 3;
      *(undefined1 *)(param_1 + 0x3c) = 3;
      FUN_019ec558((int)uVar25,uVar10);
      return iVar15;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    local_100 = local_140;
    ppppppppppppuStack_fc = local_13c;
    pppppppppppppuStack_f8 = local_138;
    ppppppuStack_f4 = local_134;
    uStack_f0 = local_130;
    local_ec = local_12c;
    uStack_e8 = uStack_128;
    uStack_e4 = uStack_124;
    uStack_e0 = uStack_120;
    uStack_dc = uStack_11c;
    local_d8 = local_118;
    uStack_d4 = uStack_114;
    uStack_d0 = uStack_110;
    uStack_cc = uStack_10c;
    uStack_c8 = uStack_108;
    if (local_144 == (uint *)0x0) {
      FUN_00f29fc8(param_1 + 0x28);
      FUN_00d32150(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x3c) = 1;
      FUN_019ec558((int)uVar25,uVar10);
      local_a8[0] = (uint *)0x2;
      FUN_00f316a4(param_1,local_a8);
      return 0;
    }
    local_a8[0] = local_144;
    puVar11 = (undefined4 *)((uint)local_a8 | 4);
    *puVar11 = local_140;
    puVar11[1] = local_13c;
    puVar11[2] = local_138;
    puVar11[3] = local_134;
    puVar11[4] = local_130;
    puVar11[5] = local_12c;
    puVar11[6] = uStack_128;
    puVar11[7] = uStack_124;
    puVar11[8] = uStack_120;
    puVar11[9] = uStack_11c;
    puVar11[10] = local_118;
    puVar11[0xb] = uStack_114;
    puVar11[0xc] = uStack_110;
    puVar11[0xd] = uStack_10c;
    puVar11[0xe] = uStack_108;
    ppppppppppppuVar6 = (uint ************)thunk_FUN_01be5118(0x80);
    if (ppppppppppppuVar6 == (uint ************)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x80);
    }
    local_60 = (uint ***********)&local_30;
    local_28 = (uint *************)0x0;
    local_30 = (uint *************)&DAT_00000080;
    local_2c = ppppppppppppuVar6;
    FUN_01ac6cbc(local_60,"{",1);
    local_50 = &local_60;
    local_54 = (uint ************)0x200;
    FUN_012650dc(&local_140,local_60,"user_agents",0xb);
    if ((char)local_140 == '\x04') {
      FUN_01ac6cbc(local_60,":",1);
      pppppppppppuVar13 = local_60;
      ppppppppppppuVar22 = local_9c;
      puVar20 = local_144 + 1;
      uVar23 = *local_144;
      FUN_01ac6cbc(local_60,"{",1);
      unaff_r8 = (uint *************)(~uVar23 & 0x80808080);
      bVar24 = ppppppppppppuVar22 != (uint ************)0x0;
      iVar18 = 0x100;
      if (!bVar24) {
        iVar18 = 0;
        FUN_01ac6cbc(pppppppppppuVar13,"}",1);
      }
      puVar16 = local_144;
      for (; ppppppppppppuVar22 != (uint ************)0x0;
          ppppppppppppuVar22 = (uint ************)((int)ppppppppppppuVar22 + -1)) {
        puVar19 = puVar20;
        if (unaff_r8 == (uint *************)0x0) {
          do {
            puVar20 = puVar19 + 1;
            uVar23 = *puVar19;
            puVar16 = puVar16 + -0x48;
            puVar19 = puVar20;
          } while ((uVar23 & 0x80808080) == 0x80808080);
          unaff_r8 = (uint *************)(uVar23 & 0x80808080 ^ 0x80808080);
        }
        if (!bVar24) {
          FUN_01ac6cbc(local_60,",",1);
        }
        uVar23 = LZCOUNT((int)unaff_r8 << 0x18 | ((uint)unaff_r8 >> 8 & 0xff) << 0x10 |
                         ((uint)unaff_r8 >> 0x10 & 0xff) << 8 | (uint)unaff_r8 >> 0x18);
        iVar18 = (uVar23 >> 3) * -8 - (uVar23 >> 3);
        FUN_012650dc(&local_140,local_60,puVar16[iVar18 * 2 + -0x11],puVar16[iVar18 * 2 + -0x10]);
        if ((char)local_140 != '\x04') {
          ppppppppppppuVar6 = (uint ************)FUN_01966f50(local_140,local_13c);
          goto LAB_00f531e4;
        }
        FUN_01ac6cbc(local_60,":",1);
        FUN_01ac6cbc(local_60,"{",1);
        local_3c = &local_60;
        local_40 = (uint ***********)&DAT_00000100;
        ppppppppppppuVar6 =
             (uint ************)FUN_0069863c(&local_40,"apisd,",puVar16 + iVar18 * 2 + -0xe);
        if (ppppppppppppuVar6 != (uint ************)0x0) goto LAB_00f531e4;
        if ((char)local_40 != '\0') {
LAB_00f52f60:
          local_140 = (uint ************)&DAT_0000000a;
          ppppppppppppuVar6 = (uint ************)FUN_01966fbc(&local_140,0,0);
          goto LAB_00f531e4;
        }
        ppppppppppppuVar6 =
             (uint ************)
             FUN_00698a00(&local_40,"first_access_time",0x11,puVar16 + iVar18 * 2 + -6);
        if (ppppppppppppuVar6 != (uint ************)0x0) goto LAB_00f531e4;
        if ((char)local_40 != '\0') goto LAB_00f52f60;
        ppppppppppppuVar6 =
             (uint ************)FUN_00698a00(&local_40,&DAT_00569748,0x10,puVar16 + iVar18 * 2 + -3)
        ;
        if (ppppppppppppuVar6 != (uint ************)0x0) goto LAB_00f531e4;
        if ((((uint)local_40 & 0xff00) != 0) && (((uint)local_40 & 1) == 0)) {
          FUN_01ac6cbc(*local_3c,"}",1);
        }
        unaff_r8 = (uint *************)((uint)((int)unaff_r8 + -1) & (uint)unaff_r8);
        iVar18 = 0x200;
        bVar24 = false;
      }
      if (iVar18 != 0) {
        FUN_01ac6cbc(local_60,"}",1);
      }
      ppppppppppppuVar6 = (uint ************)FUN_00697f28(&local_54,"stats",&local_88);
      if (ppppppppppppuVar6 != (uint ************)0x0) goto LAB_00f531e4;
      if ((((uint)local_54 & 0xff00) != 0) && (((uint)local_54 & 1) == 0)) {
        FUN_01ac6cbc(*local_50,"}",1);
      }
      pppppppppppppuVar3 = local_28;
      ppppppppppppuVar6 = local_2c;
      unaff_r8 = local_30;
      if (local_30 == (uint *************)&DAT_80000000) goto LAB_00f531f0;
      iVar18 = *(int *)(param_1 + 0x28);
      FUN_01656cb0(&local_140,iVar18 + 0x18);
      ppppppppppppuVar22 = local_13c;
      local_158 = (uint ******)((uint)local_158 & 0xffffff00 | 8);
      if (local_140 == (uint ************)0x0) {
        uVar23 = (uint)local_138 & 0xff;
        ppppppppppppuVar21 = local_13c + 2;
        if ((uint ***********)0x1f3 < local_13c[5]) {
          pppppppppppuVar14 = local_13c[4];
          local_13c[5] = (uint ***********)((int)local_13c[5] + -1);
          pppppppppppuVar17 = (uint ***********)((int)pppppppppppuVar14 + 1);
          ppppppppppuVar8 = local_13c[3][(int)pppppppppppuVar14 * 4];
          pppppppppppuVar13 = (uint ***********)((int)pppppppppppuVar17 - (int)local_13c[2]);
          if (pppppppppppuVar17 < local_13c[2]) {
            pppppppppppuVar13 = pppppppppppuVar17;
          }
          local_13c[4] = pppppppppppuVar13;
          if (ppppppppppuVar8 != (uint **********)&DAT_80000000) {
            FUN_019bb7e0(ppppppppppuVar8,(local_13c[3] + (int)pppppppppppuVar14 * 4)[1]);
          }
          if ((DAT_01d50f88 < 4) &&
             (((DAT_01d4bb10 - 1 < 2 ||
               ((DAT_01d4bb10 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4bb08), cVar4 != '\0')))) &&
              (iVar15 = FUN_01aaa278(DAT_01d4bb08), iVar15 != 0)))) {
            if (*(uint *************)(DAT_01d4bb08 + 0x20) == (uint ************)0x0) {
LAB_00f53b9c:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c11308);
            }
            local_138 = *(uint **************)(DAT_01d4bb08 + 0x24);
            local_134 = *(uint *******)(DAT_01d4bb08 + 0x28);
            local_50 = (uint ************)&local_48;
            local_58 = (uint *************)(DAT_01d4bb08 + 0x1c);
            local_140 = *local_58;
            local_54 = (uint ************)&local_140;
            local_130 = 0;
            local_5c = (uint ************)&DAT_00000001;
            local_48 = (uint *************)0x3ec2b6;
            local_4c = (uint *******)&DAT_01d2ea4c;
            local_44 = (uint ************)0x67;
            local_13c = *(uint *************)(DAT_01d4bb08 + 0x20);
            local_60 = (uint ***********)&local_54;
            FUN_01aaaecc(DAT_01d4bb08,&local_60);
            iVar15 = DAT_01d4bb08;
            if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
              local_3c = *(uint *************)(DAT_01d4bb08 + 0x14);
              local_38 = *(uint **************)(DAT_01d4bb08 + 0x18);
              local_40 = (uint ***********)0x2;
              DataMemoryBarrier(0xb);
              puVar11 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar11 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar9 = (*(code *)puVar11[3])(pcVar1);
              if (iVar9 != 0) {
                local_30 = (uint *************)local_40;
                local_2c = local_3c;
                local_28 = local_38;
                FUN_01aaa328(iVar15,pcVar1,puVar11[4],&local_30,&local_60);
              }
            }
          }
          else {
            iVar15 = DAT_01d4bb08;
            if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
              local_5c = *(uint *************)(DAT_01d4bb08 + 0x14);
              local_58 = *(uint **************)(DAT_01d4bb08 + 0x18);
              local_60 = (uint ***********)0x2;
              DataMemoryBarrier(0xb);
              puVar11 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar11 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar9 = (*(code *)puVar11[3])();
              if (iVar9 != 0) {
                if (*(uint *************)(DAT_01d4bb08 + 0x20) == (uint ************)0x0)
                goto LAB_00f53b9c;
                local_40 = (uint ***********)&local_140;
                local_138 = *(uint **************)(DAT_01d4bb08 + 0x24);
                local_134 = *(uint *******)(DAT_01d4bb08 + 0x28);
                local_3c = (uint ************)&local_48;
                local_54 = &local_40;
                local_130 = 0;
                local_50 = (uint ************)&DAT_00000001;
                local_48 = (uint *************)0x3ec2b6;
                local_38 = (uint *************)&DAT_01d2ea4c;
                local_44 = (uint ************)0x67;
                local_30 = (uint *************)local_60;
                local_2c = local_5c;
                local_28 = local_58;
                local_140 = (uint ************)*(uint ************)(DAT_01d4bb08 + 0x1c);
                local_13c = *(uint *************)(DAT_01d4bb08 + 0x20);
                local_4c = (uint *******)(DAT_01d4bb08 + 0x1c);
                FUN_01aaa328(iVar15,pcVar1,puVar11[4],&local_30,&local_54);
              }
            }
          }
        }
        local_138 = pppppppppppppuVar3;
        local_13c = ppppppppppppuVar6;
        local_140 = (uint ************)unaff_r8;
        local_134 = local_158;
        FUN_009d2b00(ppppppppppppuVar21,&local_140);
        FUN_019e0044(iVar18 + 8);
        FUN_00a97e8c(ppppppppppppuVar22,uVar23);
      }
      else {
        FUN_00a97e8c(local_13c,(uint)local_138 & 0xff);
        if (((DAT_01d50f88 < 5) &&
            ((DAT_01d4bb04 - 1 < 2 ||
             ((DAT_01d4bb04 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4bafc), cVar4 != '\0')))))) &&
           (iVar18 = FUN_01aaa278(DAT_01d4bafc), iVar18 != 0)) {
          if (*(uint *************)(DAT_01d4bafc + 0x20) == (uint ************)0x0) {
LAB_00f53b80:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c11318);
          }
          local_138 = *(uint **************)(DAT_01d4bafc + 0x24);
          local_134 = *(uint *******)(DAT_01d4bafc + 0x28);
          local_50 = (uint ************)&local_48;
          local_58 = (uint *************)(DAT_01d4bafc + 0x1c);
          local_140 = *local_58;
          local_5c = (uint ************)&DAT_00000001;
          local_130 = 0;
          local_4c = (uint *******)&DAT_01d2ea4c;
          local_44 = (uint ************)&DAT_0000006d;
          local_48 = (uint *************)0x3ec2e9;
          local_13c = *(uint *************)(DAT_01d4bafc + 0x20);
          local_60 = (uint ***********)&local_54;
          local_54 = (uint ************)&local_140;
          FUN_01aaaecc(DAT_01d4bafc,&local_60);
          iVar18 = DAT_01d4bafc;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_3c = *(uint *************)(DAT_01d4bafc + 0x14);
            local_38 = *(uint **************)(DAT_01d4bafc + 0x18);
            local_40 = (uint ***********)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar11 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar15 = (*(code *)puVar11[3])(pcVar1,&local_40);
            if (iVar15 != 0) {
              local_30 = (uint *************)local_40;
              local_2c = local_3c;
              local_28 = local_38;
              FUN_01aaa328(iVar18,pcVar1,puVar11[4],&local_30,&local_60);
            }
          }
        }
        else {
          iVar18 = DAT_01d4bafc;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_5c = *(uint *************)(DAT_01d4bafc + 0x14);
            local_58 = *(uint **************)(DAT_01d4bafc + 0x18);
            local_60 = (uint ***********)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar11 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar15 = (*(code *)puVar11[3])(pcVar1);
            if (iVar15 != 0) {
              if (*(uint *************)(DAT_01d4bafc + 0x20) == (uint ************)0x0)
              goto LAB_00f53b80;
              local_54 = &local_40;
              local_138 = *(uint **************)(DAT_01d4bafc + 0x24);
              local_134 = *(uint *******)(DAT_01d4bafc + 0x28);
              local_3c = (uint ************)&local_48;
              local_130 = 0;
              local_50 = (uint ************)&DAT_00000001;
              local_38 = (uint *************)&DAT_01d2ea4c;
              local_48 = (uint *************)0x3ec2e9;
              local_44 = (uint ************)&DAT_0000006d;
              local_30 = (uint *************)local_60;
              local_2c = local_5c;
              local_28 = local_58;
              local_140 = *(uint *************)(DAT_01d4bafc + 0x1c);
              local_13c = *(uint *************)(DAT_01d4bafc + 0x20);
              local_4c = (uint *******)(DAT_01d4bafc + 0x1c);
              local_40 = (uint ***********)&local_140;
              FUN_01aaa328(iVar18,pcVar1,puVar11[4],&local_30,&local_54);
            }
          }
        }
        FUN_019bb7e0(unaff_r8,ppppppppppppuVar6);
      }
    }
    else {
      ppppppppppppuVar6 = (uint ************)FUN_01966f50(local_140,local_13c);
LAB_00f531e4:
      FUN_019bb7e0(local_30,local_2c);
LAB_00f531f0:
      local_c4 = ppppppppppppuVar6;
      if ((DAT_01d50f88 < 4) &&
         ((DAT_01d4c638 - 1 < 2 ||
          ((DAT_01d4c638 != 0 && (cVar4 = FUN_01aaafa8(&switchD_006705fc::caseD_4), cVar4 != '\0')))
          ))) {
        iVar18 = FUN_01aaa278(switchD_006705fc::caseD_4);
        if (iVar18 == 0) goto LAB_00f53394;
        if ((uint ************)switchD_006705fc::caseD_4[8] == (uint ************)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19764);
        }
        local_50 = &local_c0;
        local_138 = (uint *************)switchD_006705fc::caseD_4[9];
        local_134 = switchD_006705fc::caseD_4[10];
        local_58 = (uint *************)(switchD_006705fc::caseD_4 + 7);
        local_140 = *local_58;
        local_54 = (uint ************)&local_140;
        local_60 = (uint ***********)&local_54;
        local_130 = 0;
        local_5c = (uint ************)&DAT_00000001;
        local_bc = (uint *************)&local_48;
        local_48 = &local_c4;
        local_4c = (uint *******)&DAT_01d2ea4c;
        local_c0 = (uint ***********)&DAT_00598810;
        local_44 = (uint ************)&LAB_019674bc;
        local_13c = (uint ************)switchD_006705fc::caseD_4[8];
        FUN_01aaaecc(switchD_006705fc::caseD_4,&local_60);
        pppppppuVar2 = switchD_006705fc::caseD_4;
        unaff_r8 = &local_13c;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_3c = (uint ************)switchD_006705fc::caseD_4[5];
          local_38 = (uint *************)switchD_006705fc::caseD_4[6];
          local_40 = (uint ***********)0x2;
          DataMemoryBarrier(0xb);
          puVar11 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar11 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar18 = (*(code *)puVar11[3])(pcVar1,&local_40);
          unaff_r8 = (uint *************)pppppppuVar2;
          if (iVar18 != 0) {
            local_30 = (uint *************)local_40;
            local_2c = local_3c;
            local_28 = local_38;
            FUN_01aaa328(pppppppuVar2,pcVar1,puVar11[4],&local_30,&local_60);
          }
        }
      }
      else {
LAB_00f53394:
        pppppppuVar2 = switchD_006705fc::caseD_4;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_b4 = (uint ************)switchD_006705fc::caseD_4[5];
          local_b0 = (uint *************)switchD_006705fc::caseD_4[6];
          local_b8 = (uint ***********)0x2;
          DataMemoryBarrier(0xb);
          puVar11 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar11 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar18 = (*(code *)puVar11[3])(pcVar1,&local_b8);
          if (iVar18 != 0) {
            if ((uint ************)switchD_006705fc::caseD_4[8] == (uint ************)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19764);
            }
            local_3c = (uint ************)&local_48;
            unaff_r8 = (uint *************)switchD_006705fc::caseD_4[9];
            local_134 = switchD_006705fc::caseD_4[10];
            local_40 = (uint ***********)&local_140;
            local_54 = &local_40;
            local_130 = 0;
            local_50 = (uint ************)&DAT_00000001;
            local_44 = &local_60;
            local_60 = (uint ***********)&local_c4;
            local_38 = (uint *************)&DAT_01d2ea4c;
            local_48 = (uint *************)&DAT_00598810;
            local_5c = (uint ************)&LAB_019674bc;
            local_30 = (uint *************)local_b8;
            local_2c = local_b4;
            local_28 = local_b0;
            local_140 = (uint ************)switchD_006705fc::caseD_4[7];
            local_13c = (uint ************)switchD_006705fc::caseD_4[8];
            local_138 = unaff_r8;
            local_4c = switchD_006705fc::caseD_4 + 7;
            FUN_01aaa328(pppppppuVar2,pcVar1,puVar11[4],&local_30,&local_54);
          }
        }
      }
      FUN_005f6950(local_c4);
    }
    FUN_0067e38c(local_a8);
  } while( true );
}

