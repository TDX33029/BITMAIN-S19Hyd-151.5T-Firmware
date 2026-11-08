// FUN_006c7dc8 @ 006c7dc8 size=3016 calls_out=18 calls_in=1
// strings: polled MutexLockFuture after completion

undefined4 FUN_006c7dc8(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar13;
  int extraout_r2;
  uint uVar14;
  code *pcVar15;
  int extraout_r2_00;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint *local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  
  puVar7 = param_1 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x35)) {
  case 0:
    iVar11 = param_1[9];
    iVar19 = param_1[8];
    param_1[10] = iVar19;
    *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)(param_1 + 0xd);
    iVar21 = iVar11 + 0x70;
    *puVar7 = *param_1;
    param_1[5] = param_1[1];
    param_1[0xb] = iVar11;
    param_1[6] = param_1[2];
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar11 + 0x90) != 0) {
      FUN_0070031c(iVar21);
    }
    uVar3 = *puVar7;
    *(undefined1 *)(param_1 + 0x29) = 0;
    param_1[0xe] = uVar3;
    uVar12 = param_1[6];
    uVar16 = param_1[5];
    param_1[0x26] = iVar19;
    param_1[0x27] = iVar21;
    param_1[0x10] = uVar12;
    param_1[0xf] = uVar16;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01859058);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01859058);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x29)) {
    case 0:
      uVar12 = param_1[0x10];
      iVar19 = param_1[0x26];
      iVar21 = param_1[0x27];
      uVar3 = param_1[0xe];
      uVar16 = param_1[0xf];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01859088);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01859088);
    case 3:
      goto switchD_006c7f00_caseD_3;
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x29)) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01859048);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01859048);
    case 3:
      goto switchD_006c7fbc_caseD_3;
    }
    goto switchD_006c7fbc_caseD_0;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x29)) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01859098);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01859098);
    case 3:
      goto switchD_006c7ec8_caseD_3;
    }
    goto switchD_006c7ec8_caseD_0;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1f)) {
    case 0:
      uVar6 = param_1[0x14];
      puVar9 = (uint *)param_1[0x1c];
      uVar3 = param_1[0x1d];
      puVar4 = (uint *)param_1[0x12];
      uVar20 = param_1[0x13];
      goto LAB_006c8580;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018590a8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018590a8);
    case 3:
      puVar9 = (uint *)param_1[0x1a];
      goto LAB_006c8598;
    }
  }
  param_1[0x12] = uVar3;
  param_1[0x28] = iVar21;
  param_1[0x14] = uVar12;
  param_1[0x13] = uVar16;
  piVar5 = *(int **)(iVar19 + 4);
  iVar19 = *(int *)(iVar19 + 8);
  param_1[0x16] = piVar5;
  param_1[0x17] = piVar5 + iVar19 * 2;
  if (piVar5 != piVar5 + iVar19 * 2) {
    do {
      param_1[0x16] = piVar5 + 2;
      (**(code **)(piVar5[1] + 0x20))(*piVar5 + (*(int *)(piVar5[1] + 8) - 1U & 0xfffffff8) + 8);
      uVar3 = (**(code **)(extraout_r1 + 0x20))();
      param_1[0x18] = param_1[0x12];
      param_1[0x22] = uVar3;
      *(undefined1 *)(param_1 + 0x25) = 0;
      param_1[0x19] = param_1[0x13];
      param_1[0x23] = param_1[0x28];
      param_1[0x1a] = param_1[0x14];
switchD_006c7f00_caseD_3:
      puVar27 = param_1 + 0x29;
      iVar19 = FUN_006c7b88(param_1 + 0x18,param_2);
      if (iVar19 != 0) {
        uVar10 = 3;
        goto LAB_006c8364;
      }
      if ((*(char *)(param_1 + 0x25) == '\x03') && (param_1[0x20] != 0)) {
        FUN_006f5d1c(param_1[0x20],param_1[0x21],1);
      }
      piVar5 = (int *)param_1[0x16];
    } while (piVar5 != (int *)param_1[0x17]);
  }
  *(undefined1 *)(param_1 + 0x29) = 1;
  if (*(char *)((int)param_1 + 0x36) != '\x02') {
    iVar19 = param_1[0xb] + 0x48;
    DataMemoryBarrier(0xb);
    if (*(int *)(param_1[0xb] + 0x68) != 0) {
      FUN_007003e4(iVar19);
    }
    param_1[0xc] = iVar19;
    param_1[0xe] = *puVar7;
    param_1[0xf] = param_1[5];
    *(undefined1 *)(param_1 + 0x29) = 0;
    param_1[0x26] = param_1[10];
    param_1[0x10] = param_1[6];
    param_1[0x27] = iVar19;
switchD_006c7fbc_caseD_0:
    param_1[0x28] = param_1[0x27];
    param_1[0x12] = param_1[0xe];
    param_1[0x13] = param_1[0xf];
    param_1[0x14] = param_1[0x10];
    piVar5 = *(int **)(param_1[0x26] + 4);
    iVar19 = *(int *)(param_1[0x26] + 8);
    param_1[0x16] = piVar5;
    param_1[0x17] = piVar5 + iVar19 * 2;
    if (piVar5 != piVar5 + iVar19 * 2) {
      do {
        param_1[0x16] = piVar5 + 2;
        (**(code **)(piVar5[1] + 0x20))(*piVar5 + (*(int *)(piVar5[1] + 8) - 1U & 0xfffffff8) + 8);
        uVar3 = (**(code **)(extraout_r1_00 + 0x1c))();
        param_1[0x18] = param_1[0x12];
        param_1[0x22] = uVar3;
        *(undefined1 *)(param_1 + 0x25) = 0;
        param_1[0x19] = param_1[0x13];
        param_1[0x23] = param_1[0x28];
        param_1[0x1a] = param_1[0x14];
switchD_006c7fbc_caseD_3:
        puVar27 = param_1 + 0x29;
        iVar19 = FUN_006c7b88(param_1 + 0x18,param_2);
        if (iVar19 != 0) {
          uVar10 = 4;
          goto LAB_006c8364;
        }
        if ((*(char *)(param_1 + 0x25) == '\x03') && (param_1[0x20] != 0)) {
          FUN_006f5d1c(param_1[0x20],param_1[0x21],1);
        }
        piVar5 = (int *)param_1[0x16];
      } while (piVar5 != (int *)param_1[0x17]);
    }
    *(undefined1 *)(param_1 + 0x29) = 1;
    if (*(char *)((int)param_1 + 0x36) != '\x01') {
      param_1[0xe] = *puVar7;
      param_1[0xf] = param_1[5];
      *(undefined1 *)(param_1 + 0x29) = 0;
      param_1[0x10] = param_1[6];
      param_1[0x26] = param_1[10];
      param_1[0x27] = param_1[0xc];
switchD_006c7ec8_caseD_0:
      param_1[0x28] = param_1[0x27];
      param_1[0x12] = param_1[0xe];
      param_1[0x13] = param_1[0xf];
      param_1[0x14] = param_1[0x10];
      piVar5 = *(int **)(param_1[0x26] + 4);
      iVar19 = *(int *)(param_1[0x26] + 8);
      param_1[0x16] = piVar5;
      param_1[0x17] = piVar5 + iVar19 * 2;
      if (piVar5 != piVar5 + iVar19 * 2) {
        do {
          param_1[0x16] = piVar5 + 2;
          (**(code **)(piVar5[1] + 0x20))(*piVar5 + (*(int *)(piVar5[1] + 8) - 1U & 0xfffffff8) + 8)
          ;
          uVar3 = (**(code **)(extraout_r1_01 + 0x18))();
          param_1[0x18] = param_1[0x12];
          param_1[0x22] = uVar3;
          *(undefined1 *)(param_1 + 0x25) = 0;
          param_1[0x19] = param_1[0x13];
          param_1[0x23] = param_1[0x28];
          param_1[0x1a] = param_1[0x14];
switchD_006c7ec8_caseD_3:
          puVar27 = param_1 + 0x29;
          iVar19 = FUN_006c7b88(param_1 + 0x18,param_2);
          if (iVar19 != 0) {
            uVar10 = 5;
            goto LAB_006c8364;
          }
          if ((*(char *)(param_1 + 0x25) == '\x03') && (param_1[0x20] != 0)) {
            FUN_006f5d1c(param_1[0x20],param_1[0x21],1);
          }
          piVar5 = (int *)param_1[0x16];
        } while (piVar5 != (int *)param_1[0x17]);
      }
      *(undefined1 *)(param_1 + 0x29) = 1;
      if (*(char *)((int)param_1 + 0x36) != '\0') {
        FUN_007a2e08();
                    /* WARNING: Does not return */
        pcVar15 = (code *)software_udf(0xfdee,0x6c837c);
        (*pcVar15)();
      }
    }
    piVar5 = *(int **)(param_1[10] + 4);
    iVar19 = *(int *)(param_1[10] + 8);
    param_1[0xe] = piVar5;
    param_1[0xf] = piVar5 + iVar19 * 2;
    if (piVar5 != piVar5 + iVar19 * 2) {
      do {
        param_1[0xe] = piVar5 + 2;
        uVar30 = (**(code **)(piVar5[1] + 0x20))
                           (*piVar5 + (*(int *)(piVar5[1] + 8) - 1U & 0xfffffff8) + 8);
        pcVar15 = *(code **)((int)((ulonglong)uVar30 >> 0x20) + 0x10);
        *(undefined8 *)(param_1 + 0x10) = uVar30;
        puVar9 = (uint *)(*pcVar15)();
        uVar3 = param_1[0xc];
        FUN_015f3b0c(&local_68,0);
        *(undefined1 *)(param_1 + 0x1f) = 0;
        param_1[0x12] = local_68;
        param_1[0x1c] = puVar9;
        param_1[0x13] = local_64;
        param_1[0x1d] = uVar3;
        param_1[0x14] = local_60;
        puVar4 = local_68;
        uVar6 = local_60;
        uVar20 = local_64;
LAB_006c8580:
        param_1[0x16] = puVar4;
        param_1[0x1e] = uVar3;
        param_1[0x1a] = puVar9;
        param_1[0x1b] = 0xffffffff;
        param_1[0x18] = uVar6;
        param_1[0x17] = uVar20;
LAB_006c8598:
        puVar27 = param_1 + 0x1f;
        if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
        }
        do {
          uVar6 = *puVar9;
          bVar2 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar2);
        *puVar9 = uVar6 | 1;
        DataMemoryBarrier(0xb);
        if ((uVar6 & 1) == 0) {
          FUN_006f5d1c(puVar9,param_1[0x1b],0);
        }
        else {
          puVar4 = puVar9 + 1;
          do {
            if (*puVar4 != 0) {
              ClearExclusiveLocal();
              FUN_015bf680(puVar4);
              iVar19 = extraout_r2;
              goto LAB_006c860c;
            }
            bVar2 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar2);
          *puVar4 = 1;
          DataMemoryBarrier(0xb);
          iVar19 = 0;
LAB_006c860c:
          uVar6 = 0;
          if ((DAT_018dd988 & 0x7fffffff) == 0) {
            cVar1 = (char)puVar9[2];
          }
          else {
            uVar6 = FUN_015bf3f8();
            uVar6 = uVar6 ^ 1;
            cVar1 = (char)puVar9[2];
            iVar19 = extraout_r2_00;
          }
          if (cVar1 != '\0') {
            uVar20 = local_64 >> 8;
            local_64 = CONCAT31((int3)uVar20,(char)uVar6);
            local_68 = puVar4;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_01859134,&DAT_0187a770);
          }
          uVar20 = param_1[0x1b];
          if (uVar20 == 0xffffffff) {
            uVar30 = (**(code **)*param_2)(param_2[1]);
            uVar22 = puVar9[7];
            FUN_0075c478(puVar9 + 3,uVar22,(int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
            uVar20 = puVar9[6];
            param_1[0x1b] = uVar22;
            if (uVar20 == 1) {
              do {
                bVar2 = (bool)hasExclusiveAccess(puVar9);
              } while (!bVar2);
              *puVar9 = *puVar9 | 2;
            }
          }
          else {
            if ((puVar9[5] <= uVar20) || (piVar5 = (int *)(puVar9[4] + uVar20 * 0xc), *piVar5 == 0))
            {
                    /* WARNING: Subroutine does not return */
              FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
            }
            puVar28 = (undefined4 *)piVar5[1];
            puVar7 = (undefined4 *)*param_2;
            iVar21 = param_2[1];
            if (puVar28 == (undefined4 *)0x0) {
              uVar30 = (*(code *)*puVar7)(iVar21);
            }
            else {
              if (puVar7 == puVar28) {
                iVar19 = piVar5[2];
              }
              if (puVar7 == puVar28 && iVar21 == iVar19) goto LAB_006c8730;
              uVar30 = (*(code *)*puVar7)(iVar21);
              (*(code *)puVar28[3])(piVar5[2]);
            }
            *(undefined8 *)(piVar5 + 1) = uVar30;
          }
LAB_006c8730:
          if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
            *(undefined1 *)(puVar9 + 2) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar6 = *puVar4;
            bVar2 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar2);
          *puVar4 = 0;
          if (uVar6 == 2) {
            FUN_016d6968(0xf0,puVar4,0x81,1);
          }
          do {
            uVar6 = *puVar9;
            bVar2 = (bool)hasExclusiveAccess(puVar9);
          } while (!bVar2);
          *puVar9 = uVar6 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar6 & 1) != 0) {
            uVar10 = 6;
LAB_006c8364:
            *(undefined1 *)puVar27 = 3;
            *(undefined1 *)((int)param_1 + 0x35) = uVar10;
            return 1;
          }
          FUN_006f5d1c(puVar9,param_1[0x1b],0);
        }
        uVar6 = param_1[0x16];
        uVar22 = param_1[0x17];
        uVar20 = param_1[0x18];
        param_1[0x1a] = 0;
        local_6c = 0;
        local_70 = 0xffff0000;
        local_74 = 0;
        local_78 = 0;
        local_7c = 0;
        local_80 = 0;
        local_84 = 0;
        local_88 = 0;
        FUN_01289fbc(&local_68,&local_88,param_1[0x1e]);
        puVar9[0xe] = uVar20;
        puVar9[8] = (uint)local_68;
        puVar9[9] = local_64;
        puVar9[10] = local_60;
        puVar9[0xb] = uStack_5c;
        puVar9[0xc] = uVar6;
        puVar9[0xd] = uVar22;
        FUN_006f625c(puVar9);
        pcVar15 = *(code **)(param_1[0x11] + 0x14);
        *(undefined1 *)(param_1 + 0x1f) = 1;
        puVar9 = (uint *)(*pcVar15)(param_1[0x10]);
        iVar19 = param_1[0xb];
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar19 + 0xa8) != 0) {
          FUN_0070044c((uint *)(iVar19 + 0x98));
        }
        uVar6 = *(uint *)(iVar19 + 0x98);
        uVar20 = *(uint *)(iVar19 + 0x9c);
        uVar22 = *(uint *)(iVar19 + 0xa0);
        uVar14 = *(uint *)(iVar19 + 0xa4);
        iVar19 = ((uint)puVar9 % 0x43) * 0x20;
        piVar5 = (int *)(&DAT_018dd080 + iVar19);
        DataMemoryBarrier(0xb);
        piVar8 = (int *)(&DAT_018dd084 + iVar19);
        DataMemoryBarrier(0xb);
        if (*(int *)(&DAT_018dd084 + iVar19) == 1) {
LAB_006c88d4:
          do {
            iVar19 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = 1;
          DataMemoryBarrier(0xb);
          if (iVar19 == 1) {
            uVar23 = 0;
            do {
              while (*piVar8 == 1) {
                if (uVar23 < 5) {
                  uVar24 = 1;
                  do {
                    uVar26 = uVar24 >> (uVar23 & 0xff);
                    uVar24 = uVar24 + 1;
                    HintYield();
                  } while (uVar26 == 0);
                  uVar23 = uVar23 + 1;
                }
                else if ((uVar23 & 0x1f) != 0x1f) {
                  iVar19 = 1 << (uVar23 & 0x1f);
                  do {
                    iVar19 = iVar19 + -1;
                    HintYield();
                  } while (iVar19 != 0);
                }
              }
              do {
                iVar19 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = 1;
              DataMemoryBarrier(0xb);
            } while (iVar19 == 1);
          }
          DataMemoryBarrier(0xb);
          uVar26 = *puVar9;
          uVar29 = puVar9[1];
          uVar23 = puVar9[2];
          uVar24 = puVar9[3];
          DataMemoryBarrier(0xb);
          *piVar8 = iVar19;
        }
        else {
          uVar26 = *puVar9;
          uVar29 = puVar9[1];
          uVar23 = puVar9[2];
          uVar24 = puVar9[3];
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          if (*piVar5 != *(int *)(&DAT_018dd080 + ((uint)puVar9 % 0x43) * 0x20) ||
              *(int *)(&DAT_018dd084 + iVar19) != *(int *)(&DAT_018dd084 + iVar19))
          goto LAB_006c88d4;
        }
        while (uVar24 <= uVar14 &&
               (uint)(uVar22 < uVar23 ||
                     uVar23 - uVar22 <
                     (uint)(uVar20 < uVar29 || uVar29 - uVar20 < (uint)(uVar6 <= uVar26))) <=
               uVar24 - uVar14) {
          do {
            iVar19 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = 1;
          DataMemoryBarrier(0xb);
          if (iVar19 == 1) {
            uVar25 = 0;
            do {
              while (*piVar8 == 1) {
                if (uVar25 < 5) {
                  uVar13 = 1;
                  do {
                    uVar17 = uVar13 >> (uVar25 & 0xff);
                    uVar13 = uVar13 + 1;
                    HintYield();
                  } while (uVar17 == 0);
                  uVar25 = uVar25 + 1;
                }
                else if ((uVar25 & 0x1f) != 0x1f) {
                  iVar19 = 1 << (uVar25 & 0x1f);
                  do {
                    iVar19 = iVar19 + -1;
                    HintYield();
                  } while (iVar19 != 0);
                }
              }
              do {
                iVar19 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = 1;
              DataMemoryBarrier(0xb);
            } while (iVar19 == 1);
          }
          DataMemoryBarrier(0xb);
          uVar17 = *puVar9;
          uVar25 = puVar9[1];
          uVar13 = puVar9[2];
          uVar18 = puVar9[3];
          if ((uVar17 == uVar26 && uVar13 == uVar23) && (uVar25 == uVar29 && uVar18 == uVar24)) {
            *puVar9 = uVar6;
            puVar9[1] = uVar20;
            puVar9[2] = uVar22;
            puVar9[3] = uVar14;
            if (iVar19 + 2 == 0) {
              DataMemoryBarrier(0xb);
              *piVar5 = *piVar5 + 1;
            }
            DataMemoryBarrier(0xb);
            *piVar8 = iVar19 + 2;
            break;
          }
          DataMemoryBarrier(0xb);
          *piVar8 = iVar19;
          uVar23 = uVar13;
          uVar24 = uVar18;
          uVar26 = uVar17;
          uVar29 = uVar25;
        }
        piVar5 = (int *)param_1[0xe];
      } while (piVar5 != (int *)param_1[0xf]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  return 0;
}

