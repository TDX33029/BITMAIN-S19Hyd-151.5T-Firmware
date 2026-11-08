// FUN_00e18db4 @ 00e18db4 size=12672 calls_out=44 calls_in=1
// strings: Bosminer.get_client_groups | Failed to retrieve groups from BOSminer. Restarting BOSminer to apply new configuration | boser::api::grpc::poolopen/boser/boser/src/api/grpc/pool.rsevent open/boser/boser/src/api/grpc/pool.rs:138event open/boser/boser/src/api/grpc/pool.rs:166event open/boser/boser/src/api/grpc/pool.rs:173event open/boser/boser/src/api/grpc/pool.rs:159event open/boser/boser/src/api/grpc/pool.rs:186 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Failed to retrieve groups from BOSminer. Restarting BOSminer to apply new configuration

void FUN_00e18db4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint ****ppppuVar15;
  uint ***pppuVar16;
  int extraout_r2;
  int iVar17;
  undefined4 uVar18;
  uint ****ppppuVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  undefined4 uVar23;
  uint ****ppppuVar24;
  uint *puVar25;
  uint *puVar26;
  uint ****unaff_r8;
  uint ****ppppuVar27;
  undefined4 *puVar28;
  uint ****ppppuVar29;
  undefined4 uVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined4 *local_1d90;
  undefined4 *local_1d8c;
  undefined4 *local_1d88;
  undefined4 *local_1d84;
  undefined4 *local_1d80;
  undefined1 auStack_1d70 [96];
  undefined1 auStack_1d10 [88];
  uint ****local_1cb8;
  uint ****ppppuStack_1cb4;
  uint ****ppppuStack_1cb0;
  uint ****local_1ca8;
  uint ****ppppuStack_1ca4;
  uint ****ppppuStack_1ca0;
  uint ****local_1c98;
  uint ****local_1c94;
  uint ****local_1c90;
  undefined4 local_1c88;
  undefined4 local_1c84;
  undefined4 local_1c80;
  undefined4 local_1c7c;
  undefined4 local_1c78;
  undefined4 local_1c74;
  undefined4 local_1c70;
  undefined4 local_1c6c;
  undefined4 local_1c68;
  undefined4 local_1c64;
  undefined4 local_1c60;
  undefined4 local_1c5c;
  uint ****local_1c58;
  uint ****local_1c54;
  uint ****local_1c50;
  undefined1 auStack_1c48 [96];
  uint ****local_1be8;
  uint ****local_1be4;
  uint ****local_1be0;
  uint ****ppppuStack_1bdc;
  uint ****ppppuStack_1bd8;
  undefined1 auStack_1bd4 [84];
  uint ****local_1b80;
  uint ****ppppuStack_1b7c;
  uint ****ppppuStack_1b78;
  undefined1 auStack_1b74 [452];
  uint ****local_19b0;
  uint ****local_19ac;
  uint ****ppppuStack_19a8;
  undefined1 auStack_19a4 [460];
  uint ****local_17d8;
  uint ****local_17d4;
  uint ****local_17d0;
  undefined1 auStack_17cc [460];
  uint ****local_1600;
  uint ****local_15fc;
  uint ****local_15f8;
  undefined1 auStack_15f4 [460];
  uint ****local_1428;
  uint ****ppppuStack_1424;
  uint ****ppppuStack_1420;
  uint ****ppppuStack_141c;
  uint ****local_1418;
  uint ****ppppuStack_1414;
  uint ****ppppuStack_1410;
  uint ****ppppuStack_140c;
  uint ****ppppuStack_1408;
  undefined1 auStack_1400 [448];
  uint ****local_1240;
  uint ****ppppuStack_123c;
  uint ****ppppuStack_1238;
  uint ****local_1230;
  uint ****ppppuStack_122c;
  uint ****ppppuStack_1228;
  undefined1 auStack_1224 [452];
  uint ****local_1060;
  uint ****local_105c;
  uint ****local_1058;
  uint ****appppuStack_1054 [115];
  undefined4 local_e88;
  undefined4 uStack_e84;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  undefined4 uStack_e78;
  undefined4 local_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  uint ****local_e60;
  uint ****ppppuStack_e5c;
  uint ****ppppuStack_e58;
  uint ****ppppuStack_e54;
  uint ****ppppuStack_e50;
  uint ****ppppuStack_e4c;
  uint ****local_e48;
  uint ****ppppuStack_e44;
  uint ****ppppuStack_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined1 auStack_e30 [448];
  uint ****local_c70;
  uint ****ppppuStack_c6c;
  uint ****ppppuStack_c68;
  undefined1 auStack_c60 [448];
  uint ****local_aa0;
  uint ****ppppuStack_a9c;
  uint ****ppppuStack_a98;
  uint ****local_a90;
  uint ****ppppuStack_a8c;
  uint ****ppppuStack_a88;
  uint ****local_8d0;
  uint ****ppppuStack_8cc;
  uint ****ppppuStack_8c8;
  uint ****local_8c0;
  uint ****local_8bc;
  uint ****local_8b8;
  uint ****local_8b4;
  uint ****local_8b0;
  uint ****local_8ac;
  uint ****local_8a8;
  uint ****ppppuStack_8a4;
  uint ****ppppuStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  uint ****local_5e0;
  uint ****local_5dc;
  uint ****local_5d8;
  uint ****local_5d4;
  uint ****local_5d0;
  uint ****local_5cc;
  uint ****local_5c8;
  uint ****ppppuStack_5c4;
  uint ****ppppuStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  uint ****local_300;
  uint ****local_2fc;
  uint ****local_2f8;
  uint ****local_2f4;
  undefined4 local_2f0;
  uint ****local_38;
  uint ****ppppuStack_34;
  uint ****ppppuStack_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x85)) {
  case 0:
    *(undefined1 *)(param_2 + 0x21) = 1;
    param_2[0xe] = param_2[0xc];
    param_2[0xf] = param_2[0x1d];
    *param_2 = param_2 + 0xe;
    param_2[0xd] = param_2[0x1c];
    param_2[0x10] = param_2[0x1e];
    param_2[0x11] = param_2[0x1f];
    param_2[0x12] = param_2[0x20];
    param_2[1] = param_2[0x1c];
    if (*(char *)((int)param_2 + 0x86) == '\x02') {
      *(undefined1 *)(param_2 + 0x37) = 0;
      goto switchD_00e18de8_caseD_f;
    }
    if (*(char *)((int)param_2 + 0x86) != '\x01') {
      param_2[0x22] = param_2 + 0xf;
      *(undefined1 *)(param_2 + 0x2f) = 0;
      goto switchD_00e18de8_caseD_3;
    }
    *(undefined1 *)(param_2 + 0x37) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17618);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17618);
  case 3:
switchD_00e18de8_caseD_3:
    uVar32 = FUN_00e06fc8(param_2 + 0x22,param_3);
    uVar10 = (undefined4)((ulonglong)uVar32 >> 0x20);
    if ((int)uVar32 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 3;
      goto LAB_00e19db8;
    }
    *(undefined8 *)(param_2 + 2) = uVar32;
    if (*(char *)(param_2 + 0x2f) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x2e);
      bVar31 = cVar4 == '\x03';
      if (bVar31) {
        cVar4 = *(char *)(param_2 + 0x2d);
      }
      if (bVar31 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0x25);
        uVar10 = param_2[3];
      }
    }
    param_2[0x22] = uVar10;
    uVar20 = param_2[0xe];
    uVar22 = *(uint *)(param_2[0x10] + 8);
    if (uVar22 <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,uVar22,&DAT_01c17628);
    }
    iVar12 = *(int *)(param_2[0x10] + 4);
    *(undefined1 *)(param_2 + 0x30) = 0;
    param_2[0x23] = iVar12 + uVar20 * 4;
  case 4:
    uVar32 = FUN_00e06fc8(param_2 + 0x23,param_3);
    puVar26 = (uint *)((ulonglong)uVar32 >> 0x20);
    if ((int)uVar32 == 0) {
      uVar3 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e19db8;
    }
    *(undefined8 *)(param_2 + 4) = uVar32;
    if (*(char *)(param_2 + 0x30) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x2f);
      bVar31 = cVar4 == '\x03';
      if (bVar31) {
        cVar4 = *(char *)(param_2 + 0x2e);
      }
      if (bVar31 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0x26);
        puVar26 = (uint *)param_2[5];
      }
    }
    *(undefined1 *)(param_2 + 0x32) = 0;
    param_2[0x23] = puVar26;
LAB_00e1935c:
    puVar25 = (uint *)param_2[0x22];
    param_2[0x24] = puVar26;
    if (puVar25 == puVar26) {
      bVar31 = true;
    }
    else {
      bVar31 = false;
      if ((((puVar25[6] == puVar26[6]) &&
           (iVar12 = thunk_FUN_01bed842(puVar25[5],puVar26[5]), iVar12 == 0)) &&
          (puVar25[9] == puVar26[9])) &&
         (iVar12 = thunk_FUN_01bed842(puVar25[8],puVar26[8]), iVar12 == 0)) {
        uVar20 = *puVar25;
        uVar22 = *puVar26;
        if (uVar20 == 2 || uVar22 == 2) {
          if (uVar20 == 2 && uVar22 == 2) goto LAB_00e193d8;
        }
        else if (uVar20 == uVar22) {
          if ((uVar20 & 1) == 0) {
            if (puVar25[1] == puVar26[1]) goto LAB_00e193d8;
          }
          else if (*(double *)(puVar25 + 2) == *(double *)(puVar26 + 2)) {
LAB_00e193d8:
            *(undefined1 *)(param_2 + 0x40) = 0;
            param_2[0x33] = puVar25 + 10;
switchD_00e18fc4_caseD_3:
            uVar32 = FUN_00df39fc(param_2 + 0x33,param_3);
            if ((int)uVar32 == 0) {
              uVar3 = 3;
            }
            else {
              *(undefined8 *)(param_2 + 0x25) = uVar32;
              if (*(char *)(param_2 + 0x40) == '\x03') {
                cVar4 = *(char *)(param_2 + 0x3f);
                bVar31 = cVar4 == '\x03';
                if (bVar31) {
                  cVar4 = *(char *)(param_2 + 0x3e);
                }
                if (bVar31 && cVar4 == '\x03') {
                  FUN_0193c3cc(param_2 + 0x36);
                }
              }
              *(undefined1 *)(param_2 + 0x40) = 0;
              param_2[0x33] = param_2[0x24] + 0x28;
switchD_00e18fc4_caseD_4:
              uVar32 = FUN_00df39fc(param_2 + 0x33,param_3);
              iVar12 = (int)((ulonglong)uVar32 >> 0x20);
              if ((int)uVar32 != 0) {
                *(undefined8 *)(param_2 + 0x27) = uVar32;
                if (*(char *)(param_2 + 0x40) == '\x03') {
                  cVar4 = *(char *)(param_2 + 0x3f);
                  bVar31 = cVar4 == '\x03';
                  if (bVar31) {
                    cVar4 = *(char *)(param_2 + 0x3e);
                  }
                  if (bVar31 && cVar4 == '\x03') {
                    FUN_0193c3cc(param_2 + 0x36);
                    iVar12 = param_2[0x28];
                  }
                }
                uVar20 = *(uint *)(param_2[0x26] + 8);
                if (uVar20 == *(uint *)(iVar12 + 8)) {
                  iVar13 = *(int *)(param_2[0x26] + 4);
                  iVar12 = *(int *)(iVar12 + 4);
                  param_2[0x29] = iVar13;
                  param_2[0x2a] = iVar13 + uVar20 * 4;
                  param_2[0x2b] = iVar12;
                  param_2[0x2c] = iVar12 + uVar20 * 4;
                  param_2[0x2d] = 0;
                  param_2[0x2e] = uVar20;
                  uVar22 = 0;
                  while (uVar22 < uVar20) {
                    param_2[0x2d] = uVar22 + 1;
                    *(undefined1 *)(param_2 + 0x40) = 0;
                    param_2[0x33] = param_2[0x29] + uVar22 * 4;
                    param_2[0x2f] = param_2[0x2b] + uVar22 * 4;
switchD_00e18fc4_caseD_5:
                    uVar32 = FUN_00df39fc(param_2 + 0x33,param_3);
                    if ((int)uVar32 == 0) {
                      uVar3 = 5;
                      goto LAB_00e1a154;
                    }
                    *(undefined8 *)(param_2 + 0x30) = uVar32;
                    if (*(char *)(param_2 + 0x40) == '\x03') {
                      cVar4 = *(char *)(param_2 + 0x3f);
                      bVar31 = cVar4 == '\x03';
                      if (bVar31) {
                        cVar4 = *(char *)(param_2 + 0x3e);
                      }
                      if (bVar31 && cVar4 == '\x03') {
                        FUN_0193c3cc(param_2 + 0x36);
                      }
                    }
                    *(undefined1 *)(param_2 + 0x40) = 0;
                    param_2[0x33] = param_2[0x2f];
switchD_00e18fc4_caseD_6:
                    uVar32 = FUN_00df39fc(param_2 + 0x33,param_3);
                    iVar13 = (int)((ulonglong)uVar32 >> 0x20);
                    iVar12 = (int)uVar32;
                    if (iVar12 == 0) {
                      uVar3 = 6;
                      goto LAB_00e1a154;
                    }
                    if (*(char *)(param_2 + 0x40) == '\x03') {
                      cVar4 = *(char *)(param_2 + 0x3f);
                      bVar31 = cVar4 == '\x03';
                      if (bVar31) {
                        cVar4 = *(char *)(param_2 + 0x3e);
                      }
                      if (bVar31 && cVar4 == '\x03') {
                        FUN_0193c3cc(param_2 + 0x36);
                      }
                    }
                    iVar8 = param_2[0x31];
                    if (iVar8 != iVar13) {
                      if (*(int *)(iVar8 + 0x14) == *(int *)(iVar13 + 0x14)) {
                        iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x10),
                                                   *(undefined4 *)(iVar13 + 0x10));
                        bVar31 = iVar7 == 0;
                        iVar17 = extraout_r2;
                        if (bVar31) {
                          iVar17 = *(int *)(iVar8 + 0x20);
                          iVar7 = *(int *)(iVar13 + 0x20);
                        }
                        if ((bVar31 && iVar17 == iVar7) &&
                           (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x1c),
                                                       *(undefined4 *)(iVar13 + 0x1c)), iVar7 == 0))
                        {
                          if (*(int *)(iVar8 + 0x24) == -0x80000000 ||
                              *(int *)(iVar13 + 0x24) == -0x80000000) {
                            if (*(int *)(iVar8 + 0x24) == -0x80000000 &&
                                *(int *)(iVar13 + 0x24) == -0x80000000) goto LAB_00e1a0f0;
                          }
                          else if ((*(int *)(iVar8 + 0x2c) == *(int *)(iVar13 + 0x2c)) &&
                                  (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x28),
                                                              *(undefined4 *)(iVar13 + 0x28)),
                                  iVar7 == 0)) {
LAB_00e1a0f0:
                            if (*(char *)(iVar13 + 0x30) == *(char *)(iVar8 + 0x30))
                            goto LAB_00e1a100;
                          }
                        }
                      }
                      FUN_019f8c54(iVar12,1);
                      FUN_019f8c54(param_2[0x30],1);
                      goto LAB_00e19f68;
                    }
LAB_00e1a100:
                    FUN_019f8c54(iVar12,1);
                    FUN_019f8c54(param_2[0x30],1);
                    uVar20 = param_2[0x2e];
                    uVar22 = param_2[0x2d];
                  }
                  bVar31 = true;
                  FUN_019f8c54(param_2[0x27],1);
                  FUN_019f8c54(param_2[0x25],1);
                }
                else {
LAB_00e19f68:
                  FUN_019f8c54(param_2[0x27],1);
                  bVar31 = false;
                  FUN_019f8c54(param_2[0x25],1);
                }
                goto LAB_00e19f84;
              }
              uVar3 = 4;
            }
LAB_00e1a154:
            *(undefined1 *)(param_2 + 0x32) = uVar3;
            *param_1 = 4;
            param_1[1] = 0;
            uVar3 = 5;
            goto LAB_00e19db8;
          }
        }
      }
    }
LAB_00e19f84:
    *(undefined1 *)(param_2 + 0x32) = 1;
    FUN_00e1cad8(param_2 + 0x22);
    FUN_019f8c54(param_2[4],1);
    FUN_019f8c54(param_2[2],1);
    iVar12 = param_2[0x10];
    if (bVar31) {
      uVar20 = param_2[0xe];
      if (*(uint *)(iVar12 + 8) <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar20,*(uint *)(iVar12 + 8),&DAT_01c17638);
      }
      local_1be0 = *(uint *****)(*(int *)(iVar12 + 4) + uVar20 * 4);
      do {
        pppuVar16 = *local_1be0;
        bVar31 = (bool)hasExclusiveAccess(local_1be0);
      } while (!bVar31);
      *local_1be0 = (uint ***)((int)pppuVar16 + 1);
      if ((int)pppuVar16 < 0) goto LAB_00e1aa64;
      local_1be4 = (uint ****)0x0;
      local_1be8 = (uint ****)&DAT_00000003;
      goto LAB_00e19dc8;
    }
    puVar26 = (uint *)*param_2;
    *(undefined1 *)(param_2 + 0x21) = 0;
    uVar10 = param_2[0xf];
    uVar22 = *(uint *)(iVar12 + 8);
    uVar20 = *puVar26;
    if (uVar22 <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,uVar22,&DAT_01c176b8);
    }
    iVar12 = *(int *)(iVar12 + 4);
    piVar6 = *(int **)(iVar12 + uVar20 * 4);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar31 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar31);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b5ef20(*(undefined4 *)(iVar12 + uVar20 * 4));
    }
    piVar6 = (int *)param_2[1];
    *(undefined4 *)(iVar12 + uVar20 * 4) = uVar10;
    FUN_019e0044(*(int *)(*piVar6 + 0x54) + 8);
    uVar20 = *puVar26;
    if (uVar22 <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,uVar22,&DAT_01c176c8);
    }
    local_1be0 = *(uint *****)(iVar12 + uVar20 * 4);
    do {
      pppuVar16 = *local_1be0;
      bVar31 = (bool)hasExclusiveAccess(local_1be0);
    } while (!bVar31);
    *local_1be0 = (uint ***)((int)pppuVar16 + 1);
    if ((int)pppuVar16 < 0) goto LAB_00e1aa64;
    ppppuVar19 = (uint ****)0x0;
    ppppuVar15 = (uint ****)&DAT_00000003;
    goto LAB_00e1a0a8;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x32)) {
    case 0:
      puVar26 = (uint *)param_2[0x23];
      goto LAB_00e1935c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c175b8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c175b8);
    case 3:
      goto switchD_00e18fc4_caseD_3;
    case 5:
      goto switchD_00e18fc4_caseD_5;
    case 6:
      goto switchD_00e18fc4_caseD_6;
    }
    goto switchD_00e18fc4_caseD_4;
  case 7:
    goto switchD_00e18de8_caseD_7;
  case 8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x625)) {
    case 0:
      uVar3 = *(undefined1 *)((int)param_2 + 0x626);
      puVar28 = (undefined4 *)param_2[0x188];
      goto LAB_00e190e4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19d8c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19d8c);
    }
    goto switchD_00e18f38_caseD_3;
  case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x34)) {
    case 0:
      uVar20 = param_2[0x23];
      iVar12 = param_2[0x24];
      uVar10 = param_2[0x25];
      uVar30 = param_2[0x26];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c176e8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c176e8);
    case 3:
      goto switchD_00e18ef4_caseD_3;
    case 4:
      goto switchD_00e18ef4_caseD_4;
    case 5:
      goto switchD_00e18ef4_caseD_5;
    }
    goto LAB_00e1964c;
  case 10:
    goto switchD_00e18de8_caseD_a;
  case 0xb:
    goto switchD_00e18de8_caseD_b;
  case 0xc:
    goto switchD_00e18de8_caseD_c;
  case 0xd:
    goto switchD_00e18de8_caseD_d;
  case 0xe:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x30)) {
    case 0:
      uVar18 = param_2[0x22];
      uVar20 = param_2[0x24];
      uVar30 = param_2[0x25];
      uVar10 = param_2[0x26];
      uVar23 = param_2[0x27];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c176d8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c176d8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x19d)) {
      case 0:
        uVar10 = param_2[0x19a];
        uVar30 = param_2[0x19b];
        iVar12 = param_2[0x19c];
        goto LAB_00e1a2b8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c178c8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c178c8);
      case 3:
        goto switchD_00e19550_caseD_3;
      }
    case 4:
      goto switchD_00e18f7c_caseD_4;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x1a4)) {
      case 0:
        uVar10 = param_2[0x1a3];
        local_1d80 = (undefined4 *)param_2[0x1a2];
        goto LAB_00e1be78;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c178b8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c178b8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x1a0)) {
      case 0:
        goto switchD_00e197e4_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f170);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f170);
      case 3:
        goto switchD_00e197e4_caseD_3;
      }
    }
    goto LAB_00e1b2a4;
  case 0xf:
switchD_00e18de8_caseD_f:
    FUN_00e100c8(&local_5e0,param_2 + 0x22,param_3);
    ppppuVar19 = local_5dc;
    ppppuVar15 = local_5e0;
    if (local_5e0 == (uint ****)&SUB_00000004 && local_5dc == (uint ****)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 0xf;
      goto LAB_00e19db8;
    }
    FUN_01bed4e2(auStack_1c48,&local_5d8,0x60);
    if (*(char *)(param_2 + 0x37) == '\x03') {
      FUN_00e1003c(param_2 + 0x22);
    }
    if (!(ppppuVar15 != (uint ****)&DAT_00000003 || ppppuVar19 != (uint ****)0x0)) {
      *(undefined1 *)(param_2 + 0x21) = 0;
      FUN_00e1cc38(&local_1be8,param_2,*(undefined4 *)(param_2[0x10] + 4),
                   *(undefined4 *)(param_2[0x10] + 8),param_2[0xf],1);
      goto LAB_00e19dc8;
    }
    puVar11 = auStack_1c48;
    goto LAB_00e19500;
  }
  FUN_00e100c8(&local_5e0,param_2 + 0x22,param_3);
  ppppuVar19 = local_5dc;
  ppppuVar15 = local_5e0;
  if (local_5e0 == (uint ****)&SUB_00000004 && local_5dc == (uint ****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar3 = 6;
    goto LAB_00e19db8;
  }
  FUN_01bed4e2(auStack_1d70,&local_5d8,0x60);
  if (*(char *)(param_2 + 0x37) == '\x03') {
    FUN_00e1003c(param_2 + 0x22);
  }
  if (ppppuVar15 == (uint ****)&DAT_00000003 && ppppuVar19 == (uint ****)0x0) {
    *(undefined1 *)(param_2 + 0x54) = 0;
    param_2[0x22] = param_2[0xd];
switchD_00e18de8_caseD_7:
    FUN_00e101ec(&local_5e0,param_2 + 0x22,param_3);
    ppppuVar19 = local_5dc;
    ppppuVar15 = local_5e0;
    if (local_5e0 == (uint ****)&SUB_00000004 && local_5dc == (uint ****)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 7;
      goto LAB_00e19db8;
    }
    local_1cb8 = local_5d8;
    ppppuStack_1cb4 = local_5d4;
    ppppuStack_1cb0 = local_5d0;
    FUN_01bed4e2(auStack_1d10,&local_5cc,0x54);
    cVar4 = *(char *)(param_2 + 0x54);
    bVar31 = cVar4 == '\x03';
    if (bVar31) {
      cVar4 = *(char *)(param_2 + 0x53);
    }
    if (bVar31 && cVar4 == '\x03') {
      FUN_00df984c(param_2 + 0x24);
    }
    if (ppppuVar15 != (uint ****)&DAT_00000003 || ppppuVar19 != (uint ****)0x0) {
      FUN_01bed4e2(auStack_1bd4,auStack_1d10,0x54);
      local_1be0 = local_1cb8;
      ppppuStack_1bdc = ppppuStack_1cb4;
      ppppuStack_1bd8 = ppppuStack_1cb0;
      goto LAB_00e1a0a8;
    }
    puVar28 = param_2 + 0x13;
    uVar3 = 0;
    *puVar28 = local_1cb8;
    param_2[0x14] = ppppuStack_1cb4;
    param_2[0x15] = ppppuStack_1cb0;
    *(undefined2 *)((int)param_2 + 0x625) = 0;
    param_2[0x188] = puVar28;
LAB_00e190e4:
    *(undefined1 *)(param_2 + 0x189) = 1;
    FUN_019cfcf0(&local_5e0);
    *(undefined1 *)(param_2 + 0x189) = 0;
    local_8c0 = local_5e0;
    local_8bc = local_5dc;
    local_8b8 = local_5d8;
    local_8b4 = local_5d4;
    local_8b0 = local_5d0;
    local_8ac = local_5cc;
    local_8a8 = local_5c8;
    ppppuStack_8a4 = ppppuStack_5c4;
    ppppuStack_8a0 = ppppuStack_5c0;
    uStack_89c = uStack_5bc;
    uStack_898 = uStack_5b8;
    uStack_894 = uStack_5b4;
    *(undefined1 *)(param_2 + 0x2b) = uVar3;
    param_2[0x38] = "Bosminer.get_client_groups";
    param_2[0x39] = 0x1a;
    param_2[0x2a] = 0x80000002;
    param_2[0x3a] = local_5e0;
    param_2[0x3b] = local_5dc;
    param_2[0x3c] = local_5d8;
    param_2[0x3d] = local_5d4;
    param_2[0x3e] = local_5d0;
    param_2[0x3f] = local_5cc;
    param_2[0x40] = local_5c8;
    param_2[0x41] = ppppuStack_5c4;
    param_2[0x42] = ppppuStack_5c0;
    param_2[0x43] = uStack_5bc;
    param_2[0x44] = uStack_5b8;
    param_2[0x45] = uStack_5b4;
    *(undefined1 *)(param_2 + 0x186) = 0;
    *(undefined1 *)((int)param_2 + 0x11f) = 0;
    param_2[0x46] = puVar28;
switchD_00e18f38_caseD_3:
    puVar28 = param_2 + 0x22;
    FUN_00e103e0(&local_5e0,puVar28,param_3);
    ppppuVar15 = local_5e0;
    if (local_5e0 == (uint ****)&DAT_80000005) {
      *(undefined1 *)((int)param_2 + 0x625) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 8;
      goto LAB_00e19db8;
    }
    local_300 = local_5dc;
    local_2fc = local_5d8;
    local_2f8 = local_5d4;
    if (*(char *)(param_2 + 0x186) == '\x03') {
      puVar5 = param_2 + 0xd4;
LAB_00e195bc:
      FUN_00df9ef8(puVar5);
    }
    else {
      puVar5 = puVar28;
      if (*(char *)(param_2 + 0x186) == '\0') goto LAB_00e195bc;
    }
    unaff_r8 = (uint ****)&local_1060;
    local_1060 = local_300;
    local_105c = local_2fc;
    local_1058 = local_2f8;
    *(undefined2 *)(param_2 + 0x189) = 0x100;
    local_1ca8 = local_300;
    ppppuStack_1ca4 = local_2fc;
    ppppuStack_1ca0 = local_2f8;
    FUN_00a7389c(puVar28);
    if (ppppuVar15 != (uint ****)&DAT_80000004) {
      local_1060 = ppppuVar15;
      local_105c = local_1ca8;
      local_1058 = ppppuStack_1ca4;
      appppuStack_1054[0] = ppppuStack_1ca0;
      if (((DAT_01d50f88 < 3) &&
          ((DAT_01d4c440 - 1 < 2 ||
           ((DAT_01d4c440 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c438), cVar4 != '\0')))))) &&
         (iVar12 = FUN_01aaa278(DAT_01d4c438), iVar12 != 0)) {
        local_15f8 = (uint ****)(DAT_01d4c438 + 0x1c);
        ppppuVar19 = (uint ****)*local_15f8;
        ppppuVar15 = *(uint *****)(DAT_01d4c438 + 0x20);
        if (ppppuVar15 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17648);
        }
        local_2f8 = *(uint *****)(DAT_01d4c438 + 0x24);
        local_2f4 = *(uint *****)(DAT_01d4c438 + 0x28);
        local_2f0 = 0;
        local_17d4 = (uint ****)0xaf;
        local_17d8 = (uint ****)0x3f0f80;
        local_300 = ppppuVar19;
        local_2fc = ppppuVar15;
        if (ppppuVar15 == (uint ****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17648);
        }
        local_5d4 = (uint ****)&local_8c0;
        local_5d0 = (uint ****)&local_19b0;
        local_5dc = (uint ****)&local_17d8;
        local_8b0 = (uint ****)&DAT_00000001;
        local_15fc = (uint ****)0x2;
        local_5d8 = (uint ****)&DAT_01d2ea4c;
        local_5cc = (uint ****)&DAT_01c17658;
        local_19b0 = unaff_r8;
        local_1600 = (uint ****)&local_5e0;
        local_8c0 = ppppuVar19;
        local_8bc = ppppuVar15;
        local_8b8 = local_2f8;
        local_8b4 = local_2f4;
        local_5e0 = (uint ****)&local_300;
        FUN_00e1cd88(&local_1600);
      }
      else {
        iVar12 = DAT_01d4c438;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1c94 = *(uint *****)(DAT_01d4c438 + 0x14);
          local_1c90 = *(uint *****)(DAT_01d4c438 + 0x18);
          local_1c98 = (uint ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar28 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar28 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar28[3])(pcVar2,&local_1c98);
          if (iVar13 != 0) {
            local_17d0 = (uint ****)(DAT_01d4c438 + 0x1c);
            ppppuVar19 = (uint ****)*local_17d0;
            ppppuVar15 = *(uint *****)(DAT_01d4c438 + 0x20);
            if (ppppuVar15 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17648);
            }
            local_2f8 = *(uint *****)(DAT_01d4c438 + 0x24);
            local_2f4 = *(uint *****)(DAT_01d4c438 + 0x28);
            local_2f0 = 0;
            local_19ac = (uint ****)0xaf;
            local_19b0 = (uint ****)0x3f0f80;
            local_300 = ppppuVar19;
            local_2fc = ppppuVar15;
            if (ppppuVar15 == (uint ****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17648);
            }
            local_5dc = (uint ****)&local_19b0;
            local_17d4 = (uint ****)0x2;
            local_5d4 = (uint ****)&local_8c0;
            local_8b0 = (uint ****)&DAT_00000001;
            local_5d8 = (uint ****)&DAT_01d2ea4c;
            local_5cc = (uint ****)&DAT_01c17658;
            local_1600 = local_1c98;
            local_15fc = local_1c94;
            local_15f8 = local_1c90;
            local_17d8 = (uint ****)&local_5e0;
            local_a90 = unaff_r8;
            local_8c0 = ppppuVar19;
            local_8bc = ppppuVar15;
            local_8b8 = local_2f8;
            local_8b4 = local_2f4;
            local_5e0 = (uint ****)&local_300;
            local_5d0 = (uint ****)&local_a90;
            FUN_01aaa328(iVar12,pcVar2,puVar28[4],&local_1600,&local_17d8);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x21) = 0;
      FUN_00e1cc38(&local_1be8,param_2,*(undefined4 *)(param_2[0x10] + 4),
                   *(undefined4 *)(param_2[0x10] + 8),param_2[0xf],1);
      FUN_00dfb5e8(&local_1060);
LAB_00e1aa14:
      FUN_0084ec48(param_2 + 0x13);
      goto LAB_00e1aa1c;
    }
    param_2[0x16] = local_1ca8;
    param_2[0x17] = ppppuStack_1ca4;
    param_2[0x18] = ppppuStack_1ca0;
    param_2[0x22] = param_2[0x17];
    uVar20 = param_2[0x18];
    iVar12 = param_2[0x10];
    uVar10 = param_2[0x11];
    uVar30 = param_2[0x12];
    param_2[0x23] = uVar20;
    *(undefined1 *)(param_2 + 0x34) = 0;
    param_2[0x24] = iVar12;
    param_2[0x25] = uVar10;
    param_2[0x26] = uVar30;
LAB_00e1964c:
    param_2[0x27] = uVar10;
    param_2[0x28] = uVar30;
    bVar31 = false;
    if (uVar20 == *(uint *)(iVar12 + 8)) {
      iVar12 = *(int *)(iVar12 + 4);
      param_2[0x2c] = iVar12 + uVar20 * 4;
      param_2[0x29] = param_2[0x22];
      param_2[0x2a] = param_2[0x22] + uVar20 * 0x28;
      param_2[0x2b] = iVar12;
      param_2[0x2d] = 0;
      param_2[0x2e] = uVar20;
      uVar22 = 0;
      while (uVar22 < uVar20) {
        param_2[0x2d] = uVar22 + 1;
        *(undefined1 *)(param_2 + 0x42) = 0;
        param_2[0x35] = param_2[0x2b] + uVar22 * 4;
        param_2[0x2f] = param_2[0x29] + uVar22 * 0x28;
switchD_00e18ef4_caseD_3:
        uVar32 = FUN_00e06fc8(param_2 + 0x35,param_3);
        piVar6 = (int *)((ulonglong)uVar32 >> 0x20);
        if ((int)uVar32 == 0) {
          uVar3 = 3;
LAB_00e1b9fc:
          local_1d80 = param_2 + 0x34;
          *(undefined1 *)local_1d80 = uVar3;
          *param_1 = 4;
          param_1[1] = 0;
          uVar3 = 9;
          goto LAB_00e19db8;
        }
        *(undefined8 *)(param_2 + 0x30) = uVar32;
        if (*(char *)(param_2 + 0x42) == '\x03') {
          cVar4 = *(char *)(param_2 + 0x41);
          bVar31 = cVar4 == '\x03';
          if (bVar31) {
            cVar4 = *(char *)(param_2 + 0x40);
          }
          if (bVar31 && cVar4 == '\x03') {
            FUN_0193c3cc(param_2 + 0x38);
            piVar6 = (int *)param_2[0x31];
          }
        }
        piVar21 = (int *)param_2[0x2f];
        if ((piVar21[6] != piVar6[9]) ||
           (iVar12 = thunk_FUN_01bed842(piVar21[5],piVar6[8]), iVar12 != 0)) {
LAB_00e1ac9c:
          bVar31 = false;
          FUN_019f8c54(param_2[0x30],1);
          goto LAB_00e1acac;
        }
        piVar9 = (int *)param_2[0x27];
        if (*piVar6 != 2) {
          piVar9 = piVar6;
        }
        piVar14 = (int *)*piVar9;
        if (*piVar21 != 1) {
          bVar31 = piVar14 == (int *)0x0;
          if (bVar31) {
            piVar9 = (int *)piVar9[1];
            piVar14 = (int *)piVar21[1];
          }
          if (bVar31 && piVar14 == piVar9) goto LAB_00e1a8e8;
          goto LAB_00e1ac9c;
        }
        if ((piVar14 == (int *)0x0) || (*(double *)(piVar21 + 2) != *(double *)(piVar9 + 2)))
        goto LAB_00e1ac9c;
LAB_00e1a8e8:
        *(undefined1 *)(param_2 + 0x42) = 0;
        param_2[0x35] = piVar6 + 10;
switchD_00e18ef4_caseD_4:
        uVar32 = FUN_00df39fc(param_2 + 0x35,param_3);
        iVar12 = (int)((ulonglong)uVar32 >> 0x20);
        if ((int)uVar32 == 0) {
          uVar3 = 4;
          goto LAB_00e1b9fc;
        }
        *(undefined8 *)(param_2 + 0x32) = uVar32;
        if (*(char *)(param_2 + 0x42) == '\x03') {
          cVar4 = *(char *)(param_2 + 0x41);
          bVar31 = cVar4 == '\x03';
          if (bVar31) {
            cVar4 = *(char *)(param_2 + 0x40);
          }
          if (bVar31 && cVar4 == '\x03') {
            FUN_0193c3cc(param_2 + 0x38);
            iVar12 = param_2[0x33];
          }
        }
        uVar20 = *(uint *)(param_2[0x2f] + 0x24);
        if (uVar20 != *(uint *)(iVar12 + 8)) {
LAB_00e1ac90:
          FUN_019f8c54(param_2[0x32],1);
          goto LAB_00e1ac9c;
        }
        iVar13 = *(int *)(param_2[0x2f] + 0x20);
        iVar12 = *(int *)(iVar12 + 4);
        param_2[0x36] = iVar13;
        param_2[0x37] = uVar20 * 0x1d8 + iVar13;
        param_2[0x38] = iVar12;
        param_2[0x39] = iVar12 + uVar20 * 4;
        param_2[0x3a] = 0;
        param_2[0x3b] = uVar20;
        uVar22 = 0;
        while (uVar22 < uVar20) {
          param_2[0x3a] = uVar22 + 1;
          *(undefined1 *)(param_2 + 0x49) = 0;
          param_2[0x3c] = param_2[0x38] + uVar22 * 4;
          param_2[0x35] = uVar22 * 0x1d8 + param_2[0x36];
switchD_00e18ef4_caseD_5:
          uVar32 = FUN_00df39fc(param_2 + 0x3c,param_3);
          iVar12 = (int)((ulonglong)uVar32 >> 0x20);
          unaff_r8 = (uint ****)uVar32;
          if (unaff_r8 == (uint ****)0x0) {
            uVar3 = 5;
            goto LAB_00e1b9fc;
          }
          if (*(char *)(param_2 + 0x49) == '\x03') {
            cVar4 = *(char *)(param_2 + 0x48);
            bVar31 = cVar4 == '\x03';
            if (bVar31) {
              cVar4 = *(char *)(param_2 + 0x47);
            }
            if (bVar31 && cVar4 == '\x03') {
              FUN_0193c3cc(param_2 + 0x3f);
            }
          }
          iVar13 = param_2[0x35];
          if (*(int *)(iVar13 + 0x1a4) == -0x80000000) goto LAB_00e1ac78;
          uVar20 = *(uint *)(iVar13 + 0x1ac);
          uVar10 = *(undefined4 *)(iVar13 + 0x1a8);
          cVar4 = *(char *)(param_2[0x28] + 0x54);
          if ((7 < uVar20) && (iVar8 = thunk_FUN_01bed842(&DAT_00570408,uVar10,8), iVar8 == 0)) {
            uVar22 = *(uint *)(iVar12 + 0x14);
            if ((uVar22 < 8) ||
               (iVar8 = thunk_FUN_01bed842(&DAT_00570408,*(undefined4 *)(iVar12 + 0x10),8),
               iVar8 != 0)) goto LAB_00e1ac08;
            goto LAB_00e1af50;
          }
          uVar22 = *(uint *)(iVar12 + 0x14);
LAB_00e1ac08:
          if ((((uVar20 != uVar22) ||
               (iVar8 = thunk_FUN_01bed842(uVar10,*(undefined4 *)(iVar12 + 0x10),uVar20), iVar8 != 0
               )) || (*(int *)(iVar13 + 0x1bc) == -0x80000000)) ||
             ((*(int *)(iVar13 + 0x1c4) != *(int *)(iVar12 + 0x20) ||
              (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar13 + 0x1c0),
                                          *(undefined4 *)(iVar12 + 0x1c)), iVar8 != 0)))) {
LAB_00e1ac78:
            FUN_019f8c54(unaff_r8,1);
            goto LAB_00e1ac90;
          }
          if (*(int *)(iVar13 + 0x1c8) != -0x80000000 && *(int *)(iVar12 + 0x24) != -0x80000000) {
            if ((*(int *)(iVar13 + 0x1d0) == *(int *)(iVar12 + 0x2c)) &&
               (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar13 + 0x1cc),
                                           *(undefined4 *)(iVar12 + 0x28)), iVar8 == 0))
            goto LAB_00e1af50;
            goto LAB_00e1ac78;
          }
          if (*(int *)(iVar13 + 0x1c8) != -0x80000000 || *(int *)(iVar12 + 0x24) != -0x80000000)
          goto LAB_00e1ac78;
LAB_00e1af50:
          if (*(char *)(iVar12 + 0x30) != '\x02') {
            cVar4 = *(char *)(iVar12 + 0x30);
          }
          if (cVar4 != *(char *)(iVar13 + 0x1d4)) goto LAB_00e1ac78;
          FUN_019f8c54(unaff_r8,1);
          uVar20 = param_2[0x3b];
          uVar22 = param_2[0x3a];
        }
        FUN_019f8c54(param_2[0x32],1);
        FUN_019f8c54(param_2[0x30],1);
        uVar20 = param_2[0x2e];
        uVar22 = param_2[0x2d];
      }
      bVar31 = true;
    }
LAB_00e1acac:
    local_1d80 = param_2 + 0x34;
    local_1d84 = param_2 + 0x22;
    *(undefined1 *)local_1d80 = 1;
    FUN_00e1ce80(local_1d84);
    if (!bVar31) {
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4c44c - 1 < 2 ||
           ((DAT_01d4c44c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c444), cVar4 != '\0')))) &&
          (iVar12 = FUN_01aaa278(DAT_01d4c444), iVar12 != 0)))) {
        local_5e0 = *(uint *****)(DAT_01d4c444 + 0x1c);
        local_5dc = *(uint *****)(DAT_01d4c444 + 0x20);
        if (local_5dc == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17668);
        }
        local_8bc = (uint ****)&local_1060;
        local_5d8 = *(uint *****)(DAT_01d4c444 + 0x24);
        local_5d4 = *(uint *****)(DAT_01d4c444 + 0x28);
        local_8c0 = (uint ****)&local_5e0;
        local_300 = (uint ****)&local_8c0;
        local_5d0 = (uint ****)0x0;
        local_2fc = (uint ****)&DAT_00000001;
        local_8b8 = (uint ****)&DAT_01d2ea4c;
        local_105c = (uint ****)0xbb;
        local_1060 = (uint ****)0x3f0fd7;
        local_2f8 = (uint ****)(DAT_01d4c444 + 0x1c);
        FUN_00e1cf80(&local_300);
      }
      else {
        iVar12 = DAT_01d4c444;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1c84 = *(undefined4 *)(DAT_01d4c444 + 0x14);
          local_1c80 = *(undefined4 *)(DAT_01d4c444 + 0x18);
          local_1c88 = 3;
          DataMemoryBarrier(0xb);
          puVar28 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar28 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar28[3])(pcVar2,&local_1c88);
          if (iVar13 != 0) {
            local_5e0 = *(uint *****)(DAT_01d4c444 + 0x1c);
            local_5dc = *(uint *****)(DAT_01d4c444 + 0x20);
            if (local_5dc == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17668);
            }
            local_8bc = (uint ****)&local_1060;
            local_5d8 = *(uint *****)(DAT_01d4c444 + 0x24);
            local_5d4 = *(uint *****)(DAT_01d4c444 + 0x28);
            local_8c0 = (uint ****)&local_5e0;
            local_300 = (uint ****)&local_8c0;
            local_5d0 = (uint ****)0x0;
            local_2fc = (uint ****)&DAT_00000001;
            local_8b8 = (uint ****)&DAT_01d2ea4c;
            local_105c = (uint ****)0xbb;
            local_1060 = (uint ****)0x3f0fd7;
            local_2f8 = (uint ****)(DAT_01d4c444 + 0x1c);
            FUN_01aaa328(iVar12,pcVar2,puVar28[4],&local_1c88,&local_300);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x21) = 0;
      FUN_00e1cc38(&local_1be8,param_2,*(undefined4 *)(param_2[0x10] + 4),
                   *(undefined4 *)(param_2[0x10] + 8),param_2[0xf],1);
LAB_00e1bcc4:
      FUN_00a573e8(param_2 + 0x16);
      goto LAB_00e1aa14;
    }
    ppppuVar15 = (uint ****)(param_2 + 0xe);
    if ((uint ***)param_2[0x18] <= *ppppuVar15) {
      if (((DAT_01d50f88 < 3) &&
          ((DAT_01d4c458 - 1 < 2 ||
           ((DAT_01d4c458 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c450), cVar4 != '\0')))))) &&
         (iVar12 = FUN_01aaa278(DAT_01d4c450), iVar12 != 0)) {
        local_5e0 = *(uint *****)(DAT_01d4c450 + 0x1c);
        local_5dc = *(uint *****)(DAT_01d4c450 + 0x20);
        if (local_5dc == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17678);
        }
        local_8bc = (uint ****)&local_1600;
        local_5d8 = *(uint *****)(DAT_01d4c450 + 0x24);
        local_5d4 = *(uint *****)(DAT_01d4c450 + 0x28);
        local_8c0 = (uint ****)&local_5e0;
        local_15fc = (uint ****)&local_1060;
        local_300 = (uint ****)&local_8c0;
        local_5d0 = (uint ****)0x0;
        local_2fc = (uint ****)&DAT_00000001;
        local_8b8 = (uint ****)&DAT_01d2ea4c;
        local_1600 = (uint ****)&DAT_00571d24;
        local_105c = (uint ****)FUN_012fd02c;
        local_1060 = ppppuVar15;
        local_2f8 = (uint ****)(DAT_01d4c450 + 0x1c);
        FUN_00e1d078(&local_300);
      }
      else {
        iVar12 = DAT_01d4c450;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1c78 = *(undefined4 *)(DAT_01d4c450 + 0x14);
          local_1c74 = *(undefined4 *)(DAT_01d4c450 + 0x18);
          local_1c7c = 3;
          DataMemoryBarrier(0xb);
          puVar28 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar28 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar28[3])(pcVar2,&local_1c7c);
          if (iVar13 != 0) {
            local_5e0 = *(uint *****)(DAT_01d4c450 + 0x1c);
            local_5dc = *(uint *****)(DAT_01d4c450 + 0x20);
            if (local_5dc == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17678);
            }
            local_8bc = (uint ****)&local_1600;
            local_5d8 = *(uint *****)(DAT_01d4c450 + 0x24);
            local_5d4 = *(uint *****)(DAT_01d4c450 + 0x28);
            local_8c0 = (uint ****)&local_5e0;
            local_300 = (uint ****)&local_8c0;
            local_15fc = (uint ****)&local_1060;
            local_5d0 = (uint ****)0x0;
            local_2fc = (uint ****)&DAT_00000001;
            local_8b8 = (uint ****)&DAT_01d2ea4c;
            local_1600 = (uint ****)&DAT_00571d24;
            local_105c = (uint ****)FUN_012fd02c;
            local_1060 = ppppuVar15;
            local_2f8 = (uint ****)(DAT_01d4c450 + 0x1c);
            FUN_01aaa328(iVar12,pcVar2,puVar28[4],&local_1c7c,&local_300);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x21) = 0;
      FUN_00e1cc38(&local_1be8,param_2,*(undefined4 *)(param_2[0x10] + 4),
                   *(undefined4 *)(param_2[0x10] + 8),param_2[0xf],1);
      goto LAB_00e1bcc4;
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
    iVar12 = param_2[0x17] + (int)*ppppuVar15 * 0x28;
    param_2[0x19] = iVar12;
    param_2[0x22] = iVar12 + 0x10;
    param_2[0x23] = param_2 + 0xf;
switchD_00e18de8_caseD_a:
    uVar32 = FUN_00e06fc8(param_2 + 0x23,param_3);
    iVar13 = (int)((ulonglong)uVar32 >> 0x20);
    iVar12 = (int)uVar32;
    if (iVar12 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 10;
      goto LAB_00e19db8;
    }
    if (*(char *)(param_2 + 0x30) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x2f);
      bVar31 = cVar4 == '\x03';
      if (bVar31) {
        cVar4 = *(char *)(param_2 + 0x2e);
      }
      if (bVar31 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0x26);
      }
    }
    if ((*(int *)(param_2[0x22] + 8) != *(int *)(iVar13 + 0x24)) ||
       (iVar13 = thunk_FUN_01bed842(*(undefined4 *)(param_2[0x22] + 4),
                                    *(undefined4 *)(iVar13 + 0x20)), iVar13 != 0)) {
      FUN_019f8c54(iVar12,1);
      if (((DAT_01d50f88 < 3) &&
          ((DAT_01d4c464 - 1 < 2 ||
           ((DAT_01d4c464 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c45c), cVar4 != '\0')))))) &&
         (iVar12 = FUN_01aaa278(DAT_01d4c45c), iVar12 != 0)) {
        local_5e0 = *(uint *****)(DAT_01d4c45c + 0x1c);
        local_5dc = *(uint *****)(DAT_01d4c45c + 0x20);
        if (local_5dc == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17688);
        }
        local_8bc = (uint ****)&local_1060;
        local_5d8 = *(uint *****)(DAT_01d4c45c + 0x24);
        local_5d4 = *(uint *****)(DAT_01d4c45c + 0x28);
        local_8c0 = (uint ****)&local_5e0;
        local_300 = (uint ****)&local_8c0;
        local_5d0 = (uint ****)0x0;
        local_2fc = (uint ****)&DAT_00000001;
        local_8b8 = (uint ****)&DAT_01d2ea4c;
        local_105c = (uint ****)0x81;
        local_1060 = (uint ****)0x3f1034;
        local_2f8 = (uint ****)(DAT_01d4c45c + 0x1c);
        FUN_00e1d170(&local_300);
      }
      else {
        iVar12 = DAT_01d4c45c;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1c6c = *(undefined4 *)(DAT_01d4c45c + 0x14);
          local_1c68 = *(undefined4 *)(DAT_01d4c45c + 0x18);
          local_1c70 = 3;
          DataMemoryBarrier(0xb);
          puVar28 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar28 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar28[3])(pcVar2,&local_1c70);
          if (iVar13 != 0) {
            local_5e0 = *(uint *****)(DAT_01d4c45c + 0x1c);
            local_5dc = *(uint *****)(DAT_01d4c45c + 0x20);
            if (local_5dc == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17688);
            }
            local_8bc = (uint ****)&local_1060;
            local_5d8 = *(uint *****)(DAT_01d4c45c + 0x24);
            local_5d4 = *(uint *****)(DAT_01d4c45c + 0x28);
            local_8c0 = (uint ****)&local_5e0;
            local_300 = (uint ****)&local_8c0;
            local_5d0 = (uint ****)0x0;
            local_2fc = (uint ****)&DAT_00000001;
            local_8b8 = (uint ****)&DAT_01d2ea4c;
            local_105c = (uint ****)0x81;
            local_1060 = (uint ****)0x3f1034;
            local_2f8 = (uint ****)(DAT_01d4c45c + 0x1c);
            FUN_01aaa328(iVar12,pcVar2,puVar28[4],&local_1c70,&local_300);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x21) = 0;
      FUN_00e1cc38(&local_1be8,param_2,*(undefined4 *)(param_2[0x10] + 4),
                   *(undefined4 *)(param_2[0x10] + 8),param_2[0xf],1);
      goto LAB_00e1bcc4;
    }
    FUN_019f8c54(iVar12,1);
    *(undefined1 *)(param_2 + 0x30) = 0;
    param_2[0x22] = param_2[0x19];
    param_2[0x23] = param_2 + 0xf;
switchD_00e18de8_caseD_b:
    uVar32 = FUN_00e06fc8(param_2 + 0x23,param_3);
    piVar6 = (int *)((ulonglong)uVar32 >> 0x20);
    iVar12 = (int)uVar32;
    if (iVar12 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 0xb;
      goto LAB_00e19db8;
    }
    if (*(char *)(param_2 + 0x30) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x2f);
      bVar31 = cVar4 == '\x03';
      if (bVar31) {
        cVar4 = *(char *)(param_2 + 0x2e);
      }
      if (bVar31 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0x26);
      }
    }
    piVar9 = (int *)param_2[0x22];
    piVar21 = (int *)param_2[0x11];
    if (*piVar6 != 2) {
      piVar21 = piVar6;
    }
    if (*piVar9 == 1) {
      if ((*piVar21 == 0) || (*(double *)(piVar9 + 2) != *(double *)(piVar21 + 2)))
      goto LAB_00e1b2e0;
    }
    else if ((*piVar21 != 0) || (piVar9[1] != piVar21[1])) {
LAB_00e1b2e0:
      FUN_019f8c54(iVar12,1);
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4c470 - 1 < 2 ||
           ((DAT_01d4c470 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c468), cVar4 != '\0')))) &&
          (iVar12 = FUN_01aaa278(DAT_01d4c468), iVar12 != 0)))) {
        local_5e0 = *(uint *****)(DAT_01d4c468 + 0x1c);
        local_5dc = *(uint *****)(DAT_01d4c468 + 0x20);
        if (local_5dc == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17698);
        }
        local_8bc = (uint ****)&local_1060;
        local_5d8 = *(uint *****)(DAT_01d4c468 + 0x24);
        local_5d4 = *(uint *****)(DAT_01d4c468 + 0x28);
        local_8c0 = (uint ****)&local_5e0;
        local_300 = (uint ****)&local_8c0;
        local_5d0 = (uint ****)0x0;
        local_2fc = (uint ****)&DAT_00000001;
        local_8b8 = (uint ****)&DAT_01d2ea4c;
        local_105c = (uint ****)0xa3;
        local_1060 = (uint ****)0x3f1074;
        local_2f8 = (uint ****)(DAT_01d4c468 + 0x1c);
        FUN_00e1d268(&local_300);
      }
      else {
        iVar12 = DAT_01d4c468;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1c60 = *(undefined4 *)(DAT_01d4c468 + 0x14);
          local_1c5c = *(undefined4 *)(DAT_01d4c468 + 0x18);
          local_1c64 = 3;
          DataMemoryBarrier(0xb);
          puVar28 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar28 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar28[3])(pcVar2,&local_1c64);
          if (iVar13 != 0) {
            local_5e0 = *(uint *****)(DAT_01d4c468 + 0x1c);
            local_5dc = *(uint *****)(DAT_01d4c468 + 0x20);
            if (local_5dc == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17698);
            }
            local_8bc = (uint ****)&local_1060;
            local_5d8 = *(uint *****)(DAT_01d4c468 + 0x24);
            local_5d4 = *(uint *****)(DAT_01d4c468 + 0x28);
            local_8c0 = (uint ****)&local_5e0;
            local_300 = (uint ****)&local_8c0;
            local_5d0 = (uint ****)0x0;
            local_2fc = (uint ****)&DAT_00000001;
            local_8b8 = (uint ****)&DAT_01d2ea4c;
            local_105c = (uint ****)0xa3;
            local_1060 = (uint ****)0x3f1074;
            local_2f8 = (uint ****)(DAT_01d4c468 + 0x1c);
            FUN_01aaa328(iVar12,pcVar2,puVar28[4],&local_1c64,&local_300);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x21) = 0;
      FUN_00e1cc38(&local_1be8,param_2,*(undefined4 *)(param_2[0x10] + 4),
                   *(undefined4 *)(param_2[0x10] + 8),param_2[0xf],1);
      goto LAB_00e1bcc4;
    }
    FUN_019f8c54(iVar12,1);
    param_2[0x1a] = param_2 + 0x13;
    param_2[0x1b] = param_2[0xe];
    uVar10 = *(undefined4 *)(param_2[0x19] + 0x20);
    uVar30 = *(undefined4 *)(param_2[0x19] + 0x24);
    *(undefined1 *)(param_2 + 0x2f) = 0;
    param_2[0x22] = param_2 + 0xf;
    param_2[6] = uVar10;
    param_2[7] = uVar30;
switchD_00e18de8_caseD_c:
    uVar32 = FUN_00e06fc8(param_2 + 0x22,param_3);
    iVar12 = (int)((ulonglong)uVar32 >> 0x20);
    if ((int)uVar32 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 0xc;
      goto LAB_00e19db8;
    }
    *(undefined8 *)(param_2 + 10) = uVar32;
    if (*(char *)(param_2 + 0x2f) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x2e);
      bVar31 = cVar4 == '\x03';
      if (bVar31) {
        cVar4 = *(char *)(param_2 + 0x2d);
      }
      if (bVar31 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0x25);
        iVar12 = param_2[0xb];
      }
    }
    *(undefined1 *)(param_2 + 0x2f) = 0;
    param_2[0x22] = iVar12 + 0x28;
switchD_00e18de8_caseD_d:
    uVar32 = FUN_00df39fc(param_2 + 0x22,param_3);
    uVar30 = (undefined4)((ulonglong)uVar32 >> 0x20);
    if ((int)uVar32 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 0xd;
      goto LAB_00e19db8;
    }
    *(undefined8 *)(param_2 + 8) = uVar32;
    if (*(char *)(param_2 + 0x2f) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x2e);
      bVar31 = cVar4 == '\x03';
      if (bVar31) {
        cVar4 = *(char *)(param_2 + 0x2d);
      }
      if (bVar31 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0x25);
        uVar30 = param_2[9];
      }
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
    uVar20 = param_2[7];
    uVar10 = param_2[0x12];
    uVar18 = param_2[0x1a];
    uVar23 = param_2[0x1b];
    param_2[0x22] = uVar18;
    param_2[0x23] = param_2[6];
    param_2[0x24] = uVar20;
    param_2[0x25] = uVar30;
    param_2[0x26] = uVar10;
    param_2[0x27] = uVar23;
LAB_00e1b2a4:
    param_2[0x28] = uVar18;
    param_2[0x31] = 0;
    param_2[0x32] = uVar20;
    param_2[0x29] = uVar23;
    param_2[0x2a] = uVar30;
    param_2[0x2b] = uVar10;
    uVar22 = 0;
    while (uVar22 < uVar20) {
      *(undefined1 *)(param_2 + 0x19d) = 0;
      iVar12 = uVar20 - 1;
      param_2[0x32] = iVar12;
      uVar10 = param_2[0x28];
      uVar30 = param_2[0x29];
      param_2[0x19a] = uVar10;
      param_2[0x19b] = uVar30;
      param_2[0x19c] = iVar12;
LAB_00e1a2b8:
      FUN_019cfcf0(&local_5e0);
      local_e60 = local_5e0;
      ppppuStack_e5c = local_5dc;
      ppppuStack_e58 = local_5d8;
      ppppuStack_e54 = local_5d4;
      ppppuStack_e50 = local_5d0;
      ppppuStack_e4c = local_5cc;
      local_e48 = local_5c8;
      ppppuStack_e44 = ppppuStack_5c4;
      ppppuStack_e40 = ppppuStack_5c0;
      uStack_e3c = uStack_5bc;
      uStack_e38 = uStack_5b8;
      uStack_e34 = uStack_5b4;
      param_2[0x4b] = 0x16;
      param_2[0x3c] = &DAT_80000010;
      param_2[0x4a] = "Bosminer.client_remove";
      param_2[0x3d] = uVar30;
      param_2[0x3e] = iVar12;
      param_2[0x4c] = local_5e0;
      param_2[0x4d] = local_5dc;
      param_2[0x4e] = local_5d8;
      param_2[0x4f] = local_5d4;
      param_2[0x50] = local_5d0;
      param_2[0x51] = local_5cc;
      param_2[0x52] = local_5c8;
      param_2[0x53] = ppppuStack_5c4;
      param_2[0x54] = ppppuStack_5c0;
      param_2[0x55] = uStack_5bc;
      param_2[0x56] = uStack_5b8;
      param_2[0x57] = uStack_5b4;
      param_2[0x58] = uVar10;
      *(undefined1 *)(param_2 + 0x198) = 0;
      *(undefined1 *)((int)param_2 + 0x167) = 0;
switchD_00e19550_caseD_3:
      local_1d80 = param_2 + 0x34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x198)) {
      case 0:
        FUN_01bed4e2(param_2 + 0xe6,local_1d80,0x2c8);
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f170);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f170);
      }
      unaff_r8 = (uint ****)(param_2 + 0xe6);
      FUN_00df9fa8(&local_5e0,unaff_r8,param_3);
      ppppuVar27 = local_5d8;
      ppppuVar19 = local_5dc;
      ppppuVar15 = local_5e0;
      if (local_5e0 == (uint ****)&DAT_0000001e && local_5dc == (uint ****)0x0) {
        *(undefined1 *)(param_2 + 0x198) = 3;
LAB_00e1a660:
        uVar3 = 3;
        *(undefined1 *)(param_2 + 0x19d) = 3;
        goto LAB_00e1c24c;
      }
      local_1428 = local_5d4;
      ppppuStack_1424 = local_5d0;
      ppppuStack_1420 = local_5cc;
      FUN_01bed4e2(&local_300,&local_5c8,0x2c8);
      FUN_00df9ef8(unaff_r8);
      if (ppppuVar15 == (uint ****)&DAT_0000001d && ppppuVar19 == (uint ****)0x0) {
        local_aa0 = local_1428;
        ppppuStack_a9c = ppppuStack_1424;
        ppppuStack_a98 = ppppuStack_1420;
        *(undefined1 *)(param_2 + 0x198) = 1;
        local_8d0 = local_1428;
        ppppuStack_8cc = ppppuStack_1424;
        ppppuStack_8c8 = ppppuStack_1420;
        ppppuVar29 = ppppuVar27;
LAB_00e1a4c8:
        ppppuVar24 = (uint ****)0x0;
        ppppuVar27 = (uint ****)&DAT_00000003;
        local_38 = local_8d0;
        ppppuStack_34 = ppppuStack_8cc;
        ppppuStack_30 = ppppuStack_8c8;
      }
      else {
        FUN_01bed4e2(&local_8a8,&local_300,0x2c8);
        ppppuVar29 = ppppuStack_1424;
        ppppuVar24 = local_1428;
        local_8b8 = ppppuVar27;
        local_8b4 = local_1428;
        local_8b0 = ppppuStack_1424;
        local_8ac = ppppuStack_1420;
        local_8bc = ppppuVar19;
        local_8c0 = ppppuVar15;
        if (ppppuVar15 != (uint ****)&DAT_00000014 || ppppuVar19 != (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
        }
        local_aa0 = ppppuStack_1420;
        ppppuStack_a9c = local_8a8;
        ppppuStack_a98 = ppppuStack_8a4;
        FUN_01bed4e2(auStack_e30,&local_2f8,0x1c0);
        *(undefined1 *)(param_2 + 0x198) = 1;
        unaff_r8 = ppppuVar27;
        if (ppppuVar27 == (uint ****)&SUB_00000004 && ppppuVar24 == (uint ****)0x0)
        goto LAB_00e1a660;
        local_8d0 = local_aa0;
        ppppuStack_8cc = ppppuStack_a9c;
        ppppuStack_8c8 = ppppuStack_a98;
        FUN_01bed4e2(auStack_c60,auStack_e30,0x1c0);
        if (ppppuVar27 == (uint ****)&DAT_00000003 && ppppuVar24 == (uint ****)0x0)
        goto LAB_00e1a4c8;
        local_38 = local_8d0;
        ppppuStack_34 = ppppuStack_8cc;
        ppppuStack_30 = ppppuStack_8c8;
        FUN_01bed4e2(&local_a90,auStack_c60,0x1c0);
      }
      local_c70 = local_38;
      ppppuStack_c6c = ppppuStack_34;
      ppppuStack_c68 = ppppuStack_30;
      FUN_01bed4e2(auStack_1400,&local_a90,0x1c0);
      *(undefined1 *)(param_2 + 0x19d) = 1;
      local_1b80 = local_c70;
      ppppuStack_1b7c = ppppuStack_c6c;
      ppppuStack_1b78 = ppppuStack_c68;
      FUN_01bed4e2(auStack_1b74,auStack_1400,0x1c0);
      if (ppppuVar27 == (uint ****)&DAT_00000003 && ppppuVar24 == (uint ****)0x0) {
        local_5dc = local_1b80;
        local_5d8 = ppppuStack_1b7c;
        local_5d4 = ppppuStack_1b78;
        local_5e0 = ppppuVar29;
        unaff_r8 = (uint ****)FUN_00f26240();
        goto LAB_00e1c29c;
      }
      FUN_01bed4e2(auStack_19a4,&local_1b80,0x1cc);
      local_19b0 = ppppuVar27;
      local_19ac = ppppuVar24;
      ppppuStack_19a8 = ppppuVar29;
      FUN_00ead77c(&local_1600,&local_19b0,"failed to remove pool using BOSminer API",0x28);
      unaff_r8 = local_15f8;
      ppppuVar19 = local_15fc;
      ppppuVar15 = local_1600;
      if (local_1600 == (uint ****)0x2 && local_15fc == (uint ****)0x0) goto LAB_00e1c29c;
      FUN_01bed4e2(auStack_17cc,auStack_15f4,0x1cc);
      local_17d4 = ppppuVar19;
      local_17d8 = ppppuVar15;
      local_17d0 = unaff_r8;
      FUN_0094a4d0(&local_17d8);
      uVar20 = param_2[0x32];
      uVar22 = param_2[0x31];
    }
    iVar12 = *(int *)(param_2[0x2a] + 4);
    iVar13 = iVar12 + *(int *)(param_2[0x2a] + 8) * 4;
    param_2[0x2c] = iVar12;
    param_2[0x2d] = iVar13;
    while( true ) {
      if (iVar12 == iVar13) goto LAB_00e1c21c;
      param_2[0x31] = iVar12;
      *(undefined1 *)(param_2 + 0x3e) = 0;
      param_2[0x2c] = iVar12 + 4;
switchD_00e18f7c_caseD_4:
      uVar32 = FUN_00df39fc(param_2 + 0x31,param_3);
      iVar12 = (int)((ulonglong)uVar32 >> 0x20);
      if ((int)uVar32 == 0) {
        uVar3 = 4;
        goto LAB_00e1c24c;
      }
      *(undefined8 *)(param_2 + 0x2e) = uVar32;
      if (*(char *)(param_2 + 0x3e) == '\x03') {
        cVar4 = *(char *)(param_2 + 0x3d);
        bVar31 = cVar4 == '\x03';
        if (bVar31) {
          cVar4 = *(char *)(param_2 + 0x3c);
        }
        if (bVar31 && cVar4 == '\x03') {
          FUN_0193c3cc(param_2 + 0x34);
          iVar12 = param_2[0x2f];
        }
      }
      local_1d80 = (undefined4 *)param_2[0x28];
      uVar10 = param_2[0x29];
      FUN_006666fc(&local_a90,*(undefined4 *)(iVar12 + 0x10),*(undefined4 *)(iVar12 + 0x14));
      FUN_006666fc(&local_300,*(undefined4 *)(param_2[0x2f] + 0x1c),
                   *(undefined4 *)(param_2[0x2f] + 0x20));
      iVar12 = param_2[0x2f];
      if (*(int *)(iVar12 + 0x24) == -0x80000000) {
        local_8c0 = (uint ****)&DAT_80000000;
      }
      else {
        FUN_006666fc(&local_8c0,*(undefined4 *)(iVar12 + 0x28),*(undefined4 *)(iVar12 + 0x2c));
        iVar12 = param_2[0x2f];
      }
      cVar4 = *(char *)(param_2[0x2b] + 0x54);
      if (*(char *)(iVar12 + 0x30) != '\x02') {
        cVar4 = *(char *)(iVar12 + 0x30);
      }
      local_5e0 = local_a90;
      local_5dc = ppppuStack_a8c;
      local_5d8 = ppppuStack_a88;
      local_5d4 = local_300;
      local_5d0 = local_2fc;
      local_5cc = local_2f8;
      local_5c8 = local_8c0;
      ppppuStack_5c4 = local_8bc;
      ppppuStack_5c0 = local_8b8;
      local_1428 = local_a90;
      ppppuStack_1424 = ppppuStack_a8c;
      ppppuStack_1420 = ppppuStack_a88;
      ppppuStack_141c = local_300;
      local_1418 = local_2fc;
      ppppuStack_1414 = local_2f8;
      ppppuStack_1410 = local_8c0;
      ppppuStack_140c = local_8bc;
      ppppuStack_1408 = local_8b8;
      param_2[0x32] = local_a90;
      param_2[0x33] = ppppuStack_a8c;
      param_2[0x34] = ppppuStack_a88;
      param_2[0x35] = local_300;
      param_2[0x36] = local_2fc;
      param_2[0x37] = local_2f8;
      param_2[0x38] = local_8c0;
      param_2[0x39] = local_8bc;
      param_2[0x3a] = local_8b8;
      *(undefined1 *)(param_2 + 0x1a4) = 0;
      param_2[0x1a2] = local_1d80;
      param_2[0x1a3] = uVar10;
      *(char *)(param_2 + 0x3b) = cVar4;
LAB_00e1be78:
      *(undefined1 *)((int)param_2 + 0x691) = 1;
      local_e88 = param_2[0x32];
      uStack_e84 = param_2[0x33];
      uStack_e80 = param_2[0x34];
      uStack_e7c = param_2[0x35];
      uStack_e78 = param_2[0x36];
      local_e74 = param_2[0x37];
      uStack_e70 = param_2[0x38];
      uStack_e6c = param_2[0x39];
      uStack_e68 = param_2[0x3a];
      uStack_e64 = param_2[0x3b];
      FUN_019cfcf0(&local_5e0);
      *(undefined1 *)((int)param_2 + 0x691) = 0;
      local_e60 = local_5e0;
      ppppuStack_e5c = local_5dc;
      ppppuStack_e58 = local_5d8;
      ppppuStack_e54 = local_5d4;
      ppppuStack_e50 = local_5d0;
      ppppuStack_e4c = local_5cc;
      local_e48 = local_5c8;
      ppppuStack_e44 = ppppuStack_5c4;
      ppppuStack_e40 = ppppuStack_5c0;
      uStack_e3c = uStack_5bc;
      uStack_e38 = uStack_5b8;
      uStack_e34 = uStack_5b4;
      param_2[0x44] = 0x8000000e;
      param_2[0x45] = local_e88;
      param_2[0x46] = uStack_e84;
      param_2[0x47] = uStack_e80;
      param_2[0x48] = uStack_e7c;
      param_2[0x49] = uStack_e78;
      param_2[0x4a] = local_e74;
      param_2[0x4b] = uStack_e70;
      param_2[0x4c] = uStack_e6c;
      param_2[0x4d] = uStack_e68;
      param_2[0x4e] = uStack_e64;
      param_2[0x53] = 0x13;
      param_2[0x52] = "Bosminer.client_add";
      param_2[0x4f] = uVar10;
      param_2[0x54] = local_5e0;
      param_2[0x55] = local_5dc;
      param_2[0x56] = local_5d8;
      param_2[0x57] = local_5d4;
      param_2[0x58] = local_5d0;
      param_2[0x59] = local_5cc;
      param_2[0x5a] = local_5c8;
      param_2[0x5b] = ppppuStack_5c4;
      param_2[0x5c] = ppppuStack_5c0;
      param_2[0x5d] = uStack_5bc;
      param_2[0x5e] = uStack_5b8;
      param_2[0x5f] = uStack_5b4;
      *(undefined1 *)(param_2 + 0x1a0) = 0;
      *(undefined1 *)((int)param_2 + 0x187) = 0;
      param_2[0x60] = local_1d80;
switchD_00e197e4_caseD_0:
      FUN_01bed4e2(param_2 + 0xee,param_2 + 0x3c,0x2c8);
switchD_00e197e4_caseD_3:
      local_1d84 = param_2 + 0x32;
      local_1d88 = param_2 + 0x1a4;
      puVar28 = param_2 + 0x1a0;
      unaff_r8 = (uint ****)&local_5e0;
      FUN_00df9fa8(unaff_r8,param_2 + 0xee,param_3);
      ppppuVar27 = local_5d8;
      ppppuVar19 = local_5dc;
      ppppuVar15 = local_5e0;
      if (local_5e0 == (uint ****)&DAT_0000001e && local_5dc == (uint ****)0x0) break;
      local_38 = local_5d4;
      ppppuStack_34 = local_5d0;
      ppppuStack_30 = local_5cc;
      FUN_01bed4e2(&local_300,&local_5c8,0x2c8);
      FUN_00df9ef8(param_2 + 0xee);
      if (ppppuVar15 == (uint ****)&DAT_0000001d && ppppuVar19 == (uint ****)0x0) {
        local_c70 = local_38;
        ppppuStack_c6c = ppppuStack_34;
        ppppuStack_c68 = ppppuStack_30;
        *(undefined1 *)puVar28 = 1;
        local_aa0 = local_38;
        ppppuStack_a9c = ppppuStack_34;
        ppppuStack_a98 = ppppuStack_30;
        ppppuVar29 = ppppuVar27;
LAB_00e1c0c0:
        ppppuVar24 = (uint ****)0x0;
        ppppuVar27 = (uint ****)&DAT_00000003;
        local_8d0 = local_aa0;
        ppppuStack_8cc = ppppuStack_a9c;
        ppppuStack_8c8 = ppppuStack_a98;
      }
      else {
        FUN_01bed4e2(&local_8a8,&local_300,0x2c8);
        ppppuVar29 = ppppuStack_34;
        ppppuVar24 = local_38;
        local_8b8 = ppppuVar27;
        local_8b4 = local_38;
        local_8b0 = ppppuStack_34;
        local_8ac = ppppuStack_30;
        local_8bc = ppppuVar19;
        local_8c0 = ppppuVar15;
        if (ppppuVar15 != (uint ****)&DAT_00000012 || ppppuVar19 != (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
        }
        local_c70 = ppppuStack_30;
        ppppuStack_c6c = local_8a8;
        ppppuStack_c68 = ppppuStack_8a4;
        FUN_01bed4e2(auStack_e30,&local_2f8,0x1c0);
        *(undefined1 *)puVar28 = 1;
        unaff_r8 = ppppuVar27;
        if (ppppuVar27 == (uint ****)&SUB_00000004 && ppppuVar24 == (uint ****)0x0)
        goto LAB_00e1c22c;
        local_aa0 = local_c70;
        ppppuStack_a9c = ppppuStack_c6c;
        ppppuStack_a98 = ppppuStack_c68;
        FUN_01bed4e2(auStack_c60,auStack_e30,0x1c0);
        if (ppppuVar27 == (uint ****)&DAT_00000003 && ppppuVar24 == (uint ****)0x0)
        goto LAB_00e1c0c0;
        local_8d0 = local_aa0;
        ppppuStack_8cc = ppppuStack_a9c;
        ppppuStack_8c8 = ppppuStack_a98;
        FUN_01bed4e2(&local_a90,auStack_c60,0x1c0);
      }
      *(undefined1 *)((int)param_2 + 0x691) = 0;
      local_1240 = local_8d0;
      ppppuStack_123c = ppppuStack_8cc;
      ppppuStack_1238 = ppppuStack_8c8;
      FUN_01bed4e2(auStack_1400,&local_a90,0x1c0);
      *(undefined1 *)(param_2 + 0x1a4) = 1;
      local_1230 = local_1240;
      ppppuStack_122c = ppppuStack_123c;
      ppppuStack_1228 = ppppuStack_1238;
      FUN_01bed4e2(auStack_1224,auStack_1400,0x1c0);
      FUN_00e1d41c(local_1d84);
      if (ppppuVar27 == (uint ****)&DAT_00000003 && ppppuVar24 == (uint ****)0x0) {
        local_5dc = local_1230;
        local_5d8 = ppppuStack_122c;
        local_5d4 = ppppuStack_1228;
        local_5e0 = ppppuVar29;
        unaff_r8 = (uint ****)FUN_00f26240();
LAB_00e1c288:
        FUN_019f8c54(param_2[0x2e],1);
        goto LAB_00e1c29c;
      }
      FUN_01bed4e2(appppuStack_1054,&local_1230,0x1cc);
      local_1060 = ppppuVar27;
      local_105c = ppppuVar24;
      local_1058 = ppppuVar29;
      FUN_00ead77c(&local_1600,&local_1060,
                   "failed to add pool using BOSminer APIno fan pause runtime value specifiedinvalid fan pause runtime specifiedfan control is not supported"
                   ,0x25);
      unaff_r8 = local_15f8;
      ppppuVar19 = local_15fc;
      ppppuVar15 = local_1600;
      if (local_1600 == (uint ****)0x2 && local_15fc == (uint ****)0x0) goto LAB_00e1c288;
      FUN_01bed4e2(auStack_17cc,auStack_15f4,0x1cc);
      local_17d4 = ppppuVar19;
      local_17d8 = ppppuVar15;
      local_17d0 = unaff_r8;
      FUN_0094a4d0(&local_17d8);
      FUN_019f8c54(param_2[0x2e],1);
      iVar13 = param_2[0x2d];
      iVar12 = param_2[0x2c];
    }
    *(undefined1 *)puVar28 = 3;
LAB_00e1c22c:
    *(undefined1 *)local_1d88 = 3;
    uVar3 = 5;
LAB_00e1c24c:
    *(undefined1 *)(param_2 + 0x30) = uVar3;
    bVar31 = true;
LAB_00e1c2ac:
    local_1d90 = param_2 + 0x22;
    if (bVar31) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 0xe;
      goto LAB_00e19db8;
    }
    FUN_00e1d360(local_1d90);
    FUN_019f8c54(param_2[8],1);
    FUN_019f8c54(param_2[10],1);
    if (unaff_r8 != (uint ****)0x0) {
      local_a90 = unaff_r8;
      if (((DAT_01d50f88 < 3) &&
          ((DAT_01d4c47c - 1 < 2 ||
           ((DAT_01d4c47c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c474), cVar4 != '\0')))))) &&
         (iVar12 = FUN_01aaa278(DAT_01d4c474), iVar12 != 0)) {
        ppppuVar19 = *(uint *****)(DAT_01d4c474 + 0x1c);
        ppppuVar15 = *(uint *****)(DAT_01d4c474 + 0x20);
        if (ppppuVar15 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c176a8);
        }
        local_2f8 = *(uint *****)(DAT_01d4c474 + 0x24);
        local_2f4 = *(uint *****)(DAT_01d4c474 + 0x28);
        local_2f0 = 0;
        local_15fc = (uint ****)0xb5;
        local_1600 = (uint ****)0x3f10c5;
        local_300 = ppppuVar19;
        local_2fc = ppppuVar15;
        if (ppppuVar15 == (uint ****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c176a8);
        }
        local_1060 = (uint ****)&local_5e0;
        local_5d4 = (uint ****)&local_8c0;
        local_5d0 = (uint ****)&local_17d8;
        local_5dc = (uint ****)&local_1600;
        local_5e0 = (uint ****)&local_300;
        local_8b0 = (uint ****)&DAT_00000001;
        local_105c = (uint ****)0x2;
        local_5d8 = (uint ****)&DAT_01d2ea4c;
        local_5cc = (uint ****)&DAT_01c1e0b8;
        local_17d8 = (uint ****)&local_a90;
        local_1058 = (uint ****)(DAT_01d4c474 + 0x1c);
        local_8c0 = ppppuVar19;
        local_8bc = ppppuVar15;
        local_8b8 = local_2f8;
        local_8b4 = local_2f4;
        FUN_00e1d480(&local_1060);
      }
      else {
        iVar12 = DAT_01d4c474;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1c54 = *(uint *****)(DAT_01d4c474 + 0x14);
          local_1c50 = *(uint *****)(DAT_01d4c474 + 0x18);
          local_1c58 = (uint ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar28 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar28 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar28[3])(pcVar2,&local_1c58);
          if (iVar13 != 0) {
            local_15f8 = (uint ****)(DAT_01d4c474 + 0x1c);
            ppppuVar19 = (uint ****)*local_15f8;
            ppppuVar15 = *(uint *****)(DAT_01d4c474 + 0x20);
            if (ppppuVar15 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c176a8);
            }
            local_2f8 = *(uint *****)(DAT_01d4c474 + 0x24);
            local_2f4 = *(uint *****)(DAT_01d4c474 + 0x28);
            local_2f0 = 0;
            local_17d4 = (uint ****)0xb5;
            local_17d8 = (uint ****)0x3f10c5;
            local_300 = ppppuVar19;
            local_2fc = ppppuVar15;
            if (ppppuVar15 == (uint ****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c176a8);
            }
            local_5d4 = (uint ****)&local_8c0;
            local_5dc = (uint ****)&local_17d8;
            local_5e0 = (uint ****)&local_300;
            local_1600 = (uint ****)&local_5e0;
            local_8b0 = (uint ****)&DAT_00000001;
            local_15fc = (uint ****)0x2;
            local_5d8 = (uint ****)&DAT_01d2ea4c;
            local_5d0 = (uint ****)&local_19b0;
            local_5cc = (uint ****)&DAT_01c1e0b8;
            local_1060 = local_1c58;
            local_105c = local_1c54;
            local_1058 = local_1c50;
            local_19b0 = (uint ****)&local_a90;
            local_8c0 = ppppuVar19;
            local_8bc = ppppuVar15;
            local_8b8 = local_2f8;
            local_8b4 = local_2f4;
            FUN_01aaa328(iVar12,pcVar2,puVar28[4],&local_1060,&local_1600);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x21) = 0;
      FUN_00e1cc38(&local_1be8,param_2,*(undefined4 *)(param_2[0x10] + 4),
                   *(undefined4 *)(param_2[0x10] + 8),param_2[0xf],1);
      (*(code *)**local_a90)();
      goto LAB_00e1bcc4;
    }
    puVar26 = (uint *)*param_2;
    *(undefined1 *)(param_2 + 0x21) = 0;
    uVar10 = param_2[0xf];
    uVar22 = *(uint *)(param_2[0x10] + 8);
    uVar20 = *puVar26;
    if (uVar22 <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,uVar22,&DAT_01c176b8);
    }
    iVar12 = *(int *)(param_2[0x10] + 4);
    piVar6 = *(int **)(iVar12 + uVar20 * 4);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar31 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar31);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b5ef20(*(undefined4 *)(iVar12 + uVar20 * 4));
    }
    piVar6 = (int *)param_2[1];
    *(undefined4 *)(iVar12 + uVar20 * 4) = uVar10;
    FUN_019e0044(*(int *)(*piVar6 + 0x54) + 8);
    uVar20 = *puVar26;
    if (uVar22 <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,uVar22,&DAT_01c176c8);
    }
    local_1be0 = *(uint *****)(iVar12 + uVar20 * 4);
    do {
      pppuVar16 = *local_1be0;
      bVar31 = (bool)hasExclusiveAccess(local_1be0);
    } while (!bVar31);
    *local_1be0 = (uint ***)((int)pppuVar16 + 1);
    if ((int)pppuVar16 < 0) {
LAB_00e1aa64:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe1aa64);
      (*pcVar1)();
    }
    local_1be4 = (uint ****)0x0;
    local_1be8 = (uint ****)&DAT_00000003;
    FUN_00a573e8(param_2 + 0x16);
    FUN_0084ec48(param_2 + 0x13);
LAB_00e19dc8:
    if (*(char *)(param_2 + 0x21) != '\0') {
      piVar6 = (int *)param_2[0xf];
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar6;
        bVar31 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar31);
      *piVar6 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00b5ef20(param_2[0xf]);
      }
    }
  }
  else {
    puVar11 = auStack_1d70;
LAB_00e19500:
    FUN_01bed4e2(&local_1be0,puVar11,0x60);
LAB_00e1a0a8:
    local_1be8 = ppppuVar15;
    local_1be4 = ppppuVar19;
LAB_00e1aa1c:
    if (*(char *)(param_2 + 0x21) != '\0') {
      piVar6 = (int *)param_2[0xf];
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar6;
        bVar31 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar31);
      *piVar6 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00b5ef20(param_2[0xf]);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
  FUN_01bed4e2(param_1,&local_1be8,0x68);
  uVar3 = 1;
LAB_00e19db8:
  *(undefined1 *)((int)param_2 + 0x85) = uVar3;
  return;
LAB_00e1c21c:
  unaff_r8 = (uint ****)0x0;
LAB_00e1c29c:
  local_1d8c = param_2 + 0x30;
  *(undefined1 *)local_1d8c = 1;
  bVar31 = false;
  goto LAB_00e1c2ac;
}

