// FUN_0088b120 @ 0088b120 size=1748 calls_out=17 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined4 FUN_0088b120(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 ***pppuVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  char cVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  undefined *puVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 **local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined **local_64;
  undefined *local_60;
  undefined4 local_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined4 local_44;
  int *local_40;
  int local_3c;
  undefined4 ***local_38;
  int local_34;
  undefined4 ***local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    param_1[9] = *param_1;
    param_1[10] = param_1[1];
    param_1[0xb] = param_1[2];
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)((int)param_1 + 0x21) = 1;
switchD_0088b19c_caseD_0:
    puVar8 = param_1 + 0xe;
    *puVar8 = param_1[0xb];
    param_1[0xc] = param_1[9];
    param_1[0xd] = param_1[10];
    param_1[0xf] = puVar8;
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
    switch(*(undefined1 *)(param_1 + 0x10)) {
    case 0:
      goto switchD_0088b19c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018776ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018776ac);
    case 3:
      puVar8 = (undefined4 *)param_1[0xf];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x11)) {
    case 0:
      piVar15 = (int *)param_1[0xc];
      cVar6 = *(char *)(param_1 + 0xb);
      uVar13 = param_1[10];
      goto LAB_0088b2a4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861e48);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861e48);
    case 3:
      uVar13 = param_1[0x10];
    }
    goto LAB_0088b66c;
  }
  FUN_008b5760(&local_40,puVar8,param_2);
  if ((char)local_38 == '\x03') {
    uVar14 = 3;
    uVar13 = 1;
    *(undefined1 *)(param_1 + 0x10) = 3;
    goto LAB_0088b230;
  }
  FUN_00b336f8(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[5] = local_40;
  param_1[6] = local_3c;
  param_1[7] = local_38;
  cVar6 = *(char *)(param_1 + 7);
  if (cVar6 != '\x02') {
    uVar13 = param_1[6];
    param_1[10] = uVar13;
    piVar15 = (int *)param_1[3];
    param_1[9] = param_1[5];
    param_1[0xc] = piVar15;
    param_1[0xd] = param_1[4];
    *(undefined2 *)((int)param_1 + 0x21) = 0x100;
    *(char *)(param_1 + 0xb) = cVar6;
    *(undefined1 *)(param_1 + 0x11) = 0;
LAB_0088b2a4:
    *(char *)(param_1 + 0xf) = cVar6;
    param_1[0xe] = uVar13;
    bVar12 = 1;
    *(undefined1 *)((int)param_1 + 0x45) = 1;
    DataMemoryBarrier(0xb);
    local_40 = piVar15;
    if (*(char *)((int)piVar15 + 0x22) == '\0') {
      piVar10 = piVar15 + 8;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar10;
        bVar1 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar1);
      *(char *)piVar10 = '\x01';
      bVar12 = 1;
      DataMemoryBarrier(0xb);
      if ((char)iVar9 == '\0') {
        if (*(char *)((int)piVar15 + 0x21) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00566930,0x20,&DAT_018a5d08);
        }
        bVar12 = 0;
        *(undefined1 *)((int)piVar15 + 0x21) = 1;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(piVar15 + 8) = 0;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if (*(char *)((int)piVar15 + 0x22) != '\0') {
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar10;
            bVar1 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar1);
          *(char *)piVar10 = '\x01';
          DataMemoryBarrier(0xb);
          if ((char)iVar9 == '\0') {
            bVar12 = *(byte *)((int)piVar15 + 0x21);
            *(undefined1 *)((int)piVar15 + 0x21) = 0;
            DataMemoryBarrier(0xb);
            *(undefined1 *)(piVar15 + 8) = 0;
            DataMemoryBarrier(0xb);
          }
        }
      }
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)((int)piVar15 + 0x22) = 1;
    piVar10 = piVar15 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *(char *)piVar10 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar9 == '\0') {
      iVar9 = piVar15[2];
      piVar15[2] = 0;
      if (iVar9 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(piVar15 + 4) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *(char *)piVar10 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar9 + 4))(piVar15[3]);
      }
    }
    piVar10 = piVar15 + 7;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *(char *)piVar10 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar9 == '\0') {
      iVar9 = piVar15[5];
      piVar15[5] = 0;
      if (iVar9 != 0) {
        (**(code **)(iVar9 + 0xc))(piVar15[6]);
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar15 + 7) = 0;
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar15;
      bVar1 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar1);
    *piVar15 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089dea4(piVar15);
    }
    if ((((bVar12 & 1) != 0) && (DAT_018d9130 < 4)) && (DAT_018d9500 != '\0')) {
      puVar11 = &DAT_018ae394;
      pcVar16 = s_SetGloba_00414c05;
      if (DAT_018d9500 == '\x01') {
LAB_0088b4d4:
        DataMemoryBarrier(0xb);
        pcVar7 = pcVar16;
        puVar2 = puVar11;
        if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar9 = (**(code **)(puVar2 + 0x14))(pcVar7,DAT_018d94f8);
        if (iVar9 == 0) goto LAB_0088b65c;
      }
      else if (DAT_018d9500 != '\x02') {
        cVar6 = FUN_0169ac90(&DAT_018d94f8);
        if (cVar6 == '\0') goto LAB_0088b65c;
        if (cVar6 != '\x02') goto LAB_0088b4d4;
      }
      local_2c = DAT_018d94f8;
      iStack_58 = *(int *)(DAT_018d94f8 + 0x20);
      if (iStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01861e38);
      }
      local_64 = &local_48;
      local_68 = &local_5c;
      local_6c = (undefined4 *)(DAT_018d94f8 + 0x1c);
      local_5c = *local_6c;
      local_74 = &local_68;
      uStack_54 = *(undefined4 *)(DAT_018d94f8 + 0x24);
      uStack_50 = *(undefined4 *)(DAT_018d94f8 + 0x28);
      uStack_4c = 0;
      local_70 = 1;
      local_60 = &DAT_018abb78;
      local_44 = 0x3b;
      local_3c = 0;
      local_40 = (int *)&DAT_00000001;
      local_30 = &local_74;
      local_48 = &DAT_003449a2;
      DataMemoryBarrier(0xb);
      if ((DAT_018dd984 == 2) && (pcVar16 = DAT_018daa74, puVar11 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar9 = (**(code **)(puVar11 + 0x28))(pcVar16,&local_40);
      if (iVar9 != 0) {
        (**(code **)(puVar11 + 0x2c))(pcVar16,&local_40);
      }
    }
LAB_0088b65c:
    uVar13 = param_1[0xd];
    *(undefined1 *)((int)param_1 + 0x45) = 0;
    param_1[0x10] = uVar13;
LAB_0088b66c:
    FUN_0089f310(&local_40,uVar13,param_2);
    iVar5 = local_2c;
    pppuVar4 = local_30;
    iVar9 = local_34;
    pppuVar3 = local_38;
    if (((uint)local_40 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x11) = 3;
      *(undefined1 *)(param_1 + 8) = 4;
      return 1;
    }
    piVar15 = (int *)param_1[0x10];
    if (*piVar15 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar15);
      if (!bVar1) goto LAB_0088b6e0;
      *piVar15 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_0088b6e0:
      (**(code **)(piVar15[2] + 0x10))();
    }
    if (local_38 != (undefined4 ***)0x0 || local_34 != 0) {
      local_38 = pppuVar4;
      local_40 = (int *)pppuVar3;
      local_34 = iVar5;
      local_3c = iVar9;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_003449bf,0x1f,&local_40,&DAT_01861f48,&DAT_01861e58);
    }
    piVar15 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar15;
      bVar1 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar1);
    *piVar15 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[0xe]);
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_00886f54(param_1 + 10);
    *(undefined1 *)((int)param_1 + 0x22) = 0;
    FUN_0076b120(param_1[9]);
    *(undefined1 *)((int)param_1 + 0x22) = 0;
  }
  uVar13 = 0;
  uVar14 = 1;
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    FUN_007c0134(param_1 + 3);
  }
LAB_0088b230:
  *(undefined1 *)(param_1 + 8) = uVar14;
  return uVar13;
}

