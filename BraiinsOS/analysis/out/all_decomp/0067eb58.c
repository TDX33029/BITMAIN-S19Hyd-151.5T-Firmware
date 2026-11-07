// FUN_0067eb58 @ 0067eb58 size=5620 calls_out=33 calls_in=2
// strings: invalid usageManual fan speed not specified.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0067eb58(int param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined *puVar16;
  int iVar17;
  int extraout_r1;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined1 uVar25;
  int *piVar26;
  uint uVar27;
  undefined1 *puVar28;
  int *piVar29;
  uint uVar30;
  uint *unaff_r11;
  undefined4 *puVar31;
  uint uVar32;
  int *piVar33;
  bool bVar34;
  bool bVar35;
  undefined8 uVar36;
  uint local_558;
  int *local_53c;
  undefined1 *local_534;
  int *local_52c;
  undefined1 auStack_528 [8];
  undefined1 *local_520;
  undefined1 auStack_450 [208];
  undefined1 auStack_380 [8];
  int local_378;
  undefined1 auStack_2a8 [208];
  int *local_1d8;
  int *local_1d4;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int *local_100;
  int *local_fc;
  int *local_f8;
  uint local_f4;
  int *local_f0;
  uint uStack_ec;
  int *local_e8;
  uint uStack_e4;
  int *local_e0;
  uint uStack_dc;
  
  if ((char)param_2[0xd8] != '\0') {
    *(undefined1 **)(param_1 + 8) = &DAT_3b9aca00;
    return;
  }
  piVar14 = param_2 + 0x70;
  uVar36 = thunk_FUN_016de0ee(&local_f8,0xac);
  piVar4 = (int *)((int)uVar36 + (int)((ulonglong)uVar36 >> 0x20));
  iVar17 = *piVar4;
  *piVar4 = (int)auStack_528;
  local_520 = &DAT_3b9aca00;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x38]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01858fe8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01858fe8);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x2b1)) {
    case 0:
      piVar5 = (int *)param_2[0xab];
      goto LAB_0067edac;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01858fb0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01858fb0);
    case 3:
      piVar5 = (int *)param_2[0xae];
      goto LAB_0067f108;
    case 4:
      goto switchD_0067ec30_caseD_4;
    case 5:
      goto switchD_0067ec30_caseD_5;
    case 6:
      goto switchD_0067ec30_caseD_6;
    case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0xc9]) {
      case '\0':
        iVar7 = param_2[0xb0];
        piVar5 = (int *)param_2[0xc6];
        unaff_r11 = (uint *)param_2[199];
        iVar8 = param_2[0xae];
        iVar23 = param_2[0xaf];
        goto LAB_0067eefc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01859078);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01859078);
      case '\x03':
        goto switchD_0067ec78_caseD_3;
      }
    }
  case '\x04':
    goto switchD_0067ebe0_caseD_4;
  }
  if (*(int *)param_2[0x36] == 1) {
    piVar5 = (int *)param_2[0x36] + 1;
    param_2[0x37] = (int)piVar5;
LAB_0067ed90:
    *(undefined1 *)((int)param_2 + 0x2b1) = 0;
    param_2[0xab] = (int)piVar5;
LAB_0067edac:
    param_2[0xa6] = (int)piVar5;
LAB_0067f0f8:
    do {
      piVar5 = (int *)param_2[0xa6];
      *(undefined1 *)(param_2 + 0xac) = 0;
      param_2[0xae] = (int)piVar5;
LAB_0067f108:
      local_534 = (undefined1 *)((int)param_2 + 0x2b1);
      piVar13 = param_2 + 0x3a;
      puVar28 = &DAT_3b9aca00;
      FUN_006b29e8(&local_1d8,piVar5);
      piVar6 = param_2 + 0xae;
      if (local_1d0 == 0x3b9aca01) {
        iVar23 = *piVar5;
        if (iVar23 == 0) {
          puVar16 = &DAT_0187be18;
          goto LAB_00680238;
        }
        piVar26 = (int *)(iVar23 + 0x20);
        do {
          iVar7 = *piVar26;
          if (iVar7 != 0) {
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            if (iVar7 != 2) goto LAB_0067f16c;
            iVar7 = param_3[1];
            puVar9 = (undefined4 *)(*param_3 + 8);
            goto LAB_0067f2dc;
          }
          bVar34 = (bool)hasExclusiveAccess(piVar26);
        } while (!bVar34);
        *piVar26 = 1;
        DataMemoryBarrier(0xb);
LAB_0067f16c:
        if (iVar7 == 0) {
          if (*(undefined4 **)(iVar23 + 0x18) == (undefined4 *)0x0) {
            iVar7 = param_3[1];
LAB_0067f248:
            uVar36 = (**(code **)*param_3)(iVar7);
            unaff_r11 = (uint *)((ulonglong)uVar36 >> 0x20);
            if (*(int *)(iVar23 + 0x18) != 0) {
              (**(code **)(*(int *)(iVar23 + 0x18) + 0xc))(*(undefined4 *)(iVar23 + 0x1c));
            }
            *(undefined8 *)(iVar23 + 0x18) = uVar36;
            iVar7 = *piVar26;
          }
          else {
            iVar7 = param_3[1];
            if (*(int *)(iVar23 + 0x1c) != iVar7 ||
                *(undefined4 **)(iVar23 + 0x18) != (undefined4 *)*param_3) goto LAB_0067f248;
            iVar7 = *piVar26;
          }
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            do {
              bVar34 = (bool)hasExclusiveAccess(piVar26);
              if (bVar34) {
                *piVar26 = 0;
                DataMemoryBarrier(0xb);
                goto LAB_0067f2e8;
              }
            } while (*piVar26 == 1);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          iVar8 = *(int *)(iVar23 + 0x18);
          iVar7 = *(int *)(iVar23 + 0x1c);
          *(undefined4 *)(iVar23 + 0x18) = 0;
          if (iVar8 == 0) {
            puVar16 = &DAT_01882284;
LAB_00680238:
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(puVar16);
          }
          DataMemoryBarrier(0xb);
          do {
            bVar34 = (bool)hasExclusiveAccess(piVar26);
          } while (!bVar34);
          *piVar26 = 0;
          puVar9 = (undefined4 *)(iVar8 + 4);
          DataMemoryBarrier(0xb);
LAB_0067f2dc:
          (*(code *)*puVar9)(iVar7);
        }
LAB_0067f2e8:
        FUN_006b29e8(auStack_380,piVar5);
      }
      else {
        FUN_016dd1aa(&local_100,&local_1d8,0xd8);
        if (local_f8 == (int *)&DAT_3b9aca00) {
          piVar26 = (int *)*piVar5;
          if (piVar26 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar23 = *piVar26;
              bVar34 = (bool)hasExclusiveAccess(piVar26);
            } while (!bVar34);
            *piVar26 = iVar23 + -1;
            if (iVar23 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0078459c(*piVar5);
            }
          }
          *piVar5 = 0;
        }
        FUN_016dd1aa(auStack_380,&local_100,0xd8);
      }
      if (local_378 == 0x3b9aca01) {
        uVar3 = 3;
LAB_0067ff4c:
        local_534 = (undefined1 *)((int)param_2 + 0x2b1);
        bVar34 = true;
        uVar25 = 3;
        *local_534 = uVar3;
        goto LAB_0067ee60;
      }
      FUN_016dd1aa(piVar13,auStack_380,0xd8);
      if ((undefined1 *)param_2[0x3c] == &DAT_3b9aca00) {
        FUN_016dd1aa(auStack_450,auStack_2a8,0xcc);
        *local_534 = 1;
        goto LAB_0067fc78;
      }
      *(undefined1 *)(param_2 + 0xac) = 1;
      FUN_016dd1aa(piVar14,piVar13,0xd8);
      uVar36 = (**(code **)(param_2[0x7b] + 0x2c))
                         (param_2[0x7a] + (*(int *)(param_2[0x7b] + 8) - 1U & 0xfffffff8) + 8);
      piVar26 = (int *)((ulonglong)uVar36 >> 0x20);
      piVar13 = (int *)uVar36;
      piVar5 = param_2 + 0xa7;
      if (piVar13 == (int *)0xffffffff) {
LAB_0067f43c:
        uVar18 = param_2[0x76];
        uVar30 = 0;
        if (0x1fffffff < uVar18) {
LAB_0067f564:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar30,local_558);
        }
        uVar32 = uVar18 * 8;
        if (0x7ffffffc < uVar32) goto LAB_0067f564;
        uVar20 = 4;
        if (uVar32 != 0) {
          puVar9 = (undefined4 *)param_2[0x75];
          uVar20 = thunk_FUN_016d4a50(uVar32,local_558);
          if (uVar20 == 0) {
            uVar30 = 4;
            local_558 = uVar32;
            goto LAB_0067f564;
          }
          uVar30 = uVar18;
          if (uVar18 != 0) {
            puVar31 = puVar9 + uVar18 * 2;
            iVar23 = 0;
            uVar32 = uVar18;
            do {
              if (puVar9 == puVar31) break;
              piVar13 = (int *)*puVar9;
              uVar32 = uVar32 - 1;
              uVar12 = puVar9[1];
              do {
                iVar7 = *piVar13;
                bVar34 = (bool)hasExclusiveAccess(piVar13);
              } while (!bVar34);
              *piVar13 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_0067ed6c;
              puVar9 = puVar9 + 2;
              puVar10 = (undefined4 *)(uVar20 + iVar23 * 8);
              *puVar10 = piVar13;
              iVar23 = iVar23 + 1;
              puVar10[1] = uVar12;
            } while (uVar32 != 0);
          }
        }
        local_558 = uVar20;
        param_2[0xa9] = uVar18;
        param_2[0xa7] = uVar30;
        param_2[0xa8] = local_558;
      }
      else {
        iVar23 = *piVar13;
        do {
          if (iVar23 == 0) {
            piVar11 = piVar13 + 1;
            DataMemoryBarrier(0xb);
            do {
              iVar23 = *piVar11;
              bVar34 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar34);
            *piVar11 = iVar23 + -1;
            if (iVar23 == 1) {
              DataMemoryBarrier(0xb);
              uVar30 = piVar26[2];
              if (uVar30 < 5) {
                uVar30 = 4;
              }
              if ((piVar26[1] + uVar30 + 7 & -uVar30) != 0) {
                thunk_FUN_016d3fb4(piVar13);
              }
            }
            goto LAB_0067f43c;
          }
          if (iVar23 < 0) {
            local_fc = &DAT_0157d360;
            local_100 = (int *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_100,&DAT_018ae288);
          }
          iVar7 = *piVar13;
          if (iVar7 == iVar23) {
            bVar35 = (bool)hasExclusiveAccess(piVar13);
            if (bVar35) {
              *piVar13 = iVar23 + 1;
            }
            bVar34 = false;
            if (bVar35) {
              DataMemoryBarrier(0xb);
              bVar34 = true;
            }
          }
          else {
            bVar34 = false;
            ClearExclusiveLocal();
          }
          iVar23 = iVar7;
        } while (!bVar34);
        piVar11 = (int *)thunk_FUN_016d4a50(0x10);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        uVar30 = param_2[0x76];
        iVar23 = param_2[0x75];
        bVar35 = 0x1ffffffd < uVar30;
        bVar34 = uVar30 == 0x1ffffffe;
        piVar21 = piVar14;
        if (uVar30 < 0x1fffffff) {
          piVar21 = (int *)(uVar30 + 1);
        }
        *piVar11 = 1;
        piVar11[1] = 1;
        uVar12 = 0;
        *(undefined8 *)(piVar11 + 2) = uVar36;
        piVar29 = piVar26;
        if (uVar30 < 0x1fffffff) {
          piVar29 = (int *)((int)piVar21 << 3);
          bVar35 = (int *)0x7ffffffb < piVar29;
          bVar34 = piVar29 == (int *)0x7ffffffc;
        }
        if (bVar35 && !bVar34) {
LAB_0067f558:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar12,local_53c);
        }
        local_53c = (int *)&DAT_00000004;
        piVar33 = (int *)0x0;
        if (piVar29 != (int *)0x0) {
          local_53c = (int *)thunk_FUN_016d4a50(piVar29);
          if (local_53c == (int *)0x0) {
            uVar12 = 4;
            local_53c = piVar29;
            goto LAB_0067f558;
          }
          piVar33 = piVar21;
        }
        local_f8 = (int *)0x0;
        do {
          iVar7 = *piVar11;
          bVar34 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar34);
        *piVar11 = iVar7 + 1;
        local_100 = piVar33;
        local_fc = local_53c;
        if (iVar7 < 0) {
LAB_0067ed6c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x67ed6c);
          (*pcVar1)();
        }
        *local_53c = (int)piVar11;
        local_53c[1] = (int)&DAT_01859e54;
        iVar7 = 1;
        if (uVar30 != 0) {
          uVar18 = 0;
          do {
            puVar9 = (undefined4 *)(iVar23 + uVar18 * 8);
            piVar21 = (int *)*puVar9;
            iVar8 = puVar9[1];
            do {
              iVar24 = *piVar21;
              bVar34 = (bool)hasExclusiveAccess(piVar21);
            } while (!bVar34);
            *piVar21 = iVar24 + 1;
            if (iVar24 < 0) goto LAB_0067ed6c;
            uVar18 = uVar18 + 1;
            iVar24 = iVar7 * 2;
            local_53c[iVar24] = (int)piVar21;
            iVar7 = iVar7 + 1;
            (local_53c + iVar24)[1] = iVar8;
          } while (uVar18 != uVar30);
        }
        *piVar5 = (int)piVar33;
        param_2[0xa8] = (int)local_53c;
        param_2[0xa9] = iVar7;
        DataMemoryBarrier(0xb);
        do {
          iVar23 = *piVar11;
          bVar34 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar34);
        *piVar11 = iVar23 + -1;
        if (iVar23 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(piVar11,&DAT_01859e54);
        }
        piVar11 = piVar13 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar23 = *piVar11;
          bVar34 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar34);
        *piVar11 = iVar23 + -1;
        if (iVar23 == 1) {
          DataMemoryBarrier(0xb);
          uVar30 = piVar26[2];
          if (uVar30 < 5) {
            uVar30 = 4;
          }
          if ((piVar26[1] + uVar30 + 7 & -uVar30) != 0) {
            thunk_FUN_016d3fb4(piVar13);
          }
        }
      }
      iVar23 = param_2[0x71];
      puVar19 = (uint *)(param_2 + 0x9c);
      iVar8 = *piVar14;
      iVar7 = param_2[0x72];
      DataMemoryBarrier(0xb);
      if (param_2[0xa4] != 0) {
        FUN_007000ec(puVar19,piVar14);
      }
      DataMemoryBarrier(0xb);
      if (param_2[0x8a] != 0) {
        FUN_007003e4(param_2 + 0x82,piVar14);
      }
      param_2[0xaa] = (int)(param_2 + 0x82);
      uVar12 = (**(code **)(param_2[0x7b] + 0x48))
                         (param_2[0x7a] + (*(int *)(param_2[0x7b] + 8) - 1U & 0xfffffff8) + 8);
      FUN_010e112c(&local_100,uVar12);
      if (local_100 == (int *)&DAT_00000001) {
        local_1d4 = local_f8;
        local_1d8 = local_fc;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0035845e,0x1c,&local_1d8,&DAT_01859980,&DAT_0187997c);
      }
      puVar9 = (undefined4 *)param_2[0xaa];
      piVar26 = (int *)puVar9[6];
      uVar18 = puVar9[7];
      piVar13 = local_e0;
      uVar30 = uStack_dc;
      if (local_e0 == piVar26 && uStack_dc == uVar18) {
        piVar26 = (int *)puVar9[4];
        uVar18 = puVar9[5];
        piVar13 = local_e8;
        uVar30 = uStack_e4;
        if (local_e8 != piVar26 || uStack_e4 != uVar18) goto LAB_0067f7dc;
        piVar26 = (int *)puVar9[2];
        uVar18 = puVar9[3];
        piVar13 = local_f0;
        uVar30 = uStack_ec;
        if (local_f0 != piVar26 || uStack_ec != uVar18) goto LAB_0067f7dc;
        piVar26 = (int *)*puVar9;
        uVar18 = puVar9[1];
        piVar13 = local_f8;
        uVar30 = local_f4;
        if (local_f8 != piVar26 || local_f4 != uVar18) goto LAB_0067f7dc;
      }
      else {
LAB_0067f7dc:
        if (uVar18 <= uVar30 && (uint)(piVar13 <= piVar26) <= uVar18 - uVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_0033e419,0x3a,&DAT_01858fc0);
        }
      }
      uVar12 = (**(code **)(param_2[0x7b] + 0x48))
                         (param_2[0x7a] + (*(int *)(param_2[0x7b] + 8) - 1U & 0xfffffff8) + 8);
      FUN_010e112c(&local_100,uVar12);
      if (local_100 == (int *)&DAT_00000001) {
        local_1d4 = local_f8;
        local_1d8 = local_fc;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0035845e,0x1c,&local_1d8,&DAT_01859980,&DAT_0187997c);
      }
      piVar33 = (int *)param_2[0x9e];
      uVar32 = param_2[0xa3];
      piVar11 = (int *)param_2[0xa2];
      uVar27 = param_2[0x9f];
      uVar22 = param_2[0xa1];
      piVar21 = (int *)*puVar19;
      piVar29 = (int *)param_2[0xa0];
      uVar20 = param_2[0x9d];
      piVar13 = local_e0;
      uVar30 = uStack_dc;
      piVar26 = piVar11;
      uVar18 = uVar32;
      if (local_e0 == piVar11 && uStack_dc == uVar32) {
        piVar13 = local_e8;
        uVar30 = uStack_e4;
        piVar26 = piVar29;
        uVar18 = uVar22;
        if (!(local_e8 == piVar29 && uStack_e4 == uVar22)) goto LAB_0067f8ec;
        piVar13 = local_f0;
        uVar30 = uStack_ec;
        piVar26 = piVar33;
        uVar18 = uVar27;
        if (!(local_f0 == piVar33 && uStack_ec == uVar27)) goto LAB_0067f8ec;
        piVar13 = local_f8;
        uVar30 = local_f4;
        piVar26 = piVar21;
        uVar18 = uVar20;
        if (!(local_f8 == piVar21 && local_f4 == uVar20)) goto LAB_0067f8ec;
LAB_0067fa78:
        *(undefined2 *)(param_2 + 0xbb) = 0;
        param_2[0xb6] = (int)piVar5;
        param_2[0xb0] = iVar7;
        *piVar6 = iVar8;
        param_2[0xb7] = (int)piVar14;
        param_2[0xaf] = iVar23;
switchD_0067ec30_caseD_4:
        iVar23 = FUN_006c7dc8(param_2 + 0xae,param_3);
        if (iVar23 != 0) {
          uVar3 = 4;
          goto LAB_0067ff4c;
        }
        FUN_006445f8(param_2 + 0xae);
LAB_0067fb48:
        if ((DAT_018dd940 != '\0') ||
           (iVar23 = (**(code **)(param_2[0x7b] + 0x50))
                               (param_2[0x7a] + (*(int *)(param_2[0x7b] + 8) - 1U & 0xfffffff8) + 8)
           , iVar23 != 0)) goto LAB_0067fb88;
        uVar36 = (**(code **)(param_2[0x7b] + 0x2c))
                           (param_2[0x7a] + (*(int *)(param_2[0x7b] + 8) - 1U & 0xfffffff8) + 8);
        iVar23 = (int)((ulonglong)uVar36 >> 0x20);
        unaff_r11 = (uint *)uVar36;
        if (unaff_r11 != (uint *)0xffffffff) {
          uVar30 = *unaff_r11;
          do {
            if (uVar30 == 0) goto LAB_006800f4;
            if ((int)uVar30 < 0) {
              local_fc = &DAT_0157d360;
              local_100 = (int *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00590e71,&local_100,&DAT_018ae288);
            }
            uVar18 = *unaff_r11;
            if (uVar18 == uVar30) {
              bVar35 = (bool)hasExclusiveAccess(unaff_r11);
              if (bVar35) {
                *unaff_r11 = uVar30 + 1;
              }
              bVar34 = false;
              if (bVar35) {
                DataMemoryBarrier(0xb);
                bVar34 = true;
              }
            }
            else {
              bVar34 = false;
              ClearExclusiveLocal();
            }
            uVar30 = uVar18;
          } while (!bVar34);
          DataMemoryBarrier(0xb);
          if (DAT_018d7c7c == 0) {
            uVar36 = (**(code **)(iVar23 + 0x40))
                               ((int)unaff_r11 + (*(int *)(iVar23 + 8) - 1U & 0xfffffff8) + 8);
            puVar9 = (undefined4 *)((ulonglong)uVar36 >> 0x20);
            uVar15 = (undefined4)uVar36;
            local_1bc = 0;
            local_1c0 = 0xffff0000;
            local_1c4 = 0;
            local_1c8 = 0;
            local_1cc = 0;
            local_1d0 = 0;
            local_1d4 = (int *)0x0;
            local_1d8 = (int *)0x0;
            FUN_01289fbc(&local_100,&local_1d8,param_2[0xaa]);
            piVar6 = local_fc;
            piVar5 = local_100;
            uVar12 = DAT_018d7cfc;
            (*(code *)puVar9[0xe])(&local_100,uVar15);
            if (local_100 == (int *)&DAT_80000000) {
              piVar13 = (int *)thunk_FUN_016d4a50(3);
              if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,3);
              }
              *(undefined1 *)((int)piVar13 + 2) = 0x41;
              *(undefined2 *)piVar13 = 0x2f4e;
              bVar34 = false;
              piVar26 = (int *)0x3;
            }
            else {
              bVar34 = local_100 == (int *)0x0;
              piVar13 = local_fc;
              piVar26 = local_f8;
            }
            (*(code *)puVar9[0xf])(&local_1d8,uVar15);
            if (local_1d8 == (int *)0x80000000) {
              piVar11 = (int *)thunk_FUN_016d4a50(3);
              if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,3);
              }
              *(undefined1 *)((int)piVar11 + 2) = 0x41;
              *(undefined2 *)piVar11 = 0x2f4e;
              bVar35 = false;
              local_f4 = 3;
            }
            else {
              bVar35 = local_1d8 == (int *)0x0;
              local_f4 = local_1d0;
              piVar11 = local_1d4;
            }
            local_100 = piVar13;
            local_fc = piVar26;
            local_f8 = piVar11;
            piVar26 = (int *)FUN_00749fd0(uVar12,&local_100,2);
            puVar19 = (uint *)(piVar26 + 2);
            do {
              uVar30 = *puVar19;
              bVar2 = (bool)hasExclusiveAccess(puVar19);
            } while (!bVar2);
            *puVar19 = (uint)(uVar30 + (int)piVar5);
            piVar26[3] = (int)((int)piVar6 + (uint)CARRY4(uVar30,(uint)piVar5) + piVar26[3]);
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar26;
              bVar2 = (bool)hasExclusiveAccess(piVar26);
            } while (!bVar2);
            *piVar26 = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_012c0df4();
            }
            if (!bVar35) {
              thunk_FUN_016d3fb4(piVar11);
            }
            if (!bVar34) {
              thunk_FUN_016d3fb4(piVar13);
            }
            if ((code *)*puVar9 != (code *)0x0) {
              (*(code *)*puVar9)(uVar15);
            }
            if (puVar9[1] != 0) {
              thunk_FUN_016d3fb4(uVar15);
            }
            DataMemoryBarrier(0xb);
            do {
              uVar30 = *unaff_r11;
              bVar34 = (bool)hasExclusiveAccess(unaff_r11);
            } while (!bVar34);
            *unaff_r11 = uVar30 - 1;
          }
          else {
            DataMemoryBarrier(0xb);
            do {
              uVar30 = *unaff_r11;
              bVar34 = (bool)hasExclusiveAccess(unaff_r11);
            } while (!bVar34);
            *unaff_r11 = uVar30 - 1;
          }
          if (uVar30 == 1) {
            DataMemoryBarrier(0xb);
            FUN_007846b4(unaff_r11,iVar23);
          }
LAB_006800f4:
          puVar19 = unaff_r11 + 1;
          DataMemoryBarrier(0xb);
          do {
            uVar30 = *puVar19;
            bVar34 = (bool)hasExclusiveAccess(puVar19);
          } while (!bVar34);
          *puVar19 = uVar30 - 1;
          if (uVar30 == 1) {
            DataMemoryBarrier(0xb);
            uVar30 = *(uint *)(iVar23 + 8);
            if (uVar30 < 5) {
              uVar30 = 4;
            }
            if ((*(int *)(iVar23 + 4) + uVar30 + 7 & -uVar30) != 0) {
              thunk_FUN_016d3fb4(unaff_r11);
            }
          }
        }
        iVar23 = param_2[0xa9];
        if (iVar23 != 0) {
          iVar7 = param_2[0xa8];
          iVar8 = 0;
          do {
            puVar9 = (undefined4 *)(iVar7 + iVar8 * 8);
            piVar5 = (int *)*puVar9;
            iVar8 = iVar8 + 1;
            DataMemoryBarrier(0xb);
            do {
              iVar24 = *piVar5;
              bVar34 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar34);
            *piVar5 = iVar24 + -1;
            if (iVar24 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0089ddfc(*puVar9,puVar9[1]);
            }
          } while (iVar8 != iVar23);
        }
        if (param_2[0xa7] != 0) {
          thunk_FUN_016d3fb4(param_2[0xa8]);
        }
        FUN_00643a80(piVar14);
        goto LAB_0067f0f8;
      }
LAB_0067f8ec:
      if (uVar18 < uVar30 || uVar30 - uVar18 < (uint)(piVar26 <= piVar13)) goto LAB_0067fa78;
      puVar9 = (undefined4 *)param_2[0xaa];
      piVar13 = (int *)puVar9[6];
      uVar30 = puVar9[7];
      if (piVar13 == piVar11 && uVar30 == uVar32) {
        piVar13 = (int *)puVar9[4];
        uVar30 = puVar9[5];
        piVar11 = piVar29;
        uVar32 = uVar22;
        if (piVar13 != piVar29 || uVar30 != uVar22) goto LAB_0067f974;
        piVar13 = (int *)puVar9[2];
        uVar30 = puVar9[3];
        piVar11 = piVar33;
        uVar32 = uVar27;
        if (piVar13 != piVar33 || uVar30 != uVar27) goto LAB_0067f974;
        piVar13 = (int *)*puVar9;
        uVar30 = puVar9[1];
        piVar11 = piVar21;
        uVar32 = uVar20;
        if (piVar13 != piVar21 || uVar30 != uVar20) goto LAB_0067f974;
LAB_0067fae4:
        *(undefined2 *)(param_2 + 0xbb) = 1;
        param_2[0xb6] = (int)piVar5;
        param_2[0xb0] = iVar7;
        *piVar6 = iVar8;
        param_2[0xb7] = (int)piVar14;
        param_2[0xaf] = iVar23;
switchD_0067ec30_caseD_5:
        iVar23 = FUN_006c7dc8(param_2 + 0xae,param_3);
        if (iVar23 != 0) {
          uVar3 = 5;
          goto LAB_0067ff4c;
        }
        FUN_006445f8(param_2 + 0xae);
        goto LAB_0067fb48;
      }
LAB_0067f974:
      if (!(uVar30 <= uVar32 && (uint)(piVar11 <= piVar13) <= uVar30 - uVar32)) goto LAB_0067fae4;
      DataMemoryBarrier(0xb);
      unaff_r11 = (uint *)(param_2 + 0x8c);
      if (param_2[0x94] != 0) {
        FUN_0070031c(unaff_r11,piVar14);
      }
      uVar30 = param_2[0xa2];
      uVar32 = param_2[0x92];
      uVar20 = param_2[0x93];
      uVar18 = param_2[0xa3];
      if (uVar32 == uVar30 && uVar20 == uVar18) {
        uVar32 = param_2[0x90];
        uVar20 = param_2[0x91];
        uVar30 = param_2[0xa0];
        uVar18 = param_2[0xa1];
        if (uVar32 != uVar30 || uVar20 != uVar18) goto LAB_0067fa20;
        uVar30 = param_2[0x9e];
        uVar18 = param_2[0x9f];
        uVar32 = param_2[0x8e];
        uVar20 = param_2[0x8f];
        if (uVar32 != uVar30 || uVar20 != uVar18) goto LAB_0067fa20;
        uVar32 = *unaff_r11;
        uVar20 = param_2[0x8d];
        uVar30 = *puVar19;
        uVar18 = param_2[0x9d];
        if (uVar32 != uVar30 || uVar20 != uVar18) goto LAB_0067fa20;
LAB_0067feec:
        *(undefined2 *)(param_2 + 0xbb) = 2;
        param_2[0xb6] = (int)piVar5;
        param_2[0xb0] = iVar7;
        *piVar6 = iVar8;
        param_2[0xb7] = (int)piVar14;
        param_2[0xaf] = iVar23;
switchD_0067ec30_caseD_6:
        iVar23 = FUN_006c7dc8(param_2 + 0xae,param_3);
        if (iVar23 != 0) {
          uVar3 = 6;
          goto LAB_0067ff4c;
        }
        FUN_006445f8(param_2 + 0xae);
      }
      else {
LAB_0067fa20:
        if (uVar18 < uVar20 || uVar20 - uVar18 < (uint)(uVar30 <= uVar32)) goto LAB_0067feec;
        DataMemoryBarrier(0xb);
        if (param_2[0x94] != 0) {
          FUN_0070031c(unaff_r11,piVar14);
        }
        *piVar6 = iVar8;
        param_2[0xaf] = iVar23;
        *(undefined1 *)(param_2 + 0xc9) = 0;
        param_2[0xc6] = (int)piVar5;
        param_2[199] = (int)unaff_r11;
        param_2[0xb0] = iVar7;
LAB_0067eefc:
        param_2[200] = (int)unaff_r11;
        param_2[0xb4] = iVar7;
        param_2[0xb2] = iVar8;
        param_2[0xb3] = iVar23;
        piVar6 = (int *)piVar5[1];
        iVar23 = piVar5[2];
        param_2[0xb6] = (int)piVar6;
        piVar5 = piVar6 + iVar23 * 2;
        param_2[0xb7] = (int)piVar5;
        while (piVar6 != piVar5) {
          param_2[0xb6] = (int)(piVar6 + 2);
          (**(code **)(piVar6[1] + 0x20))(*piVar6 + (*(int *)(piVar6[1] + 8) - 1U & 0xfffffff8) + 8)
          ;
          iVar23 = (**(code **)(extraout_r1 + 0x24))();
          *(undefined1 *)(param_2 + 0xc5) = 0;
          param_2[0xb8] = param_2[0xb2];
          param_2[0xb9] = param_2[0xb3];
          param_2[0xc2] = iVar23;
          param_2[0xc3] = param_2[200];
          param_2[0xba] = param_2[0xb4];
switchD_0067ec78_caseD_3:
          iVar23 = FUN_006c7b88(param_2 + 0xb8,param_3);
          if (iVar23 != 0) {
            *(undefined1 *)(param_2 + 0xc9) = 3;
            uVar3 = 7;
            goto LAB_0067ff4c;
          }
          if (((char)param_2[0xc5] == '\x03') && (param_2[0xc0] != 0)) {
            FUN_006f5d1c(param_2[0xc0],param_2[0xc1],1);
          }
          piVar5 = (int *)param_2[0xb7];
          piVar6 = (int *)param_2[0xb6];
        }
        *(undefined1 *)(param_2 + 0xc9) = 1;
      }
      iVar23 = param_2[0xa9];
      if (iVar23 != 0) {
        iVar7 = param_2[0xa8];
        iVar8 = 0;
        do {
          puVar9 = (undefined4 *)(iVar7 + iVar8 * 8);
          piVar5 = (int *)*puVar9;
          iVar8 = iVar8 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar24 = *piVar5;
            bVar34 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar34);
          *piVar5 = iVar24 + -1;
          if (iVar24 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0089ddfc(*puVar9,puVar9[1]);
          }
        } while (iVar8 != iVar23);
      }
      if (param_2[0xa7] != 0) {
        thunk_FUN_016d3fb4(param_2[0xa8]);
      }
      FUN_00643a80(piVar14);
    } while( true );
  }
  bVar34 = false;
  uVar25 = 1;
  goto LAB_0067ee60;
LAB_0067edb4:
  iVar23 = *piVar4;
  if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("invalid usageManual fan speed not specified.",0xd,&DAT_0185b854);
  }
  bVar34 = true;
  uVar25 = 4;
  if (*(undefined1 **)(iVar23 + 8) == &DAT_3b9aca00) {
    FUN_016dd1aa(&local_100,param_2 + 0x3a,0xd8);
    param_2[0x3c] = (int)&DAT_3b9aca00;
    FUN_016dd1aa(iVar23,&local_100,0xd8);
  }
  goto LAB_0067ee60;
LAB_0067fb88:
  piVar13 = (int *)*piVar14;
  unaff_r11 = (uint *)param_2[0x71];
  iVar23 = 0;
  puVar28 = (undefined1 *)param_2[0x72];
  *(undefined1 *)(param_2 + 0xac) = 0;
  FUN_016dd1aa(auStack_2a8,param_2 + 0x73,0xcc);
  iVar7 = param_2[0xa9];
  if (iVar7 != 0) {
    iVar8 = param_2[0xa8];
    do {
      puVar9 = (undefined4 *)(iVar8 + iVar23 * 8);
      piVar5 = (int *)*puVar9;
      iVar23 = iVar23 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar24 = *piVar5;
        bVar34 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar34);
      *piVar5 = iVar24 + -1;
      if (iVar24 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar9,puVar9[1]);
      }
    } while (iVar23 != iVar7);
  }
  if (param_2[0xa7] != 0) {
    thunk_FUN_016d3fb4(param_2[0xa8]);
  }
  *(undefined1 *)(param_2 + 0xac) = 0;
  FUN_016dd1aa(auStack_450,auStack_2a8,0xcc);
  bVar34 = true;
  *(undefined1 *)((int)param_2 + 0x2b1) = 1;
  if (puVar28 == (undefined1 *)0x3b9aca01) {
    uVar25 = 3;
    goto LAB_0067ee60;
  }
LAB_0067fc78:
  local_52c = param_2 + 0x3a;
  *param_2 = (int)piVar13;
  param_2[1] = (int)unaff_r11;
  param_2[2] = (int)puVar28;
  FUN_016dd1aa(param_2 + 3,auStack_450,0xcc);
  FUN_006c79d0(local_52c);
  if ((undefined1 *)param_2[2] != &DAT_3b9aca00) {
    FUN_016dd52c(local_52c,param_2,0xd8);
switchD_0067ebe0_caseD_4:
    if ((undefined1 *)param_2[0x3c] != &DAT_3b9aca00) goto LAB_0067edb4;
    piVar5 = (int *)param_2[0x37];
    goto LAB_0067ed90;
  }
  if (*(int *)param_2[0x36] != 0) {
    piVar5 = (int *)param_2[0x36] + 1;
    FUN_006c24d0(piVar5);
    piVar14 = (int *)*piVar5;
    if (piVar14 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar23 = *piVar14;
        bVar34 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar34);
      *piVar14 = iVar23 + -1;
      if (iVar23 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078459c(*piVar5);
      }
    }
  }
  bVar34 = false;
  uVar25 = 1;
  *(undefined4 *)param_2[0x36] = 0;
LAB_0067ee60:
  puVar28 = &DAT_3b9aca00;
  *(byte *)(param_2 + 0xd8) = bVar34 ^ 1;
  *(undefined1 *)(param_2 + 0x38) = uVar25;
  *piVar4 = iVar17;
  if (local_520 != &DAT_3b9aca00) {
    FUN_016dd1aa(param_1,auStack_528,0xd8);
    return;
  }
  if (bVar34) {
    puVar28 = (undefined1 *)0x3b9aca01;
  }
  *(undefined1 **)(param_1 + 8) = puVar28;
  return;
}

