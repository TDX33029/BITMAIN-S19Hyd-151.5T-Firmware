// FUN_00c987bc @ 00c987bc size=768 calls_out=9 calls_in=0
// strings: 

undefined4 FUN_00c987bc(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint local_38;
  int *local_34;
  int *local_30;
  char local_2c;
  undefined1 local_24 [12];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
    param_1[8] = *param_1;
    param_1[9] = param_1[1];
    param_1[10] = param_1[2];
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined2 *)((int)param_1 + 0x1d) = 1;
switchD_00c98830_caseD_0:
    puVar4 = param_1 + 0xd;
    *puVar4 = param_1[10];
    param_1[0xb] = param_1[8];
    param_1[0xc] = param_1[9];
    param_1[0xe] = puVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876c8c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876c8c,&switchD_00c987d8::switchdataD_00c987dc,param_2);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xf)) {
    case 0:
      goto switchD_00c98830_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018776ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018776ac,&switchD_00c98830::switchdataD_00c98834,param_2);
    case 3:
      puVar4 = (undefined4 *)param_1[0xe];
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0xc) != '\0') {
      if (*(char *)(param_1 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01875d38);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875d38,&switchD_00c987d8::switchdataD_00c987dc,param_2);
    }
    piVar5 = (int *)param_1[9];
    iVar2 = param_1[0xb];
    goto LAB_00c98904;
  }
  FUN_00c80dec(&local_38,puVar4);
  if ((char)local_30 == '\x03') {
    *(undefined1 *)(param_1 + 0xf) = 3;
    *(undefined1 *)(param_1 + 7) = 3;
    return 1;
  }
  FUN_00ac9c30(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[4] = local_38;
  param_1[5] = local_34;
  param_1[6] = local_30;
  if (*(char *)(param_1 + 6) == '\x02') goto LAB_00c98a3c;
  piVar5 = (int *)param_1[5];
  param_1[9] = piVar5;
  iVar2 = param_1[3];
  *(undefined2 *)((int)param_1 + 0x1d) = 0x100;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(char *)(param_1 + 10) = *(char *)(param_1 + 6);
  param_1[8] = param_1[4];
  param_1[0xb] = iVar2;
LAB_00c98904:
  local_24[0] = 5;
  FUN_009cb590(&local_38,*(undefined4 *)(iVar2 + 0x18),local_24);
  if (local_2c != '\x02') {
    local_38 = local_38 & 0xff;
    if (local_38 == 2) {
      ppiVar3 = &local_30;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *local_30;
        bVar1 = (bool)hasExclusiveAccess(local_30);
      } while (!bVar1);
      *local_30 = iVar2 + -1;
    }
    else if (local_38 == 3) {
      ppiVar3 = &local_34;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *local_34;
        bVar1 = (bool)hasExclusiveAccess(local_34);
      } while (!bVar1);
      *local_34 = iVar2 + -1;
    }
    else {
      if (local_38 != 4) goto LAB_00c989c4;
      ppiVar3 = &local_34;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *local_34;
        bVar1 = (bool)hasExclusiveAccess(local_34);
      } while (!bVar1);
      *local_34 = iVar2 + -1;
    }
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*ppiVar3);
    }
  }
LAB_00c989c4:
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(piVar5);
  }
  piVar5 = (int *)param_1[0xb];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(param_1[0xb]);
  }
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_0076b120(param_1[8]);
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
LAB_00c98a3c:
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    piVar5 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(param_1[3]);
    }
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return 0;
}

