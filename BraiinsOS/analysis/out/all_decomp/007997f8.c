// FUN_007997f8 @ 007997f8 size=3724 calls_out=19 calls_in=0
// strings: /etc/block_candidate.jsonlevent open/bosminer/bosminer/src/hub.rs:86event open/bosminer/bosminer/src/hub.rs:133bosminer::client::stratum_v2::connectors::v1open/bosminer/bosminer/src/client/stratum_v2/connectors/v1.rs

void FUN_007997f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 **ppuVar3;
  undefined4 ***pppuVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint local_448;
  uint local_444;
  int **local_440;
  undefined4 local_43c;
  int **local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  int **local_278;
  uint uStack_274;
  int *piStack_270;
  undefined *puStack_26c;
  int *piStack_268;
  undefined *puStack_264;
  int **ppiStack_260;
  int **local_258;
  undefined4 local_254;
  undefined4 *local_250;
  undefined *local_24c;
  undefined8 local_248;
  int *local_240;
  int *local_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 ***local_220;
  uint local_21c;
  int **local_218;
  undefined *local_214;
  int *local_210;
  undefined *local_20c;
  int **local_208;
  undefined *local_204;
  int **local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 *local_1f4;
  int **local_1f0;
  undefined4 local_1ec;
  int **local_1e8;
  int *local_1e4;
  int *local_1e0;
  int **local_1dc;
  undefined4 uStack_1d8;
  int **ppiStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int *local_1b4;
  int *local_1b0;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  
  FUN_015f3b0c(&local_220,1);
  ppiVar8 = local_218;
  pppuVar4 = local_220;
  DataMemoryBarrier(0xb);
  if (DAT_018daad0 != 0) {
    local_220 = &local_440;
    local_440 = (int **)&DAT_018daad0;
    FUN_015eedc4(&DAT_018daad0,1,&local_220,&DAT_018590cc,&DAT_018ac9b8);
  }
  FUN_006f8940(&local_440,DAT_018daadc,pppuVar4,local_21c,ppiVar8,DAT_018daad8,DAT_018daadc);
  local_21c = 1;
  local_220 = (undefined4 ***)0x1;
  FUN_016dd1aa(&local_210,&local_440,0x1c0);
  local_48 = (int *)0x0;
  iVar6 = FUN_016d51b0(&local_48,0x10,0x1d0);
  piVar5 = local_48;
  if ((iVar6 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x10,0x1d0);
  }
  FUN_016dd1aa(local_48,&local_220,0x1d0);
  piVar7 = (int *)thunk_FUN_016d4a50(8);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *piVar7 = 1;
  piVar7[1] = 1;
  do {
    iVar6 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0079a6c4;
  ppiVar8 = (int **)thunk_FUN_016d4a50(0xb0);
  if (ppiVar8 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xb0);
  }
  *ppiVar8 = (int *)0x1;
  ppiVar8[1] = (int *)0x1;
  FUN_016dd606(ppiVar8 + 2,0,0x94);
  ppiVar8[0x27] = piVar7;
  ppiVar8[0x28] = (int *)&DAT_01859d74;
  ppiVar8[0x29] = (int *)0x0;
  ppiVar8[0x2a] = (int *)0x1;
  ppiVar8[0x2b] = (int *)0x1;
  do {
    piVar15 = *ppiVar8;
    bVar2 = (bool)hasExclusiveAccess(ppiVar8);
  } while (!bVar2);
  *ppiVar8 = (int *)((int)piVar15 + 1);
  if ((int)piVar15 < 0) goto LAB_0079a6c4;
  local_214 = &DAT_01859d74;
  local_210 = (int *)0x1;
  local_21c = local_21c & 0xffffff00;
  local_220 = (undefined4 ***)0x0;
  local_20c = &DAT_01859d90;
  local_218 = (int **)piVar7;
  local_208 = ppiVar8;
  local_250 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (local_250 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *local_250 = 1;
  local_250[1] = 1;
  local_278 = (int **)local_220;
  uStack_274 = local_21c;
  piStack_270 = (int *)local_218;
  puStack_26c = local_214;
  piStack_268 = local_210;
  puStack_264 = local_20c;
  ppiStack_260 = local_208;
  local_24c = &DAT_01859dc0;
  local_254 = 0;
  local_258 = ppiVar8;
  local_248 = FUN_006bb674();
  piVar7 = (int *)local_248;
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,0x18);
  }
  puVar9[2] = 0xffffffff;
  puVar9[3] = 0xffffffff;
  *(undefined1 *)(puVar9 + 5) = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[4] = 0;
  piVar15 = (int *)thunk_FUN_016d4a50(0x50);
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  piVar20 = piVar15 + 0x11;
  *piVar20 = 1;
  piVar15[0xc] = 0;
  piVar23 = piVar15 + 4;
  *piVar23 = 0;
  piVar15[3] = 1;
  *piVar15 = 1;
  piVar15[1] = 1;
  piVar15[10] = 1;
  piVar10 = piVar15 + 2;
  *piVar10 = (int)puVar9;
  *(undefined1 *)(piVar15 + 0xb) = 0;
  piVar15[5] = 0;
  piVar15[6] = 0;
  piVar15[7] = 0;
  piVar15[8] = 0;
  piVar15[9] = 0;
  piVar15[0xd] = 0;
  piVar15[0xe] = 0;
  piVar15[0xf] = 0;
  piVar15[0x10] = 0;
  piVar15[0x12] = 0;
  do {
    iVar6 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0079a6c4;
  if ((char)*piVar23 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(piVar23);
    if (!bVar2) goto LAB_00799ae0;
    *(char *)piVar23 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00799ae0:
    FUN_01280da8(piVar23);
  }
  FUN_0128236c(piVar23);
  uVar11 = piVar15[6];
  uVar12 = piVar15[7];
  iVar6 = piVar15[10];
  piVar15[10] = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    FUN_0163b708(piVar15 + 0xc);
    *(undefined1 *)(piVar15 + 0xb) = 1;
  }
  FUN_01282570(piVar23);
  if ((char)*piVar23 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar23);
      if (bVar2) {
        *(char *)piVar23 = '\0';
        goto LAB_00799b68;
      }
    } while ((char)*piVar23 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar23);
LAB_00799b68:
  if (uVar11 != 0 || uVar12 != 0) {
    local_444 = 0;
    local_448 = 0;
    do {
      uVar21 = piVar15[0x10] & local_444;
      if ((uint)piVar15[3] <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar21,piVar15[3],&DAT_01880ac4);
      }
      pcVar19 = (char *)(*piVar10 + uVar21 * 0x18);
      if (*pcVar19 == '\0') {
        bVar2 = (bool)hasExclusiveAccess(pcVar19);
        if (!bVar2) goto LAB_00799c00;
        *pcVar19 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00799c00:
        FUN_01280da8(pcVar19);
      }
      FUN_0128236c(pcVar19);
      if (*(uint *)(pcVar19 + 8) == local_444 && *(uint *)(pcVar19 + 0xc) == local_448) {
LAB_00799e40:
        piVar16 = (int *)(pcVar19 + 0x10);
        local_448 = local_448 + (0xfffffffe < local_444);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar16;
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = iVar6 + -1;
        DataMemoryBarrier(0xb);
        if (iVar6 == 1) {
          pcVar19[0x14] = '\0';
        }
        FUN_01282570(pcVar19);
        if (*pcVar19 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(pcVar19);
            if (bVar2) {
              *pcVar19 = '\0';
              local_444 = local_444 + 1;
              goto LAB_00799b98;
            }
          } while (*pcVar19 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar19);
        local_444 = local_444 + 1;
      }
      else {
        FUN_01282570(pcVar19);
        if (*pcVar19 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(pcVar19);
            if (bVar2) {
              *pcVar19 = '\0';
              goto LAB_00799c68;
            }
          } while (*pcVar19 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar19);
LAB_00799c68:
        if ((char)*piVar23 == '\0') {
          bVar2 = (bool)hasExclusiveAccess(piVar23);
          if (!bVar2) goto LAB_00799c8c;
          *(char *)piVar23 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00799c8c:
          FUN_01280da8(piVar23);
        }
        FUN_0128236c(piVar23);
        if ((uint)piVar15[3] <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar21,piVar15[3],&DAT_01880ad4);
        }
        pcVar19 = (char *)(*piVar10 + uVar21 * 0x18);
        if (*pcVar19 == '\0') {
          bVar2 = (bool)hasExclusiveAccess(pcVar19);
          if (!bVar2) goto LAB_00799ce8;
          *pcVar19 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00799ce8:
          FUN_01280da8(pcVar19);
        }
        FUN_0128236c(pcVar19);
        uVar21 = *(uint *)(pcVar19 + 8);
        if (uVar21 == local_444 && *(uint *)(pcVar19 + 0xc) == local_448) {
          FUN_01282570(piVar23);
          if ((char)*piVar23 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar23);
              if (bVar2) {
                *(char *)piVar23 = '\0';
                goto LAB_00799e40;
              }
            } while ((char)*piVar23 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(piVar23);
          goto LAB_00799e40;
        }
        uVar13 = piVar15[3];
        uVar17 = uVar21 + uVar13 ^ local_444;
        uVar21 = *(uint *)(pcVar19 + 0xc) + (uint)CARRY4(uVar21,uVar13) ^ local_448;
        if (uVar17 == 0 && uVar21 == 0) {
          if ((char)piVar15[0xb] == '\0') {
            FUN_01282570(pcVar19);
            if (*pcVar19 != '\x01') goto LAB_0079a660;
            DataMemoryBarrier(0xb);
            goto LAB_0079a648;
          }
          FUN_01282570(piVar23);
          uVar13 = local_448;
          uVar22 = local_444;
          if ((char)*piVar23 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar23);
              if (bVar2) {
                *(char *)piVar23 = '\0';
                goto LAB_00799eac;
              }
            } while ((char)*piVar23 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(piVar23);
        }
        else {
          uVar18 = piVar15[6];
          uVar22 = uVar18 - uVar13;
          uVar13 = piVar15[7] - (uint)(uVar18 < uVar13);
          FUN_01282570(piVar23);
          if ((char)*piVar23 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar23);
              if (bVar2) {
                *(char *)piVar23 = '\0';
                goto LAB_00799e20;
              }
            } while ((char)*piVar23 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(piVar23);
LAB_00799e20:
          if (uVar22 == local_444 && uVar13 == local_448) goto LAB_00799e40;
        }
LAB_00799eac:
        FUN_01282570(pcVar19);
        if (*pcVar19 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(pcVar19);
            if (bVar2) {
              *pcVar19 = '\0';
              goto LAB_00799ee8;
            }
          } while (*pcVar19 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar19);
LAB_00799ee8:
        local_448 = uVar13;
        local_444 = uVar22;
        if (uVar17 == 0 && uVar21 == 0) break;
      }
LAB_00799b98:
    } while (local_448 <= uVar12 && (uint)(uVar11 <= local_444) <= local_448 - uVar12);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(piVar15);
  }
  do {
    iVar6 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0079a6c4;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar2);
  *piVar20 = *piVar20 + 1;
  local_438 = (int **)0x0;
  local_440 = (int **)0x0;
  local_43c = 8;
  piVar16 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *piVar16 = 1;
  piVar16[1] = 1;
  piVar16[2] = 0xe10;
  local_1dc = (int **)thunk_FUN_016d4a50(0xc);
  if (local_1dc == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *local_1dc = (int *)0x1;
  local_1dc[1] = (int *)0x1;
  local_1f0 = local_440;
  local_1ec = local_43c;
  local_1e8 = local_438;
  local_1dc[2] = (int *)0xe10;
  local_204 = (undefined *)0x0;
  local_208 = (int **)&DAT_00000004;
  local_20c = (undefined *)0x0;
  local_210 = (int *)((uint)local_210 & 0xffffff00);
  local_214 = (undefined *)0x0;
  local_218 = (int **)0x0;
  local_21c = 1;
  local_220 = (undefined4 ***)0x1;
  local_200 = (int **)0x0;
  local_1fc = 0;
  local_1f8 = 0;
  local_1f4 = (undefined4 *)0x0;
  local_1e4 = piVar15;
  local_1e0 = piVar16;
  piVar16 = (int *)thunk_FUN_016d4a50(0x48);
  if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x48);
  }
  FUN_016dd1aa(piVar16,&local_220,0x48);
  do {
    iVar6 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar6 + 1;
  local_240 = piVar16;
  local_23c = piVar15;
  local_238 = param_2;
  if (iVar6 < 0) goto LAB_0079a6c4;
  do {
    iVar6 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0079a6c4;
  do {
    iVar6 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0079a6c4;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar2);
  *piVar20 = *piVar20 + 1;
  do {
    iVar6 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0079a6c4;
  do {
    iVar6 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0079a6c4;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar2);
  *piVar20 = *piVar20 + 1;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_3c = 0;
  local_40 = local_40 & 0xffffff00;
  local_44 = 0;
  local_48 = (int *)0x0;
  local_38 = 4;
  local_21c = 1;
  local_220 = (undefined4 ***)&DAT_00000001;
  local_218 = local_278;
  local_214 = (undefined *)uStack_274;
  local_210 = piStack_270;
  local_20c = puStack_26c;
  local_208 = (int **)piStack_268;
  local_204 = puStack_264;
  local_200 = ppiStack_260;
  local_28 = piVar15;
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x24);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *puVar9 = local_220;
  puVar9[1] = local_21c;
  puVar9[2] = local_218;
  puVar9[3] = local_214;
  puVar9[4] = local_210;
  puVar9[5] = local_20c;
  puVar9[6] = local_208;
  puVar9[7] = local_204;
  puVar9[8] = local_200;
  FUN_015f3b0c(&local_220,1);
  ppiVar8 = local_218;
  uVar11 = local_21c;
  pppuVar4 = local_220;
  puVar14 = (undefined4 *)((uint)&local_440 | 4);
  *puVar14 = local_48;
  puVar14[1] = local_44;
  puVar14[2] = local_40;
  puVar14[3] = local_3c;
  puVar14[4] = local_38;
  puVar14[5] = local_34;
  puVar14[6] = local_30;
  puVar14[7] = local_2c;
  puVar14[8] = local_28;
  local_224 = 0;
  local_228 = 0;
  local_22c = 0;
  local_230 = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar20;
    bVar2 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar2);
  *piVar20 = iVar6 + -1;
  DataMemoryBarrier(0xb);
  if (iVar6 == 1) {
    if ((char)*piVar23 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(piVar23);
      if (!bVar2) goto LAB_0079a220;
      *(char *)piVar23 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0079a220:
      FUN_01280da8(piVar23);
    }
    FUN_0128236c(piVar23);
    *(undefined1 *)(piVar15 + 0xb) = 1;
    FUN_0072a978(piVar10,piVar23);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(piVar15);
  }
  local_208 = (int **)&DAT_00000004;
  local_204 = (undefined *)local_230;
  local_200 = (int **)local_22c;
  local_1fc = local_228;
  local_1f8 = local_224;
  local_1e8 = ppiVar8;
  local_20c = (undefined *)0x0;
  local_210 = (int *)((uint)local_210 & 0xffffff00);
  local_214 = (undefined *)0x0;
  local_218 = (int **)0x0;
  local_1ec = uVar11;
  local_1f0 = (int **)pppuVar4;
  local_21c = 1;
  local_220 = (undefined4 ***)0x1;
  local_1dc = local_440;
  uStack_1d8 = local_43c;
  ppiStack_1d4 = local_438;
  uStack_1d0 = uStack_434;
  uStack_1cc = uStack_430;
  local_1c8 = local_42c;
  uStack_1c4 = uStack_428;
  uStack_1c0 = uStack_424;
  uStack_1bc = uStack_420;
  uStack_1b8 = uStack_41c;
  local_1b4 = piVar5;
  local_1f4 = puVar9;
  local_1e0 = piVar16;
  local_1b0 = piVar16;
  piVar15 = (int *)thunk_FUN_016d4a50(0x78);
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x78);
  }
  FUN_016dd1aa(piVar15,&local_220,0x78);
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x44);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  *(undefined1 *)(puVar9 + 4) = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[0xd] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[5] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xc] = 0;
  *puVar9 = 1;
  puVar9[1] = 1;
  puVar9[0xe] = 4;
  puVar9[6] = 4;
  puVar9[0xb] = 4;
  puVar14 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  ppuVar3 = local_248._4_4_;
  if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar14 = 1;
  puVar14[1] = 1;
  puVar14[2] = puVar9;
  do {
    iVar6 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar6 + 1;
  if (-1 < iVar6) {
    local_220 = (undefined4 ***)local_258;
    local_21c = local_254;
    local_218 = (int **)local_250;
    local_214 = local_24c;
    local_440 = local_248._4_4_;
    local_48 = piVar7;
    iVar6 = thunk_FUN_016d4a50(0x1a);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x1a);
    }
    FUN_016dd1aa(iVar6,
                 "/etc/block_candidate.jsonlevent open/bosminer/bosminer/src/hub.rs:86event open/bosminer/bosminer/src/hub.rs:133bosminer::client::stratum_v2::connectors::v1open/bosminer/bosminer/src/client/stratum_v2/connectors/v1.rs"
                 ,0x1a);
    puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x28);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x28);
    }
    *puVar9 = 1;
    puVar9[1] = 1;
    puVar9[2] = 0;
    puVar9[6] = 2;
    puVar9[7] = 0x1a;
    puVar9[8] = iVar6;
    puVar9[9] = 0x1a;
    puVar9[3] = 0;
    puVar9[4] = 0;
    *(int **)(param_1 + 100) = local_240;
    *(int **)(param_1 + 0x68) = local_23c;
    *(undefined4 *)(param_1 + 0x6c) = local_238;
    *(undefined1 *)(puVar9 + 5) = 0;
    FUN_016dd1aa(param_1,param_3,0x48);
    *(undefined4 *)(param_1 + 0x84) = 4;
    *(int **)(param_1 + 0x94) = piVar15;
    *(undefined4 **)(param_1 + 0x98) = puVar9;
    *(undefined4 ***)(param_1 + 0x9c) = ppuVar3;
    *(undefined4 **)(param_1 + 0x48) = puVar14;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(int **)(param_1 + 0x70) = piVar7;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(int **)(param_1 + 0x4c) = piVar5;
    *(int **)(param_1 + 0x50) = piVar15;
    *(int ***)(param_1 + 0x54) = local_258;
    *(undefined4 *)(param_1 + 0x58) = local_254;
    *(undefined4 **)(param_1 + 0x5c) = local_250;
    *(undefined **)(param_1 + 0x60) = local_24c;
    return;
  }
LAB_0079a6c4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x79a6c4);
  (*pcVar1)();
  while (*pcVar19 == '\x01') {
LAB_0079a648:
    bVar2 = (bool)hasExclusiveAccess(pcVar19);
    if (bVar2) {
      *pcVar19 = '\0';
      goto LAB_0079a66c;
    }
  }
LAB_0079a660:
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar19);
LAB_0079a66c:
  FUN_01282570(piVar23);
  if ((char)*piVar23 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar23);
      if (bVar2) {
        *(char *)piVar23 = '\0';
        goto LAB_0079a6ac;
      }
    } while ((char)*piVar23 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar23);
LAB_0079a6ac:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0035e385,0x45,&DAT_01880ae4);
}

