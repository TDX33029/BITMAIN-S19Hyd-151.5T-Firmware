// FUN_006807d8 @ 006807d8 size=10600 calls_out=55 calls_in=3
// strings: API usage event channel closed.event open/utils-rs/api-logging/src/api_usage/manager.rs:71TryLockError | api_logging::api_usage::manageropen/utils-rs/api-logging/src/api_usage/manager.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | api_logging::api_usage::manageropen/utils-rs/api-logging/src/api_usage/manager.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | API usage event channel is full; dropping event.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006807d8(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int ****ppppiVar13;
  uint uVar14;
  int ******ppppppiVar15;
  int iVar16;
  int *******pppppppiVar17;
  undefined4 extraout_r1;
  undefined4 uVar18;
  int *******extraout_r2;
  undefined *puVar19;
  int *****pppppiVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  int ******ppppppiVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  int *******pppppppiVar28;
  int ******ppppppiVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  undefined4 uVar34;
  undefined1 *puVar35;
  int *piVar36;
  int *****pppppiVar37;
  int iVar38;
  uint uVar39;
  int *******pppppppiVar40;
  uint uVar41;
  uint *puVar42;
  uint uVar43;
  undefined1 *puVar44;
  undefined4 uVar45;
  uint *puVar46;
  undefined4 uVar47;
  undefined1 *puVar48;
  uint uVar49;
  undefined1 *puVar50;
  bool bVar51;
  ulonglong uVar52;
  undefined8 uVar53;
  undefined *local_414;
  uint *local_40c;
  int *******local_3f0;
  int *******local_3e8;
  int *******pppppppiStack_3e4;
  int *******pppppppiStack_3e0;
  int *******pppppppiStack_3dc;
  int *******local_3d8;
  uint uStack_3d4;
  uint uStack_3d0;
  int *******pppppppiStack_3cc;
  undefined4 uStack_3c8;
  uint local_3c0;
  byte local_3bc;
  char local_3bb;
  char local_3ba;
  int *******local_3b8;
  int *******local_3b4;
  int *******local_3b0;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  int *******local_318;
  int *******local_314;
  int *******local_310;
  undefined8 local_308;
  int *******local_300;
  int *******local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 auStack_280 [136];
  int ******local_1f8;
  undefined4 local_1f4;
  int *******local_1f0;
  int *******local_1ec;
  int *******local_1e8;
  int *******local_1e4;
  int *******local_1e0;
  int *******local_1dc;
  uint local_1d8;
  uint local_1d4;
  int *******local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  uint local_1c0;
  uint local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  uint local_168;
  uint local_164;
  int *local_160;
  uint *local_15c;
  int *******local_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int *******local_138;
  int *******local_134;
  int *******local_130;
  int *******local_128;
  int *******local_124;
  int *******local_120;
  int *******local_11c;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *******local_108;
  int *******local_104;
  int *******local_100;
  int *******pppppppiStack_fc;
  int *******local_f8;
  int *******local_f4;
  int *******local_f0;
  int *******local_e8;
  int *******local_e4;
  int *******local_e0;
  int *******pppppppiStack_dc;
  int *******local_d8;
  int *******local_d4;
  int *******local_d0;
  int *******local_c8;
  undefined8 local_c4;
  int *******local_bc;
  int *******local_b8;
  int *******local_b4;
  uint local_b0;
  uint local_ac;
  int *******local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined4 local_40;
  undefined4 uStack_3c;
  int *******pppppppiStack_38;
  int *******pppppppiStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar27 = param_1[3];
  puVar23 = (uint *)(iVar27 + 0x98);
  uVar4 = *(uint *)(iVar27 + 0x98);
  if ((uVar4 < 0xfffffff0) && ((uVar4 & 8) == 0)) {
    if (*puVar23 != uVar4) {
      ClearExclusiveLocal();
      goto LAB_0068082c;
    }
    bVar51 = (bool)hasExclusiveAccess(puVar23);
    if (!bVar51) goto LAB_0068082c;
    *puVar23 = uVar4 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_0068082c:
    FUN_0164cfdc(puVar23);
  }
  FUN_0165098c(puVar23);
  FUN_0165098c((uint)puVar23 | 1);
  DataMemoryBarrier(0xb);
  iVar33 = *(int *)(iVar27 + 0x9c);
  if (*(char *)(iVar33 + 0x79) == '\x01') {
    bVar1 = *(byte *)(param_2 + 0x80);
    uVar4 = (uint)bVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar1) {
    case 0:
      cVar3 = *(char *)(iVar33 + 0x14);
      break;
    case 1:
      cVar3 = *(char *)(iVar33 + 0x24);
      break;
    case 2:
      cVar3 = *(char *)(iVar33 + 0x34);
      break;
    case 3:
      cVar3 = *(char *)(iVar33 + 0x44);
      break;
    case 4:
      cVar3 = *(char *)(iVar33 + 0x54);
      break;
    case 5:
      cVar3 = *(char *)(iVar33 + 100);
      break;
    case 6:
      if (*(char *)(iVar33 + 0x74) != '\x01') goto LAB_00681510;
      goto LAB_006808c4;
    }
    if (cVar3 != '\0') {
LAB_006808c4:
      iVar33 = *(int *)(param_2 + 0x50);
      uVar34 = 0;
      pppppppiVar40 = (int *******)0x0;
      if (iVar33 != -0x80000000) {
        pppppppiVar40 = *(int ********)(param_2 + 0x58);
      }
      if ((int)pppppppiVar40 < 0) {
LAB_006808f0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar34,pppppppiVar40);
      }
      uVar18 = *(undefined4 *)(param_2 + 0x54);
      if (pppppppiVar40 == (int *******)0x0) {
        pppppppiVar5 = (int *******)&DAT_00000001;
        pppppppiVar6 = (int *******)0x0;
      }
      else {
        uVar34 = 1;
        pppppppiVar5 = (int *******)FUN_01298504(pppppppiVar40,1);
        pppppppiVar6 = pppppppiVar40;
        if (pppppppiVar5 == (int *******)0x0) goto LAB_006808f0;
      }
      if (iVar33 == -0x80000000) {
        uVar18 = 1;
      }
      FUN_01bed4e2(pppppppiVar5,uVar18,pppppppiVar40);
      pppppppiVar28 = *(int ********)(param_2 + 0x48);
      pppppppiVar17 = *(int ********)(param_2 + 0x4c);
      if (*(int *)(param_2 + 0x44) == -0x80000000) {
        pppppppiVar28 = (int *******)&DAT_00000001;
        pppppppiVar17 = (int *******)0x0;
      }
      local_f8 = pppppppiVar6;
      local_f4 = pppppppiVar5;
      local_f0 = pppppppiVar40;
      if (uVar4 < 7) {
        if ((1 << uVar4 & 0x62U) == 0) goto LAB_006809c8;
        local_308._0_4_ = pppppppiVar28;
        local_308._4_4_ = pppppppiVar17;
        if (*(int *)(param_2 + 0x38) == -0x80000000) goto LAB_006809c8;
        local_c4._4_4_ = (int *******)&local_308;
        local_bc = (int *******)&DAT_0132b6a0;
        local_c4._0_4_ = (int *******)&DAT_0132b6a0;
        local_1f0 = *(int ********)(param_2 + 0x3c);
        local_1ec = *(int ********)(param_2 + 0x40);
        local_c8 = (int *******)&local_1f0;
        FUN_00664898(&local_d8,&DAT_0057d5fc,&local_c8);
      }
      else {
LAB_006809c8:
        uVar34 = 0;
        if ((int)pppppppiVar17 < 0) {
LAB_006809d4:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar34,pppppppiVar17);
        }
        if (pppppppiVar17 == (int *******)0x0) {
          pppppppiVar40 = (int *******)0x0;
          pppppppiVar6 = (int *******)&DAT_00000001;
        }
        else {
          uVar34 = 1;
          pppppppiVar6 = (int *******)FUN_01298504(pppppppiVar17,1);
          pppppppiVar40 = pppppppiVar17;
          if (pppppppiVar6 == (int *******)0x0) goto LAB_006809d4;
        }
        FUN_01bed4e2(pppppppiVar6,pppppppiVar28,pppppppiVar17);
        local_d8 = pppppppiVar40;
        local_d4 = pppppppiVar6;
        local_d0 = pppppppiVar17;
      }
      pppppppiVar6 = local_d0;
      pppppppiVar40 = local_d4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar1) {
      case 0:
        local_1cc = CONCAT22(local_1cc._2_2_,1);
        local_1d8 = CONCAT31(local_1d8._1_3_,1);
        local_1d0 = local_d0;
        local_1d4 = 0;
        local_1dc = (int *******)&DAT_0000002b;
        local_1e0 = local_d0;
        local_1e4 = (int *******)0x0;
        local_1e8 = local_d0;
        local_1ec = local_d4;
        local_1f0 = (int *******)0x2b;
        FUN_0069e724(&local_3b8,&local_1f0);
        if (local_3b8 == (int *******)&DAT_80000000) {
          local_c4._4_4_ = (int *******)0x0;
          local_c4._0_4_ = (int *******)&SUB_00000004;
          local_c8 = (int *******)0x0;
LAB_00681d28:
          pppppppiVar5 = (int *******)thunk_FUN_01be5118(0xc);
          if (pppppppiVar5 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0xc);
          }
          uVar34 = 0;
          if ((int)pppppppiVar6 < 0) {
LAB_00681d4c:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar34,pppppppiVar6);
          }
          if (pppppppiVar6 == (int *******)0x0) {
            ppppppiVar15 = (int ******)0x1;
            pppppppiVar17 = (int *******)0x0;
          }
          else {
            uVar34 = 1;
            ppppppiVar15 = (int ******)FUN_01298504(pppppppiVar6,1);
            pppppppiVar17 = pppppppiVar6;
            if (ppppppiVar15 == (int ******)0x0) goto LAB_00681d4c;
          }
          FUN_01bed4e2(ppppppiVar15,pppppppiVar40,pppppppiVar6);
          *pppppppiVar5 = (int ******)pppppppiVar17;
          pppppppiVar5[1] = ppppppiVar15;
          pppppppiVar5[2] = (int ******)pppppppiVar6;
          local_100 = (int *******)&DAT_00000001;
          local_108 = (int *******)&DAT_00000001;
          local_104 = pppppppiVar5;
          FUN_006a41c0(&local_c8);
        }
        else {
          pppppppiVar5 = (int *******)thunk_FUN_01be5118(0x30);
          if (pppppppiVar5 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(4,0x30);
          }
          *pppppppiVar5 = (int ******)local_3b8;
          pppppppiVar5[1] = (int ******)local_3b4;
          pppppppiVar5[2] = (int ******)local_3b0;
          local_128 = (int *******)&SUB_00000004;
          local_120 = (int *******)&DAT_00000001;
          local_c8 = local_1f0;
          local_c4._0_4_ = local_1ec;
          local_c4._4_4_ = local_1e8;
          local_bc = local_1e4;
          local_b8 = local_1e0;
          iVar33 = 0xc;
          local_b4 = local_1dc;
          local_b0 = local_1d8;
          local_ac = local_1d4;
          local_a8 = local_1d0;
          local_a4 = local_1cc;
          local_124 = pppppppiVar5;
          while( true ) {
            pppppppiVar17 = local_120;
            FUN_0069e724(&local_308,&local_c8);
            if ((int *******)local_308 == (int *******)&DAT_80000000) break;
            if (pppppppiVar17 == local_128) {
              FUN_006520b4(&local_128,pppppppiVar17,1,4,0xc);
              pppppppiVar5 = local_124;
            }
            puVar7 = (undefined4 *)((int)pppppppiVar5 + iVar33);
            local_120 = (int *******)((int)pppppppiVar17 + 1);
            iVar33 = iVar33 + 0xc;
            *puVar7 = (int *******)local_308;
            puVar7[1] = local_308._4_4_;
            puVar7[2] = local_300;
          }
          local_108 = local_128;
          local_104 = local_124;
          local_100 = local_120;
          local_c8 = local_108;
          local_c4._0_4_ = local_104;
          local_c4._4_4_ = local_100;
          if (local_120 == (int *******)0x0) goto LAB_00681d28;
        }
        bVar51 = true;
        break;
      default:
        local_104 = (int *******)thunk_FUN_01be5118(0xc);
        if (local_104 == (int *******)0x0) {
LAB_006831e8:
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        bVar51 = false;
        *local_104 = (int ******)local_d8;
        local_104[1] = (int ******)local_d4;
        local_104[2] = (int ******)local_d0;
        local_100 = (int *******)&DAT_00000001;
        local_108 = (int *******)&DAT_00000001;
        break;
      case 2:
        pppppppiVar5 = (int *******)0x0;
        do {
          uVar14 = (int)pppppppiVar6 - (int)pppppppiVar5;
          if (uVar14 < 8) {
            uVar11 = 0;
            if (uVar14 == 0) {
              uVar52 = 0;
            }
            else {
              do {
                if (((undefined1 *)((int)pppppppiVar40 + (int)pppppppiVar5))[uVar11] == '(') {
                  uVar52 = CONCAT44(uVar11,1);
                  goto LAB_00681bd0;
                }
                uVar11 = uVar11 + 1;
              } while (uVar14 != uVar11);
              uVar52 = (ulonglong)uVar14 << 0x20;
            }
          }
          else {
            uVar52 = FUN_01307168(0x28,(undefined1 *)((int)pppppppiVar40 + (int)pppppppiVar5));
          }
LAB_00681bd0:
          if ((uVar52 & 1) == 0) break;
          pppppppiVar17 = (int *******)((int)(uVar52 >> 0x20) + (int)pppppppiVar5);
          pppppppiVar5 = (int *******)((int)pppppppiVar17 + 1);
          if ((pppppppiVar17 < pppppppiVar6) &&
             (*(char *)((int)pppppppiVar40 + (int)pppppppiVar17) == '(')) {
            local_308._0_4_ = pppppppiVar40;
            local_308._4_4_ = pppppppiVar17;
            uVar53 = FUN_00700b3c((undefined1 *)((int)pppppppiVar40 + (int)pppppppiVar5),
                                  (int)pppppppiVar6 - (int)pppppppiVar5,0x29);
            pppppppiVar5 = (int *******)((ulonglong)uVar53 >> 0x20);
            if ((int)uVar53 == 0) {
              pppppppiVar5 = (int *******)thunk_FUN_01be5118(0xc);
              if (pppppppiVar5 == (int *******)0x0) goto LAB_006831e8;
              uVar34 = 0;
              if (-1 < (int)pppppppiVar6) {
                uVar34 = 1;
                ppppppiVar15 = (int ******)FUN_01298504(pppppppiVar6,1);
                if (ppppppiVar15 != (int ******)0x0) {
                  FUN_01bed4e2(ppppppiVar15,pppppppiVar40,pppppppiVar6);
                  *pppppppiVar5 = (int ******)pppppppiVar6;
                  goto LAB_0068222c;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar34,pppppppiVar6);
            }
            local_a0 = &local_308;
            local_a4 = CONCAT22(local_a4._2_2_,1);
            local_b0 = CONCAT31(local_b0._1_3_,1);
            local_ac = 0;
            local_b4 = (int *******)&DAT_0000002c;
            local_bc = (int *******)0x0;
            local_c8 = (int *******)0x2c;
            local_b8 = pppppppiVar5;
            local_a8 = pppppppiVar5;
            local_c4 = uVar53;
            FUN_006a0424(&local_1f0,&local_c8);
            if (local_1e8 == (int *******)0x0) {
              pppppppiVar5 = (int *******)thunk_FUN_01be5118(0xc);
              if (pppppppiVar5 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0xc);
              }
              uVar34 = 0;
              if ((int)pppppppiVar6 < 0) {
LAB_00682480:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar34,pppppppiVar6);
              }
              uVar34 = 1;
              ppppppiVar15 = (int ******)FUN_01298504(pppppppiVar6,1);
              if (ppppppiVar15 == (int ******)0x0) goto LAB_00682480;
              FUN_01bed4e2(ppppppiVar15,pppppppiVar40,pppppppiVar6);
              *pppppppiVar5 = (int ******)pppppppiVar6;
              local_100 = (int *******)&DAT_00000001;
              local_108 = (int *******)&DAT_00000001;
              pppppppiVar5[1] = ppppppiVar15;
              pppppppiVar5[2] = (int ******)pppppppiVar6;
              local_104 = pppppppiVar5;
              FUN_006a41c0(&local_1f0);
            }
            else {
              local_108 = local_1f0;
              local_104 = local_1ec;
              local_100 = local_1e8;
            }
            bVar51 = true;
            goto LAB_00680acc;
          }
        } while (pppppppiVar5 <= pppppppiVar6);
        pppppppiVar5 = (int *******)thunk_FUN_01be5118(0xc);
        if (pppppppiVar5 == (int *******)0x0) goto LAB_006831e8;
        uVar34 = 0;
        if ((int)pppppppiVar6 < 0) {
LAB_00681c1c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar34,pppppppiVar6);
        }
        if (pppppppiVar6 == (int *******)0x0) {
          ppppppiVar15 = (int ******)0x1;
          pppppppiVar17 = (int *******)0x0;
        }
        else {
          uVar34 = 1;
          ppppppiVar15 = (int ******)FUN_01298504(pppppppiVar6,1);
          pppppppiVar17 = pppppppiVar6;
          if (ppppppiVar15 == (int ******)0x0) goto LAB_00681c1c;
        }
        FUN_01bed4e2(ppppppiVar15,pppppppiVar40,pppppppiVar6);
        *pppppppiVar5 = (int ******)pppppppiVar17;
LAB_0068222c:
        bVar51 = true;
        pppppppiVar5[1] = ppppppiVar15;
        pppppppiVar5[2] = (int ******)pppppppiVar6;
        local_100 = (int *******)&DAT_00000001;
        local_108 = (int *******)&DAT_00000001;
        local_104 = pppppppiVar5;
      }
LAB_00680acc:
      local_c8 = (int *******)&local_1f0;
      local_1e8 = (int *******)0x0;
      local_1f0 = (int *******)0x0;
      local_bc = (int *******)0x0;
      local_1ec = (int *******)&DAT_00000001;
      local_c4._4_4_ = (int *******)0x60000020;
      local_c4._0_4_ = (int *******)&DAT_01c050c0;
      iVar33 = FUN_0067c534(uVar4,&local_c8);
      pppppppiVar40 = local_100;
      if (iVar33 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_308,&DAT_01c050d8,&DAT_01d30334);
      }
      local_1dc = (int *******)&local_e8;
      local_e8 = local_1f0;
      local_e4 = local_1ec;
      local_e0 = local_1e8;
      local_1e0 = (int *******)&local_f8;
      local_1e8 = local_108;
      uVar34 = 0;
      local_1e4 = local_104 + (int)local_100 * 3;
      local_1ec = local_104;
      iVar33 = (int)local_100 * 0x24;
      local_1f0 = local_104;
      if ((int *******)0x38e38e3 < local_100) {
LAB_00680b70:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar34,iVar33);
      }
      local_3f0 = (int *******)0x0;
      if (iVar33 == 0) {
        pppppppiVar6 = (int *******)&SUB_00000004;
        pppppppiVar40 = (int *******)0x0;
      }
      else {
        uVar34 = 4;
        pppppppiVar6 = (int *******)FUN_01298504(iVar33,4);
        if (pppppppiVar6 == (int *******)0x0) goto LAB_00680b70;
      }
      pppppppiVar17 = local_1e4;
      pppppppiVar5 = local_1ec;
      local_150 = (int *******)0x0;
      local_308._0_4_ = local_1f0;
      local_308._4_4_ = local_1ec;
      local_300 = local_1e8;
      local_2fc = local_1e4;
      local_158 = pppppppiVar40;
      local_154 = pppppppiVar6;
      if (local_1ec != local_1e4) {
        iVar33 = 0;
        local_3f0 = (int *******)0x0;
        do {
          puVar7 = (undefined4 *)((int)pppppppiVar5 + iVar33);
          uVar45 = *puVar7;
          uVar18 = puVar7[2];
          uVar34 = puVar7[1];
          FUN_006666fc(&local_128,local_f4,local_f0);
          FUN_006666fc(&local_3b8,local_e4,local_e0);
          local_c8 = local_128;
          local_c4._0_4_ = local_124;
          local_c4._4_4_ = local_120;
          local_bc = local_3b8;
          local_b8 = local_3b4;
          local_b4 = local_3b0;
          iVar25 = iVar33 * 3;
          iVar33 = iVar33 + 0xc;
          puVar8 = (undefined4 *)((int)pppppppiVar6 + iVar25);
          *puVar8 = local_128;
          puVar8[1] = local_124;
          puVar8[2] = local_120;
          puVar8[3] = local_3b8;
          puVar8[4] = local_3b4;
          puVar8[5] = local_3b0;
          puVar8[6] = uVar45;
          puVar8[7] = uVar34;
          puVar8[8] = uVar18;
          local_3f0 = (int *******)((int)local_3f0 + 1);
        } while ((int *******)(puVar7 + 3) != pppppppiVar17);
        local_308._4_4_ = (int *******)((int)pppppppiVar5 + iVar33);
      }
      local_150 = local_3f0;
      FUN_01574820(&local_308);
      FUN_019bb7e0(local_e8,local_e4);
      if (bVar51) {
        FUN_019bb7e0(local_d8,local_d4);
      }
      FUN_019bb7e0(local_f8,local_f4);
      pppppppiVar5 = pppppppiVar6 + (int)local_3f0 * 9;
      local_308._0_4_ = pppppppiVar6;
      local_308._4_4_ = pppppppiVar6;
      local_300 = pppppppiVar40;
      local_2fc = pppppppiVar5;
      if (local_3f0 != (int *******)0x0) {
        piVar36 = (int *)((uint)&local_3e8 | 4);
        iVar33 = param_1[6];
        puVar46 = (uint *)(iVar33 + 0x48);
        puVar42 = (uint *)(iVar33 + 0x24);
        puVar26 = (uint *)(iVar33 + 0x90);
        local_414 = &DAT_01c0587c;
        do {
          pppppppiVar17 = pppppppiVar6 + 9;
          pppppppiVar40 = (int *******)*pppppppiVar6;
          local_308._4_4_ = pppppppiVar17;
          if (pppppppiVar40 == (int *******)&DAT_80000000) break;
          ppppppiVar15 = pppppppiVar6[2];
          ppppppiVar24 = pppppppiVar6[3];
          ppppppiVar29 = pppppppiVar6[4];
          *piVar36 = (int)pppppppiVar6[1];
          piVar36[1] = (int)ppppppiVar15;
          piVar36[2] = (int)ppppppiVar24;
          piVar36[3] = (int)ppppppiVar29;
          ppppppiVar15 = pppppppiVar6[6];
          ppppppiVar24 = pppppppiVar6[7];
          ppppppiVar29 = pppppppiVar6[8];
          piVar36[4] = (int)pppppppiVar6[5];
          piVar36[5] = (int)ppppppiVar15;
          piVar36[6] = (int)ppppppiVar24;
          piVar36[7] = (int)ppppppiVar29;
          uVar4 = *puVar26;
          DataMemoryBarrier(0xb);
          do {
            local_3e8 = pppppppiVar40;
            if ((uVar4 & 1) != 0) {
              local_c4._4_4_ = pppppppiStack_3e4;
              local_bc = pppppppiStack_3e0;
              local_b8 = pppppppiStack_3dc;
              local_b4 = local_3d8;
              local_b0 = uStack_3d4;
              local_ac = uStack_3d0;
              local_a8 = pppppppiStack_3cc;
              local_a4 = uStack_3c8;
              local_c8 = (int *******)&DAT_00000001;
              local_c4._0_4_ = pppppppiVar40;
              if (DAT_01d50f88 < 4) {
                if (DAT_01d4b6d0 - 1 < 2) {
LAB_00680f24:
                  iVar25 = FUN_01aaa278(DAT_01d4b6c8);
                  if (iVar25 == 0) goto LAB_00681220;
                  if (*(int ********)(DAT_01d4b6c8 + 0x20) == (int *******)0x0) goto LAB_0068328c;
                  local_154 = (int *******)&local_108;
                  local_1e8 = *(int ********)(DAT_01d4b6c8 + 0x24);
                  local_1e4 = *(int ********)(DAT_01d4b6c8 + 0x28);
                  local_e0 = (int *******)(DAT_01d4b6c8 + 0x1c);
                  local_1f0 = (int *******)*local_e0;
                  local_158 = (int *******)&local_1f0;
                  local_1e0 = (int *******)0x0;
                  local_e8 = (int *******)&local_158;
                  local_e4 = (int *******)&DAT_00000001;
                  local_150 = (int *******)&DAT_01d2ea4c;
                  local_104 = (int *******)&DAT_0000003f;
                  local_108 = (int *******)0x3d5790;
                  local_1ec = *(int ********)(DAT_01d4b6c8 + 0x20);
                  FUN_01aaaecc(DAT_01d4b6c8,&local_e8);
                  iVar25 = DAT_01d4b6c8;
                  if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                    local_124 = *(int ********)(DAT_01d4b6c8 + 0x14);
                    local_120 = *(int ********)(DAT_01d4b6c8 + 0x18);
                    local_128 = (int *******)0x2;
                    DataMemoryBarrier(0xb);
                    pcVar10 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    puVar7 = DAT_01d4edc8;
                    if (DAT_01d51174 != 2) {
                      puVar7 = &DAT_01cfc5e0;
                    }
                    iVar38 = (*(code *)puVar7[3])(pcVar10,&local_128);
                    if (iVar38 != 0) {
                      local_3b8 = local_128;
                      local_3b4 = local_124;
                      local_3b0 = local_120;
                      FUN_01aaa328(iVar25,pcVar10,puVar7[4],&local_3b8,&local_e8);
                    }
                  }
                  goto LAB_0068149c;
                }
                if (DAT_01d4b6d0 != 0) {
                  cVar3 = FUN_01aaafa8(&DAT_01d4b6c8);
                  if (cVar3 != '\0') goto LAB_00680f24;
                }
              }
LAB_00681220:
              iVar25 = DAT_01d4b6c8;
              if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                local_e4 = *(int ********)(DAT_01d4b6c8 + 0x14);
                local_e0 = *(int ********)(DAT_01d4b6c8 + 0x18);
                local_e8 = (int *******)0x2;
                DataMemoryBarrier(0xb);
                pcVar10 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar7 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar7 = &DAT_01cfc5e0;
                }
                iVar38 = (*(code *)puVar7[3])(pcVar10,&local_e8);
                if (iVar38 != 0) {
                  if (*(int ********)(DAT_01d4b6c8 + 0x20) == (int *******)0x0) goto LAB_0068328c;
                  local_1e4 = *(int ********)(DAT_01d4b6c8 + 0x28);
                  local_124 = (int *******)&local_108;
                  local_128 = (int *******)&local_1f0;
                  local_1e8 = *(int ********)(DAT_01d4b6c8 + 0x24);
                  local_158 = (int *******)&local_128;
                  local_1e0 = (int *******)0x0;
                  local_154 = (int *******)&DAT_00000001;
                  local_120 = (int *******)&DAT_01d2ea4c;
                  local_104 = (int *******)&DAT_0000003f;
                  local_108 = (int *******)0x3d5790;
                  local_3b8 = local_e8;
                  local_3b4 = local_e4;
                  local_3b0 = local_e0;
                  local_1f0 = *(int ********)(DAT_01d4b6c8 + 0x1c);
                  local_1ec = *(int ********)(DAT_01d4b6c8 + 0x20);
                  local_150 = (int *******)(DAT_01d4b6c8 + 0x1c);
                  FUN_01aaa328(iVar25,pcVar10,puVar7[4],&local_3b8,&local_158);
                }
              }
LAB_0068149c:
              FUN_00949bc0(&local_c4);
              goto LAB_006814a8;
            }
            if (uVar4 < 2) {
              local_c4._4_4_ = pppppppiStack_3e4;
              local_bc = pppppppiStack_3e0;
              local_b8 = pppppppiStack_3dc;
              local_b4 = local_3d8;
              local_b0 = uStack_3d4;
              local_ac = uStack_3d0;
              local_a8 = pppppppiStack_3cc;
              local_a4 = uStack_3c8;
              local_c8 = (int *******)0x0;
              local_c4._0_4_ = pppppppiVar40;
              if (DAT_01d50f88 < 4) {
                if (1 < DAT_01d4b6c4 - 1) {
                  if (DAT_01d4b6c4 != 0) {
                    cVar3 = FUN_01aaafa8(&DAT_01d4b6bc);
                    if (cVar3 != '\0') goto LAB_006810c4;
                  }
                  goto LAB_00681364;
                }
LAB_006810c4:
                iVar25 = FUN_01aaa278(DAT_01d4b6bc);
                if (iVar25 == 0) goto LAB_00681364;
                if (*(int ********)(DAT_01d4b6bc + 0x20) != (int *******)0x0) {
                  local_154 = (int *******)&local_108;
                  local_1e8 = *(int ********)(DAT_01d4b6bc + 0x24);
                  local_1e4 = *(int ********)(DAT_01d4b6bc + 0x28);
                  local_e0 = (int *******)(DAT_01d4b6bc + 0x1c);
                  local_1f0 = (int *******)*local_e0;
                  local_158 = (int *******)&local_1f0;
                  local_1e0 = (int *******)0x0;
                  local_e8 = (int *******)&local_158;
                  local_e4 = (int *******)&DAT_00000001;
                  local_150 = (int *******)&DAT_01d2ea4c;
                  local_104 = (int *******)&DAT_00000061;
                  local_108 = (int *******)0x3d5760;
                  local_1ec = *(int ********)(DAT_01d4b6bc + 0x20);
                  FUN_01aaaecc(DAT_01d4b6bc,&local_e8);
                  iVar25 = DAT_01d4b6bc;
                  if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                    local_124 = *(int ********)(DAT_01d4b6bc + 0x14);
                    local_120 = *(int ********)(DAT_01d4b6bc + 0x18);
                    local_128 = (int *******)0x2;
                    DataMemoryBarrier(0xb);
                    pcVar10 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    puVar7 = DAT_01d4edc8;
                    if (DAT_01d51174 != 2) {
                      puVar7 = &DAT_01cfc5e0;
                    }
                    iVar38 = (*(code *)puVar7[3])(pcVar10,&local_128);
                    if (iVar38 != 0) {
                      local_3b8 = local_128;
                      local_3b4 = local_124;
                      local_3b0 = local_120;
                      FUN_01aaa328(iVar25,pcVar10,puVar7[4],&local_3b8,&local_e8);
                    }
                  }
                  goto LAB_0068149c;
                }
LAB_00683280:
                local_414 = &DAT_01c0586c;
LAB_0068328c:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,local_414);
              }
LAB_00681364:
              iVar25 = DAT_01d4b6bc;
              if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                local_e4 = *(int ********)(DAT_01d4b6bc + 0x14);
                local_e0 = *(int ********)(DAT_01d4b6bc + 0x18);
                local_e8 = (int *******)0x2;
                DataMemoryBarrier(0xb);
                pcVar10 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar7 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar7 = &DAT_01cfc5e0;
                }
                iVar38 = (*(code *)puVar7[3])(pcVar10,&local_e8);
                if (iVar38 != 0) {
                  if (*(int ********)(DAT_01d4b6bc + 0x20) == (int *******)0x0) goto LAB_00683280;
                  local_1e4 = *(int ********)(DAT_01d4b6bc + 0x28);
                  local_124 = (int *******)&local_108;
                  local_128 = (int *******)&local_1f0;
                  local_1e8 = *(int ********)(DAT_01d4b6bc + 0x24);
                  local_158 = (int *******)&local_128;
                  local_1e0 = (int *******)0x0;
                  local_154 = (int *******)&DAT_00000001;
                  local_120 = (int *******)&DAT_01d2ea4c;
                  local_104 = (int *******)&DAT_00000061;
                  local_108 = (int *******)0x3d5760;
                  local_3b8 = local_e8;
                  local_3b4 = local_e4;
                  local_3b0 = local_e0;
                  local_1f0 = *(int ********)(DAT_01d4b6bc + 0x1c);
                  local_1ec = *(int ********)(DAT_01d4b6bc + 0x20);
                  local_150 = (int *******)(DAT_01d4b6bc + 0x1c);
                  FUN_01aaa328(iVar25,pcVar10,puVar7[4],&local_3b8,&local_158);
                }
              }
              goto LAB_0068149c;
            }
            uVar14 = *puVar26;
            if (uVar14 == uVar4) {
              DataMemoryBarrier(0xb);
              do {
                bVar51 = (bool)hasExclusiveAccess(puVar26);
                if (bVar51) {
                  *puVar26 = uVar4 - 2;
                  bVar51 = true;
                  uVar4 = uVar14;
                  goto LAB_00680e00;
                }
                uVar14 = *puVar26;
              } while (uVar14 == uVar4);
            }
            bVar51 = false;
            ClearExclusiveLocal();
            uVar4 = uVar14;
LAB_00680e00:
            DataMemoryBarrier(0xb);
          } while (!bVar51);
          do {
            uVar4 = *puVar42;
            bVar51 = (bool)hasExclusiveAccess(puVar42);
          } while (!bVar51);
          *puVar42 = uVar4 + 1;
          DataMemoryBarrier(0xb);
          iVar25 = FUN_0069bb34(iVar33 + 0x20,uVar4);
          puVar7 = (undefined4 *)(iVar25 + (uVar4 & 0xf) * 0x24);
          *puVar7 = local_3e8;
          puVar7[1] = pppppppiStack_3e4;
          puVar7[2] = pppppppiStack_3e0;
          puVar7[3] = pppppppiStack_3dc;
          puVar9 = (uint *)(iVar25 + 0x248);
          puVar7[4] = local_3d8;
          puVar7[5] = uStack_3d4;
          puVar7[6] = uStack_3d0;
          puVar7[7] = pppppppiStack_3cc;
          puVar7[8] = uStack_3c8;
          DataMemoryBarrier(0xb);
          do {
            bVar51 = (bool)hasExclusiveAccess(puVar9);
          } while (!bVar51);
          *puVar9 = *puVar9 | 1 << (uVar4 & 0xf);
          DataMemoryBarrier(0xb);
          do {
            uVar4 = *puVar46;
            bVar51 = (bool)hasExclusiveAccess(puVar46);
          } while (!bVar51);
          *puVar46 = uVar4 | 2;
          DataMemoryBarrier(0xb);
          if (uVar4 == 0) {
            iVar25 = *(int *)(iVar33 + 0x40);
            *(undefined4 *)(iVar33 + 0x40) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar51 = (bool)hasExclusiveAccess(puVar46);
            } while (!bVar51);
            *puVar46 = 0;
            if (iVar25 != 0) {
              (**(code **)(iVar25 + 4))(*(undefined4 *)(iVar33 + 0x44));
            }
          }
LAB_006814a8:
          pppppppiVar6 = pppppppiVar17;
        } while (pppppppiVar17 != pppppppiVar5);
      }
      FUN_006a03c4(&local_308);
      iVar33 = *(int *)(iVar27 + 0x9c);
    }
  }
LAB_00681510:
  if (*(char *)(iVar33 + 0x78) == '\0') goto LAB_00681798;
  uVar18 = *(undefined4 *)(param_2 + 0x40);
  uVar34 = 0;
  if (*(int *)(param_2 + 0x38) != -0x80000000) {
    uVar34 = *(undefined4 *)(param_2 + 0x3c);
  }
  uVar47 = *(undefined4 *)(param_2 + 0x4c);
  iVar27 = 0x10;
  uVar45 = 0;
  if (*(int *)(param_2 + 0x44) != -0x80000000) {
    uVar45 = *(undefined4 *)(param_2 + 0x48);
  }
  iVar25 = 0xc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x80)) {
  case 1:
    FUN_0069ab10(&local_c8,uVar34,uVar18,uVar45,uVar47);
    pppppppiVar6 = (int *******)local_c4;
    pppppppiVar40 = local_c8;
    pppppppiVar5 = (int *******)0x0;
    if (local_c8 != (int *******)&DAT_80000000) {
      pppppppiVar5 = (int *******)local_c4;
    }
    FUN_0069a858(&local_3c0,*(undefined4 *)(iVar33 + 0x1c),*(undefined4 *)(iVar33 + 0x20),
                 pppppppiVar5,local_c4._4_4_);
    goto LAB_00681688;
  case 2:
    iVar27 = 0x30;
    iVar25 = 0x2c;
    break;
  case 3:
    iVar27 = 0x40;
    iVar25 = 0x3c;
    break;
  case 4:
    iVar27 = 0x50;
    iVar25 = 0x4c;
    break;
  case 5:
    FUN_0069ab10(&local_c8,uVar34,uVar18,uVar45,uVar47);
    pppppppiVar6 = (int *******)local_c4;
    pppppppiVar40 = local_c8;
    pppppppiVar5 = (int *******)0x0;
    if (local_c8 != (int *******)&DAT_80000000) {
      pppppppiVar5 = (int *******)local_c4;
    }
    FUN_0069a858(&local_3c0,*(undefined4 *)(iVar33 + 0x5c),*(undefined4 *)(iVar33 + 0x60),
                 pppppppiVar5,local_c4._4_4_);
    goto LAB_00681688;
  case 6:
    FUN_0069ab10(&local_c8,uVar34,uVar18,uVar45,uVar47);
    pppppppiVar6 = (int *******)local_c4;
    pppppppiVar40 = local_c8;
    pppppppiVar5 = (int *******)0x0;
    if (local_c8 != (int *******)&DAT_80000000) {
      pppppppiVar5 = (int *******)local_c4;
    }
    FUN_0069a858(&local_3c0,*(undefined4 *)(iVar33 + 0x6c),*(undefined4 *)(iVar33 + 0x70),
                 pppppppiVar5,local_c4._4_4_);
LAB_00681688:
    if (pppppppiVar40 != (int *******)&DAT_80000000) {
      FUN_019bb7e0(pppppppiVar40,pppppppiVar6);
    }
    goto LAB_0068169c;
  }
  FUN_0069a858(&local_3c0,*(undefined4 *)(iVar33 + iVar25),*(undefined4 *)(iVar33 + iVar27),uVar45,
               uVar47);
LAB_0068169c:
  if ((*(uint *)(param_2 + 0x34) < local_3c0) || ((local_3bc & 1) != 0)) {
LAB_00681798:
    FUN_00b92330(puVar23);
    FUN_0069b234(param_2);
    return;
  }
  if (local_3bb != '\0') {
    if (*(char *)(param_2 + 0x1c) != '\x02') {
      FUN_0067e0f0(param_2 + 0x10);
    }
    *(undefined1 *)(param_2 + 0x1c) = 2;
    if (*(int *)(param_2 + 0x20) != 2) {
      if (*(int *)(param_2 + 0x28) != -0x80000000) {
        FUN_019bb7e0(*(int *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
      }
      *(undefined4 *)(param_2 + 0x28) = 0x80000000;
    }
  }
  if (local_3ba == '\0') {
    FUN_00683830(&local_c8,*param_1,param_2);
    if (local_c8 == (int *******)0x2 && (int *******)local_c4 == (int *******)0x0)
    goto LAB_006822d4;
    if (((uint)local_c8 & 1) == 0) {
      if ((DAT_01d50f88 < 2) &&
         (((DAT_01d4b520 - 1 < 2 ||
           ((DAT_01d4b520 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4b518), cVar3 != '\0')))) &&
          (iVar27 = FUN_01aaa278(DAT_01d4b518), iVar27 != 0)))) {
        if (*(int ********)(DAT_01d4b518 + 0x20) == (int *******)0x0) {
LAB_006832b8:
          puVar19 = &DAT_01c0497c;
LAB_006832cc:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar19);
        }
        local_308._4_4_ = (int *******)&local_128;
        local_1e8 = *(int ********)(DAT_01d4b518 + 0x24);
        local_1e4 = *(int ********)(DAT_01d4b518 + 0x28);
        local_3b8 = (int *******)&local_308;
        local_1e0 = (int *******)0x0;
        local_3b4 = (int *******)&DAT_00000001;
        local_300 = (int *******)&DAT_01d2ea4c;
        local_124 = (int *******)&DAT_0000004d;
        local_128 = (int *******)0x3d49a4;
        local_3b0 = (int *******)(DAT_01d4b518 + 0x1c);
        local_308._0_4_ = (int *******)&local_1f0;
        local_1f0 = *(int ********)(DAT_01d4b518 + 0x1c);
        local_1ec = *(int ********)(DAT_01d4b518 + 0x20);
        FUN_006838f8(&local_3b8);
      }
      else {
        iVar27 = DAT_01d4b518;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_32c = *(undefined4 *)(DAT_01d4b518 + 0x14);
          local_328 = *(undefined4 *)(DAT_01d4b518 + 0x18);
          local_330 = 4;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          pcVar10 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
            pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar33 = (*(code *)puVar7[3])(pcVar10,&local_330);
          if (iVar33 != 0) {
            if (*(int ********)(DAT_01d4b518 + 0x20) == (int *******)0x0) goto LAB_006832b8;
            local_308._4_4_ = (int *******)&local_128;
            local_1e8 = *(int ********)(DAT_01d4b518 + 0x24);
            local_1e4 = *(int ********)(DAT_01d4b518 + 0x28);
            local_3b8 = (int *******)&local_308;
            local_3b4 = (int *******)&DAT_00000001;
            local_1e0 = (int *******)0x0;
            local_300 = (int *******)&DAT_01d2ea4c;
            local_124 = (int *******)&DAT_0000004d;
            local_128 = (int *******)0x3d49a4;
            local_3b0 = (int *******)(DAT_01d4b518 + 0x1c);
            local_308._0_4_ = (int *******)&local_1f0;
            local_1f0 = *(int ********)(DAT_01d4b518 + 0x1c);
            local_1ec = *(int ********)(DAT_01d4b518 + 0x20);
            FUN_01aaa328(iVar27,pcVar10,puVar7[4],&local_330,&local_3b8);
          }
        }
      }
    }
    else {
      pcVar10 = (char *)(param_1[5] + 8);
      do {
        cVar3 = *pcVar10;
        bVar51 = (bool)hasExclusiveAccess(pcVar10);
      } while (!bVar51);
      *pcVar10 = '\x01';
      if (cVar3 == '\0') {
        if (((DAT_01d50f88 < 5) &&
            ((DAT_01d4b514 - 1 < 2 ||
             ((DAT_01d4b514 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4b50c), cVar3 != '\0')))))) &&
           (iVar27 = FUN_01aaa278(DAT_01d4b50c), iVar27 != 0)) {
          if (*(int ********)(DAT_01d4b50c + 0x20) == (int *******)0x0) {
LAB_006832c4:
            puVar19 = &DAT_01c0498c;
            goto LAB_006832cc;
          }
          local_308._4_4_ = (int *******)&local_128;
          local_1e8 = *(int ********)(DAT_01d4b50c + 0x24);
          local_1e4 = *(int ********)(DAT_01d4b50c + 0x28);
          local_3b8 = (int *******)&local_308;
          local_1e0 = (int *******)0x0;
          local_3b4 = (int *******)&DAT_00000001;
          local_300 = (int *******)&DAT_01d2ea4c;
          local_124 = (int *******)0x91;
          local_128 = (int *******)0x3d49ca;
          local_3b0 = (int *******)(DAT_01d4b50c + 0x1c);
          local_308._0_4_ = (int *******)&local_1f0;
          local_1f0 = *(int ********)(DAT_01d4b50c + 0x1c);
          local_1ec = *(int ********)(DAT_01d4b50c + 0x20);
          FUN_006839f0(&local_3b8);
        }
        else {
          iVar27 = DAT_01d4b50c;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_320 = *(undefined4 *)(DAT_01d4b50c + 0x14);
            local_31c = *(undefined4 *)(DAT_01d4b50c + 0x18);
            local_324 = 1;
            DataMemoryBarrier(0xb);
            puVar7 = DAT_01d4edc8;
            pcVar10 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar7 = &DAT_01cfc5e0;
              pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar33 = (*(code *)puVar7[3])(pcVar10,&local_324);
            if (iVar33 != 0) {
              if (*(int ********)(DAT_01d4b50c + 0x20) == (int *******)0x0) goto LAB_006832c4;
              local_308._4_4_ = (int *******)&local_128;
              local_1e8 = *(int ********)(DAT_01d4b50c + 0x24);
              local_1e4 = *(int ********)(DAT_01d4b50c + 0x28);
              local_3b8 = (int *******)&local_308;
              local_3b4 = (int *******)&DAT_00000001;
              local_1e0 = (int *******)0x0;
              local_300 = (int *******)&DAT_01d2ea4c;
              local_124 = (int *******)0x91;
              local_128 = (int *******)0x3d49ca;
              local_3b0 = (int *******)(DAT_01d4b50c + 0x1c);
              local_308._0_4_ = (int *******)&local_1f0;
              local_1f0 = *(int ********)(DAT_01d4b50c + 0x1c);
              local_1ec = *(int ********)(DAT_01d4b50c + 0x20);
              FUN_01aaa328(iVar27,pcVar10,puVar7[4],&local_324,&local_3b8);
            }
          }
        }
      }
    }
    if (local_c8 != (int *******)0x2 || (int *******)local_c4 != (int *******)0x0) {
      FUN_0069b234((int)&local_c4 + 4);
    }
    goto LAB_006822d4;
  }
  FUN_01bed4e2(&local_3b8,param_2,0x88);
  iVar27 = param_1[1];
  local_40c = (uint *)param_1[2];
  uVar4 = FUN_00692224(*(uint *)(iVar27 + 0x10),*(undefined4 *)(iVar27 + 0x14),
                       *(undefined4 *)(iVar27 + 0x18),*(undefined4 *)(iVar27 + 0x1c),param_2);
  pppppppiVar40 = (int *******)(iVar27 + 8);
  ppppppiVar15 = *pppppppiVar40 + ((uVar4 << 7) >> (*(uint *)(iVar27 + 0x20) & 0x1f)) * 8;
  if (*ppppppiVar15 == (int *****)0x0) {
    bVar51 = (bool)hasExclusiveAccess(ppppppiVar15);
    if (!bVar51) goto LAB_006818c8;
    *ppppppiVar15 = (int *****)0xfffffffc;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_006818c8:
    FUN_0131c50c(ppppppiVar15);
  }
  uVar14 = uVar4 >> 0x19;
  pppppiVar20 = ppppppiVar15[1];
  pppppiVar37 = ppppppiVar15[2];
  iVar33 = 0;
  while( true ) {
    uVar4 = (uint)pppppiVar37 & uVar4;
    uVar21 = *(uint *)((int)pppppiVar20 + uVar4);
    uVar11 = uVar21 ^ uVar14 * 0x1010101;
    uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
    while (uVar11 != 0) {
      uVar12 = uVar4 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                      (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
               (uint)pppppiVar37;
      iVar25 = FUN_0067cd5c(&local_3b8,pppppiVar20 + uVar12 * -0x28 + -0x28);
      uVar11 = uVar11 - 1 & uVar11;
      if (iVar25 != 0) {
        ppppiVar13 = pppppiVar20[uVar12 * -0x28 + -6];
        pppppiVar20[uVar12 * -0x28 + -6] = (int ****)((int)ppppiVar13 + 1);
        pppppiVar20[uVar12 * -0x28 + -5] =
             (int ****)
             ((int)pppppiVar20[uVar12 * -0x28 + -5] + (uint)((int ****)0xfffffffe < ppppiVar13));
        FUN_0128e808(&local_c8);
        pppppiVar20[uVar12 * -0x28 + -4] = (int ****)local_c8;
        pppppiVar20[uVar12 * -0x28 + -3] = (int ****)(int *******)local_c4;
        pppppiVar20[uVar12 * -0x28 + -2] = (int ****)local_c4._4_4_;
        if (*ppppppiVar15 != (int *****)0xfffffffc) goto LAB_00681a0c;
        DataMemoryBarrier(0xb);
        goto LAB_006819f4;
      }
    }
    if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
    iVar33 = iVar33 + 4;
    uVar4 = iVar33 + uVar4;
  }
  if (*ppppppiVar15 == (int *****)0xfffffffc) {
    DataMemoryBarrier(0xb);
    do {
      bVar51 = (bool)hasExclusiveAccess(ppppppiVar15);
      if (bVar51) {
        *ppppppiVar15 = (int *****)0x0;
        goto LAB_00681f3c;
      }
    } while (*ppppppiVar15 == (int *****)0xfffffffc);
  }
  ClearExclusiveLocal();
  FUN_0131c8c0(ppppppiVar15);
LAB_00681f3c:
  iVar33 = *(int *)(iVar27 + 0xc);
  if (iVar33 != 0) {
    iVar25 = *(int *)(iVar27 + 8);
    iVar38 = 0;
    uVar4 = 0;
    do {
      uVar14 = *(uint *)(iVar25 + iVar38 * 0x20);
      puVar26 = (uint *)(iVar25 + iVar38 * 0x20);
      if (uVar14 < 0xfffffff8) {
        if (*puVar26 != uVar14) {
          ClearExclusiveLocal();
          goto LAB_00681fa4;
        }
        bVar51 = (bool)hasExclusiveAccess(puVar26);
        if (!bVar51) goto LAB_00681fa4;
        *puVar26 = uVar14 + 4;
        DataMemoryBarrier(0xb);
      }
      else {
LAB_00681fa4:
        FUN_0131bdb4(puVar26);
      }
      uVar14 = puVar26[4];
      DataMemoryBarrier(0xb);
      do {
        uVar11 = *puVar26;
        bVar51 = (bool)hasExclusiveAccess(puVar26);
      } while (!bVar51);
      *puVar26 = uVar11 - 4;
      if (uVar11 == 6) {
        FUN_0131c1f8(puVar26);
      }
      iVar38 = iVar38 + 1;
      uVar4 = uVar14 + uVar4;
    } while (iVar38 != iVar33);
    if (0xff < uVar4) {
      local_150 = (int *******)0x0;
      local_154 = (int *******)0x0;
      local_158 = pppppppiVar40;
      FUN_0069eafc(&local_d8,&local_158);
      pppppppiVar6 = local_d8;
      if (local_d8 == (int *******)0x0) {
LAB_006821b8:
        local_310 = (int *******)0x0;
        local_314 = (int *******)&DAT_00000008;
        local_318 = (int *******)0x0;
        pppppppiVar6 = pppppppiVar40;
        if (local_150 != (int *******)0x0) {
          DataMemoryBarrier(0xb);
          do {
            ppppppiVar15 = *local_150;
            bVar51 = (bool)hasExclusiveAccess(local_150);
          } while (!bVar51);
          *local_150 = (int ******)((int)ppppppiVar15 + -1);
          if (ppppppiVar15 == (int ******)0x1) {
            DataMemoryBarrier(0xb);
            FUN_0068c8e0(local_150);
          }
        }
      }
      else {
        local_108 = (int *******)local_d4[0x1a];
        local_104 = (int *******)local_d4[0x1b];
        local_100 = (int *******)local_d4[0x1c];
        FUN_0069ed40(&local_c8);
        pppppppiVar17 = (int *******)local_c4;
        pppppppiVar5 = local_c8;
        local_128 = local_108;
        local_124 = local_104;
        local_120 = local_100;
        FUN_01bed4e2(&local_1f0,(int)&local_c4 + 4,0x80);
        DataMemoryBarrier(0xb);
        do {
          ppppppiVar15 = *pppppppiVar6;
          bVar51 = (bool)hasExclusiveAccess(pppppppiVar6);
        } while (!bVar51);
        *pppppppiVar6 = (int ******)((int)ppppppiVar15 + -1);
        if (ppppppiVar15 == (int ******)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0068c8e0(pppppppiVar6);
        }
        local_e8 = local_128;
        local_e4 = local_124;
        local_e0 = local_120;
        pppppppiStack_dc = local_11c;
        FUN_01bed4e2(&local_308,&local_1f0,0x80);
        if (pppppppiVar5 == (int *******)0x2 && pppppppiVar17 == (int *******)0x0)
        goto LAB_006821b8;
        local_c8 = local_e8;
        local_c4._0_4_ = local_e4;
        local_c4._4_4_ = local_e0;
        local_bc = pppppppiStack_dc;
        local_b4 = pppppppiVar17;
        local_b8 = pppppppiVar5;
        FUN_01bed4e2(&local_b0,&local_308,0x80);
        pppppppiVar5 = (int *******)thunk_FUN_01be5118(0x260);
        if (pppppppiVar5 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,0x260);
        }
        FUN_01bed4e2(pppppppiVar5,&local_c8,0x98);
        local_130 = (int *******)&DAT_00000001;
        local_138 = (int *******)&SUB_00000004;
        pppppppiVar6 = (int *******)&local_1f0;
        local_128 = local_158;
        local_124 = local_154;
        local_120 = local_150;
        local_11c = local_14c;
        local_118 = local_148;
        uStack_114 = uStack_144;
        uStack_110 = uStack_140;
        uStack_10c = uStack_13c;
        local_134 = pppppppiVar5;
        while( true ) {
          FUN_0069eafc(&local_f8,&local_128);
          pppppppiVar5 = local_f8;
          if (local_f8 == (int *******)0x0) break;
          local_d8 = (int *******)local_f4[0x1a];
          local_d4 = (int *******)local_f4[0x1b];
          local_d0 = (int *******)local_f4[0x1c];
          FUN_0069ed40(&local_c8);
          pppppppiVar28 = (int *******)local_c4;
          pppppppiVar17 = local_c8;
          local_e8 = local_d8;
          local_e4 = local_d4;
          local_e0 = local_d0;
          FUN_01bed4e2(pppppppiVar6,(int)&local_c4 + 4,0x80);
          DataMemoryBarrier(0xb);
          do {
            ppppppiVar15 = *pppppppiVar5;
            bVar51 = (bool)hasExclusiveAccess(pppppppiVar5);
          } while (!bVar51);
          *pppppppiVar5 = (int ******)((int)ppppppiVar15 + -1);
          if (ppppppiVar15 == (int ******)0x1) {
            DataMemoryBarrier(0xb);
            FUN_0068c8e0(pppppppiVar5);
          }
          local_108 = local_e8;
          local_104 = local_e4;
          local_100 = local_e0;
          pppppppiStack_fc = pppppppiStack_dc;
          FUN_01bed4e2(&local_308,pppppppiVar6,0x80);
          if (pppppppiVar17 == (int *******)0x2 && pppppppiVar28 == (int *******)0x0) break;
          local_c8 = local_108;
          local_c4._0_4_ = local_104;
          local_c4._4_4_ = local_100;
          local_bc = pppppppiStack_fc;
          local_b8 = pppppppiVar17;
          local_b4 = pppppppiVar28;
          FUN_01bed4e2(&local_b0,&local_308,0x80);
          pppppppiVar5 = local_130;
          if (local_130 == local_138) {
            FUN_0132b898(&local_138,local_130,1,8,0x98);
          }
          FUN_01bed4e2(local_134 + (int)pppppppiVar5 * 0x26,&local_c8,0x98);
          local_130 = (int *******)((int)pppppppiVar5 + 1);
        }
        if (local_120 != (int *******)0x0) {
          DataMemoryBarrier(0xb);
          do {
            ppppppiVar15 = *local_120;
            bVar51 = (bool)hasExclusiveAccess(local_120);
          } while (!bVar51);
          *local_120 = (int ******)((int)ppppppiVar15 + -1);
          if (ppppppiVar15 == (int ******)0x1) {
            DataMemoryBarrier(0xb);
            FUN_0068c8e0(local_120);
          }
        }
        local_318 = local_138;
        local_314 = local_134;
        local_310 = local_130;
      }
      pppppppiVar17 = local_310;
      pppppppiVar5 = local_314;
      if (&DAT_00000001 < local_310) {
        if (&DAT_00000014 < local_310) {
          FUN_00690fc4(local_314,local_310);
        }
        else {
          FUN_0067c1d0();
        }
      }
      iVar25 = (int)pppppppiVar17 * 0x98;
      local_150 = local_318;
      pppppppiVar17 = pppppppiVar5 + (int)pppppppiVar17 * 0x26;
      uVar53 = CONCAT44(&DAT_00000098,&local_300);
      local_154 = pppppppiVar5;
      local_158 = pppppppiVar5;
      local_14c = pppppppiVar17;
      iVar33 = 0xf;
      do {
        local_148 = iVar33;
        if (iVar25 != 0) {
          pppppppiVar6 = pppppppiVar5 + 0x26;
          uVar53 = *(undefined8 *)(pppppppiVar5 + 4);
          pppppppiVar17 = (int *******)((uint)pppppppiVar5[4] ^ 2);
          local_154 = pppppppiVar6;
        }
        if (iVar25 == 0 ||
            pppppppiVar17 == (int *******)0x0 && (int)((ulonglong)uVar53 >> 0x20) == 0) break;
        local_308 = uVar53;
        FUN_01bed4e2(&local_300,pppppppiVar5 + 6,0x80);
        FUN_00691fb4(&local_c8,pppppppiVar40,&local_308);
        if (local_c8 != (int *******)0x2 || (int *******)local_c4 != (int *******)0x0) {
          FUN_01bed4e2(auStack_280,&local_c8,0x88);
          FUN_0067a6c8(auStack_280,extraout_r1,local_40,uStack_3c,&pppppppiStack_38);
          FUN_00683830(&local_1f0,local_40c,auStack_280);
          if (((uint)local_1f0 & 1) != 0) {
            if (DAT_01d50f88 < 5) {
              if (DAT_01d4b628 - 1 < 2) {
LAB_0068281c:
                iVar38 = FUN_01aaa278(DAT_01d4b620);
                if (iVar38 != 0) {
                  if (*(int ********)(DAT_01d4b620 + 0x20) == (int *******)0x0) goto LAB_006832e0;
                  local_d4 = &local_1f8;
                  local_d8 = (int *******)&local_128;
                  local_138 = (int *******)&local_d8;
                  local_130 = (int *******)(DAT_01d4b620 + 0x1c);
                  local_128 = (int *******)*local_130;
                  local_120 = *(int ********)(DAT_01d4b620 + 0x24);
                  local_11c = *(int ********)(DAT_01d4b620 + 0x28);
                  local_118 = 0;
                  local_134 = (int *******)&DAT_00000001;
                  local_d0 = (int *******)&DAT_01d2ea4c;
                  local_1f4 = 0x7d;
                  local_1f8 = (int ******)0x3d523d;
                  local_124 = *(int ********)(DAT_01d4b620 + 0x20);
                  FUN_01aaaecc(DAT_01d4b620,&local_138);
                  iVar38 = DAT_01d4b620;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_104 = *(int ********)(DAT_01d4b620 + 0x14);
                    local_100 = *(int ********)(DAT_01d4b620 + 0x18);
                    local_108 = (int *******)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    pcVar10 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    puVar7 = DAT_01d4edc8;
                    if (DAT_01d51174 != 2) {
                      puVar7 = &DAT_01cfc5e0;
                    }
                    iVar16 = (*(code *)puVar7[3])(pcVar10,&local_108);
                    if (iVar16 != 0) {
                      local_e8 = local_108;
                      local_e4 = local_104;
                      local_e0 = local_100;
                      FUN_01aaa328(iVar38,pcVar10,puVar7[4],&local_e8,&local_138);
                    }
                  }
                  goto LAB_006829b4;
                }
              }
              else if (DAT_01d4b628 != 0) {
                cVar3 = FUN_01aaafa8(&DAT_01d4b620);
                if (cVar3 != '\0') goto LAB_0068281c;
              }
            }
            iVar38 = DAT_01d4b620;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_f4 = *(int ********)(DAT_01d4b620 + 0x14);
              local_f0 = *(int ********)(DAT_01d4b620 + 0x18);
              local_f8 = (int *******)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pcVar10 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar7 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar7 = &DAT_01cfc5e0;
              }
              iVar16 = (*(code *)puVar7[3])(pcVar10,&local_f8);
              if (iVar16 != 0) {
                if (*(int ********)(DAT_01d4b620 + 0x20) == (int *******)0x0) {
LAB_006832e0:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c053b4);
                }
                local_104 = (int *******)&local_138;
                local_108 = (int *******)&local_128;
                local_d8 = (int *******)&local_108;
                local_11c = *(int ********)(DAT_01d4b620 + 0x28);
                local_118 = 0;
                local_120 = *(int ********)(DAT_01d4b620 + 0x24);
                local_d4 = (int *******)&DAT_00000001;
                local_100 = (int *******)&DAT_01d2ea4c;
                local_134 = (int *******)0x7d;
                local_138 = (int *******)0x3d523d;
                local_e8 = local_f8;
                local_e4 = local_f4;
                local_e0 = local_f0;
                local_128 = *(int ********)(DAT_01d4b620 + 0x1c);
                local_124 = *(int ********)(DAT_01d4b620 + 0x20);
                local_d0 = (int *******)(DAT_01d4b620 + 0x1c);
                FUN_01aaa328(iVar38,pcVar10,puVar7[4],&local_e8,&local_d8);
              }
            }
          }
LAB_006829b4:
          if (local_1f0 != (int *******)0x2 || local_1ec != (int *******)0x0) {
            FUN_0069b234(&local_1e8);
          }
        }
        uVar53 = FUN_0069b234(&local_308);
        iVar25 = iVar25 + -0x98;
        bVar51 = iVar33 != 0;
        pppppppiVar17 = extraout_r2;
        iVar33 = iVar33 + -1;
        pppppppiVar5 = pppppppiVar6;
      } while (bVar51);
      FUN_006a0364(&local_158);
    }
  }
  FUN_01bed4e2(&local_c8,&local_3b8,0x88);
  local_1c8 = *(undefined4 *)(iVar27 + 0x18);
  local_1c4 = *(undefined4 *)(iVar27 + 0x1c);
  local_1c0 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1ec = (int *******)(*(uint *)(iVar27 + 0x14) ^ 0x736f6d65);
  local_1f0 = (int *******)(*(uint *)(iVar27 + 0x10) ^ 0x70736575);
  FUN_0067c5ec(&local_3b8,&local_1f0);
  puVar48 = (undefined1 *)((int)local_1dc + (int)local_1ec) +
            CARRY4((uint)local_1e0,(uint)local_1f0);
  uVar21 = ((int)local_1dc << 0xd | (uint)local_1e0 >> 0x13) ^ (uint)puVar48;
  uVar39 = ((int)local_1e0 << 0xd | (uint)local_1dc >> 0x13) ^
           (uint)((int)local_1e0 + (int)local_1f0);
  uVar43 = local_1bc | local_1b8 << 0x18;
  uVar11 = uVar43 ^ local_1d4;
  uVar4 = local_1c0 ^ local_1d8;
  puVar22 = (undefined1 *)(uVar4 + (int)local_1e8);
  puVar35 = (undefined1 *)((int)local_1e4 + CARRY4(uVar4,(uint)local_1e8) + uVar11);
  puVar44 = puVar22 + uVar39;
  puVar50 = puVar35 + CARRY4((uint)puVar22,uVar39) + uVar21;
  uVar12 = (uint)puVar50 ^ (uVar21 << 0x11 | uVar39 >> 0xf);
  uVar14 = (uVar4 << 0x10 | uVar11 >> 0x10) ^ (uint)puVar22;
  uVar30 = (uVar11 << 0x10 | uVar4 >> 0x10) ^ (uint)puVar35;
  uVar21 = (uint)puVar44 ^ (uVar39 << 0x11 | uVar21 >> 0xf);
  puVar22 = (undefined1 *)((int)local_1e0 + (int)local_1f0) + CARRY4(uVar14,(uint)puVar48) + uVar30;
  uVar4 = (uint)(puVar48 + uVar14) ^ local_1c0;
  uVar49 = uVar4 + uVar21;
  uVar41 = ((uint)puVar22 ^ uVar43) + uVar12 + (uint)CARRY4(uVar4,uVar21);
  uVar11 = uVar41 ^ (uVar12 << 0xd | uVar21 >> 0x13);
  uVar39 = uVar49 ^ (uVar21 << 0xd | uVar12 >> 0x13);
  uVar12 = (uVar30 << 0x15 | uVar14 >> 0xb) ^ (uint)puVar22;
  uVar43 = (uint)puVar50 ^ 0xff;
  uVar4 = (uVar14 << 0x15 | uVar30 >> 0xb) ^ (uint)(puVar48 + uVar14);
  uVar31 = uVar4 + uVar43;
  puVar35 = puVar44 + CARRY4(uVar4,uVar43) + uVar12 + CARRY4(uVar39,uVar31) + uVar11;
  uVar21 = (uint)puVar35 ^ (uVar11 << 0x11 | uVar39 >> 0xf);
  uVar14 = uVar39 + uVar31 ^ (uVar39 << 0x11 | uVar11 >> 0xf);
  uVar30 = (uVar12 << 0x10 | uVar4 >> 0x10) ^ (uint)(puVar44 + CARRY4(uVar4,uVar43) + uVar12);
  uVar43 = (uVar4 << 0x10 | uVar12 >> 0x10) ^ uVar31;
  uVar32 = uVar43 + uVar41;
  uVar12 = uVar30 + uVar49 + (uint)CARRY4(uVar43,uVar41);
  uVar49 = uVar21 + uVar12 + (uint)CARRY4(uVar14,uVar32);
  uVar4 = (uVar21 << 0xd | uVar14 >> 0x13) ^ uVar49;
  uVar11 = (uVar14 << 0xd | uVar21 >> 0x13) ^ uVar14 + uVar32;
  uVar12 = (uVar30 << 0x15 | uVar43 >> 0xb) ^ uVar12;
  uVar21 = (uVar43 << 0x15 | uVar30 >> 0xb) ^ uVar32;
  puVar22 = puVar35 + uVar21;
  uVar43 = uVar12 + uVar39 + uVar31 + (uint)CARRY4(uVar21,(uint)puVar35);
  puVar35 = puVar22 + uVar11;
  uVar41 = uVar4 + uVar43 + (uint)CARRY4(uVar11,(uint)puVar22);
  uVar43 = (uVar12 << 0x10 | uVar21 >> 0x10) ^ uVar43;
  uVar21 = (uVar21 << 0x10 | uVar12 >> 0x10) ^ (uint)puVar22;
  uVar30 = uVar21 + uVar49;
  uVar31 = uVar43 + uVar14 + uVar32 + (uint)CARRY4(uVar21,uVar49);
  uVar12 = (uVar21 << 0x15 | uVar43 >> 0xb) ^ uVar30;
  uVar39 = (uVar4 << 0x11 | uVar11 >> 0xf) ^ uVar41;
  uVar21 = (uVar43 << 0x15 | uVar21 >> 0xb) ^ uVar31;
  uVar14 = uVar12 + uVar41;
  uVar4 = (uVar11 << 0x11 | uVar4 >> 0xf) ^ (uint)puVar35;
  puVar35 = puVar35 + CARRY4(uVar12,uVar41) + uVar21;
  uVar11 = (uVar4 << 0xd | uVar39 >> 0x13) ^ uVar4 + uVar30;
  uVar30 = (uVar39 << 0xd | uVar4 >> 0x13) ^ uVar39 + uVar31 + (uint)CARRY4(uVar4,uVar30);
  uVar4 = (uVar12 << 0x10 | uVar21 >> 0x10) ^ uVar14;
  uVar12 = (uVar21 << 0x10 | uVar12 >> 0x10) ^ (uint)puVar35;
  uVar21 = (uVar4 << 0x15 | uVar12 >> 0xb) ^ (uVar11 << 0x11 | uVar30 >> 0xf) ^
           (uint)(puVar35 + CARRY4(uVar11,uVar14) + uVar30) ^ uVar11 + uVar14;
  piVar36 = (int *)(*(int *)(iVar27 + 8) +
                   ((uVar21 << 7) >> (*(uint *)(iVar27 + 0x20) & 0x1f)) * 0x20);
  if (*piVar36 == 0) {
    bVar51 = (bool)hasExclusiveAccess(piVar36);
    if (!bVar51) goto LAB_00682eb4;
    *piVar36 = -4;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00682eb4:
    FUN_0131c50c(piVar36);
  }
  if (piVar36[3] == 0) {
    FUN_00691344(piVar36 + 1,pppppppiVar40);
  }
  uVar14 = (uVar12 << 0x15 | uVar4 >> 0xb) ^ (uVar30 << 0x11 | uVar11 >> 0xf) ^ uVar11 + uVar14 ^
           (uint)(puVar35 + CARRY4(uVar11,uVar14) + uVar30);
  puVar26 = (uint *)piVar36[1];
  uVar11 = piVar36[2];
  iVar27 = 0;
  bVar51 = false;
  uVar4 = uVar21;
  while( true ) {
    uVar4 = uVar11 & uVar4;
    uVar30 = *(uint *)((int)puVar26 + uVar4);
    uVar12 = uVar30 ^ (uVar21 >> 0x19) * 0x1010101;
    uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
    while (local_160 = piVar36, uVar12 != 0) {
      uVar39 = uVar12 >> 8;
      uVar43 = uVar12 >> 0x10;
      uVar31 = uVar12 >> 0x18;
      uVar32 = uVar12 << 0x18;
      iVar33 = FUN_0067cd5c(puVar26 + (uVar4 + ((uint)LZCOUNT(uVar32 | (uVar39 & 0xff) << 0x10 |
                                                              (uVar43 & 0xff) << 8 | uVar31) >> 3) &
                                      uVar11) * -0x28 + -0x28,&local_c8);
      uVar12 = uVar12 - 1 & uVar12;
      if (iVar33 != 0) {
        FUN_01bed4e2(&local_1e8,&local_c8,0x88);
        local_1ec = (int *******)0x0;
        local_1f0 = (int *******)0x2;
        local_15c = puVar26 + (uVar4 + ((uint)LZCOUNT(uVar32 | (uVar39 & 0xff) << 0x10 |
                                                      (uVar43 & 0xff) << 8 | uVar31) >> 3) & uVar11)
                              * -0x28;
        goto LAB_00683014;
      }
    }
    uVar12 = uVar30 & 0x80808080;
    if (!bVar51) {
      local_40c = (uint *)(uVar4 + ((uint)LZCOUNT((uVar30 & 0x80) << 0x18 |
                                                  (uVar12 >> 8 & 0xff) << 0x10 |
                                                  (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >>
                                   3) & uVar11);
    }
    bVar51 = bVar51 || uVar12 != 0;
    if ((uVar12 & uVar30 << 1) != 0) break;
    iVar27 = iVar27 + 4;
    uVar4 = uVar4 + iVar27;
  }
  if (-1 < *(char *)((int)puVar26 + (int)local_40c)) {
    uVar4 = *puVar26 & 0x80808080;
    local_40c = (uint *)((uint)LZCOUNT((*puVar26 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                       (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
  }
  FUN_01bed4e2(&local_1f0,&local_c8,0x88);
  local_168 = uVar21;
  local_164 = uVar14;
  local_15c = local_40c;
  if (local_1f0 == (int *******)0x2 && local_1ec == (int *******)0x0) {
LAB_00683014:
    FUN_00668cb0(&local_1e8);
  }
  else {
    FUN_0128e808(&local_300);
    local_308._4_4_ = (int *******)0x0;
    local_308._0_4_ = (int *******)&DAT_00000001;
    local_40 = 1;
    uStack_3c = 0;
    pppppppiStack_38 = local_300;
    pppppppiStack_34 = local_2fc;
    uStack_30 = uStack_2f8;
    uStack_2c = uStack_2f4;
    FUN_01bed4e2(&local_c8,&local_1f0,0x88);
    iVar27 = piVar36[1];
    uVar4 = piVar36[2];
    iVar33 = piVar36[3];
    piVar36[4] = piVar36[4] + 1;
    bVar1 = *(byte *)(iVar27 + (int)local_40c);
    bVar2 = (byte)(uVar21 >> 0x19);
    *(byte *)(iVar27 + (int)local_40c) = bVar2;
    *(byte *)(iVar27 + (uVar4 & (uint)(local_40c + -1)) + 4) = bVar2;
    piVar36[3] = iVar33 - (bVar1 & 1);
    FUN_01bed4e2(iVar27 + (int)local_40c * -0xa0 + -0xa0,&local_c8,0xa0);
  }
  if (*piVar36 == -4) {
    DataMemoryBarrier(0xb);
    do {
      bVar51 = (bool)hasExclusiveAccess(piVar36);
      if (bVar51) {
        *piVar36 = 0;
        goto LAB_006822d4;
      }
    } while (*piVar36 == -4);
  }
  ClearExclusiveLocal();
  FUN_0131c8c0(piVar36);
LAB_006822d4:
  FUN_00b92330(puVar23);
  return;
  while (*ppppppiVar15 == (int *****)0xfffffffc) {
LAB_006819f4:
    bVar51 = (bool)hasExclusiveAccess(ppppppiVar15);
    if (bVar51) {
      *ppppppiVar15 = (int *****)0x0;
      goto LAB_00681a18;
    }
  }
LAB_00681a0c:
  ClearExclusiveLocal();
  FUN_0131c8c0(ppppppiVar15);
LAB_00681a18:
  FUN_0069b234(&local_3b8);
  goto LAB_006822d4;
}

