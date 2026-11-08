// FUN_00a64c0c @ 00a64c0c size=3396 calls_out=26 calls_in=1
// strings: chip_frequency | chip_frequency | boser::metrics_scraper::loggeropen/boser/boser/src/metrics_scraper/logger.rsevent open/boser/boser/src/metrics_scraper/logger.rs:90event open/boser/boser/src/api/rest/miner/hashrate.rs:135 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::metrics_scraper::loggeropen/boser/boser/src/metrics_scraper/logger.rsevent open/boser/boser/src/metrics_scraper/logger.rs:90event open/boser/boser/src/api/rest/miner/hashrate.rs:135

/* WARNING: Type propagation algorithm not settling */

bool FUN_00a64c0c(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  char *pcVar3;
  int ******ppppppiVar4;
  int ******ppppppiVar5;
  char cVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *****pppppiVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *****pppppiVar14;
  undefined4 uVar15;
  int *******pppppppiVar16;
  int *******extraout_r1;
  int *******extraout_r1_00;
  int *******extraout_r1_01;
  int *******extraout_r1_02;
  byte *pbVar17;
  int *******pppppppiVar18;
  undefined4 *puVar19;
  undefined1 uVar20;
  int ******ppppppiVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_12c;
  uint local_128;
  int *******local_100;
  int *******local_fc;
  int *******local_f8;
  int *******local_f0;
  int *******local_ec;
  int *******local_e8;
  int ******local_e0;
  int *****local_dc;
  int ******local_d8;
  uint local_d4;
  int ******local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  int ******local_c0;
  undefined2 local_bc;
  int *******local_b8;
  undefined8 local_b4;
  int *******local_a8;
  int *******local_a4;
  int *******local_a0;
  byte *local_9c;
  uint local_98;
  int ******local_94;
  int ******local_90;
  int ******ppppppiStack_8c;
  uint uStack_88;
  int ******local_80;
  int ******local_7c;
  int ******local_78;
  uint local_74;
  int *******local_6c;
  code *local_68;
  uint *local_64;
  int *******local_60;
  int *******local_5c;
  uint *local_58;
  undefined8 local_50;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  undefined1 *local_3c;
  int ******local_38;
  undefined2 *local_34;
  undefined8 *local_30;
  code *local_2c;
  
  puVar7 = param_1 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x3e)) {
  case 0:
    FUN_01bed4e2(param_1 + 0x29,param_1 + 0x14,0x54);
    param_1[10] = &DAT_3b9aca00;
    param_1[6] = param_1[2];
    *puVar7 = *param_1;
    param_1[5] = param_1[1];
    local_b4 = CONCAT44(local_b4._4_4_,(code *)local_b4);
    local_50 = CONCAT44(local_50._4_4_,(int ******)local_50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0eda0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0eda0);
  case 3:
    goto switchD_00a64c34_caseD_3;
  }
LAB_00a65560:
  do {
    *(undefined1 *)(param_1 + 0x13) = 0;
    param_1[0xc] = puVar7;
switchD_00a64c34_caseD_3:
    FUN_00a65c48(&local_e0,param_1 + 0xc,param_2);
    uVar11 = local_d4;
    ppppppiVar4 = local_d8;
    pppppiVar9 = local_dc;
    ppppppiVar21 = local_e0;
    uVar8 = (uint)local_e0 ^ 3;
    if (uVar8 == 0 && local_dc == (int *****)0x0) {
      uVar20 = 3;
LAB_00a65594:
      *(undefined1 *)(param_1 + 0x3e) = uVar20;
      return uVar8 == 0 && pppppiVar9 == (int *****)0x0;
    }
    if (*(char *)(param_1 + 0x13) == '\x03') {
      FUN_009cdcac(param_1 + 0xd);
    }
    if (ppppppiVar21 == (int ******)0x2 && pppppiVar9 == (int *****)0x0) {
      if ((undefined1 *)param_1[10] == &DAT_3b9aca00) {
LAB_00a64d54:
        pppppiVar9 = ppppppiVar4[2];
        pppppiVar14 = ppppppiVar4[3];
        param_1[10] = ppppppiVar4[4];
        param_1[8] = pppppiVar9;
        param_1[9] = pppppiVar14;
        local_dc = ppppppiVar4[7];
        local_d8 = (int ******)ppppppiVar4[8];
        local_c8 = 1;
        local_d4 = 0;
        local_bc = 0;
        local_c4 = 0;
        local_cc = 10;
        local_e0 = (int ******)0xa;
        pppppppiVar16 = (int *******)&local_a0;
        local_d0 = local_d8;
        local_c0 = local_d8;
        while( true ) {
          uVar27 = FUN_00a5cb34(&local_e0,pppppppiVar16);
          uVar15 = (undefined4)((ulonglong)uVar27 >> 0x20);
          iVar12 = (int)uVar27;
          if (iVar12 == 0) break;
          FUN_01657f34(&local_a8,iVar12,uVar15);
          ppppppiVar5 = local_90;
          ppppppiVar21 = local_94;
          uVar11 = local_98;
          uVar8 = (uint)local_a8 & 0xff;
          pppppppiVar16 = (int *******)&local_a4;
          pppppppiVar18 = (int *******)&local_a0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar8) {
          case 1:
            iVar13 = 0;
            do {
              if (*(int *******)((int)&DAT_01c0ed0c + iVar13) == ppppppiVar5) {
                iVar10 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c0ed08 + iVar13),
                                            ppppppiVar21,ppppppiVar5);
                if (iVar10 == 0) {
                  bVar1 = true;
                  goto LAB_00a64ecc;
                }
              }
              iVar13 = iVar13 + 8;
            } while (iVar13 != 0x18);
            bVar1 = false;
LAB_00a64ecc:
            FUN_019bb7e0(uVar11,ppppppiVar21);
            pppppppiVar16 = extraout_r1;
            break;
          case 2:
            pppppppiVar16 = &local_94;
            pppppppiVar18 = &local_90;
          case 0:
            pppppppiVar18 = (int *******)*pppppppiVar18;
            iVar13 = 0;
            ppppppiVar21 = *pppppppiVar16;
            do {
              pppppppiVar16 = *(int ********)((int)&DAT_01c0ed0c + iVar13);
              if (pppppppiVar16 == pppppppiVar18) {
                uVar28 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c0ed08 + iVar13),
                                            ppppppiVar21,pppppppiVar18);
                pppppppiVar16 = (int *******)((ulonglong)uVar28 >> 0x20);
                if ((int)uVar28 == 0) {
                  bVar1 = true;
                  goto LAB_00a64ed8;
                }
              }
              iVar13 = iVar13 + 8;
            } while (iVar13 != 0x18);
            bVar1 = false;
            break;
          default:
            goto LAB_00a64f04;
          }
LAB_00a64ed8:
          if ((uVar8 == 1) && (local_a4 != (int *******)&DAT_80000000)) {
            FUN_019bb7e0();
            pppppppiVar16 = extraout_r1_00;
          }
          if (!bVar1) {
LAB_00a64f04:
            FUN_01657f34(&local_a8,iVar12,uVar15);
            if (((char)local_a8 == '\x02') && (local_9c != (byte *)0x0)) {
              local_80 = local_94;
              local_7c = local_90;
              local_78 = ppppppiStack_8c;
              local_74 = uStack_88;
              if (local_98 != 0) {
                if (local_98 == 1) {
                  bVar25 = *local_9c;
                  if (bVar25 == 0x2b || bVar25 == 0x2d) goto LAB_00a64f70;
                }
                else {
                  bVar25 = *local_9c;
                }
                uVar11 = local_98;
                pbVar17 = local_9c;
                if (bVar25 == 0x2b) {
                  pbVar17 = local_9c + 1;
                  uVar11 = local_98 - 1;
                }
                if (uVar11 < 0x11) {
                  if (uVar11 == 0) {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 0;
                    do {
                      bVar25 = *pbVar17;
                      if (9 < bVar25 - 0x30) goto LAB_00a64f70;
                      pbVar17 = pbVar17 + 1;
                      uVar11 = uVar11 - 1;
                      uVar2 = (uVar2 & 0xffffffff) * 10 +
                              CONCAT44((int)(uVar2 >> 0x20) * 10,bVar25 - 0x30);
                    } while (uVar11 != 0);
                  }
LAB_00a65064:
                  if (local_a4 == (int *******)0x0) {
                    local_64 = (uint *)0x0;
                    local_68 = (code *)0x1;
                    local_6c = (int *******)0x0;
                  }
                  else {
                    local_5c = local_a0;
                    local_48 = (int *******)&local_60;
                    local_60 = local_a4;
                    local_44 = (int *******)&DAT_0132b6a0;
                    FUN_00664898(&local_6c,&DAT_00586789,&local_48);
                  }
                  uVar27 = FUN_01bf0ff0((int)uVar2,(int)(uVar2 >> 0x20),1000,0);
                  local_2c = FUN_012fd074;
                  local_30 = &local_50;
                  local_38 = (int ******)&local_78;
                  local_34 = &DAT_0132b6a0;
                  local_44 = (int *******)&DAT_0132b6a0;
                  local_3c = &LAB_00632348;
                  local_40 = (int *******)&local_6c;
                  local_48 = &local_80;
                  local_50 = uVar27;
                  FUN_00664898(&local_60,&DAT_0058b6d8,&local_48);
                  local_b8 = local_60;
                  local_b4._0_4_ = (code *)local_5c;
                  local_b4._4_4_ = local_58;
                  FUN_019bb7e0(local_6c,local_68);
                  uVar27 = CONCAT44(local_b4._4_4_,(code *)local_b4);
                  goto LAB_00a6514c;
                }
                uVar22 = 0;
                uVar8 = 0;
                do {
                  uVar2 = CONCAT44(uVar8,uVar22);
                  if (uVar11 == 0) goto LAB_00a65064;
                  uVar26 = (uint)((ulonglong)uVar22 * 10);
                  uVar23 = (uint)((ulonglong)uVar22 * 10 >> 0x20);
                  uVar22 = (uint)((ulonglong)uVar8 * 10);
                  uVar24 = uVar23 + uVar22;
                  if (((int)((ulonglong)uVar8 * 10 >> 0x20) != 0 || CARRY4(uVar23,uVar22)) ||
                     (uVar23 = *pbVar17 - 0x30, 9 < uVar23)) break;
                  uVar22 = uVar26 + uVar23;
                  pbVar17 = pbVar17 + 1;
                  uVar8 = uVar24 + CARRY4(uVar26,uVar23);
                  uVar11 = uVar11 - 1;
                } while (!CARRY4(uVar24,(uint)CARRY4(uVar26,uVar23)));
              }
LAB_00a64f70:
              local_b8 = (int *******)&DAT_80000000;
            }
            else {
              local_b8 = (int *******)&DAT_80000000;
            }
LAB_00a6514c:
            local_b4 = uVar27;
            FUN_00a5cafc(&local_a8);
            local_44 = (int *******)&LAB_012b97d8;
            local_48 = (int *******)&local_b8;
            local_a4 = (int *******)(local_12c << 8 | local_128 >> 0x18);
            local_a8 = (int *******)(local_128 << 8 | 4);
            local_a0 = (int *******)(param_1 + 0x29);
            iVar12 = FUN_012fa178(&local_a8,&DAT_01c125a8,&DAT_00582d7f,&local_48);
            pppppppiVar18 = local_a4;
            uVar11 = (uint)local_a8 & 0xff;
            if (iVar12 != 0) {
              if (uVar11 == 4) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb100("a formatting trait implementation returned an error when the underlying stream did not"
                             ,0xad,&DAT_01d28600);
              }
              uVar11 = (uint)local_a8 >> 8;
              uVar8 = (uint)local_a8 & 0xff;
              local_128 = uVar11 | (int)local_a4 << 0x18;
              local_12c = (uint)local_a4 >> 8;
              pppppppiVar16 = local_a8;
              if (uVar8 == 4) goto LAB_00a6520c;
              if (local_b8 != (int *******)&DAT_80000000) {
                FUN_019bb7e0(local_b8,(code *)local_b4);
              }
              local_74 = local_12c << 8 | (uint)pppppppiVar18 & 0xff;
              local_78 = (int ******)(uVar8 | uVar11 << 8);
              if (DAT_01d50f88 < 5) {
                if (1 < DAT_01d4b99c - 1) {
                  if (DAT_01d4b99c != 0) {
                    cVar6 = FUN_01aaafa8(&DAT_01d4b994);
                    if (cVar6 != '\0') goto LAB_00a655fc;
                  }
                  goto LAB_00a65770;
                }
LAB_00a655fc:
                iVar12 = FUN_01aaa278(DAT_01d4b994);
                if (iVar12 == 0) goto LAB_00a65770;
                if (*(int ******)(DAT_01d4b994 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0edb0);
                }
                local_5c = (int *******)&local_50;
                local_d8 = *(int *******)(DAT_01d4b994 + 0x24);
                local_d4 = *(uint *)(DAT_01d4b994 + 0x28);
                local_64 = (uint *)(DAT_01d4b994 + 0x1c);
                local_e0 = (int ******)*local_64;
                local_60 = &local_e0;
                local_6c = (int *******)&local_60;
                local_d0 = (int ******)0x0;
                local_68 = (code *)0x1;
                local_50._4_4_ = (int *******)&local_b8;
                local_b8 = &local_78;
                local_58 = (uint *)&DAT_01d2ea4c;
                local_50._0_4_ = (int ******)&DAT_005affc3;
                local_b4._0_4_ = FUN_019a7d7c;
                local_dc = *(int ******)(DAT_01d4b994 + 0x20);
                FUN_01aaaecc(DAT_01d4b994,&local_6c);
                iVar12 = DAT_01d4b994;
                uVar27 = CONCAT44(local_b4._4_4_,(code *)local_b4);
                local_50 = CONCAT44(local_50._4_4_,(int ******)local_50);
                if ((DAT_01d51ae9 == '\0') &&
                   (uVar27 = CONCAT44(local_b4._4_4_,(code *)local_b4),
                   local_50 = CONCAT44(local_50._4_4_,(int ******)local_50), DAT_01d51b00 != 0)) {
                  local_44 = *(int ********)(DAT_01d4b994 + 0x14);
                  local_40 = *(int ********)(DAT_01d4b994 + 0x18);
                  local_48 = (int *******)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  puVar19 = DAT_01d4edc8;
                  pcVar3 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar19 = &DAT_01cfc5e0;
                    pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar13 = (*(code *)puVar19[3])(pcVar3,&local_48);
                  uVar27 = CONCAT44(local_b4._4_4_,(code *)local_b4);
                  if (iVar13 != 0) {
                    local_a8 = local_48;
                    local_a4 = local_44;
                    local_a0 = local_40;
                    FUN_01aaa328(iVar12,pcVar3,puVar19[4],&local_a8,&local_6c);
                    uVar27 = CONCAT44(local_b4._4_4_,(code *)local_b4);
                  }
                }
              }
              else {
LAB_00a65770:
                iVar12 = DAT_01d4b994;
                uVar27 = local_b4;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_fc = *(int ********)(DAT_01d4b994 + 0x14);
                  local_f8 = *(int ********)(DAT_01d4b994 + 0x18);
                  local_100 = (int *******)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  puVar19 = DAT_01d4edc8;
                  pcVar3 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar19 = &DAT_01cfc5e0;
                    pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar13 = (*(code *)puVar19[3])(pcVar3,&local_100);
                  uVar27 = local_b4;
                  if (iVar13 != 0) {
                    if (*(int ******)(DAT_01d4b994 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0edb0);
                    }
                    local_44 = (int *******)&local_b8;
                    local_d8 = *(int *******)(DAT_01d4b994 + 0x24);
                    local_d4 = *(uint *)(DAT_01d4b994 + 0x28);
                    local_48 = &local_e0;
                    local_60 = (int *******)&local_48;
                    local_d0 = (int ******)0x0;
                    local_5c = (int *******)&DAT_00000001;
                    local_b4._0_4_ = (code *)&local_6c;
                    local_6c = &local_78;
                    local_40 = (int *******)&DAT_01d2ea4c;
                    local_b8 = (int *******)&DAT_005affc3;
                    local_68 = FUN_019a7d7c;
                    local_a8 = local_100;
                    local_a4 = local_fc;
                    local_a0 = local_f8;
                    local_e0 = *(int *******)(DAT_01d4b994 + 0x1c);
                    local_dc = *(int ******)(DAT_01d4b994 + 0x20);
                    local_58 = (uint *)(DAT_01d4b994 + 0x1c);
                    FUN_01aaa328(iVar12,pcVar3,puVar19[4],&local_a8,&local_60);
                    uVar27 = CONCAT44(local_b4._4_4_,(code *)local_b4);
                  }
                }
              }
              local_b4 = uVar27;
              FUN_0187266c((uint)local_78 & 0xff,local_74);
              DataMemoryBarrier(0xb);
              do {
                pppppiVar9 = *ppppppiVar4;
                bVar1 = (bool)hasExclusiveAccess(ppppppiVar4);
              } while (!bVar1);
              *ppppppiVar4 = (int *****)((int)pppppiVar9 + -1);
              goto LAB_00a653f8;
            }
            pppppppiVar16 = (int *******)0x0;
            if (uVar11 != 4) {
              FUN_0069263c(uVar11,local_a4);
              pppppppiVar16 = extraout_r1_01;
            }
LAB_00a6520c:
            if (local_b8 != (int *******)&DAT_80000000) {
              FUN_019bb7e0(local_b8,(code *)local_b4);
              pppppppiVar16 = extraout_r1_02;
            }
          }
        }
        DataMemoryBarrier(0xb);
        do {
          pppppiVar9 = *ppppppiVar4;
          bVar1 = (bool)hasExclusiveAccess(ppppppiVar4);
        } while (!bVar1);
        *ppppppiVar4 = (int *****)((int)pppppiVar9 + -1);
      }
      else {
        FUN_019f90e0(&local_e0,&DAT_3b9aca00,param_1[8],param_1[9],(undefined1 *)param_1[10]);
        if (local_dc != (int *****)0x0 || local_dc < (int *****)(uint)((int ******)0x1d < local_e0))
        goto LAB_00a64d54;
        DataMemoryBarrier(0xb);
        do {
          pppppiVar9 = *ppppppiVar4;
          bVar1 = (bool)hasExclusiveAccess(ppppppiVar4);
        } while (!bVar1);
        *ppppppiVar4 = (int *****)((int)pppppiVar9 + -1);
      }
LAB_00a653f8:
      if (pppppiVar9 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_00a92e0c(ppppppiVar4);
      }
      goto LAB_00a65560;
    }
    if (((uint)ppppppiVar21 & 1) == 0) {
      FUN_009df188(puVar7);
      uVar20 = 1;
      FUN_009df6cc(param_1 + 0x29);
      goto LAB_00a65594;
    }
    local_74 = uVar11;
    local_78 = ppppppiVar4;
    if (DAT_01d50f88 < 4) {
      if (1 < DAT_01d4b990 - 1) {
        if (DAT_01d4b990 != 0) {
          cVar6 = FUN_01aaafa8(&DAT_01d4b988);
          if (cVar6 != '\0') goto LAB_00a6525c;
        }
        goto LAB_00a65418;
      }
LAB_00a6525c:
      iVar12 = FUN_01aaa278(DAT_01d4b988);
      if (iVar12 == 0) goto LAB_00a65418;
      if (*(int ******)(DAT_01d4b988 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0edc0);
      }
      local_5c = (int *******)&local_50;
      local_d8 = *(int *******)(DAT_01d4b988 + 0x24);
      local_d4 = *(uint *)(DAT_01d4b988 + 0x28);
      local_64 = (uint *)(DAT_01d4b988 + 0x1c);
      local_e0 = (int ******)*local_64;
      local_6c = (int *******)&local_60;
      local_d0 = (int ******)0x0;
      local_68 = (code *)0x1;
      local_50._4_4_ = (int *******)&local_b8;
      local_b8 = &local_78;
      local_58 = (uint *)&DAT_01d2ea4c;
      local_50._0_4_ = (int ******)&DAT_0058da35;
      local_b4._0_4_ = FUN_012fd074;
      local_dc = *(int ******)(DAT_01d4b988 + 0x20);
      local_60 = &local_e0;
      FUN_01aaaecc(DAT_01d4b988,&local_6c);
      iVar12 = DAT_01d4b988;
      local_b4 = CONCAT44(local_b4._4_4_,(code *)local_b4);
      local_50 = CONCAT44(local_50._4_4_,(int ******)local_50);
      if ((DAT_01d51ae9 == '\0') &&
         (local_b4 = CONCAT44(local_b4._4_4_,(code *)local_b4),
         local_50 = CONCAT44(local_50._4_4_,(int ******)local_50), 1 < DAT_01d51b00)) {
        local_44 = *(int ********)(DAT_01d4b988 + 0x14);
        local_40 = *(int ********)(DAT_01d4b988 + 0x18);
        local_48 = (int *******)0x2;
        DataMemoryBarrier(0xb);
        puVar19 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar19 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar13 = (*(code *)puVar19[3])(pcVar3,&local_48);
        if (iVar13 != 0) {
          local_a8 = local_48;
          local_a4 = local_44;
          local_a0 = local_40;
          FUN_01aaa328(iVar12,pcVar3,puVar19[4],&local_a8,&local_6c);
        }
      }
    }
    else {
LAB_00a65418:
      iVar12 = DAT_01d4b988;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_ec = *(int ********)(DAT_01d4b988 + 0x14);
        local_e8 = *(int ********)(DAT_01d4b988 + 0x18);
        local_f0 = (int *******)0x2;
        DataMemoryBarrier(0xb);
        puVar19 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar19 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar13 = (*(code *)puVar19[3])(pcVar3,&local_f0);
        if (iVar13 != 0) {
          if (*(int ******)(DAT_01d4b988 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0edc0);
          }
          local_44 = (int *******)&local_b8;
          local_d8 = *(int *******)(DAT_01d4b988 + 0x24);
          local_d4 = *(uint *)(DAT_01d4b988 + 0x28);
          local_60 = (int *******)&local_48;
          local_d0 = (int ******)0x0;
          local_5c = (int *******)&DAT_00000001;
          local_b4._0_4_ = (code *)&local_6c;
          local_40 = (int *******)&DAT_01d2ea4c;
          local_6c = &local_78;
          local_b8 = (int *******)&DAT_0058da35;
          local_68 = FUN_012fd074;
          local_a8 = local_f0;
          local_a4 = local_ec;
          local_a0 = local_e8;
          local_e0 = *(int *******)(DAT_01d4b988 + 0x1c);
          local_dc = *(int ******)(DAT_01d4b988 + 0x20);
          local_58 = (uint *)(DAT_01d4b988 + 0x1c);
          local_48 = &local_e0;
          FUN_01aaa328(iVar12,pcVar3,puVar19[4],&local_a8,&local_60);
        }
      }
    }
  } while( true );
}

