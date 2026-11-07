// FUN_00eca3b4 @ 00eca3b4 size=2948 calls_out=12 calls_in=0
// strings: assertion failed: prev

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eca3b4(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  uint uVar21;
  undefined **ppuVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  int *piVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  uint uVar29;
  bool bVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  undefined8 uVar35;
  undefined **local_f0;
  undefined **local_ec;
  undefined **local_d8;
  undefined **local_d4;
  undefined **local_d0;
  undefined **local_cc;
  undefined **local_c8;
  uint uStack_c4;
  int *local_c0;
  uint *local_bc;
  uint local_b0;
  undefined *local_ac;
  uint *local_a8;
  undefined **local_a4;
  undefined **local_a0;
  undefined **ppuStack_9c;
  undefined **local_98;
  undefined **local_94;
  undefined **local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  
  puVar6 = param_2 + 10;
  if (*puVar6 != 0x80000000) {
    piVar26 = param_2 + 4;
    puVar7 = param_2 + 2;
    uVar29 = param_2[9];
joined_r0x00eca508:
    if (uVar29 == 0) {
LAB_00eca650:
      do {
        iVar2 = param_2[5];
        DataMemoryBarrier(0xb);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(iVar2 + 0x78) == *(int *)(*piVar26 + 8) + 8);
          iVar2 = *(int *)(iVar2 + 0x80);
        }
        iVar17 = *piVar26;
        piVar25 = (int *)*param_3;
        piVar19 = (int *)(iVar17 + 0x14);
        do {
          iVar4 = *piVar19;
          if (iVar4 != 0) {
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            if (iVar4 == 0) goto LAB_00eca6e8;
            if (iVar4 != 2) goto LAB_00eca7bc;
            iVar4 = piVar25[1];
            pcVar13 = *(code **)(*piVar25 + 8);
            goto LAB_00eca7b4;
          }
          bVar30 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar30);
        *piVar19 = 1;
        DataMemoryBarrier(0xb);
LAB_00eca6e8:
        if (*(undefined4 **)(iVar17 + 0xc) == (undefined4 *)0x0) {
          iVar4 = piVar25[1];
LAB_00eca720:
          uVar35 = (**(code **)*piVar25)(iVar4);
          if (*(int *)(iVar17 + 0xc) != 0) {
            (**(code **)(*(int *)(iVar17 + 0xc) + 0xc))(*(undefined4 *)(iVar17 + 0x10));
          }
          *(undefined8 *)(iVar17 + 0xc) = uVar35;
          iVar4 = *piVar19;
        }
        else {
          iVar4 = piVar25[1];
          if (*(int *)(iVar17 + 0x10) != iVar4 ||
              *(undefined4 **)(iVar17 + 0xc) != (undefined4 *)*piVar25) goto LAB_00eca720;
          iVar4 = *piVar19;
        }
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          do {
            bVar30 = (bool)hasExclusiveAccess(piVar19);
            if (bVar30) {
              *piVar19 = 0;
              DataMemoryBarrier(0xb);
              goto LAB_00eca7bc;
            }
          } while (*piVar19 == 1);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        iVar14 = *(int *)(iVar17 + 0xc);
        iVar4 = *(int *)(iVar17 + 0x10);
        *(undefined4 *)(iVar17 + 0xc) = 0;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01882284);
        }
        DataMemoryBarrier(0xb);
        do {
          bVar30 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar30);
        *piVar19 = 0;
        DataMemoryBarrier(0xb);
        pcVar13 = *(code **)(iVar14 + 4);
LAB_00eca7b4:
        (*pcVar13)(iVar4);
LAB_00eca7bc:
        uVar29 = 0;
        iVar17 = 0;
LAB_00eca7c4:
        iVar4 = *piVar26;
        puVar31 = *(uint **)(iVar4 + 0x1c);
        puVar20 = (uint *)puVar31[0x21];
        DataMemoryBarrier(0xb);
        if (puVar31 == (uint *)(*(int *)(iVar4 + 8) + 8)) {
          if (puVar20 != (uint *)0x0) {
            *(uint **)(iVar4 + 0x1c) = puVar20;
            DataMemoryBarrier(0xb);
            puVar31 = puVar20;
            puVar20 = (uint *)puVar20[0x21];
            goto joined_r0x00eca810;
          }
          if (param_2[5] == 0) {
            ppuVar27 = (undefined **)0x80000001;
            *(undefined1 *)(param_2 + 6) = 1;
          }
          else {
LAB_00ecabac:
            ppuVar27 = (undefined **)0x80000002;
          }
          goto LAB_00ecac84;
        }
joined_r0x00eca810:
        if (puVar20 == (uint *)0x0) {
          DataMemoryBarrier(0xb);
          if (*(uint **)(iVar4 + 0x18) == puVar31) {
            iVar14 = *(int *)(iVar4 + 8);
            piVar19 = (int *)(iVar4 + 0x18);
            *(undefined4 *)(iVar14 + 0x8c) = 0;
            iVar14 = iVar14 + 8;
            DataMemoryBarrier(0xb);
            do {
              iVar15 = *piVar19;
              bVar30 = (bool)hasExclusiveAccess(piVar19);
            } while (!bVar30);
            *piVar19 = iVar14;
            DataMemoryBarrier(0xb);
            *(int *)(iVar15 + 0x84) = iVar14;
            puVar20 = (uint *)puVar31[0x21];
            DataMemoryBarrier(0xb);
            if (puVar20 != (uint *)0x0) goto LAB_00eca860;
          }
          (**(code **)(*piVar25 + 8))(piVar25[1]);
          goto LAB_00ecabac;
        }
LAB_00eca860:
        *(uint **)(iVar4 + 0x1c) = puVar20;
        if ((*puVar31 & 1) == 0) {
          puVar31 = puVar31 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar3 = *puVar31;
            bVar30 = (bool)hasExclusiveAccess(puVar31);
          } while (!bVar30);
          *puVar31 = uVar3 - 1;
          if (uVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aa8008();
          }
          goto LAB_00eca7c4;
        }
        uVar3 = param_2[5];
        iVar4 = *(int *)(uVar3 + 0x80);
        uVar8 = puVar31[0x1e];
        uVar33 = puVar31[0x1f];
        puVar31[0x1e] = *(int *)(param_2[4] + 8) + 8;
        puVar31[0x1f] = 0;
        if (uVar8 == 0) {
          if (uVar33 != 0) goto LAB_00eca8f4;
          param_2[5] = 0;
        }
        else {
          *(uint *)(uVar8 + 0x7c) = uVar33;
          if (uVar33 == 0) {
            param_2[5] = uVar8;
            uVar3 = uVar8;
          }
          else {
LAB_00eca8f4:
            *(uint *)(uVar33 + 0x78) = uVar8;
          }
          *(int *)(uVar3 + 0x80) = iVar4 + -1;
        }
        puVar20 = puVar31 + 0x23;
        DataMemoryBarrier(0xb);
        do {
          uVar3 = *puVar20;
          bVar30 = (bool)hasExclusiveAccess(puVar20);
        } while (!bVar30);
        *(char *)puVar20 = '\0';
        DataMemoryBarrier(0xb);
        if ((char)uVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: prev",0x16,&DAT_0187b5ac);
        }
        *(undefined1 *)((int)puVar31 + 0x8d) = 0;
        ppuVar28 = (undefined **)puVar31[0x1c];
        ppuVar10 = (undefined **)puVar31[0x1d];
        local_ac = &DAT_0187b5bc;
        local_98 = &local_ac;
        local_90 = (undefined **)0x0;
        local_c0 = piVar26;
        local_bc = puVar31 + -2;
        local_a8 = puVar31;
        local_94 = local_98;
        FUN_00f152c8(&local_a4,puVar31 + 2,&local_98);
        ppuVar9 = ppuStack_9c;
        ppuVar22 = local_a0;
        ppuVar27 = local_a4;
        uVar3 = local_b0;
        if (local_a4 == (undefined **)0x80000001) {
          local_bc = (uint *)0x0;
          iVar17 = iVar17 + 1;
          DataMemoryBarrier(0xb);
          if (*(char *)((int)puVar31 + 0x8d) != '\0') {
            uVar29 = uVar29 + 1;
          }
          puVar20 = (uint *)(local_c0 + 1);
          do {
            uVar3 = *puVar20;
            bVar30 = (bool)hasExclusiveAccess(puVar20);
          } while (!bVar30);
          *puVar20 = (uint)puVar31;
          DataMemoryBarrier(0xb);
          if (uVar3 == 0) {
            puVar31[0x20] = 1;
            DataMemoryBarrier(0xb);
            puVar31[0x1e] = 0;
          }
          else {
            do {
              DataMemoryBarrier(0xb);
            } while (*(int *)(uVar3 + 0x78) == *(int *)(*local_c0 + 8) + 8);
            puVar31[0x20] = *(int *)(uVar3 + 0x80) + 1;
            DataMemoryBarrier(0xb);
            puVar31[0x1e] = uVar3;
            *(uint **)(uVar3 + 0x7c) = puVar31;
          }
          if ((1 < uVar29) || (iVar17 == iVar2)) {
            (**(code **)(*piVar25 + 8))(piVar25[1]);
            FUN_00eaacd4(&local_c0);
            goto LAB_00ecabac;
          }
          FUN_00eaacd4(&local_c0);
          goto LAB_00eca7c4;
        }
        FUN_00eaacd4(&local_c0);
        local_cc = ppuVar22;
        local_c8 = ppuVar9;
        uStack_c4 = uVar3;
        local_d0 = ppuVar27;
        local_d8 = ppuVar28;
        local_d4 = ppuVar10;
        if (ppuVar28 == (undefined **)*puVar7 && ppuVar10 == (undefined **)param_2[3])
        goto LAB_00ecad24;
        uVar29 = param_2[9];
        if (uVar29 == param_2[7]) {
          FUN_00a8a450(param_2 + 7);
        }
        iVar2 = param_2[8];
        puVar5 = (undefined4 *)(iVar2 + uVar29 * 0x18);
        *puVar5 = local_d8;
        puVar5[1] = local_d4;
        puVar5[2] = local_d0;
        puVar5[3] = local_cc;
        puVar5[4] = local_c8;
        puVar5[5] = uStack_c4;
        uVar8 = *(uint *)(iVar2 + uVar29 * 0x18);
        param_2[9] = uVar29 + 1;
        uVar3 = puVar5[1];
        if (uVar29 == 0) {
          uVar33 = 0;
        }
        else {
          do {
            uVar23 = uVar29 - 1;
            puVar31 = (uint *)(iVar2 + ((uVar23 & 0xfffffffe) + (uVar23 >> 1)) * 8);
            uVar33 = puVar31[1];
            if ((int)(uVar3 - (uVar33 + (uVar8 < *puVar31))) < 0 ==
                (SBORROW4(uVar3,uVar33) != SBORROW4(uVar3 - uVar33,(uint)(uVar8 < *puVar31)))) {
              uVar33 = uVar29;
              break;
            }
            uVar11 = puVar31[1];
            uVar32 = puVar31[2];
            uVar18 = puVar31[3];
            uVar12 = puVar31[4];
            uVar21 = puVar31[5];
            uVar33 = uVar23 >> 1;
            puVar20 = (uint *)(iVar2 + uVar29 * 0x18);
            *puVar20 = *puVar31;
            puVar20[1] = uVar11;
            puVar20[2] = uVar32;
            puVar20[3] = uVar18;
            puVar20[4] = uVar12;
            puVar20[5] = uVar21;
            uVar29 = uVar33;
          } while (1 < uVar23);
        }
        puVar31 = (uint *)(iVar2 + uVar33 * 0x18);
        *puVar31 = uVar8;
        puVar31[1] = uVar3;
        puVar31[2] = (uint)local_d0;
        puVar31[3] = (uint)local_cc;
        puVar31[4] = (uint)local_c8;
        puVar31[5] = uStack_c4;
      } while( true );
    }
    puVar31 = (uint *)param_2[8];
    uVar3 = *puVar31;
    uVar8 = puVar31[1];
    if (uVar3 != *puVar7 || uVar8 != param_2[3]) goto LAB_00eca650;
    uVar33 = uVar29 - 1;
    *puVar7 = uVar3 + 1;
    param_2[3] = uVar8 + (0xfffffffe < uVar3);
    puVar20 = puVar31 + uVar33 * 6;
    ppuVar27 = (undefined **)puVar20[2];
    ppuVar22 = (undefined **)puVar20[3];
    local_ec = (undefined **)puVar20[4];
    param_2[9] = uVar33;
    if (uVar33 != 0) {
      ppuVar9 = (undefined **)puVar31[3];
      uVar3 = *puVar20;
      uVar8 = puVar20[1];
      uVar23 = puVar20[5];
      ppuVar10 = (undefined **)puVar31[4];
      ppuVar28 = (undefined **)puVar31[2];
      puVar31[2] = (uint)ppuVar27;
      puVar31[5] = uVar23;
      puVar31[4] = (uint)local_ec;
      puVar31[3] = (uint)ppuVar22;
      puVar31[1] = uVar8;
      *puVar31 = uVar3;
      uVar8 = *puVar31;
      uVar23 = puVar31[1];
      uVar11 = puVar31[2];
      uStack_8c = puVar31[3];
      uStack_88 = puVar31[4];
      uStack_84 = puVar31[5];
      uVar32 = uVar29 - 3;
      uVar3 = 0;
      if (uVar33 < 2) {
        uVar32 = 0;
      }
      uVar33 = 1;
      if (3 < uVar29) {
        uVar18 = 0;
        do {
          uVar3 = uVar33;
          puVar20 = puVar31 + uVar3 * 6;
          uVar12 = puVar20[1];
          uVar33 = puVar20[7];
          if ((int)(uVar12 - (uVar33 + (*puVar20 < puVar20[6]))) < 0 ==
              (SBORROW4(uVar12,uVar33) != SBORROW4(uVar12 - uVar33,(uint)(*puVar20 < puVar20[6]))))
          {
            uVar3 = uVar3 + 1;
          }
          puVar20 = puVar31 + uVar18 * 6;
          puVar34 = puVar31 + uVar3 * 6;
          uVar33 = puVar34[1];
          uVar18 = puVar34[2];
          uVar12 = puVar34[3];
          uVar21 = puVar34[4];
          uVar24 = puVar34[5];
          *puVar20 = *puVar34;
          puVar20[1] = uVar33;
          puVar20[2] = uVar18;
          puVar20[3] = uVar12;
          puVar20[4] = uVar21;
          puVar20[5] = uVar24;
          uVar33 = uVar3 << 1 | 1;
          uVar18 = uVar3;
        } while (uVar3 * 2 < uVar32);
      }
      if (uVar33 == uVar29 - 2) {
        puVar20 = puVar31 + uVar33 * 6;
        puVar34 = puVar31 + uVar3 * 6;
        uVar29 = puVar20[1];
        uVar3 = puVar20[2];
        uVar32 = puVar20[3];
        uVar18 = puVar20[4];
        uVar12 = puVar20[5];
        *puVar34 = *puVar20;
        puVar34[1] = uVar29;
        puVar34[2] = uVar3;
        puVar34[3] = uVar32;
        puVar34[4] = uVar18;
        puVar34[5] = uVar12;
        *puVar20 = uVar8;
        puVar20[1] = uVar23;
        puVar20[2] = uVar11;
        puVar20[3] = uStack_8c;
        puVar20[4] = uStack_88;
        puVar20[5] = uStack_84;
        uVar29 = puVar31[uVar33 * 6];
        uVar8 = puVar20[1];
        uVar3 = uVar33;
LAB_00ecabf0:
        do {
          uVar33 = uVar3 - 1;
          puVar20 = puVar31 + ((uVar33 & 0xfffffffe) + (uVar33 >> 1)) * 2;
          uVar23 = puVar20[1];
          if ((int)(uVar8 - (uVar23 + (uVar29 < *puVar20))) < 0 ==
              (SBORROW4(uVar8,uVar23) != SBORROW4(uVar8 - uVar23,(uint)(uVar29 < *puVar20)))) break;
          uVar23 = puVar20[1];
          uVar32 = puVar20[2];
          uVar18 = puVar20[3];
          uVar12 = puVar20[4];
          uVar21 = puVar20[5];
          puVar34 = puVar31 + uVar3 * 6;
          *puVar34 = *puVar20;
          puVar34[1] = uVar23;
          puVar34[2] = uVar32;
          puVar34[3] = uVar18;
          puVar34[4] = uVar12;
          puVar34[5] = uVar21;
          uVar3 = uVar33 >> 1;
        } while (1 < uVar33);
      }
      else {
        puVar20 = puVar31 + uVar3 * 6;
        *puVar20 = uVar8;
        puVar20[1] = uVar23;
        puVar20[2] = uVar11;
        puVar20[3] = uStack_8c;
        puVar20[4] = uStack_88;
        puVar20[5] = uStack_84;
        uVar29 = puVar31[uVar3 * 6];
        uVar8 = puVar20[1];
        if (uVar3 != 0) goto LAB_00ecabf0;
        uVar3 = 0;
      }
      puVar31 = puVar31 + uVar3 * 6;
      *puVar31 = uVar29;
      puVar31[1] = uVar8;
      puVar31[2] = uVar11;
      puVar31[3] = uStack_8c;
      puVar31[4] = uStack_88;
      puVar31[5] = uStack_84;
      ppuVar22 = ppuVar9;
      ppuVar27 = ppuVar28;
      local_ec = ppuVar10;
    }
    goto LAB_00ecac80;
  }
  piVar26 = (int *)*param_2;
  ppuVar27 = (undefined **)param_2[1];
  if (ppuVar27 == (undefined **)0x0) {
    ppuVar22 = (undefined **)0x0;
    *param_2 = 8;
    local_d4 = (undefined **)0x4;
    local_d8 = (undefined **)0x0;
  }
  else {
    bVar30 = true;
    piVar19 = piVar26 + 0x1c;
    iVar2 = *piVar26;
    piVar25 = piVar26;
    if (iVar2 == 0) goto LAB_00eca430;
LAB_00eca410:
    if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0035b674,0x22,&DAT_0187d048);
    }
    while (piVar19 != piVar26 + (int)ppuVar27 * 0x1c) {
      iVar2 = *piVar19;
      piVar25 = piVar19;
      while( true ) {
        piVar19 = piVar25 + 0x1c;
        if (iVar2 != 0) goto LAB_00eca410;
LAB_00eca430:
        FUN_00f152c8(&local_d8,piVar25 + 2,param_3);
        if (local_d8 != (undefined **)0x80000001) break;
        bVar30 = false;
        if (piVar19 == piVar26 + (int)ppuVar27 * 0x1c) goto LAB_00ecada4;
        iVar2 = *piVar19;
        piVar25 = piVar19;
      }
      local_98 = local_d8;
      local_94 = local_d4;
      local_90 = local_d0;
      FUN_00d96e68(piVar25);
      *piVar25 = 1;
      piVar25[1] = (int)local_98;
      piVar25[2] = (int)local_94;
      piVar25[3] = (int)local_90;
    }
    if (!bVar30) {
LAB_00ecada4:
      *param_1 = 0x80000000;
      return;
    }
    uVar16 = 0;
    *param_2 = 8;
    param_2[1] = 0;
    iVar2 = (int)ppuVar27 * 0xc;
    if ((undefined **)0xaaaaaaa < ppuVar27) {
LAB_00ecad98:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar16,iVar2);
    }
    if (iVar2 == 0) {
      local_d4 = (undefined **)0x4;
      local_d8 = (undefined **)0x0;
    }
    else {
      local_d4 = (undefined **)thunk_FUN_016d4a50(iVar2);
      local_d8 = ppuVar27;
      if (local_d4 == (undefined **)0x0) {
        uVar16 = 4;
        goto LAB_00ecad98;
      }
    }
    ppuVar22 = (undefined **)0x0;
    if (ppuVar27 != (undefined **)0x0) {
      ppuVar22 = (undefined **)0x0;
      piVar19 = piVar26;
      piVar25 = (int *)((int)local_d4 + 4);
      do {
        if (*piVar19 != 1) {
LAB_00ecaf38:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187c3e4);
        }
        FUN_016dd1aa(&local_98,piVar19,0x70);
        *piVar19 = 2;
        if (local_98 != (undefined **)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_0187c290);
        }
        piVar1 = piVar19 + 1;
        if (*piVar1 == -0x7fffffff) goto LAB_00ecaf38;
        iVar2 = piVar19[2];
        iVar17 = piVar19[3];
        ppuVar22 = (undefined **)((int)ppuVar22 + 1);
        piVar19 = piVar19 + 0x1c;
        piVar25[-1] = *piVar1;
        *piVar25 = iVar2;
        piVar25[1] = iVar17;
        piVar25 = piVar25 + 3;
      } while (ppuVar27 != ppuVar22);
      ppuVar22 = ppuVar27;
    }
  }
  *param_1 = (uint)local_d8;
  param_1[1] = (uint)local_d4;
  param_1[2] = (uint)ppuVar22;
  FUN_00ebb5a8(piVar26,ppuVar27);
  return;
LAB_00ecad24:
  local_ec = ppuVar9;
  *puVar7 = (uint)((int)ppuVar28 + 1);
  param_2[3] = (undefined1 *)((int)ppuVar10 + (uint)((undefined **)0xfffffffe < ppuVar28));
LAB_00ecac80:
  local_f0 = ppuVar22;
LAB_00ecac84:
  if (ppuVar27 == (undefined **)0x80000001) {
    uVar29 = param_2[0xb];
    uVar3 = param_2[0xc];
    *param_1 = *puVar6;
    param_1[1] = uVar29;
    param_1[2] = uVar3;
    param_2[10] = 0;
    param_2[0xb] = 4;
    param_2[0xc] = 0;
    return;
  }
  if (ppuVar27 == (undefined **)0x80000002) goto LAB_00ecada4;
  iVar2 = param_2[0xc];
  local_90 = local_ec;
  local_98 = ppuVar27;
  local_94 = local_f0;
  if ((uint)(param_2[10] - iVar2) < (uint)(ppuVar27 != (undefined **)0x80000001)) {
    FUN_00edff4c(puVar6,iVar2,(uint)(ppuVar27 != (undefined **)0x80000001),4,0xc);
    iVar2 = param_2[0xc];
  }
  param_2[0xc] = iVar2 + 1;
  puVar5 = (undefined4 *)(param_2[0xb] + iVar2 * 0xc);
  *puVar5 = ppuVar27;
  puVar5[1] = local_f0;
  puVar5[2] = local_ec;
  uVar29 = param_2[9];
  goto joined_r0x00eca508;
}

