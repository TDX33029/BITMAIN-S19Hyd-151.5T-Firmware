// FUN_008471fc @ 008471fc size=340 calls_out=6 calls_in=0
// strings: 

ulonglong FUN_008471fc(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint local_30 [2];
  int local_28;
  undefined4 local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x1a)) {
  case 0:
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)((int)param_1 + 0x1b);
    param_1[2] = *param_1;
    param_1[3] = param_1[1];
    param_1[4] = param_1[5];
    *(undefined4 *)(*(int *)(param_1[5] + 4) + 8) = *param_1;
    iVar1 = param_1[4];
    param_1[8] = iVar1;
    param_1[9] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860aac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860aac);
  case 3:
    if (*(char *)(param_1 + 9) != '\0') {
      if (*(char *)(param_1 + 9) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01860edc);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01860edc);
    }
    iVar1 = param_1[8];
    break;
  case 4:
    goto switchD_00847218_caseD_4;
  }
  while( true ) {
    FUN_008b51ac(local_30,iVar1 + 8);
    if ((local_30[0] == 3) || (1 < local_30[0])) break;
    if (local_28 != 0) {
      thunk_FUN_016d3fb4(local_24);
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0x80000000;
  param_1[0xc] = param_1[4];
  *(char *)((int)param_1 + 0x26) = (char)param_1[2];
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_1 + 6);
switchD_00847218_caseD_4:
  uVar2 = FUN_00846334(param_1 + 8,param_2);
  if ((uVar2 & 1) == 0) {
    FUN_00845fec(param_1 + 8);
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    return uVar2 & 0xffffffff00000000;
  }
  *(undefined1 *)((int)param_1 + 0x1a) = 4;
  return CONCAT44(param_2,1);
}

