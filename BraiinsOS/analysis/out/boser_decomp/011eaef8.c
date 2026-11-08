// FUN_011eaef8 @ 011eaef8 size=2796 calls_out=20 calls_in=0
// strings: sysupgrade output | boser_unix::upgradeopen/boser/boser-unix/src/upgrade.rsevent open/boser/boser-unix/src/upgrade.rs:309event open/boser/boser-unix/src/upgrade.rs:234event open/boser/boser-unix/src/upgrade.rs:229event open/boser/boser-unix/src/upgrade.rs:214event open/boser/boser-unix/src/upgrade.rs:223BUG: sysupgrade script returned with 0 status code and synchronization was not performedevent open/boser/boser-unix/src/upgrade.rs:290event open/boser/boser-unix/src/upgrade.rs:288 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_unix::upgradeopen/boser/boser-unix/src/upgrade.rsevent open/boser/boser-unix/src/upgrade.rs:309event open/boser/boser-unix/src/upgrade.rs:234event open/boser/boser-unix/src/upgrade.rs:229event open/boser/boser-unix/src/upgrade.rs:214event open/boser/boser-unix/src/upgrade.rs:223BUG: sysupgrade script returned with 0 status code and synchronization was not performedevent open/boser/boser-unix/src/upgrade.rs:290event open/boser/boser-unix/src/upgrade.rs:288 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_011eaef8(int *param_1,undefined4 param_2)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint ****ppppuVar5;
  undefined4 *****pppppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint *****pppppuVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  uint *****pppppuVar14;
  uint *****pppppuVar15;
  uint *****pppppuVar16;
  uint *****pppppuVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  undefined8 uVar21;
  uint ****local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 *****local_b4;
  undefined4 local_b0;
  uint *local_ac;
  undefined4 *****local_a8;
  undefined4 local_a4;
  undefined4 *****local_a0;
  undefined4 local_9c;
  uint *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *****local_88;
  uint *****local_84;
  uint *****local_80;
  uint *****local_7c;
  uint *****local_78;
  undefined *local_74;
  uint ****local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint ****local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *****local_40;
  undefined4 local_3c;
  uint *local_38;
  undefined4 *****local_30;
  undefined4 local_2c;
  uint *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x1b]) {
  case '\0':
    pppppuVar6 = (undefined4 *****)*param_1;
    pppppuVar14 = (uint *****)param_1[1];
    pppppuVar16 = (uint *****)param_1[2];
    pppppuVar15 = (uint *****)param_1[3];
    param_1[6] = param_1[4];
    param_1[7] = param_1[5];
    FUN_013184d8(&local_58,0x2000);
    local_88 = pppppuVar6;
    local_84 = pppppuVar14;
    local_80 = pppppuVar16;
    local_7c = pppppuVar15;
    uVar21 = FUN_0189bc00(&local_58);
    param_1[0xc] = (int)pppppuVar6;
    param_1[0xd] = (int)pppppuVar14;
    param_1[0xe] = (int)pppppuVar16;
    param_1[0xf] = (int)pppppuVar15;
    param_1[8] = 3;
    param_1[9] = 0;
    *(undefined8 *)(param_1 + 0x10) = uVar21;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 1;
    param_1[0x1a] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22720);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22720);
  case '\x03':
    piVar19 = (int *)param_1[0x14];
    piVar20 = (int *)param_1[0x15];
    iVar18 = param_1[0x16];
    uVar13 = (undefined1)param_1[0x17];
    goto LAB_011eb064;
  }
  do {
    iVar18 = 0;
    uVar13 = 10;
    piVar20 = param_1 + 0x18;
    piVar19 = param_1 + 8;
    *(undefined1 *)(param_1 + 0x17) = 10;
    param_1[0x14] = (int)piVar19;
    param_1[0x15] = (int)piVar20;
    param_1[0x16] = 0;
    param_1[0x1a] = 0;
LAB_011eb064:
    pppppuVar14 = (uint *****)piVar19[10];
    pppppuVar16 = (uint *****)piVar19[0xb];
    do {
      pppppuVar15 = pppppuVar14;
      pppppuVar17 = pppppuVar16;
      if (pppppuVar16 <= pppppuVar14) {
        local_88 = (undefined4 *****)piVar19[8];
        local_84 = (uint *****)piVar19[9];
        local_80 = (uint *****)0x0;
        local_7c = local_84;
        FUN_019de6b8(&local_58,piVar19[6],piVar19[7],param_2,&local_88);
        if ((char)local_58 == '\x05') {
          uVar13 = 3;
          uVar11 = 1;
          goto LAB_011eb3c8;
        }
        if ((char)local_58 == '\x04') {
          pppppuVar15 = (uint *****)0x0;
          pppppuVar17 = local_80;
          if (local_84 < local_80) {
            puVar7 = &DAT_01d2e4e0;
            pppppuVar9 = local_84;
            goto LAB_011eb5b8;
          }
          piVar19[10] = 0;
          piVar19[0xb] = (int)local_80;
          goto LAB_011eb0d4;
        }
        iVar18 = local_54;
        if (((uint)local_58 & 0xff) == 4) goto LAB_011eb194;
        if (((uint)local_58 & 0xff) == 5) {
          uVar13 = 3;
          uVar11 = 1;
          goto LAB_011eb3c8;
        }
        local_c4 = local_54;
        local_c8 = local_58;
        if (DAT_01d50f88 < 5) {
          if (1 < DAT_01d4c94c - 1) {
            if (DAT_01d4c94c != 0) {
              cVar3 = FUN_01aaafa8(&DAT_01d4c944);
              if (cVar3 != '\0') goto LAB_011eb610;
            }
            goto LAB_011eb7bc;
          }
LAB_011eb610:
          iVar18 = FUN_01aaa278(DAT_01d4c944);
          if (iVar18 == 0) goto LAB_011eb7bc;
          iVar18 = *(int *)(DAT_01d4c944 + 0x20);
          if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22740);
          }
          local_64 = *(undefined4 *)(DAT_01d4c944 + 0x24);
          local_60 = *(undefined4 *)(DAT_01d4c944 + 0x28);
          local_6c = *(uint *****)(DAT_01d4c944 + 0x1c);
          local_5c = 0;
          local_b0 = 0x41;
          local_b4 = (undefined4 *****)&DAT_0056c208;
          local_68 = iVar18;
          if (iVar18 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22740);
          }
          local_78 = (uint *****)&local_a8;
          local_7c = &local_58;
          local_84 = (uint *****)&local_b4;
          local_88 = &local_6c;
          local_40 = &local_88;
          local_3c = 2;
          local_a8 = &local_c8;
          local_48 = 1;
          local_74 = &DAT_01ce2c9c;
          local_80 = (uint *****)&DAT_01d2ea4c;
          local_58 = local_6c;
          local_54 = iVar18;
          local_50 = local_64;
          local_4c = local_60;
          local_38 = (uint *)(DAT_01d4c944 + 0x1c);
          FUN_01aaaecc(DAT_01d4c944,&local_40);
          iVar18 = DAT_01d4c944;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_2c = *(undefined4 *)(DAT_01d4c944 + 0x14);
            local_28 = *(uint **)(DAT_01d4c944 + 0x18);
            local_30 = (undefined4 *****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar4 = (*(code *)puVar12[3])(pcVar2,&local_30);
            if (iVar4 != 0) {
              FUN_01aaa328(iVar18,pcVar2,puVar12[4],&local_30,&local_40);
            }
          }
        }
        else {
LAB_011eb7bc:
          iVar18 = DAT_01d4c944;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_90 = *(undefined4 *)(DAT_01d4c944 + 0x14);
            local_8c = *(undefined4 *)(DAT_01d4c944 + 0x18);
            local_94 = 1;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar4 = (*(code *)puVar12[3])(pcVar2,&local_94);
            if (iVar4 != 0) {
              ppppuVar5 = *(uint *****)(DAT_01d4c944 + 0x1c);
              iVar4 = *(int *)(DAT_01d4c944 + 0x20);
              if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22740);
              }
              local_64 = *(undefined4 *)(DAT_01d4c944 + 0x24);
              local_60 = *(undefined4 *)(DAT_01d4c944 + 0x28);
              local_5c = 0;
              local_3c = 0x41;
              local_40 = (undefined4 *****)&DAT_0056c208;
              local_6c = ppppuVar5;
              local_68 = iVar4;
              if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22740);
              }
              local_78 = (uint *****)&local_b4;
              local_7c = &local_58;
              local_84 = (uint *****)&local_40;
              local_88 = &local_6c;
              local_30 = &local_88;
              local_48 = 1;
              local_2c = 2;
              local_b4 = &local_c8;
              local_74 = &DAT_01ce2c9c;
              local_80 = (uint *****)&DAT_01d2ea4c;
              local_58 = ppppuVar5;
              local_54 = iVar4;
              local_50 = local_64;
              local_4c = local_60;
              local_28 = (uint *)(DAT_01d4c944 + 0x1c);
              FUN_01aaa328(iVar18,pcVar2,puVar12[4],&local_94,&local_30);
            }
          }
        }
        FUN_011e9d50((uint)local_c8 & 0xff,local_c4);
        goto LAB_011eb7dc;
      }
LAB_011eb0d4:
      if ((pppppuVar17 < pppppuVar15) || ((uint *****)piVar19[9] < pppppuVar17)) {
        puVar7 = &DAT_01c24264;
        pppppuVar9 = (uint *****)piVar19[9];
LAB_011eb5b8:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(pppppuVar15,pppppuVar17,pppppuVar9,puVar7);
      }
      pppppuVar9 = (uint *****)((int)pppppuVar17 - (int)pppppuVar15);
      puVar8 = (undefined1 *)(piVar19[8] + (int)pppppuVar15);
      iVar4 = FUN_01bed7c2(puVar8,uVar13,pppppuVar9);
      if (iVar4 != 0) {
        pppppuVar17 = (uint *****)(iVar4 - (int)puVar8);
        if (pppppuVar9 <= pppppuVar17) {
          pppppuVar15 = (uint *****)0x0;
          puVar7 = &DAT_01c24274;
          goto LAB_011eb5b8;
        }
        puVar10 = (undefined1 *)((int)pppppuVar17 + 1);
        FUN_01ac6cbc(piVar20,puVar8,puVar10);
        iVar18 = iVar18 + (int)puVar10;
        puVar8 = puVar10 + piVar19[10];
        if ((undefined1 *)piVar19[0xb] < puVar10 + piVar19[10]) {
          puVar8 = (undefined1 *)piVar19[0xb];
        }
        piVar19[10] = (int)puVar8;
        break;
      }
      FUN_01ac6cbc(piVar20,puVar8,pppppuVar9);
      pppppuVar16 = (uint *****)piVar19[0xb];
      iVar18 = iVar18 + (int)pppppuVar9;
      pppppuVar14 = (uint *****)(piVar19[10] + (int)pppppuVar9);
      if (pppppuVar16 < (uint *****)(piVar19[10] + (int)pppppuVar9)) {
        pppppuVar14 = pppppuVar16;
      }
      param_1[0x16] = iVar18;
      piVar19[10] = (int)pppppuVar14;
    } while (pppppuVar17 != pppppuVar15);
    param_1[0x16] = 0;
LAB_011eb194:
    if (iVar18 == 0) {
LAB_011eb7dc:
      FUN_019bb7e0(param_1[0x18],param_1[0x19]);
      FUN_011ea478(param_1 + 8);
      piVar19 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar18 = *piVar19;
        bVar1 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar1);
      *piVar19 = iVar18 + -1;
      uVar13 = 1;
      uVar11 = 0;
      if (iVar18 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[6],param_1[7]);
      }
LAB_011eb3c8:
      *(undefined1 *)(param_1 + 0x1b) = uVar13;
      return uVar11;
    }
    FUN_006643f0(&local_c8,param_1[0x19],param_1[0x1a]);
    uVar21 = FUN_0120658c(local_c4,local_c0,0xd,10);
    local_bc = uVar21;
    iVar18 = (**(code **)(param_1[7] + 0x14))
                       (param_1[6] + (*(int *)(param_1[7] + 8) - 1U & 0xfffffff8) + 8,(int)uVar21,
                        (int)((ulonglong)uVar21 >> 0x20));
    if (iVar18 == 0) {
      if (DAT_01d50f88 < 3) {
        if (DAT_01d4c958 - 1 < 2) {
LAB_011eb230:
          iVar18 = FUN_01aaa278(DAT_01d4c950);
          if (iVar18 != 0) {
            iVar18 = *(int *)(DAT_01d4c950 + 0x20);
            if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22730);
            }
            local_64 = *(undefined4 *)(DAT_01d4c950 + 0x24);
            local_60 = *(undefined4 *)(DAT_01d4c950 + 0x28);
            local_6c = *(uint *****)(DAT_01d4c950 + 0x1c);
            local_5c = 0;
            local_a4 = 0x23;
            local_a8 = (undefined4 *****)0x40196e;
            local_68 = iVar18;
            if (iVar18 == 1) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22730);
            }
            local_78 = (uint *****)&local_bc;
            local_7c = &local_58;
            local_84 = (uint *****)&local_a8;
            local_88 = &local_6c;
            local_b4 = &local_88;
            local_48 = 1;
            local_b0 = 2;
            local_74 = &DAT_01c24094;
            local_80 = (uint *****)&DAT_01d2ea4c;
            local_ac = (uint *)(DAT_01d4c950 + 0x1c);
            local_58 = local_6c;
            local_54 = iVar18;
            local_50 = local_64;
            local_4c = local_60;
            FUN_01aaaecc(DAT_01d4c950,&local_b4);
            iVar18 = DAT_01d4c950;
            if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
              local_3c = *(undefined4 *)(DAT_01d4c950 + 0x14);
              local_38 = *(uint **)(DAT_01d4c950 + 0x18);
              local_40 = (undefined4 *****)&DAT_00000003;
              DataMemoryBarrier(0xb);
              puVar12 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar12 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar4 = (*(code *)puVar12[3])(pcVar2,&local_40);
              if (iVar4 != 0) {
                local_30 = local_40;
                local_2c = local_3c;
                local_28 = local_38;
                FUN_01aaa328(iVar18,pcVar2,puVar12[4],&local_30,&local_b4);
              }
            }
            goto LAB_011eb578;
          }
        }
        else if (DAT_01d4c958 != 0) {
          cVar3 = FUN_01aaafa8(&DAT_01d4c950);
          if (cVar3 != '\0') goto LAB_011eb230;
        }
      }
      iVar18 = DAT_01d4c950;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_9c = *(undefined4 *)(DAT_01d4c950 + 0x14);
        local_98 = *(uint **)(DAT_01d4c950 + 0x18);
        local_a0 = (undefined4 *****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar12[3])(pcVar2,&local_a0);
        if (iVar4 != 0) {
          ppppuVar5 = *(uint *****)(DAT_01d4c950 + 0x1c);
          iVar4 = *(int *)(DAT_01d4c950 + 0x20);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22730);
          }
          local_64 = *(undefined4 *)(DAT_01d4c950 + 0x24);
          local_60 = *(undefined4 *)(DAT_01d4c950 + 0x28);
          local_5c = 0;
          local_b0 = 0x23;
          local_b4 = (undefined4 *****)0x40196e;
          local_6c = ppppuVar5;
          local_68 = iVar4;
          if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22730);
          }
          local_78 = (uint *****)&local_bc;
          local_7c = &local_58;
          local_84 = (uint *****)&local_b4;
          local_88 = &local_6c;
          local_40 = &local_88;
          local_48 = 1;
          local_3c = 2;
          local_74 = &DAT_01c24094;
          local_80 = (uint *****)&DAT_01d2ea4c;
          local_30 = local_a0;
          local_2c = local_9c;
          local_28 = local_98;
          local_58 = ppppuVar5;
          local_54 = iVar4;
          local_50 = local_64;
          local_4c = local_60;
          local_38 = (uint *)(DAT_01d4c950 + 0x1c);
          FUN_01aaa328(iVar18,pcVar2,puVar12[4],&local_30,&local_40);
        }
      }
    }
LAB_011eb578:
    if (local_c8 != (uint ****)0x80000000) {
      FUN_019bb7e0(local_c8,local_c4);
    }
  } while( true );
}

