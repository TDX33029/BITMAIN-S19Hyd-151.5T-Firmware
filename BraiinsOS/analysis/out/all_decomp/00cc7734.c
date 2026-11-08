// FUN_00cc7734 @ 00cc7734 size=996 calls_out=11 calls_in=0
// strings: BUG: halt failed | BUG: halt failed

undefined4 FUN_00cc7734(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  int local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    param_1[9] = *param_1;
    param_1[10] = param_1[1];
    param_1[0xb] = param_1[2];
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)((int)param_1 + 0x21) = 1;
switchD_00cc77a8_caseD_0:
    puVar5 = param_1 + 0xe;
    *puVar5 = param_1[0xb];
    param_1[0xc] = param_1[9];
    param_1[0xd] = param_1[10];
    param_1[0xf] = puVar5;
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
      goto switchD_00cc77a8_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018776ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018776ac);
    case 3:
      puVar5 = (undefined4 *)param_1[0xf];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1e)) {
    case 0:
      uVar4 = param_1[0xc];
      uVar7 = param_1[0xd];
      cVar3 = *(char *)(param_1 + 0xb);
      piVar6 = (int *)param_1[10];
      goto LAB_00cc78a8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875d48);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875d48);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x14)) {
      case 0:
        cVar3 = *(char *)(param_1 + 0xf);
        piVar6 = (int *)param_1[0xe];
        uVar4 = param_1[0x10];
        uVar7 = param_1[0x11];
        goto LAB_00cc78c4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01875d58);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01875d58);
      case 3:
        goto switchD_00cc7974_caseD_3;
      }
    }
    goto switchD_00cc7974_caseD_4;
  }
  FUN_00c80dec(&local_30,puVar5,param_2);
  if ((char)local_28 == '\x03') {
    uVar9 = 3;
    uVar4 = 1;
    *(undefined1 *)(param_1 + 0x10) = 3;
  }
  else {
    FUN_00ac9c30(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x10) = 1;
    param_1[5] = local_30;
    param_1[6] = uStack_2c;
    param_1[7] = local_28;
    cVar3 = *(char *)(param_1 + 7);
    if (cVar3 != '\x02') {
      piVar6 = (int *)param_1[6];
      param_1[10] = piVar6;
      *(undefined2 *)((int)param_1 + 0x21) = 0x100;
      uVar4 = param_1[3];
      uVar7 = param_1[4];
      param_1[9] = param_1[5];
      *(char *)(param_1 + 0xb) = cVar3;
      param_1[0xc] = uVar4;
      param_1[0xd] = uVar7;
      *(undefined1 *)(param_1 + 0x1e) = 0;
LAB_00cc78a8:
      param_1[0xe] = piVar6;
      param_1[0x10] = uVar4;
      param_1[0x11] = uVar7;
      *(char *)(param_1 + 0xf) = cVar3;
      *(undefined1 *)(param_1 + 0x14) = 0;
LAB_00cc78c4:
      param_1[0x15] = uVar7;
      *(undefined2 *)((int)param_1 + 0x51) = 0x101;
      *(char *)(param_1 + 0x13) = cVar3;
      param_1[0x12] = piVar6;
      do {
        iVar8 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar8 + 1;
      if (iVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xcc7b78);
        (*pcVar1)();
      }
      param_1[0x18] = uVar4;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      *(char *)(param_1 + 0x17) = cVar3;
      param_1[0x16] = piVar6;
switchD_00cc7974_caseD_3:
      uVar10 = FUN_00c9cbd8(param_1 + 0x16,param_2);
      local_30 = (int)(uVar10 >> 0x20);
      uVar9 = 3;
      if ((uVar10 & 1) != 0) {
LAB_00cc79bc:
        *(undefined1 *)(param_1 + 0x1e) = 3;
        *(undefined1 *)(param_1 + 0x14) = uVar9;
        *(undefined1 *)(param_1 + 8) = 4;
        return 1;
      }
      FUN_00654988(param_1 + 0x16);
      if (local_30 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: halt failed",0x10,&local_30,&DAT_01876100,&DAT_01875d68);
      }
      uVar4 = param_1[0x15];
      *(undefined2 *)((int)param_1 + 0x51) = 0;
      *(undefined1 *)(param_1 + 0x19) = 0;
      param_1[0x15] = param_1[0x12];
      param_1[0x17] = uVar4;
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x13);
switchD_00cc7974_caseD_4:
      uVar10 = FUN_00c9cbd8(param_1 + 0x15,param_2);
      local_30 = (int)(uVar10 >> 0x20);
      uVar9 = 4;
      if ((uVar10 & 1) != 0) goto LAB_00cc79bc;
      FUN_00654988(param_1 + 0x15);
      if (local_30 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: halt failed",0x10,&local_30,&DAT_01876100,&DAT_01875d78);
      }
      *(undefined1 *)((int)param_1 + 0x52) = 0;
      *(undefined2 *)(param_1 + 0x14) = 1;
      FUN_00c8bcd8(param_1 + 0xe);
      *(undefined1 *)(param_1 + 0x1e) = 1;
      FUN_00c8bbd8(param_1 + 10);
      *(undefined1 *)((int)param_1 + 0x22) = 0;
      FUN_0076b120(param_1[9]);
      *(undefined1 *)((int)param_1 + 0x22) = 0;
    }
    uVar4 = 0;
    uVar9 = 1;
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      piVar6 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[3]);
      }
      uVar4 = 0;
      piVar6 = (int *)param_1[4];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[4]);
        uVar4 = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = uVar9;
  return uVar4;
}

