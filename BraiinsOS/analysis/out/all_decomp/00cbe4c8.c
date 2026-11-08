// FUN_00cbe4c8 @ 00cbe4c8 size=3056 calls_out=34 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x00cbe8bc) */

undefined4 FUN_00cbe4c8(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  int *local_100;
  undefined4 *local_fc;
  undefined4 **local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 *local_ec;
  undefined **local_e8;
  undefined *local_e4;
  undefined *local_e0;
  int *local_dc;
  int local_d8;
  undefined4 *local_d4;
  undefined4 **local_d0;
  code *local_cc;
  undefined4 local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  int local_78;
  undefined4 local_74;
  undefined4 ***local_68;
  int local_64;
  
  piVar7 = param_1 + 10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    param_1[4] = *param_1 + 0x394;
    param_1[5] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875da8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875da8);
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[9]) {
    case '\0':
      iVar4 = param_1[4];
      goto LAB_00cbe5e0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875ed8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875ed8);
    case '\x03':
      goto switchD_00cbe5bc_caseD_3;
    case '\x04':
      goto switchD_00cbe5bc_caseD_4;
    case '\x05':
      goto switchD_00cbe5bc_caseD_5;
    case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x27]) {
      case '\0':
        iVar11 = *piVar7;
        iVar12 = param_1[0xb];
        iVar8 = param_1[0xc];
        iVar4 = param_1[0x26];
        goto LAB_00cbe96c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01875908);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01875908);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_1 + 0x55)) {
        case 0:
          iVar4 = param_1[0x13];
          piVar7 = (int *)param_1[0x14];
          goto LAB_00cbe990;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018758f8);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018758f8);
        case 3:
          goto switchD_00cbe74c_caseD_3;
        case 4:
          uVar22 = *(undefined8 *)(param_1 + 0x16);
        }
      }
    }
    goto LAB_00cbea18;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[6]) {
    case '\0':
      goto switchD_00cbe660_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875e08);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875e08);
    case '\x03':
      uVar22 = *(undefined8 *)(param_1 + 7);
      goto LAB_00cbed00;
    case '\x04':
      goto switchD_00cbe660_caseD_4;
    }
    goto switchD_00cbe660_caseD_5;
  }
  iVar4 = FUN_00c8101c(param_1 + 4,param_2);
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 3) = 3;
    return 1;
  }
  param_1[1] = iVar4;
  if (param_1[4] != 0) {
    FUN_00c8204c(param_1[4],param_1[5],1);
    iVar4 = param_1[1];
  }
  if (*(int *)(iVar4 + 0x20) == 0) {
    FUN_00c822ec();
    piVar7 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar7;
      bVar19 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar19);
    *piVar7 = iVar4 + -1;
    goto LAB_00cbef48;
  }
  local_78 = 6;
  FUN_008e0b68(*(int *)(*param_1 + 900) + 8,&local_78);
  iVar8 = *(int *)(param_1[1] + 0x20);
  *(undefined4 *)(param_1[1] + 0x20) = 0;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00356073,0x19,&DAT_01875db8);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  iVar4 = iVar8 + 8;
  param_1[4] = iVar4;
  param_1[2] = iVar8;
LAB_00cbe5e0:
  param_1[10] = iVar4 + 0x1a0;
  param_1[0xb] = -1;
  param_1[5] = iVar4;
switchD_00cbe5bc_caseD_3:
  iVar4 = FUN_00c8101c(piVar7,param_2);
  if (iVar4 == 0) {
    uVar2 = 3;
  }
  else {
    if (*piVar7 != 0) {
      FUN_00c8204c(*piVar7,param_1[0xb],1);
    }
    uVar18 = *(uint *)(iVar4 + 0x28);
    uVar5 = 0;
    bVar20 = 0x3ffffffe < uVar18;
    bVar19 = uVar18 == 0x3fffffff;
    uVar9 = uVar18 * 4;
    if (uVar18 < 0x40000000) {
      bVar20 = 0x7ffffffb < uVar9;
      bVar19 = uVar9 == 0x7ffffffc;
    }
    if (bVar20 && !bVar19) {
LAB_00cbe640:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,uVar9);
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x24);
    if (uVar9 == 0) {
      iVar8 = 4;
      uVar16 = 0;
    }
    else {
      iVar8 = thunk_FUN_016d4a50(uVar9);
      uVar16 = uVar18;
      if (iVar8 == 0) {
        uVar5 = 4;
        goto LAB_00cbe640;
      }
    }
    FUN_016dd1aa(iVar8,uVar5,uVar9);
    param_1[6] = uVar16;
    param_1[7] = iVar8;
    param_1[8] = uVar18;
    FUN_00c822ec(iVar4);
    iVar4 = param_1[8];
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: no chips",0xd,&DAT_01875ee8);
    }
    puVar6 = (uint *)param_1[7];
    if (iVar4 != 1) {
      uVar9 = *puVar6;
      uVar18 = iVar4 - 1U & 0x3fffffff;
      puVar17 = puVar6;
      do {
        puVar17 = puVar17 + 1;
        uVar16 = *puVar17;
        if (uVar16 < uVar9) {
          puVar6 = puVar17;
        }
        if (uVar16 <= uVar9) {
          uVar9 = uVar16;
        }
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar4 = param_1[5];
    FUN_009c4470(piVar7,*puVar6,*(undefined4 *)(iVar4 + 0xb8));
    param_1[0x1b] = iVar4;
    *(undefined2 *)(param_1 + 0x1e) = 0;
    param_1[0x1c] = (int)piVar7;
switchD_00cbe5bc_caseD_4:
    uVar21 = FUN_00cbf7e0(param_1 + 0xe,param_2);
    puVar15 = (undefined4 *)(uVar21 >> 0x20);
    if ((uVar21 & 1) == 0) {
      FUN_00c837a8(param_1 + 0xe);
      piVar14 = param_1 + 10;
      iVar4 = *piVar14;
      if (puVar15 == (undefined4 *)0x0) {
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(param_1[0xb]);
        }
        iVar4 = param_1[5];
        FUN_009c4470(piVar14,*(undefined4 *)(iVar4 + 0x1cc),*(undefined4 *)(iVar4 + 0xb8));
        param_1[0x1b] = iVar4;
        *(undefined2 *)(param_1 + 0x1e) = 0x100;
        param_1[0x1c] = (int)piVar14;
switchD_00cbe5bc_caseD_5:
        uVar21 = FUN_00cbf7e0(param_1 + 0xe,param_2);
        puVar15 = (undefined4 *)(uVar21 >> 0x20);
        if ((uVar21 & 1) != 0) {
          uVar2 = 5;
          goto LAB_00cbe8ac;
        }
        FUN_00c837a8(param_1 + 0xe);
        iVar4 = *piVar7;
        if (puVar15 != (undefined4 *)0x0) goto LAB_00cbe8d8;
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(param_1[0xb]);
        }
        iVar4 = param_1[5];
        iVar12 = *(int *)(iVar4 + 0x114);
        iVar11 = *(int *)(iVar4 + 0x110);
        iVar8 = *(int *)(iVar4 + 0x118);
        iVar4 = *(int *)(iVar4 + 0x178);
        *(undefined1 *)(param_1 + 0x27) = 0;
        iVar4 = iVar4 + 8;
        *piVar7 = iVar11;
        param_1[0xb] = iVar12;
        param_1[0xc] = iVar8;
        param_1[0x26] = iVar4;
LAB_00cbe96c:
        piVar7 = param_1 + 0xe;
        *piVar7 = iVar11;
        *(undefined1 *)((int)param_1 + 0x55) = 0;
        param_1[0xf] = iVar12;
        param_1[0x13] = iVar4;
        param_1[0x14] = (int)piVar7;
        param_1[0x10] = iVar8;
LAB_00cbe990:
        param_1[0x16] = (int)piVar7;
        *(undefined1 *)(param_1 + 0x25) = 0;
        param_1[0x17] = iVar4 + 0xc;
        *(undefined1 *)(param_1 + 0x15) = 1;
switchD_00cbe74c_caseD_3:
        iVar4 = FUN_007d67b8(param_1 + 0x17,param_2);
        if (iVar4 == 0) {
          uVar2 = 3;
        }
        else {
          param_1[0x12] = iVar4;
          if ((char)param_1[0x25] == '\x03') {
            cVar3 = (char)param_1[0x24];
            bVar19 = cVar3 == '\x03';
            if (bVar19) {
              cVar3 = (char)param_1[0x1b];
            }
            if (bVar19 && cVar3 == '\x04') {
              FUN_0163c790(param_1 + 0x1c);
              if (param_1[0x1d] != 0) {
                (**(code **)(param_1[0x1d] + 0xc))(param_1[0x1e]);
              }
            }
          }
          puVar15 = (undefined4 *)param_1[0x16];
          *(undefined1 *)(param_1 + 0x15) = 0;
          uVar22 = (**(code **)(*(int *)(param_1[0x12] + 0x20) + 0x20))
                             (*(undefined4 *)(param_1[0x12] + 0x1c),puVar15[2],*puVar15,puVar15[1],
                              puVar15[2]);
          *(undefined8 *)(param_1 + 0x16) = uVar22;
LAB_00cbea18:
          iVar4 = (**(code **)((int)((ulonglong)uVar22 >> 0x20) + 0xc))((int)uVar22,param_2);
          uVar2 = 4;
          if (iVar4 == 0) {
            puVar15 = (undefined4 *)param_1[0x17];
            iVar4 = param_1[0x16];
            pcVar10 = (code *)*puVar15;
            if (pcVar10 != (code *)0x0) {
              (*pcVar10)(iVar4);
            }
            if (puVar15[1] != 0) {
              thunk_FUN_016d3fb4(iVar4);
            }
            pcVar13 = (char *)param_1[0x12];
            if (*pcVar13 == '\0') {
              bVar19 = (bool)hasExclusiveAccess(pcVar13);
              if (!bVar19) goto LAB_00cbef88;
              *pcVar13 = '\x01';
              DataMemoryBarrier(0xb);
            }
            else {
              ClearExclusiveLocal();
LAB_00cbef88:
              FUN_01280da8(pcVar13);
            }
            FUN_0128236c(pcVar13);
            FUN_0163af68(pcVar13,1,pcVar13);
            *(undefined2 *)(param_1 + 0x15) = 0x100;
            FUN_00c83a14(param_1 + 0x12);
            iVar4 = param_1[6];
            puVar15 = (undefined4 *)0x0;
            *(undefined1 *)(param_1 + 0x27) = 1;
            goto joined_r0x00cbefd4;
          }
        }
        local_100 = param_1 + 9;
        *(undefined1 *)((int)param_1 + 0x55) = uVar2;
        *(undefined1 *)(param_1 + 0x27) = 3;
        *(undefined1 *)local_100 = 6;
        goto LAB_00cbe910;
      }
LAB_00cbe8d8:
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(param_1[0xb]);
      }
      iVar4 = param_1[6];
joined_r0x00cbefd4:
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(param_1[7]);
      }
      *(undefined1 *)(param_1 + 9) = 1;
      FUN_00c8369c(param_1 + 4);
      if (puVar15 != (undefined4 *)0x0) {
        local_fc = puVar15;
        if ((DAT_018d9130 < 4) && (DAT_018d9fbc != '\0')) {
          if (DAT_018d9fbc == '\x01') {
LAB_00cbeb24:
            DataMemoryBarrier(0xb);
            pcVar13 = s_SetGloba_00414c05;
            puVar1 = &DAT_018ae394;
            if ((DAT_018dd984 == 2) &&
               (pcVar13 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar4 = (**(code **)(puVar1 + 0x14))(pcVar13,DAT_018d9fb4);
            if (iVar4 == 0) goto LAB_00cbecb8;
          }
          else if (DAT_018d9fbc != '\x02') {
            cVar3 = FUN_0169ac90(&DAT_018d9fb4);
            if (cVar3 == '\0') goto LAB_00cbecb8;
            if (cVar3 != '\x02') goto LAB_00cbeb24;
          }
          local_64 = DAT_018d9fb4;
          iStack_c4 = *(int *)(DAT_018d9fb4 + 0x20);
          if (iStack_c4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875dc8);
          }
          uStack_c0 = *(undefined4 *)(DAT_018d9fb4 + 0x24);
          uStack_bc = *(undefined4 *)(DAT_018d9fb4 + 0x28);
          local_f0 = (undefined4 *)(DAT_018d9fb4 + 0x1c);
          local_c8 = *local_f0;
          local_e8 = &local_e0;
          local_ec = &local_c8;
          local_dc = &local_d8;
          local_f8 = &local_ec;
          local_b8 = 0;
          local_e4 = &DAT_018abb78;
          local_f4 = 1;
          local_e0 = &DAT_0035608c;
          local_d8 = *param_1 + 0x38c;
          local_cc = FUN_00604528;
          local_d0 = &local_fc;
          local_74 = 0;
          local_68 = &local_f8;
          local_d4 = &DAT_00f5c97c;
          local_78 = 1;
          DataMemoryBarrier(0xb);
          pcVar13 = s_SetGloba_00414c05;
          puVar1 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar13 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar4 = (**(code **)(puVar1 + 0x28))(pcVar13,&local_78);
          if (iVar4 != 0) {
            (**(code **)(puVar1 + 0x2c))(pcVar13,&local_78);
          }
        }
LAB_00cbecb8:
        (**(code **)*local_fc)();
      }
      param_1[4] = param_1[2] + 8;
      *(undefined1 *)(param_1 + 6) = 0;
switchD_00cbe660_caseD_0:
      iVar4 = param_1[4];
      param_1[5] = iVar4;
      uVar22 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10))(*(undefined4 *)(iVar4 + 0x150));
      *(undefined8 *)(param_1 + 7) = uVar22;
LAB_00cbed00:
      uVar21 = (**(code **)((int)((ulonglong)uVar22 >> 0x20) + 0xc))((int)uVar22,param_2);
      iVar4 = (int)(uVar21 >> 0x20);
      if ((uVar21 & 1) != 0) {
        uVar2 = 3;
        goto LAB_00cbee38;
      }
      puVar15 = (undefined4 *)param_1[8];
      iVar8 = param_1[7];
      pcVar10 = (code *)*puVar15;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(iVar8);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
      if (iVar4 == 0) {
        FUN_01656eb8(&local_78,&DAT_01875e18,0,0,200000000,&DAT_01875e18);
        FUN_016dd1aa(&local_c8,&local_78,0x50);
        FUN_016dd1aa(param_1 + 8,&local_c8,0x50);
switchD_00cbe660_caseD_4:
        iVar4 = FUN_01657fc4(param_1 + 8,*param_2);
        if (iVar4 != 0) {
          uVar2 = 4;
LAB_00cbee38:
          *(undefined1 *)(param_1 + 6) = uVar2;
          *(undefined1 *)(param_1 + 3) = 5;
          return 1;
        }
        FUN_00a07b4c(param_1 + 8);
        piVar7 = *(int **)(param_1[5] + 0x184);
        do {
          iVar4 = *piVar7;
          bVar19 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar19);
        *piVar7 = iVar4 + 1;
        if (iVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)software_udf(0xfdee,0xcbf158);
          (*pcVar10)();
        }
        iVar4 = FUN_0076aba0("terminating",0xb);
        param_1[9] = (int)piVar7;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined1 *)(param_1 + 8) = 0;
        param_1[7] = iVar4;
switchD_00cbe660_caseD_5:
        uVar21 = FUN_00c9cbd8(param_1 + 7,*param_2);
        iVar8 = (int)(uVar21 >> 0x20);
        if ((uVar21 & 1) != 0) {
          uVar2 = 5;
          goto LAB_00cbee38;
        }
        FUN_00654988(param_1 + 7);
        iVar4 = 0;
        if (iVar8 != 0) {
          local_78 = iVar8;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("BUG: halt failed",0x10,&local_78,&DAT_01876100,&DAT_01875e28);
        }
      }
      *(undefined1 *)(param_1 + 6) = 1;
      cVar3 = (char)param_1[6];
      if (cVar3 == '\x05') {
        FUN_00654988(param_1 + 7);
      }
      else if (cVar3 == '\x04') {
        FUN_00a07b4c(param_1 + 8);
      }
      else if (cVar3 == '\x03') {
        puVar15 = (undefined4 *)param_1[8];
        iVar8 = param_1[7];
        pcVar10 = (code *)*puVar15;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(iVar8);
        }
        if (puVar15[1] != 0) {
          thunk_FUN_016d3fb4(iVar8);
        }
      }
      if (iVar4 != 0) {
        local_78 = iVar4;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: turning off chips failed",0x1d,&local_78,&DAT_01876100,&DAT_01875dd8);
      }
      piVar7 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        bVar19 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar19);
      *piVar7 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f3984(param_1[2]);
      }
      FUN_00c822ec(param_1[1]);
      piVar7 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        bVar19 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar19);
      *piVar7 = iVar4 + -1;
LAB_00cbef48:
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*param_1);
      }
      *(undefined1 *)(param_1 + 3) = 1;
      return 0;
    }
    uVar2 = 4;
  }
LAB_00cbe8ac:
  *(undefined1 *)(param_1 + 9) = uVar2;
LAB_00cbe910:
  *(undefined1 *)(param_1 + 3) = 4;
  return 1;
}

