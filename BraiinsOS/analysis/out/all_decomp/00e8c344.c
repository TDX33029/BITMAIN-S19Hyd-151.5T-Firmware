// FUN_00e8c344 @ 00e8c344 size=284 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_00e8c344(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[5]) {
  case '\0':
    iVar2 = *(int *)(*param_1 + 0xc);
    iVar2 = (**(code **)(iVar2 + 0x28))
                      (*(int *)(*param_1 + 8) + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8);
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[1] = iVar2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b104);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b104);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[4]) {
    case '\0':
      iVar2 = param_1[1];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aee0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aee0);
    case '\x03':
      goto switchD_00e8c3bc_caseD_3;
    }
  }
  param_1[2] = *(int *)(iVar2 + 0x5c) + 8;
  param_1[3] = -1;
switchD_00e8c3bc_caseD_3:
  piVar4 = param_1 + 2;
  iVar2 = FUN_00e442f8(piVar4,param_2);
  if (iVar2 == 0) {
    uVar1 = 3;
    uVar3 = 1;
  }
  else {
    if (*piVar4 != 0) {
      FUN_00e44660(*piVar4,param_1[3],1);
    }
    piVar4 = *(int **)(iVar2 + 0x20);
    uVar3 = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    FUN_00e44900();
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
  *(undefined1 *)(param_1 + 5) = uVar1;
  return CONCAT44(piVar4,uVar3);
}

