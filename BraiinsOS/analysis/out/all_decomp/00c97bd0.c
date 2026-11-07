// FUN_00c97bd0 @ 00c97bd0 size=1948 calls_out=17 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined4 FUN_00c97bd0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 *local_88;
  undefined4 **local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined **local_74;
  undefined *local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_58;
  int *local_54;
  int local_50;
  undefined4 *local_4c;
  undefined4 **local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 ***local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
    param_1[8] = *param_1;
    param_1[9] = param_1[1];
    param_1[10] = param_1[2];
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined2 *)((int)param_1 + 0x1d) = 1;
switchD_00c97c4c_caseD_0:
    puVar7 = param_1 + 0xd;
    *puVar7 = param_1[10];
    param_1[0xb] = param_1[8];
    param_1[0xc] = param_1[9];
    param_1[0xe] = puVar7;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876c8c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876c8c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xf)) {
    case 0:
      goto switchD_00c97c4c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018776ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018776ac);
    case 3:
      puVar7 = (undefined4 *)param_1[0xe];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xf)) {
    case 0:
      goto switchD_00c97c9c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875e58);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875e58);
    case 3:
switchD_00c97c9c_caseD_3:
      iVar3 = FUN_00c8101c(param_1 + 0x10,param_2);
      if (iVar3 == 0) {
        uVar9 = 3;
LAB_00c98570:
        local_98 = param_1 + 0xf;
        *(undefined1 *)local_98 = uVar9;
        *(undefined1 *)(param_1 + 7) = 4;
        return 1;
      }
      param_1[0xe] = iVar3;
      if (param_1[0x10] != 0) {
        FUN_00c8204c(param_1[0x10],param_1[0x11],1);
        iVar3 = param_1[0xe];
      }
      iVar4 = *(int *)(iVar3 + 0x24);
      iVar3 = iVar4 + *(int *)(iVar3 + 0x28) * 0xf8;
      param_1[0x17] = iVar4;
      param_1[0x18] = iVar3;
      if (iVar4 != iVar3) {
        do {
          param_1[0x10] = iVar4;
          param_1[0x17] = iVar4 + 0xf8;
          *(undefined1 *)(param_1 + 0x16) = 0;
LAB_00c9816c:
          iVar4 = iVar4 + 0x18;
          param_1[0x11] = iVar4;
          *(undefined1 *)(param_1 + 0x15) = 0;
LAB_00c98184:
          param_1[0x12] = iVar4;
          cVar1 = *(char *)(iVar4 + 0xd4);
          bVar13 = cVar1 == '\x01';
          if (bVar13) {
            cVar1 = *(char *)(iVar4 + 0xd5);
          }
          if (bVar13 && cVar1 == '\0') {
            uVar14 = (**(code **)(*(int *)(iVar4 + 0xc4) + 0x10))(*(undefined4 *)(iVar4 + 0xc0));
            *(undefined8 *)(param_1 + 0x13) = uVar14;
LAB_00c981bc:
            uVar15 = (**(code **)((int)((ulonglong)uVar14 >> 0x20) + 0xc))((int)uVar14,param_2);
            puVar7 = (undefined4 *)(uVar15 >> 0x20);
            if ((uVar15 & 1) != 0) {
              *(undefined1 *)(param_1 + 0x16) = 3;
              *(undefined1 *)(param_1 + 0x15) = 3;
              uVar9 = 4;
              goto LAB_00c98570;
            }
            uVar2 = param_1[0x13];
            puVar11 = (undefined4 *)param_1[0x14];
            pcVar8 = (code *)*puVar11;
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(uVar2);
            }
            if (puVar11[1] != 0) {
              thunk_FUN_016d3fb4(uVar2);
            }
            if (puVar7 != (undefined4 *)0x0) {
              local_88 = puVar7;
              if ((DAT_018d9130 < 4) && (DAT_018d9e84 != '\0')) {
                pcVar12 = s_SetGloba_00414c05;
                if (DAT_018d9e84 == '\x01') {
LAB_00c98278:
                  DataMemoryBarrier(0xb);
                  puVar10 = &DAT_018ae394;
                  pcVar6 = pcVar12;
                  if ((DAT_018dd984 == 2) &&
                     (pcVar6 = DAT_018daa74, puVar10 = DAT_018daa78, DAT_018daa70 != 0)) {
                    pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                  }
                  iVar4 = (**(code **)(puVar10 + 0x14))(pcVar6,DAT_018d9e7c);
                  if (iVar4 == 0) goto LAB_00c9846c;
                }
                else if (DAT_018d9e84 != '\x02') {
                  cVar1 = FUN_0169ac90(&DAT_018d9e7c);
                  if (cVar1 == '\0') goto LAB_00c9846c;
                  if (cVar1 != '\x02') goto LAB_00c98278;
                }
                if (*(int *)(DAT_018d9e7c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018758d8);
                }
                local_64 = *(undefined4 *)(DAT_018d9e7c + 0x24);
                local_60 = *(undefined4 *)(DAT_018d9e7c + 0x28);
                local_78 = &local_6c;
                local_7c = (undefined4 *)(DAT_018d9e7c + 0x1c);
                local_6c = *local_7c;
                local_74 = &local_58;
                local_84 = &local_78;
                local_54 = &local_50;
                local_5c = 0;
                local_70 = &DAT_018abb78;
                local_80 = 1;
                local_58 = &DAT_00565f30;
                local_50 = param_1[0x12] + 200;
                local_3c = 0;
                local_44 = FUN_00604528;
                local_48 = &local_88;
                local_30 = &local_84;
                local_4c = &DAT_006043a8;
                local_40 = 1;
                DataMemoryBarrier(0xb);
                puVar10 = &DAT_018ae394;
                if ((DAT_018dd984 == 2) &&
                   (pcVar12 = DAT_018daa74, puVar10 = DAT_018daa78, DAT_018daa70 != 0)) {
                  pcVar12 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
                local_68 = *(int *)(DAT_018d9e7c + 0x20);
                local_2c = DAT_018d9e7c;
                iVar4 = (**(code **)(puVar10 + 0x28))(pcVar12,&local_40);
                if (iVar4 != 0) {
                  (**(code **)(puVar10 + 0x2c))(pcVar12,&local_40);
                }
              }
LAB_00c9846c:
              (**(code **)*local_88)();
            }
          }
          *(undefined1 *)(param_1[0x12] + 0xd4) = 0;
          iVar4 = param_1[0x12];
          if (*(int *)(iVar4 + 8) != 0x3b9aca01) {
            if (*(int *)(iVar4 + 0x38) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x3c));
            }
            if (*(int *)(iVar4 + 0x48) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x4c));
            }
            if (*(int *)(iVar4 + 0x20) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x24));
            }
          }
          *(undefined4 *)(iVar4 + 8) = 0x3b9aca01;
          iVar4 = param_1[0x12];
          if (*(int *)(iVar4 + 0x68) != 0x3b9aca01) {
            if (*(int *)(iVar4 + 0x98) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x9c));
            }
            if (*(int *)(iVar4 + 0xa8) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0xac));
            }
            if (*(int *)(iVar4 + 0x80) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x84));
            }
          }
          *(undefined4 *)(iVar4 + 0x68) = 0x3b9aca01;
          iVar4 = param_1[0x17];
          *(undefined1 *)(param_1 + 0x16) = 1;
          *(undefined1 *)(param_1 + 0x15) = 1;
        } while (iVar4 != param_1[0x18]);
      }
      local_98 = param_1 + 0xf;
      local_9c = param_1 + 9;
      FUN_00c822ec(param_1[0xe]);
      piVar5 = (int *)param_1[0xc];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar13 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar13);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[0xc]);
      }
      piVar5 = (int *)param_1[0xb];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar13 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar13);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d0668c(param_1[0xb]);
      }
      *(undefined1 *)local_98 = 1;
      FUN_00c8c4ec(local_9c);
      *(undefined1 *)((int)param_1 + 0x1e) = 0;
      FUN_0076b120(param_1[8]);
      *(undefined1 *)((int)param_1 + 0x1e) = 0;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x16)) {
      case 0:
        iVar4 = param_1[0x10];
        goto LAB_00c9816c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01875d98);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01875d98);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x15)) {
      case 0:
        iVar4 = param_1[0x11];
        goto LAB_00c98184;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018758c8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018758c8);
      case 3:
        uVar14 = *(undefined8 *)(param_1 + 0x13);
        goto LAB_00c981bc;
      }
    }
    goto LAB_00c97e80;
  }
  FUN_00c80dec(&local_40,puVar7,*param_2);
  if ((char)local_38 == '\x03') {
    uVar9 = 3;
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0xf) = 3;
  }
  else {
    FUN_00ac9c30(param_1 + 0xb);
    *(undefined1 *)(param_1 + 0xf) = 1;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    param_1[6] = local_38;
    if (*(char *)(param_1 + 6) != '\x02') {
      param_1[9] = param_1[5];
      *(char *)(param_1 + 10) = *(char *)(param_1 + 6);
      *(undefined2 *)((int)param_1 + 0x1d) = 0x100;
      param_1[8] = param_1[4];
      param_1[0xb] = param_1[3];
      *(undefined1 *)(param_1 + 0xf) = 0;
switchD_00c97c9c_caseD_0:
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 10);
      param_1[0xc] = param_1[9];
      param_1[0x10] = param_1[0xb] + 8;
      param_1[0x11] = 0xffffffff;
      goto switchD_00c97c9c_caseD_3;
    }
LAB_00c97e80:
    uVar2 = 0;
    uVar9 = 1;
    if (*(char *)((int)param_1 + 0x1d) != '\0') {
      piVar5 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar13 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar13);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d0668c(param_1[3]);
        uVar2 = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 7) = uVar9;
  return uVar2;
}

