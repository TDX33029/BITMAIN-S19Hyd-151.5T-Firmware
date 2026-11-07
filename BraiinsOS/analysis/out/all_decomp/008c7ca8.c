// FUN_008c7ca8 @ 008c7ca8 size=2540 calls_out=18 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined8 FUN_008c7ca8(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  int *local_10c;
  int **local_108;
  code *local_104;
  int iStack_100;
  undefined1 *puStack_fc;
  int ***pppiStack_f8;
  code *local_f4;
  char *local_b8;
  code *local_b4;
  char *local_b0;
  undefined1 *local_ac;
  undefined4 ****local_a8;
  int local_a4;
  undefined4 ***local_64;
  code *local_60;
  undefined4 local_5c;
  int ***local_58;
  undefined4 local_54;
  int *local_50;
  undefined4 ***local_4c;
  undefined **local_48;
  undefined *local_44;
  int **local_40;
  code *local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;
  int ***local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x23]) {
  case '\0':
    *(undefined1 *)(param_1 + 0x20) = 0;
    iVar4 = param_1[0x22];
    param_1[0x1a] = iVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864658);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864658);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x20]) {
    case '\0':
      iVar4 = param_1[0x1a];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864468);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864468);
    case '\x03':
      goto switchD_008c7d18_caseD_3;
    }
  }
  *param_1 = 0;
  param_1[0x1b] = iVar4;
  if ((DAT_018d9130 < 3) && (DAT_018d9560 != '\0')) {
    if (DAT_018d9560 == '\x01') {
LAB_008c7d90:
      DataMemoryBarrier(0xb);
      puVar13 = &DAT_018ae394;
      pcVar16 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar16 = DAT_018daa74, puVar13 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar4 = (**(code **)(puVar13 + 0x14))(pcVar16,DAT_018d9558);
      if (iVar4 == 0) goto LAB_008c7ffc;
    }
    else if (DAT_018d9560 != '\x02') {
      cVar3 = FUN_0169ac90(&DAT_018d9558);
      if (cVar3 == '\0') goto LAB_008c7ffc;
      if (cVar3 != '\x02') goto LAB_008c7d90;
    }
    iVar4 = DAT_018d9558;
    local_104 = *(code **)(DAT_018d9558 + 0x20);
    if (local_104 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864458);
    }
    iStack_100 = *(int *)(DAT_018d9558 + 0x24);
    puStack_fc = *(undefined1 **)(DAT_018d9558 + 0x28);
    pppiStack_f8 = (int ***)0x0;
    piVar14 = (int *)(DAT_018d9558 + 0x1c);
    local_108 = (int **)*piVar14;
    piVar11 = *(int **)(param_1[0x1b] + 0x18);
    local_3c = (code *)thunk_FUN_016d4a50(0x10);
    if (local_3c == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x10);
    }
    *(int *)local_3c = *piVar11 * 0x3c;
    *(int *)(local_3c + 4) = piVar11[1] * 0x3c;
    *(int *)(local_3c + 8) = piVar11[2] * 0x3c;
    *(int *)(local_3c + 0xc) = piVar11[3] * 0x3c;
    local_28 = (int ***)&local_64;
    local_48 = &local_2c;
    local_40 = (int **)0x4;
    local_38 = 4;
    local_64 = &local_40;
    local_2c = &DAT_00595dc8;
    local_4c = &local_108;
    local_58 = (int ***)&local_4c;
    local_54 = 1;
    local_b8 = &DAT_00000001;
    local_a8 = &local_58;
    local_44 = &DAT_018abb78;
    local_60 = FUN_009d7a90;
    local_b4 = (code *)0x0;
    DataMemoryBarrier(0xb);
    pcVar16 = s_SetGloba_00414c05;
    puVar13 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar16 = DAT_018daa74, puVar13 = DAT_018daa78, DAT_018daa70 != 0))
    {
      pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_a4 = iVar4;
    local_50 = piVar14;
    iVar4 = (**(code **)(puVar13 + 0x28))(pcVar16,&local_b8);
    if (iVar4 != 0) {
      (**(code **)(puVar13 + 0x2c))(pcVar16,&local_b8);
    }
    if (local_40 != (int **)0x0) {
      thunk_FUN_016d3fb4(local_3c);
    }
    iVar4 = param_1[0x1b];
    iVar15 = *(int *)(iVar4 + 0x14);
  }
  else {
LAB_008c7ffc:
    iVar4 = param_1[0x1b];
    iVar15 = *(int *)(iVar4 + 0x14);
  }
  if (iVar15 == 0) {
    iVar4 = 4;
  }
  else {
    puVar12 = *(undefined4 **)(iVar4 + 0x10);
    iVar4 = thunk_FUN_016d4a50(iVar15 << 3);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar15 << 3);
    }
    iVar5 = 0;
    iVar10 = iVar15;
    do {
      if (iVar15 * -8 == iVar5) break;
      uVar1 = *(undefined1 *)(puVar12 + 1);
      iVar10 = iVar10 + -1;
      puVar9 = (undefined4 *)(iVar4 - iVar5);
      *puVar9 = *puVar12;
      iVar5 = iVar5 + -8;
      *(undefined1 *)(puVar9 + 1) = uVar1;
      puVar12 = puVar12 + 2;
    } while (iVar10 != 0);
  }
  param_1[0x1c] = iVar15;
  iVar10 = iVar4 + iVar15 * 8;
  param_1[2] = iVar4;
  param_1[0x1d] = iVar4;
  param_1[0x1e] = iVar15;
  param_1[3] = iVar10;
  if (iVar4 != iVar10) {
    do {
      param_1[0x1f] = iVar4;
      param_1[2] = iVar4 + 8;
      FUN_008c5f18(param_1[0x1b],iVar4);
      iVar4 = DAT_018d8000;
      iVar15 = param_1[0x1b];
      DataMemoryBarrier(0xb);
      if (DAT_018d8068 == 0) {
        do {
          bVar2 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d8000 + 8));
        } while (!bVar2);
        *(undefined4 *)(DAT_018d8000 + 8) = 100;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        iVar4 = DAT_018d8004;
        do {
          bVar2 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d8004 + 8));
        } while (!bVar2);
        *(undefined4 *)(DAT_018d8004 + 8) = 100;
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
      iVar4 = *(int *)(iVar15 + 0x18);
      *(undefined4 *)(iVar4 + 0x10) = 100;
      *(undefined4 *)(iVar4 + 0x14) = 100;
      uVar6 = 0;
      param_1[4] = 0;
      param_1[5] = 6;
      do {
        param_1[4] = uVar6 + 1;
        FUN_01656eb8(&local_b8,&DAT_01864488,0,0,0x13de4355,&DAT_01864488);
        FUN_016dd1aa(&local_108,&local_b8,0x50);
        FUN_016dd1aa(param_1 + 6,&local_108,0x50);
switchD_008c7d18_caseD_3:
        local_10c = param_1 + 0x20;
        iVar4 = FUN_01657fc4(param_1 + 6,*param_2);
        if (iVar4 != 0) {
          *(undefined1 *)local_10c = 3;
          goto LAB_008c86c0;
        }
        FUN_00a07b4c(param_1 + 6);
        uVar6 = param_1[4];
      } while (uVar6 < (uint)param_1[5]);
      iVar4 = param_1[0x1b];
      piVar11 = *(int **)(iVar4 + 0x18);
      pcVar7 = (code *)thunk_FUN_016d4a50(0x10);
      if (pcVar7 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x10);
      }
      *(int *)pcVar7 = *piVar11 * 0x3c;
      *(int *)(pcVar7 + 4) = piVar11[1] * 0x3c;
      *(int *)(pcVar7 + 8) = piVar11[2] * 0x3c;
      iVar15 = piVar11[3];
      uVar6 = (uint)(*(int *)(pcVar7 + 4) != 0);
      if (*(int *)pcVar7 != 0) {
        uVar6 = uVar6 + 1;
      }
      if (*(int *)(pcVar7 + 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      *(int *)(pcVar7 + 0xc) = iVar15 * 0x3c;
      if (iVar15 * 0x3c != 0) {
        uVar6 = uVar6 + 1;
      }
      local_64 = (undefined4 ***)&DAT_00000004;
      local_5c = 4;
      local_60 = pcVar7;
      if (*(uint *)(iVar4 + 0x20) <= uVar6) {
        if ((DAT_018d9130 < 3) && (DAT_018d956c != '\0')) {
          if (DAT_018d956c == '\x01') {
LAB_008c8398:
            DataMemoryBarrier(0xb);
            pcVar16 = s_SetGloba_00414c05;
            puVar13 = &DAT_018ae394;
            if ((DAT_018dd984 == 2) &&
               (pcVar16 = DAT_018daa74, puVar13 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar4 = (**(code **)(puVar13 + 0x14))(pcVar16,DAT_018d9564);
            if (iVar4 == 0) goto LAB_008c8514;
          }
          else if (DAT_018d956c != '\x02') {
            cVar3 = FUN_0169ac90(&DAT_018d9564);
            if (cVar3 == '\0') goto LAB_008c8514;
            if (cVar3 != '\x02') goto LAB_008c8398;
          }
          if (*(code **)(DAT_018d9564 + 0x20) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864478);
          }
          local_38 = *(int *)(DAT_018d9564 + 0x24);
          local_48 = &local_2c;
          local_34 = *(undefined4 *)(DAT_018d9564 + 0x28);
          local_50 = (int *)(DAT_018d9564 + 0x1c);
          local_40 = (int **)*local_50;
          local_4c = &local_40;
          local_28 = &local_108;
          local_44 = &DAT_018abb78;
          local_30 = 0;
          iStack_100 = param_1[0x1f];
          local_2c = &DAT_0057f47f;
          local_f4 = FUN_009d7a90;
          pppiStack_f8 = (int ***)&local_64;
          puStack_fc = &LAB_00fac484;
          local_108 = (int **)(iStack_100 + 4);
          local_58 = (int ***)&local_4c;
          local_a8 = &local_58;
          local_104 = FUN_008c61b4;
          local_54 = 1;
          local_b4 = (code *)0x0;
          local_b8 = &DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar16 = s_SetGloba_00414c05;
          puVar13 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar16 = DAT_018daa74, puVar13 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          local_a4 = DAT_018d9564;
          local_3c = *(code **)(DAT_018d9564 + 0x20);
          iVar4 = (**(code **)(puVar13 + 0x28))(pcVar16,&local_b8);
          if (iVar4 != 0) {
            (**(code **)(puVar13 + 0x2c))(pcVar16,&local_b8);
          }
        }
LAB_008c8514:
        puVar12 = (undefined4 *)0x0;
        if (*param_1 != 0) {
          puVar12 = (undefined4 *)param_1[1];
        }
        if (*param_1 != 0 && puVar12 != (undefined4 *)0x0) {
          (**(code **)*puVar12)();
        }
        *param_1 = 1;
        param_1[1] = 0;
        if (local_64 != (undefined4 ***)0x0) {
          thunk_FUN_016d3fb4(local_60);
        }
        break;
      }
      thunk_FUN_016d3fb4();
      iVar4 = param_1[2];
    } while (iVar4 != param_1[3]);
  }
  if (param_1[0x1c] != 0) {
    thunk_FUN_016d3fb4(param_1[0x1d]);
  }
  if (*param_1 == 0) {
    iVar4 = param_1[0x1b];
    if (*(int *)(iVar4 + 0x14) != 0) {
      iVar15 = *(int *)(iVar4 + 0x14) << 3;
      pcVar16 = *(char **)(iVar4 + 0x10) + 4;
      do {
        pcVar8 = pcVar16;
        if (iVar15 == 0) {
          pcVar8 = (char *)0x0;
          goto LAB_008c85bc;
        }
        iVar15 = iVar15 + -8;
        pcVar16 = pcVar8 + 8;
      } while (*pcVar8 != '4');
      pcVar8 = pcVar8 + -4;
LAB_008c85bc:
      pcVar16 = *(char **)(iVar4 + 0x10);
      if (pcVar8 != (char *)0x0) {
        pcVar16 = pcVar8;
      }
      FUN_008c5f18(iVar4,pcVar16);
      local_b4 = FUN_008c61b4;
      local_b8 = pcVar16 + 4;
      local_ac = &LAB_00fac484;
      local_b0 = pcVar16;
      FUN_00600d2c(&local_108,&DAT_00588d22,&local_b8);
      local_40 = local_108;
      local_3c = local_104;
      local_38 = iStack_100;
      iVar4 = FUN_008c8bc8(&local_40);
      puVar12 = (undefined4 *)0x0;
      if (*param_1 != 0) {
        puVar12 = (undefined4 *)param_1[1];
      }
      if (*param_1 != 0 && puVar12 != (undefined4 *)0x0) {
        (**(code **)*puVar12)();
      }
      *param_1 = 1;
      param_1[1] = iVar4;
    }
  }
  iVar4 = DAT_018d8000;
  iVar15 = param_1[0x1b];
  DataMemoryBarrier(0xb);
  if (DAT_018d8068 == 0) {
    do {
      bVar2 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d8000 + 8));
    } while (!bVar2);
    *(undefined4 *)(DAT_018d8000 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    iVar4 = DAT_018d8004;
    do {
      bVar2 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d8004 + 8));
    } while (!bVar2);
    *(undefined4 *)(DAT_018d8004 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  iVar4 = *(int *)(iVar15 + 0x18);
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  iVar4 = *param_1;
  puVar12 = (undefined4 *)param_1[1];
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (iVar4 != 2) {
    FUN_008c8890(param_1);
    if ((iVar4 == 0) || (puVar12 == (undefined4 *)0x0)) {
      *(undefined1 *)(param_1 + 0x23) = 1;
      return 0;
    }
    (**(code **)*puVar12)(puVar12);
    *(undefined1 *)(param_1 + 0x23) = 1;
    return 0;
  }
LAB_008c86c0:
  *(undefined1 *)(param_1 + 0x23) = 3;
  return 1;
}

