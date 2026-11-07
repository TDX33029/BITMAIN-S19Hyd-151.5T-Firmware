// FUN_00662244 @ 00662244 size=180 calls_out=6 calls_in=1
// strings: 

bool FUN_00662244(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    param_1[1] = *(int *)*param_1 + 8;
    param_1[2] = 0xffffffff;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01859d24);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01859d24);
  }
  iVar1 = FUN_006f5654(param_1 + 1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 3) = 3;
    return true;
  }
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    FUN_006f5fbc(iVar2,param_1[2],1);
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_00994994();
  }
  FUN_006f625c(iVar1);
  *(undefined1 *)(param_1 + 3) = 1;
  return iVar1 == 0;
}

