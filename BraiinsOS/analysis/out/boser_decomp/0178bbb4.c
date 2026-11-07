// FUN_0178bbb4 @ 0178bbb4 size=8360 calls_out=52 calls_in=4
// strings: reqwest::async_i | reqwest::async_i | reqwest::async_i | reqwest::async_i | reqwest::async_i | reqwest::async_i

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0178bbb4(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  int *******pppppppiVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  int *******pppppppiVar12;
  int *******pppppppiVar13;
  undefined4 *puVar14;
  int iVar15;
  int ******ppppppiVar16;
  int *piVar17;
  undefined4 uVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int *****extraout_r2;
  int *****pppppiVar23;
  int *****extraout_r2_00;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint uVar24;
  uint uVar25;
  undefined *puVar26;
  bool bVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int *****local_4f8;
  uint local_4f4;
  int *******local_4f0;
  undefined1 auStack_460 [68];
  ushort local_41c;
  int *******local_3f0;
  undefined2 *local_3ec;
  int *******local_3e8;
  int iStack_3e4;
  undefined1 local_3e0 [12];
  int local_3d4;
  int iStack_3d0;
  int iStack_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  int iStack_3b8;
  int iStack_3b4;
  int iStack_3b0;
  undefined1 local_3ac;
  int *******local_380;
  int ******local_37c;
  int *******local_378;
  int *****local_374;
  int *******local_370;
  int *local_36c;
  int *******local_368;
  undefined8 local_364;
  int *****local_35c;
  int *******local_358;
  int local_354;
  int *******local_350;
  int local_34c;
  uint uStack_348;
  int *****pppppiStack_344;
  int *******pppppppiStack_340;
  int local_33c;
  int local_334;
  undefined4 local_330;
  undefined *local_32c;
  int *******local_328;
  undefined8 local_324;
  int *******local_31c;
  uint local_318;
  int local_314;
  int local_310;
  int local_30c;
  int iStack_308;
  int local_304;
  int local_300;
  int iStack_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int iStack_2ec;
  int *******local_2e8;
  int ******local_2e4;
  int *******local_2e0;
  int *****local_2dc;
  int *******pppppppiStack_2d8;
  int *piStack_2d4;
  int *******local_2d0;
  undefined8 uStack_2cc;
  int *****pppppiStack_2c4;
  undefined2 local_2c0;
  int *******local_2b8;
  int ******local_2b4;
  int *******local_2b0;
  int *****local_2ac;
  int *******local_2a8;
  int *****pppppiStack_2a4;
  int *******pppppppiStack_2a0;
  int *piStack_29c;
  int *******local_298;
  undefined8 local_294;
  int *****local_28c;
  int *******local_288;
  int *******local_280;
  int ******local_27c;
  undefined4 local_278;
  int *****local_274;
  undefined4 local_270;
  int ******local_26c;
  undefined8 local_268;
  int local_260;
  uint local_25c;
  int *******pppppppiStack_258;
  int *******local_254;
  int ******ppppppiStack_250;
  int *******pppppppiStack_24c;
  undefined2 local_248;
  undefined4 local_238;
  undefined4 *local_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_1e8;
  int ******ppppppiStack_1e4;
  int *******pppppppiStack_1e0;
  int *****pppppiStack_1dc;
  char local_1d8;
  undefined2 local_1d7;
  undefined1 local_1d5;
  int *******local_158;
  int ******local_154;
  undefined4 local_150;
  int iStack_14c;
  undefined1 local_148 [12];
  int local_13c;
  int iStack_138;
  int iStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  undefined1 local_114;
  undefined4 local_d0;
  undefined8 local_cc;
  int *****local_c4;
  int *******local_c0;
  int *local_bc;
  int *******local_b8;
  undefined8 local_b4;
  int *****local_ac;
  int *******local_a8;
  int local_a4;
  int *******local_a0;
  int local_9c;
  uint local_98;
  int iStack_94;
  int *******local_90;
  undefined1 local_8c;
  int ******local_88;
  int *****local_84;
  char *local_80;
  int ****local_7c;
  undefined **local_78;
  int ******local_74;
  undefined4 *local_70;
  undefined *local_6c;
  int local_68;
  uint auStack_64 [4];
  undefined1 auStack_52 [2];
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    iVar6 = param_2[2];
    param_2[2] = 0;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Pending error polled more than once",0x23,&DAT_01d1b6ac);
    }
    param_1[1] = 0;
    *param_1 = 3;
    param_1[2] = iVar6;
    return;
  }
  if ((param_2[0x33] != 0) && (iVar6 = FUN_019e84a0(param_2[0x33],*param_3), iVar6 == 0)) {
    ppppppiVar16 = (int ******)FUN_017ea86c(1);
    local_280 = (int *******)ppppppiVar16;
    FUN_006666fc(&local_c0,param_2[0x15],param_2[0x16]);
    local_b4._4_4_ = param_2[0x18];
    local_ac = (int *****)param_2[0x19];
    local_a8 = (int *******)param_2[0x1a];
    local_a4 = param_2[0x1b];
    local_9c = param_2[0x1d];
    local_98 = param_2[0x1e];
    iStack_94 = param_2[0x1f];
    local_90 = (int *******)param_2[0x20];
    local_8c = (undefined1)param_2[0x21];
    local_b4._0_4_ = param_2[0x17];
    local_d0 = (char *)param_2[0x10];
    local_cc._0_4_ = (int ******)param_2[0x11];
    local_cc._4_4_ = (char *)param_2[0x12];
    local_c4 = (int *****)param_2[0x13];
    local_a0 = (int *******)param_2[0x1c];
    if (*ppppppiVar16 != (int *****)0x2) {
      FUN_019bb7e0(ppppppiVar16[4],ppppppiVar16[5]);
    }
    FUN_01bed4e2(ppppppiVar16,&local_d0,0x48);
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = ppppppiVar16;
    return;
  }
  puVar7 = (undefined2 *)((uint)&local_d0 | 1);
  puVar8 = (undefined4 *)((uint)&local_380 | 4);
  piVar20 = param_2 + 0x1d;
  pppppppiVar9 = (int *******)(param_2 + 0x10);
  pbVar10 = (byte *)(param_2 + 0x2c);
  piVar19 = param_2 + 0x28;
  puVar11 = (undefined2 *)((uint)&local_328 | 1);
LAB_0178bd9c:
  while( true ) {
    pppppppiVar13 = (int *******)&local_280;
    (**(code **)(param_2[0x23] + 0xc))(&local_3f0,param_2[0x22],param_3);
    if (((uint)local_3f0 & 7) == 3) break;
    if (local_3f0 == (int *******)&SUB_00000004) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    FUN_01bed4e2(auStack_460,&local_3f0,0x70);
    if (2 < local_41c - 0x12d) {
      if (local_41c - 0x133 < 2) {
        iVar6 = param_2[0x24];
        bVar27 = iVar6 == 1;
        if (bVar27) {
          iVar6 = param_2[0x25];
        }
        if (!bVar27 || iVar6 != 0) goto LAB_0178c058;
      }
LAB_0178d52c:
      FUN_01bed4e2(&local_d0,auStack_460,0x70);
      FUN_006666fc(local_148,param_2[0x15],param_2[0x16]);
      iStack_138 = param_2[0x18];
      iStack_134 = param_2[0x19];
      local_130 = param_2[0x1a];
      local_12c = param_2[0x1b];
      local_124 = *piVar20;
      iStack_120 = param_2[0x1e];
      iStack_11c = param_2[0x1f];
      iStack_118 = param_2[0x20];
      local_114 = (undefined1)param_2[0x21];
      local_13c = param_2[0x17];
      local_158 = (int *******)param_2[0x10];
      local_154 = (int ******)param_2[0x11];
      local_150 = (int *******)param_2[0x12];
      iStack_14c = param_2[0x13];
      iVar6 = param_2[0x33];
      local_128 = param_2[0x1c];
      cVar2 = *(char *)(param_2[0x31] + 0x118);
      param_2[0x33] = 0;
      FUN_01bed4e2(&local_1e8,&local_d0,0x48);
      local_280 = (int *******)local_88;
      local_27c = (int ******)local_84;
      local_278 = local_80;
      local_274 = (int *****)local_7c;
      local_270 = local_78;
      local_26c = local_74;
      local_268._0_4_ = local_70;
      local_268._4_4_ = local_6c;
      local_260 = local_68;
      local_25c = auStack_64[0];
      puVar14 = (undefined4 *)thunk_FUN_01be5118(0x28);
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x28);
      }
      *puVar14 = local_88;
      puVar14[1] = local_84;
      puVar14[2] = local_80;
      puVar14[3] = local_7c;
      puVar14[4] = local_78;
      puVar14[5] = local_74;
      puVar14[6] = local_70;
      puVar14[7] = local_6c;
      puVar14[8] = local_68;
      puVar14[9] = auStack_64[0];
      local_378 = (int *******)&DAT_01d1cea8;
      local_380 = (int *******)0x0;
      local_37c = (int ******)puVar14;
      local_374 = (int *****)iVar6;
      if (cVar2 == '\0') goto LAB_0178d7f8;
      local_2e4 = (int ******)&SUB_00000004;
      local_2e8 = (int *******)&DAT_0056c9b0;
      local_3f0 = (int *******)0x0;
      local_3ec = (undefined2 *)0x16;
      local_3e8 = (int *******)0x0;
      iStack_3e4 = 0;
      FUN_014308d0(&local_328,&local_1e8);
      FUN_0142f9bc(&local_280,local_324._4_4_,local_328,(int ******)local_324);
      goto LAB_0178d698;
    }
    iVar6 = 0;
    if (param_2[0x24] != 0) {
      iVar6 = param_2[0x25];
    }
    if (param_2[0x24] != 0 && iVar6 != 0) {
      (**(code **)(iVar6 + 0x10))(piVar19,param_2[0x26],param_2[0x27]);
    }
    iVar6 = 0;
    param_2[0x24] = 0;
    do {
      FUN_01430710(&local_d0,param_2,&DAT_0050be50 + iVar6);
      if ((char)local_c0 != '\x02') {
        (*(code *)*(int *******)((int)local_d0 + 0x10))
                  (&local_c4,(int ******)local_cc,local_cc._4_4_);
      }
      iVar6 = iVar6 + 0x10;
    } while (iVar6 != 0x40);
    if ((*pbVar10 | 4) != 5) {
      if ((9 < *pbVar10) && (param_2[0x2e] != 0)) {
        thunk_FUN_01be4678(param_2[0x2d]);
      }
      FUN_01bed93e(pbVar10,1,0x14);
    }
LAB_0178c058:
    local_d0 = (char *)0x0;
    local_cc._0_4_ = (int ******)&DAT_0000002e;
    local_cc._4_4_ = (char *)0x0;
    local_c4 = (int *****)0x0;
    pppppppiVar12 = (int *******)FUN_013b43b8(auStack_460,&local_d0);
    if (pppppppiVar12 == (int *******)0x0) goto LAB_0178d52c;
    local_1e8 = pppppppiVar12;
    FUN_012fbd94(&local_d0,pppppppiVar12[1],pppppppiVar12[2]);
    pppppppiVar12 = (int *******)local_cc._4_4_;
    if ((int *******)local_d0 != (int *******)0x0) {
LAB_0178d28c:
      if (3 < DAT_01d51b00) {
        local_280 = (int *******)&local_1e8;
        local_27c = (int ******)&DAT_01411268;
        local_c0 = (int *******)&DAT_01d1b728;
        local_c4 = (int *****)0x1b;
        local_cc._0_4_ = (int ******)&DAT_0000001b;
        local_cc._4_4_ = "reqwest::async_i";
        local_d0 = "reqwest::async_i";
        FUN_0193b350(&DAT_00587592,&local_280,4,&local_d0);
      }
      goto LAB_0178d52c;
    }
    local_cc._4_4_ = (char *)0x0;
    local_d0 = (char *)0x0;
    local_c0 = pppppppiVar9;
    FUN_01ac814c(pppppppiVar13,&local_d0,(int ******)local_cc,pppppppiVar12);
    pppppppiVar12 = local_280;
    if (local_280 == (int *******)0x2) goto LAB_0178d28c;
    FUN_01bed4e2(&local_cc,&local_27c,0x44);
    local_d0 = (char *)pppppppiVar12;
    FUN_017da8cc(pppppppiVar13,&local_d0);
    if ((char)local_280 == '\x03') {
      FUN_01783e10(&local_280);
      FUN_019bb7e0(local_c0,local_bc);
      goto LAB_0178d28c;
    }
    FUN_01783e10(pppppppiVar13);
    FUN_01bed4e2(puVar8,&local_cc,0x44);
    local_380 = pppppppiVar12;
    if (*(char *)(param_2[0x31] + 0x119) != '\0') {
      if (local_364._4_4_ != (int *******)0x0) {
        piVar17 = local_36c;
        pppppppiVar13 = local_368;
        pppppppiVar12 = local_364._4_4_;
        if (local_364._4_4_ < local_368) {
          if (*(char *)((int)local_36c + (int)local_364._4_4_) < -0x40) goto LAB_0178dcb0;
        }
        else if (local_364._4_4_ != local_368) goto LAB_0178dcb0;
        if (((local_364._4_4_ == (int *******)&SUB_00000004) && (*local_36c == 0x70747468)) &&
           (pppppppiVar12 = (int *******)param_2[0x18], pppppppiVar12 != (int *******)0x0)) {
          piVar17 = (int *)param_2[0x15];
          pppppppiVar13 = (int *******)param_2[0x16];
          if (pppppppiVar12 < pppppppiVar13) {
            if (*(char *)((int)piVar17 + (int)pppppppiVar12) < -0x40) {
LAB_0178dcb0:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(piVar17,pppppppiVar13,0,pppppppiVar12,&DAT_01d2fde8);
            }
          }
          else if (pppppppiVar12 != pppppppiVar13) goto LAB_0178dcb0;
          if (pppppppiVar12 == (int *******)&DAT_00000005) {
            iVar6 = thunk_FUN_01bed842(piVar17,&DAT_0053278b,5);
            if (iVar6 == 0) goto LAB_0178c614;
          }
        }
      }
      FUN_006666fc(&local_c0,param_2[0x15],param_2[0x16]);
      local_b4._4_4_ = param_2[0x18];
      local_ac = (int *****)param_2[0x19];
      local_a8 = (int *******)param_2[0x1a];
      local_a4 = param_2[0x1b];
      local_9c = *piVar20;
      local_98 = param_2[0x1e];
      local_90 = (int *******)param_2[0x20];
      local_b4._0_4_ = param_2[0x17];
      local_a0 = (int *******)param_2[0x1c];
      local_d0 = (char *)param_2[0x10];
      local_cc._0_4_ = (int ******)param_2[0x11];
      local_cc._4_4_ = (char *)param_2[0x12];
      local_c4 = (int *****)param_2[0x13];
      FUN_01ac91f4(&local_d0);
      FUN_01ac9018(&local_d0);
      FUN_01ac8e24(&local_d0);
      FUN_01ac61a4(&local_280,local_bc,local_b8);
      if ((char)local_270 == '\x02') {
        FUN_019bb7e0(local_c0,local_bc);
      }
      else {
        local_1e8 = local_280;
        ppppppiStack_1e4 = local_27c;
        pppppppiStack_1e0 = (int *******)local_278;
        pppppiStack_1dc = local_274;
        local_1d5 = local_270._3_1_;
        local_1d7 = local_270._1_2_;
        FUN_019bb7e0(local_c0,local_bc);
        local_1d8 = (char)local_270;
        local_280 = (int *******)0x0;
        local_27c = (int ******)0x37;
        local_278 = (char *)0x0;
        local_274 = (int *****)0x0;
        FUN_0142fccc(&local_d0,param_2,&local_280,&local_1e8);
        if ((char)local_c0 != '\x02') {
          (*(code *)*(int *******)((int)local_d0 + 0x10))
                    (&local_c4,(int ******)local_cc,local_cc._4_4_);
        }
      }
    }
LAB_0178c614:
    FUN_006666fc(local_3e0,param_2[0x15],param_2[0x16]);
    iStack_3d0 = param_2[0x18];
    iStack_3cc = param_2[0x19];
    local_3c8 = param_2[0x1a];
    local_3c4 = param_2[0x1b];
    local_3bc = *piVar20;
    iStack_3b8 = param_2[0x1e];
    iStack_3b4 = param_2[0x1f];
    iStack_3b0 = param_2[0x20];
    local_3ac = (undefined1)param_2[0x21];
    local_3c0 = param_2[0x1c];
    local_3d4 = param_2[0x17];
    local_3f0 = (int *******)param_2[0x10];
    local_3ec = (undefined2 *)param_2[0x11];
    local_3e8 = (int *******)param_2[0x12];
    iStack_3e4 = param_2[0x13];
    iVar6 = param_2[0x2b];
    if (iVar6 == param_2[0x29]) {
      FUN_01806220(param_2 + 0x29);
    }
    FUN_01bed4e2(param_2[0x2a] + iVar6 * 0x48,&local_3f0,0x48);
    iVar22 = param_2[0x31];
    pppppppiVar13 = (int *******)(iVar6 + 1);
    param_2[0x2b] = (int)pppppppiVar13;
    if (*(int *)(iVar22 + 0x108) == 0) {
      local_d0 = (char *)&local_380;
      local_cc._0_4_ = (int ******)param_2[0x2a];
      local_c4 = (int *****)CONCAT22(local_c4._2_2_,local_41c);
      local_cc._4_4_ = (char *)pppppppiVar13;
      (**(code **)(*(int *)(iVar22 + 0x110) + 0x14))
                (&local_334,*(undefined4 *)(iVar22 + 0x10c),&local_d0);
      if (local_334 != 0) {
        if (local_334 != 1) {
          uVar18 = local_330;
          puVar26 = local_32c;
          goto LAB_0178d974;
        }
        goto LAB_0178d4b4;
      }
    }
    else {
      if (*(int *)(iVar22 + 0x108) != 1) {
        local_334 = 1;
LAB_0178d4b4:
        if (3 < DAT_01d51b00) {
          local_280 = (int *******)&local_380;
          local_c0 = (int *******)&DAT_01d1b6dc;
          local_27c = (int ******)&LAB_00b0bc48;
          local_c4 = (int *****)0x1b;
          local_cc._0_4_ = (int ******)&DAT_0000001b;
          local_cc._4_4_ = "reqwest::async_i";
          local_d0 = "reqwest::async_i";
          FUN_0193b350(&DAT_0058cef2,&local_280,4,&local_d0);
        }
        FUN_019bb7e0(local_370,local_36c);
        goto LAB_0178d52c;
      }
      if (*(int ********)(iVar22 + 0x10c) <= pppppppiVar13) {
        uVar18 = 1;
        puVar26 = &DAT_01d1c050;
LAB_0178d974:
        FUN_006666fc(&local_c0,param_2[0x15],param_2[0x16]);
        local_b4._4_4_ = param_2[0x18];
        local_ac = (int *****)param_2[0x19];
        local_a8 = (int *******)param_2[0x1a];
        local_a4 = param_2[0x1b];
        local_9c = *piVar20;
        local_98 = param_2[0x1e];
        local_90 = (int *******)param_2[0x20];
        local_b4._0_4_ = param_2[0x17];
        local_c4 = (int *****)param_2[0x13];
        local_a0 = (int *******)param_2[0x1c];
        local_d0 = (char *)param_2[0x10];
        local_cc._0_4_ = (int ******)param_2[0x11];
        local_cc._4_4_ = (char *)param_2[0x12];
        piVar20 = (int *)FUN_017ea8ec(2,uVar18,puVar26);
        if (*piVar20 != 2) {
          FUN_019bb7e0(piVar20[4],piVar20[5]);
        }
        FUN_01bed4e2(piVar20,&local_d0,0x48);
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = piVar20;
        FUN_019bb7e0(local_370,local_36c);
        goto LAB_0178da44;
      }
      local_334 = 0;
    }
    uVar28 = local_364;
    if (3 < DAT_01d51b00) {
      local_278 = (char *)&local_380;
      local_274 = (int *****)&LAB_00b0bc48;
      local_27c = (int ******)&LAB_00b0bc48;
      local_c4 = (int *****)0x1b;
      local_c0 = (int *******)&DAT_01d1b6bc;
      local_cc._0_4_ = (int ******)&DAT_0000001b;
      local_cc._4_4_ = "reqwest::async_i";
      local_d0 = "reqwest::async_i";
      local_280 = pppppppiVar9;
      FUN_0193b350(&DAT_0057a8c2,&local_280,4,&local_d0);
      uVar28 = local_364;
    }
    pppppppiVar13 = local_368;
    piVar17 = local_36c;
    local_364._4_4_ = (int *******)((ulonglong)uVar28 >> 0x20);
    pppppppiVar12 = local_364._4_4_;
    if (local_364._4_4_ == (int *******)0x0) {
LAB_0178d228:
      local_364 = uVar28;
      FUN_01bed4e2(&local_d0,&local_380,0x48);
      uVar18 = FUN_017f06bc(&local_d0);
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = uVar18;
LAB_0178da44:
      FUN_017851cc(auStack_460);
      return;
    }
    if (local_364._4_4_ < local_368) {
      if (*(char *)((int)local_36c + (int)local_364._4_4_) < -0x40) goto LAB_0178dbfc;
    }
    else if (local_364._4_4_ != local_368) goto LAB_0178dbfc;
    if ((local_364._4_4_ != (int *******)&SUB_00000004) || (*local_36c != 0x70747468)) {
      if (local_364._4_4_ < local_368) {
        if (*(char *)((int)local_36c + (int)local_364._4_4_) < -0x40) goto LAB_0178dbfc;
      }
      else if (local_364._4_4_ != local_368) goto LAB_0178dbfc;
      if (local_364._4_4_ == (int *******)&DAT_00000005) {
        local_364 = uVar28;
        iVar6 = thunk_FUN_01bed842(local_36c,&DAT_0053278b,5);
        uVar28 = local_364;
        if (iVar6 == 0) goto LAB_0178c844;
      }
      goto LAB_0178d228;
    }
LAB_0178c844:
    local_364 = uVar28;
    if (*(char *)(param_2[0x31] + 0x11b) != '\0') {
      if (pppppppiVar12 < pppppppiVar13) {
        if (*(char *)((int)piVar17 + (int)pppppppiVar12) < -0x40) {
LAB_0178dbfc:
          local_364 = uVar28;
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(piVar17,pppppppiVar13,0,pppppppiVar12,&DAT_01d2fde8);
        }
      }
      else if (pppppppiVar12 != pppppppiVar13) goto LAB_0178dbfc;
      if (pppppppiVar12 == (int *******)&DAT_00000005) {
        iVar6 = thunk_FUN_01bed842(piVar17,&DAT_0053278b,5);
        if (iVar6 == 0) goto LAB_0178c898;
      }
      FUN_006666fc(&local_c0,piVar17,pppppppiVar13);
      local_9c = local_34c;
      local_98 = uStack_348;
      local_90 = pppppppiStack_340;
      local_a4 = local_354;
      local_a8 = local_358;
      local_ac = local_35c;
      local_a0 = local_350;
      local_c4 = local_374;
      local_cc._4_4_ = (char *)local_378;
      local_cc._0_4_ = local_37c;
      local_d0 = (char *)local_380;
      local_b4 = local_364;
      uVar18 = FUN_017f06bc(&local_d0);
      piVar20 = local_36c;
      pppppppiVar9 = local_370;
      local_280 = local_380;
      local_27c = local_37c;
      local_278 = (char *)local_378;
      local_274 = local_374;
      local_d0 = (char *)local_368;
      local_c4 = local_35c;
      local_c0 = local_358;
      local_bc = (int *)local_354;
      local_b8 = local_350;
      local_b4._0_4_ = local_34c;
      local_b4._4_4_ = uStack_348;
      local_ac = pppppiStack_344;
      local_a8 = pppppppiStack_340;
      local_a4 = local_33c;
      local_cc = local_364;
      piVar19 = (int *)FUN_017e2d0c(2,local_350,uVar18);
      if (*piVar19 != 2) {
        FUN_019bb7e0(piVar19[4],piVar19[5]);
      }
      *piVar19 = (int)local_280;
      piVar19[1] = (int)local_27c;
      piVar19[2] = (int)local_278;
      piVar19[3] = (int)local_274;
      piVar19[4] = (int)pppppppiVar9;
      piVar19[5] = (int)piVar20;
      piVar19[6] = (int)local_d0;
      *(undefined8 *)(piVar19 + 7) = local_cc;
      piVar19[9] = (int)local_c4;
      piVar19[10] = (int)local_c0;
      piVar19[0xb] = (int)local_bc;
      piVar19[0xc] = (int)local_b8;
      piVar19[0xd] = (int)local_b4;
      piVar19[0xe] = local_b4._4_4_;
      piVar19[0xf] = (int)local_ac;
      piVar19[0x10] = (int)local_a8;
      piVar19[0x11] = local_a4;
      param_1[1] = 0;
      param_1[2] = piVar19;
      *param_1 = 3;
      goto LAB_0178da44;
    }
LAB_0178c898:
    FUN_01bed4e2(&local_d0,&local_380,0x48);
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
    FUN_01bed4e2(pppppppiVar9,&local_d0,0x48);
    local_328 = (int *******)*param_2;
    local_324._0_4_ = (int ******)param_2[1];
    local_324._4_4_ = (int *******)param_2[2];
    local_31c = (int *******)param_2[3];
    local_318 = param_2[4];
    local_314 = param_2[5];
    local_310 = param_2[6];
    local_30c = param_2[7];
    iStack_308 = param_2[8];
    local_304 = param_2[9];
    local_300 = param_2[10];
    iStack_2fc = param_2[0xb];
    local_2f8 = param_2[0xc];
    local_2f4 = param_2[0xd];
    local_2f0 = param_2[0xe];
    iStack_2ec = param_2[0xf];
    bVar27 = param_2[0x2b] == 0;
    iVar6 = 0;
    if (!bVar27) {
      iVar6 = param_2[0x2b] * 9;
    }
    *param_2 = 0;
    param_2[1] = 0;
    iVar22 = iStack_2ec;
    if (!bVar27) {
      iVar22 = param_2[0x2a] + iVar6 * 8;
    }
    *(undefined2 *)(param_2 + 0xe) = 0;
    param_2[7] = 0;
    iVar6 = local_2f0;
    if (!bVar27) {
      iVar6 = iVar22 + -0x48;
      bVar27 = iVar6 == 0;
    }
    param_2[8] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xd] = 0;
    param_2[6] = 2;
    param_2[9] = 4;
    param_2[0xc] = 4;
    if (bVar27) goto LAB_0178c934;
    uVar28 = FUN_01ac9ac0(pppppppiVar9);
    iVar21 = (int)((ulonglong)uVar28 >> 0x20);
    iVar15 = (int)uVar28;
    uVar28 = FUN_01ac9ac0(iVar6);
    iVar6 = (int)uVar28;
    if (iVar15 == 0 || iVar6 == 0) {
      if (iVar15 != 0 || iVar6 != 0) goto LAB_0178cff0;
LAB_0178c9f0:
      if ((short)param_2[0x17] == 1) {
        uVar28 = CONCAT44((uint)*(ushort *)((int)param_2 + 0x5e),1);
      }
      else {
        uVar25 = param_2[0x18];
        iVar6 = param_2[0x15];
        if (uVar25 != 0) {
          uVar24 = param_2[0x16];
          if (uVar25 < uVar24) {
            if (*(char *)(iVar6 + uVar25) < -0x40) goto LAB_0178dcc8;
          }
          else if (uVar25 != uVar24) goto LAB_0178dcc8;
        }
        uVar28 = FUN_01ac9f18(iVar6,uVar25);
      }
      if (*(short *)(iVar22 + -0x2c) == 1) {
        uVar29 = CONCAT44((uint)*(ushort *)(iVar22 + -0x2a),1);
      }
      else {
        uVar25 = *(uint *)(iVar22 + -0x28);
        iVar6 = *(int *)(iVar22 + -0x34);
        if (uVar25 != 0) {
          uVar24 = *(uint *)(iVar22 + -0x30);
          if (uVar25 < uVar24) {
            if (*(char *)(iVar6 + uVar25) < -0x40) {
LAB_0178dcc8:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar6,uVar24,0,uVar25,&DAT_01d2fde8);
            }
          }
          else if (uVar25 != uVar24) goto LAB_0178dcc8;
        }
        uVar29 = FUN_01ac9f18(iVar6,uVar25);
      }
      if (((uint)uVar29 & (uint)uVar28 & 0xffff) == 0) {
        if ((((uint)uVar29 | (uint)uVar28) & 0xffff) != 0) goto LAB_0178cff0;
      }
      else if (((uint)((ulonglong)uVar28 >> 0x20) & 0xffff) !=
               ((uint)((ulonglong)uVar29 >> 0x20) & 0xffff)) goto LAB_0178cff0;
    }
    else {
      if (iVar21 == (int)((ulonglong)uVar28 >> 0x20)) {
        iVar6 = thunk_FUN_01bed842(iVar15,iVar6,iVar21);
        if (iVar6 == 0) goto LAB_0178c9f0;
      }
LAB_0178cff0:
      local_280 = (int *******)0x0;
      local_27c = (int ******)0x10;
      local_278 = (char *)0x0;
      local_274 = (int *****)0x0;
      FUN_014304d0(&local_d0,&local_328,&local_280);
      if ((char)local_c0 != '\x02') {
        (*(code *)*(int *******)((int)local_d0 + 0x10))
                  (&local_c4,(int ******)local_cc,local_cc._4_4_);
      }
      local_280 = (int *******)0x0;
      local_27c = (int ******)0x1e;
      local_278 = (char *)0x0;
      local_274 = (int *****)0x0;
      FUN_014304d0(&local_d0,&local_328,&local_280);
      if ((char)local_c0 != '\x02') {
        (*(code *)*(int *******)((int)local_d0 + 0x10))
                  (&local_c4,(int ******)local_cc,local_cc._4_4_);
      }
      FUN_014301b0(&local_d0,&local_328,"cookie2",7);
      if ((char)local_c0 != '\x02') {
        (*(code *)*(int *******)((int)local_d0 + 0x10))
                  (&local_c4,(int ******)local_cc,local_cc._4_4_);
      }
      local_280 = (int *******)0x0;
      local_27c = (int ******)0x33;
      local_278 = (char *)0x0;
      local_274 = (int *****)0x0;
      FUN_014304d0(&local_d0,&local_328,&local_280);
      if ((char)local_c0 != '\x02') {
        (*(code *)*(int *******)((int)local_d0 + 0x10))
                  (&local_c4,(int ******)local_cc,local_cc._4_4_);
      }
      local_280 = (int *******)0x0;
      local_27c = (int ******)&DAT_0000004c;
      local_278 = (char *)0x0;
      local_274 = (int *****)0x0;
      FUN_014304d0(&local_d0,&local_328,&local_280);
      if ((char)local_c0 != '\x02') {
        (*(code *)*(int *******)((int)local_d0 + 0x10))
                  (&local_c4,(int ******)local_cc,local_cc._4_4_);
      }
    }
LAB_0178c934:
    FUN_017da8cc(&local_d0,pppppppiVar9);
    if ((char)local_d0 == '\x03') {
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = (int ******)local_cc;
      FUN_017793c0(&local_328);
      goto LAB_0178da44;
    }
    uVar3 = *puVar7;
    *(undefined1 *)((undefined2 *)((uint)&local_2e8 | 1) + 1) = *(undefined1 *)(puVar7 + 1);
    *(undefined2 *)((uint)&local_2e8 | 1) = uVar3;
    local_2e0 = (int *******)local_cc._4_4_;
    local_2dc = local_c4;
    pppppppiStack_2d8 = local_c0;
    piStack_2d4 = local_bc;
    local_2d0 = local_b8;
    pppppiStack_2c4 = local_ac;
    local_2c0 = SUB42(local_a8,0);
    local_2e8 = (int *******)CONCAT31(local_2e8._1_3_,(char)local_d0);
    local_2e4 = (int ******)local_cc;
    puVar14 = (undefined4 *)0x0;
    if (param_2[0x24] != 0) {
      puVar14 = (undefined4 *)param_2[0x25];
    }
    uStack_2cc = local_b4;
    if (param_2[0x24] != 0 && puVar14 != (undefined4 *)0x0) {
      (*(code *)*puVar14)(&local_d0,piVar19,param_2[0x26],param_2[0x27]);
      local_2b8 = (int *******)local_d0;
      local_2b4 = (int ******)local_cc;
      local_2b0 = (int *******)local_cc._4_4_;
      local_2ac = local_c4;
    }
    else {
      local_2ac = (int *****)0x0;
      local_2b0 = (int *******)0x0;
      local_2b4 = (int ******)&DAT_00000001;
      local_2b8 = (int *******)&PTR_FUN_01d1cd44;
    }
    local_6c = (undefined *)0x0;
    local_70 = (undefined4 *)&DAT_00000001;
    local_68 = CONCAT22(local_68._2_2_,0xffff);
    local_74 = (int ******)&DAT_005327c4;
    local_84 = (int *****)0x1;
    local_78 = &PTR_FUN_01cf4050;
    local_7c = (int ****)0x0;
    local_80 = (char *)0x0;
    local_88 = (int ******)&PTR_FUN_01cf3fcc;
    FUN_01bed93e(auStack_64,1,0x14);
    local_98 = local_98 & 0xffff0000;
    local_4c = 2;
    uVar28 = CONCAT44(&SUB_00000004,&local_280);
    local_b8 = (int *******)0x2;
    local_a0 = (int *******)&SUB_00000004;
    local_ac = (int *****)0x4;
    bVar1 = *pbVar10;
    local_cc._0_4_ = (int ******)0x0;
    local_d0 = (char *)0x0;
    local_90 = (int *******)0x0;
    local_50 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_a8 = (int *******)0x0;
    local_b4._4_4_ = 0;
    local_b4._0_4_ = 0;
    pppppiVar23 = extraout_r2;
    uVar25 = extraout_r3_00;
    if (8 < bVar1) {
      if (bVar1 == 9) {
        uVar28 = *(undefined8 *)(param_2 + 0x2d);
        uVar25 = (uint)*(byte *)(param_2 + 0x30);
        pppppiVar23 = (int *****)param_2[0x2f];
        local_1e8 = (int *******)
                    CONCAT22(CONCAT11(local_1e8._3_1_,*(undefined1 *)((int)param_2 + 0xb3)),
                             *(undefined2 *)((int)param_2 + 0xb1));
      }
      else {
        uVar28 = FUN_013d4df8(param_2[0x2d],param_2[0x2e]);
        pppppiVar23 = extraout_r2_00;
        uVar25 = extraout_r3_01;
      }
    }
    ppppppiVar16 = (int ******)uVar28;
    *(undefined1 *)((undefined2 *)((uint)&local_298 | 1) + 1) = local_1e8._2_1_;
    *(undefined2 *)((uint)&local_298 | 1) = (undefined2)local_1e8;
    local_298 = (int *******)CONCAT31(local_298._1_3_,bVar1);
    local_28c = pppppiVar23;
    local_288 = (int *******)uVar25;
    local_294 = uVar28;
    FUN_013abc4c(&local_1e8,&local_d0,&local_298);
    uVar25 = (uint)local_2e8 & 0xff;
    if (uVar25 == 0) {
      uVar24 = 0;
    }
    else if (uVar25 == 2) {
      ppppppiVar16 = (int ******)FUN_014333b0();
      (*(code *)**local_2e4)(&local_298,local_2e4 + 3,local_2e4[1],local_2e4[2]);
      *ppppppiVar16 = (int *****)local_298;
      *(undefined8 *)(ppppppiVar16 + 1) = local_294;
      ppppppiVar16[3] = local_28c;
      uVar24 = 0;
    }
    else {
      uVar24 = ((uint)local_2e8 >> 8 & 0xff) << 8;
    }
    (*(code *)*local_2e0)(&local_2a8,&piStack_2d4,local_2dc,pppppppiStack_2d8);
    (*(code *)*local_2d0)(&local_298,&pppppiStack_2c4,(undefined4)uStack_2cc,uStack_2cc._4_4_);
    local_d0 = (char *)(uVar24 | uVar25);
    local_288 = (int *******)CONCAT22(local_288._2_2_,local_2c0);
    local_cc._4_4_ = (char *)local_2a8;
    local_c4 = pppppiStack_2a4;
    local_c0 = pppppppiStack_2a0;
    local_bc = piStack_29c;
    local_b8 = local_298;
    local_ac = local_28c;
    local_a8 = local_288;
    local_cc._0_4_ = ppppppiVar16;
    local_b4 = local_294;
    FUN_017c449c(&local_158,&local_1e8,&local_d0);
    ppppppiVar16 = local_154;
    pppppppiVar13 = local_158;
    local_298 = local_2b8;
    local_294._0_4_ = local_2b4;
    local_294._4_4_ = local_2b0;
    local_28c = local_2ac;
    if (local_158 == (int *******)&DAT_00000003 && local_154 == (int ******)0x0) {
      uVar4 = (undefined1)local_150;
      uVar5 = local_150._1_1_;
      FUN_017c30a4(&local_298);
      local_d0 = (char *)CONCAT31(CONCAT21(local_d0._2_2_,uVar5),uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("valid request parts",0x13,&local_d0,&DAT_01d1caac,&DAT_01d1b6cc);
    }
    FUN_01bed4e2(auStack_52,&local_2b8,0x10);
    uVar3 = (undefined2)local_150;
    FUN_01bed4e2(&local_d0,(int)&local_150 + 2,0x7e);
    FUN_01bed4e2(&local_1e8,&local_d0,0x8e);
    local_280 = pppppppiVar13;
    local_27c = ppppppiVar16;
    local_278 = (char *)CONCAT22(local_278._2_2_,uVar3);
    FUN_01bed4e2((int)&local_278 + 2,&local_1e8,0x8e);
    uVar3 = (undefined2)local_2f0;
    uVar28 = FUN_017c1860(local_310,local_30c);
    FUN_0187b658(&local_1e8,local_304,local_300);
    FUN_017260a4(&local_d0,local_2f8,local_2f4);
    if (local_328 == (int *******)0x0) {
      pppppppiVar13 = (int *******)0x0;
    }
    else if (local_328 == (int *******)0x2) {
      pppppppiVar13 = (int *******)0x2;
      local_4f4 = local_318;
      local_4f0 = local_324._4_4_;
      local_4f8 = (int *****)local_31c;
    }
    else {
      pppppppiVar13 = (int *******)&DAT_00000001;
    }
    local_158 = local_1e8;
    local_154 = ppppppiStack_1e4;
    local_150 = pppppppiStack_1e0;
    local_298 = (int *******)local_d0;
    local_294._0_4_ = (int ******)local_cc;
    local_294._4_4_ = (int *******)local_cc._4_4_;
    FUN_017793c0(&local_280);
    local_278 = (char *)local_4f0;
    local_274 = local_4f8;
    local_270 = (undefined **)local_4f4;
    local_27c = (int ******)0x0;
    local_280 = pppppppiVar13;
    local_268 = uVar28;
    pppppppiStack_258 = local_150;
    local_254 = local_298;
    ppppppiStack_250 = (int ******)local_294;
    pppppppiStack_24c = local_294._4_4_;
    local_248 = uVar3;
    iVar6 = 0;
    do {
      ppppppiVar16 = (int ******)(&local_328)[iVar6];
      (&local_328)[iVar6] = (int *******)param_2[iVar6];
      param_2[iVar6] = (int)ppppppiVar16;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x10);
    iVar6 = param_2[0x31];
    FUN_01bed4e2(&local_d0,&local_280,0x98);
    uVar28 = FUN_01797de4(iVar6 + 0x48,&local_d0);
    FUN_00e7a4b4(param_2[0x22],param_2[0x23]);
    *(undefined8 *)(param_2 + 0x22) = uVar28;
    FUN_01435814(&local_2e8);
    FUN_017793c0(&local_328);
    FUN_017851cc(auStack_460);
  }
  local_2a8 = local_3e8;
  local_294._0_4_ = (int ******)&DAT_01d1b6fc;
  local_298 = (int *******)&local_2a8;
  ppppppiVar16 = *local_3e8;
  if (ppppppiVar16 != (int ******)0x0) {
    (*(code *)local_3e8[1][7])(&local_d0,ppppppiVar16);
    if (((int *******)local_d0 == (int *******)0x599eda3 &&
        (int *******)local_cc._4_4_ == (int *******)0x49fd4a39) &&
        ((int ******)local_cc == (int ******)0x576e8a6c && local_c4 == (int *****)0x6a3336e3)) {
      cVar2 = *(char *)ppppppiVar16;
      if (cVar2 == '\0') {
        if (*(char *)((int)ppppppiVar16 + 1) != '\x02') goto LAB_0178dab4;
        iVar6 = 7;
        iVar22 = 8;
      }
      else {
        bVar27 = cVar2 == '\x01';
        if (bVar27) {
          cVar2 = *(char *)((int)ppppppiVar16 + 1);
        }
        if (!bVar27 || cVar2 != '\x02') goto LAB_0178dab4;
        iVar6 = 0;
        iVar22 = 4;
      }
      if (*(int *)((int)ppppppiVar16 + iVar22) == iVar6) {
        if (4 < DAT_01d51b00) {
          local_280 = (int *******)&local_298;
          local_27c = (int ******)&LAB_01aeb5d0;
          local_c4 = (int *****)0x1b;
          local_c0 = (int *******)&DAT_01d1b5fc;
          local_cc._0_4_ = (int ******)&DAT_0000001b;
          local_cc._4_4_ = "reqwest::async_i";
          local_d0 = "reqwest::async_i";
          FUN_0193b350(&DAT_0057775b,pppppppiVar13,5,&local_d0);
        }
        if (param_2[0x24] == 0) {
          local_2e4 = (int ******)&DAT_00000001;
          local_2dc = (int *****)0x0;
          local_2e0 = (int *******)0x0;
          local_2e8 = (int *******)&PTR_FUN_01d1cd44;
        }
        else {
          if ((undefined4 *)param_2[0x25] == (undefined4 *)0x0) {
            if (3 < DAT_01d51b00) {
              local_c4 = (int *****)0x1b;
              local_cc._0_4_ = (int ******)&DAT_0000001b;
              local_c0 = (int *******)&DAT_01d1b60c;
              local_cc._4_4_ = "reqwest::async_i";
              local_d0 = "reqwest::async_i";
              FUN_0193b350("error was retryable, but body not reusable",0x55,4,&local_d0);
            }
            goto LAB_0178dab4;
          }
          (**(code **)param_2[0x25])(&local_d0,piVar19,param_2[0x26],param_2[0x27]);
          local_2e8 = (int *******)local_d0;
          local_2e4 = (int ******)local_cc;
          local_2e0 = (int *******)local_cc._4_4_;
          local_2dc = local_c4;
        }
        if ((uint)param_2[0x32] < 2) {
          param_2[0x32] = param_2[0x32] + 1;
          FUN_017da8cc(&local_d0,pppppppiVar9);
          if ((char)local_d0 == '\x03') {
            local_280 = (int *******)(int ******)local_cc;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc("URL was already validated as URI",0x20,&local_280,&DAT_01d1a7c0,
                         &DAT_01d1b61c);
          }
          local_380 = (int *******)local_d0;
          local_37c = (int ******)local_cc;
          local_378 = (int *******)local_cc._4_4_;
          local_374 = local_c4;
          local_370 = local_c0;
          local_36c = local_bc;
          local_368 = local_b8;
          local_35c = local_ac;
          local_358 = local_a8;
          local_68 = CONCAT22(local_68._2_2_,0xffff);
          local_6c = (undefined *)0x0;
          local_70 = (undefined4 *)&DAT_00000001;
          local_74 = (int ******)&DAT_005327c4;
          local_7c = (int ****)0x0;
          local_78 = &PTR_FUN_01cf4050;
          local_80 = (char *)0x0;
          local_84 = (int *****)0x1;
          local_88 = (int ******)&PTR_FUN_01cf3fcc;
          local_364 = local_b4;
          FUN_01bed93e(auStack_64,1,0x14);
          local_98 = local_98 & 0xffff0000;
          local_4c = 2;
          uVar28 = CONCAT44(4,pbVar10);
          local_b8 = (int *******)0x2;
          local_a0 = (int *******)&SUB_00000004;
          local_ac = (int *****)0x4;
          bVar1 = *pbVar10;
          local_cc._0_4_ = (int ******)0x0;
          local_d0 = (char *)0x0;
          local_90 = (int *******)0x0;
          local_50 = 0;
          local_9c = 0;
          local_a4 = 0;
          local_a8 = (int *******)0x0;
          local_b4._4_4_ = 0;
          local_b4._0_4_ = 0;
          uVar25 = extraout_r3;
          if (8 < bVar1) {
            if (bVar1 == 9) {
              uVar28 = *(undefined8 *)(param_2 + 0x2d);
              uVar25 = (uint)*(byte *)(param_2 + 0x30);
              pppppppiVar13 = (int *******)param_2[0x2f];
              local_1e8 = (int *******)
                          CONCAT22(CONCAT11(local_1e8._3_1_,*(undefined1 *)((int)param_2 + 0xb3)),
                                   *(undefined2 *)((int)param_2 + 0xb1));
            }
            else {
              uVar28 = FUN_013d4df8(param_2[0x2d],param_2[0x2e]);
              uVar25 = extraout_r3_02;
            }
          }
          *(undefined1 *)(puVar11 + 1) = local_1e8._2_1_;
          *puVar11 = (undefined2)local_1e8;
          local_328 = (int *******)CONCAT31(local_328._1_3_,bVar1);
          local_31c = pppppppiVar13;
          local_318 = uVar25;
          local_324 = uVar28;
          FUN_013abc4c(&local_1e8,&local_d0,&local_328);
          FUN_017c449c(&local_158,&local_1e8,&local_380);
          ppppppiVar16 = local_154;
          pppppppiVar13 = local_158;
          local_328 = local_2e8;
          local_324._0_4_ = local_2e4;
          local_324._4_4_ = local_2e0;
          local_31c = (int *******)local_2dc;
          if (local_158 == (int *******)&DAT_00000003 && local_154 == (int ******)0x0) {
            uVar4 = (undefined1)local_150;
            uVar5 = local_150._1_1_;
            FUN_017c30a4(&local_328);
            local_d0 = (char *)CONCAT31(CONCAT21(local_d0._2_2_,uVar5),uVar4);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc("valid request parts",0x13,&local_d0,&DAT_01d1caac,&DAT_01d1b62c);
          }
          FUN_01bed4e2(auStack_52,&local_2e8,0x10);
          uVar3 = (undefined2)local_150;
          FUN_01bed4e2(&local_d0,(int)&local_150 + 2,0x7e);
          FUN_01bed4e2(&local_1e8,&local_d0,0x8e);
          local_27c = ppppppiVar16;
          local_278 = (char *)CONCAT22(local_278._2_2_,uVar3);
          local_280 = pppppppiVar13;
          FUN_01bed4e2((int)&local_278 + 2,&local_1e8,0x8e);
          iVar6 = param_2[0xe];
          uVar28 = FUN_017c1860(param_2[6],param_2[7]);
          FUN_0187b658(&local_1e8,param_2[9],param_2[10]);
          FUN_017260a4(&local_d0,param_2[0xc],param_2[0xd]);
          if (*param_2 == 0) {
            pppppppiVar13 = (int *******)0x0;
          }
          else if (*param_2 == 2) {
            pppppppiVar13 = (int *******)0x2;
            local_4f4 = param_2[4];
            local_4f0 = (int *******)param_2[2];
            local_4f8 = (int *****)param_2[3];
          }
          else {
            pppppppiVar13 = (int *******)&DAT_00000001;
          }
          local_158 = local_1e8;
          local_154 = ppppppiStack_1e4;
          local_150 = pppppppiStack_1e0;
          local_328 = (int *******)local_d0;
          local_324._0_4_ = (int ******)local_cc;
          local_324._4_4_ = (int *******)local_cc._4_4_;
          FUN_017793c0(&local_280);
          local_278 = (char *)local_4f0;
          local_274 = local_4f8;
          local_270 = (undefined **)local_4f4;
          local_27c = (int ******)0x0;
          pppppppiStack_258 = local_150;
          local_254 = local_328;
          ppppppiStack_250 = (int ******)local_324;
          pppppppiStack_24c = local_324._4_4_;
          iVar22 = param_2[0x31];
          local_280 = pppppppiVar13;
          local_248 = (short)iVar6;
          local_268 = uVar28;
          FUN_01bed4e2(&local_d0,&local_280,0x98);
          uVar28 = FUN_01797de4(iVar22 + 0x48,&local_d0);
          FUN_00e7a4b4(param_2[0x22],param_2[0x23]);
          *(undefined8 *)(param_2 + 0x22) = uVar28;
          FUN_017851fc(&local_2a8);
          goto LAB_0178bd9c;
        }
        if (4 < DAT_01d51b00) {
          local_c4 = (int *****)0x1b;
          local_cc._0_4_ = (int ******)&DAT_0000001b;
          local_c0 = (int *******)&DAT_01d1b63c;
          local_cc._4_4_ = "reqwest::async_i";
          local_d0 = "reqwest::async_i";
          FUN_0193b350("retry count too high",0x29,5,&local_d0);
        }
        FUN_01783d7c(&local_2e8);
      }
    }
  }
LAB_0178dab4:
  ppppppiVar16 = (int ******)FUN_017f08c0(1,local_2a8);
  local_280 = (int *******)ppppppiVar16;
  FUN_006666fc(&local_c0,param_2[0x15],param_2[0x16]);
  local_b4._4_4_ = param_2[0x18];
  local_ac = (int *****)param_2[0x19];
  local_a8 = (int *******)param_2[0x1a];
  local_a4 = param_2[0x1b];
  local_9c = *piVar20;
  local_98 = param_2[0x1e];
  local_90 = (int *******)param_2[0x20];
  local_d0 = (char *)param_2[0x10];
  local_cc._0_4_ = (int ******)param_2[0x11];
  local_cc._4_4_ = (char *)param_2[0x12];
  local_c4 = (int *****)param_2[0x13];
  local_b4._0_4_ = param_2[0x17];
  local_a0 = (int *******)param_2[0x1c];
  if (*ppppppiVar16 != (int *****)0x2) {
    FUN_019bb7e0(ppppppiVar16[4],ppppppiVar16[5]);
  }
  FUN_01bed4e2(ppppppiVar16,&local_d0,0x48);
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = ppppppiVar16;
  return;
  while ((*(int *)(iVar6 + 8) != 4 || (**(int **)(iVar6 + 4) != 0x70697a67))) {
LAB_0178d698:
    iVar6 = FUN_01430b30(&local_280);
    if (iVar6 == 0) {
      local_3f0 = (int *******)0x0;
      local_3ec = (undefined2 *)0x45;
      local_3e8 = (int *******)0x0;
      iStack_3e4 = 0;
      FUN_014308d0(&local_328,&local_1e8);
      FUN_0142f9bc(&local_280,local_324._4_4_,local_328,(int ******)local_324);
      goto LAB_0178d718;
    }
  }
  goto LAB_0178d744;
  while ((*(int *)(iVar6 + 8) != 4 || (**(int **)(iVar6 + 4) != 0x70697a67))) {
LAB_0178d718:
    iVar6 = FUN_01430b30(&local_280);
    if (iVar6 == 0) goto LAB_0178d7f8;
  }
LAB_0178d744:
  local_280 = (int *******)0x0;
  local_27c = (int ******)0x18;
  local_278 = (char *)0x0;
  local_274 = (int *****)0x0;
  iVar6 = FUN_013b43b8(&local_d0,&local_280);
  if (((iVar6 == 0) || (*(int *)(iVar6 + 8) != 1)) || (**(char **)(iVar6 + 4) != '0')) {
    local_3f0 = (int *******)0x0;
    local_3ec = (undefined2 *)0x16;
    local_3e8 = (int *******)0x0;
    iStack_3e4 = 0;
    FUN_014304d0(&local_280,&local_1e8);
    if ((char)local_270 != '\x02') {
      (*(code *)local_280[4])(&local_274,local_27c,local_278);
    }
    local_3f0 = (int *******)0x0;
    local_3ec = (undefined2 *)0x18;
    local_3e8 = (int *******)0x0;
    iStack_3e4 = 0;
    FUN_014304d0(&local_280,&local_1e8);
    if ((char)local_270 != '\x02') {
      (*(code *)local_280[4])(&local_274,local_27c,local_278);
    }
    local_26c = (int ******)local_380;
    local_268._0_4_ = local_37c;
    local_268._4_4_ = (undefined *)local_378;
    local_260 = (int)local_374;
    local_280 = (int *******)0x0;
    local_25c = local_25c & 0xffffff00;
    puVar14 = (undefined4 *)thunk_FUN_01be5118(0x28);
    if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x28);
    }
    uVar18 = 2;
    *puVar14 = local_280;
    puVar14[1] = local_27c;
    puVar14[2] = local_278;
    puVar14[3] = local_274;
    puVar14[4] = local_270;
    puVar14[5] = local_26c;
    puVar14[6] = (undefined4 *)local_268;
    puVar14[7] = local_268._4_4_;
    puVar14[8] = local_260;
    puVar14[9] = local_25c;
  }
  else {
    if (1 < DAT_01d51b00) {
      local_3f0 = (int *******)&local_2e8;
      local_3ec = &DAT_0132b6a0;
      local_270 = (undefined **)&DAT_01d1c6cc;
      local_274 = (int *****)0x1c;
      local_278 = "reqwest::async_impl::decoder";
      local_27c = (int ******)0x1c;
      local_280 = (int *******)0x50c026;
      FUN_0193b350(&DAT_005af7fd,&local_3f0,2,&local_280);
    }
LAB_0178d7f8:
    uVar18 = 0;
    puVar14 = (undefined4 *)0x0;
    local_38 = *puVar8;
    uStack_34 = puVar8[1];
    uStack_30 = puVar8[2];
  }
  FUN_01bed4e2(&local_280,&local_1e8,0x48);
  local_230 = local_38;
  uStack_22c = uStack_34;
  uStack_228 = uStack_30;
  local_238 = uVar18;
  local_234 = puVar14;
  iVar6 = thunk_FUN_01be5118(0x48);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x48);
  }
  FUN_01bed4e2(iVar6,&local_158,0x48);
  FUN_01bed4e2(param_1,&local_1e8,0x48);
  param_1[0x12] = uVar18;
  param_1[0x13] = puVar14;
  param_1[0x14] = local_38;
  param_1[0x15] = uStack_34;
  param_1[0x16] = uStack_30;
  param_1[0x18] = iVar6;
  return;
}

