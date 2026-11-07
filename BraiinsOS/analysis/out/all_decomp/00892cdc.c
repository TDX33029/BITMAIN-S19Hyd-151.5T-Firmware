// FUN_00892cdc @ 00892cdc size=784 calls_out=9 calls_in=0
// strings: 

undefined4 FUN_00892cdc(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint local_38;
  undefined4 *local_34;
  undefined4 local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    param_1[9] = *param_1;
    param_1[10] = param_1[1];
    param_1[0xb] = param_1[2];
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)((int)param_1 + 0x21) = 1;
switchD_00892d50_caseD_0:
    puVar10 = param_1 + 0xe;
    *puVar10 = param_1[0xb];
    param_1[0xc] = param_1[9];
    param_1[0xd] = param_1[10];
    param_1[0xf] = puVar10;
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
      goto switchD_00892d50_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018776ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018776ac);
    case 3:
      puVar10 = (undefined4 *)param_1[0xf];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x12)) {
    case 0:
      iVar5 = param_1[0xc];
      iVar6 = param_1[0xd];
      cVar2 = *(char *)(param_1 + 0xb);
      uVar3 = param_1[10];
      goto LAB_00892e4c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861e28);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861e28);
    case 3:
      uVar11 = *(undefined8 *)(param_1 + 0x10);
    }
    goto LAB_00892e84;
  }
  FUN_008b5760(&local_38,puVar10,*param_2);
  if ((char)local_30 == '\x03') {
    uVar8 = 3;
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x10) = 3;
  }
  else {
    FUN_00b336f8(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x10) = 1;
    param_1[5] = local_38;
    param_1[6] = local_34;
    param_1[7] = local_30;
    cVar2 = *(char *)(param_1 + 7);
    if (cVar2 != '\x02') {
      uVar3 = param_1[6];
      param_1[10] = uVar3;
      *(undefined2 *)((int)param_1 + 0x21) = 0x100;
      iVar5 = param_1[3];
      iVar6 = param_1[4];
      param_1[9] = param_1[5];
      *(char *)(param_1 + 0xb) = cVar2;
      param_1[0xc] = iVar5;
      param_1[0xd] = iVar6;
      *(undefined1 *)(param_1 + 0x12) = 0;
LAB_00892e4c:
      iVar9 = *(int *)(iVar6 + 8);
      pcVar7 = *(code **)(iVar6 + 0x20);
      *(char *)(param_1 + 0xf) = cVar2;
      param_1[0xe] = uVar3;
      uVar11 = (*pcVar7)(iVar5 + (iVar9 - 1U & 0xfffffff8) + 8);
      *(undefined8 *)(param_1 + 0x10) = uVar11;
LAB_00892e84:
      (**(code **)((int)((ulonglong)uVar11 >> 0x20) + 0xc))(&local_38,(int)uVar11,param_2);
      if ((local_38 & 0xff) == 5) {
        *(undefined1 *)(param_1 + 0x12) = 3;
        *(undefined1 *)(param_1 + 8) = 4;
        return 1;
      }
      uVar3 = param_1[0x10];
      puVar10 = (undefined4 *)param_1[0x11];
      pcVar7 = (code *)*puVar10;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar3);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      if ((local_38 & 0xff) == 3) {
        (**(code **)*local_34)(local_34);
      }
      piVar4 = (int *)param_1[0xe];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[0xe]);
      }
      piVar4 = (int *)param_1[0xc];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(param_1[0xc],param_1[0xd]);
      }
      *(undefined1 *)(param_1 + 0x12) = 1;
      FUN_008880f4(param_1 + 10);
      *(undefined1 *)((int)param_1 + 0x22) = 0;
      FUN_0076b120(param_1[9]);
      *(undefined1 *)((int)param_1 + 0x22) = 0;
    }
    uVar3 = 0;
    uVar8 = 1;
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      piVar4 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(param_1[3],param_1[4]);
        uVar3 = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = uVar8;
  return uVar3;
}

