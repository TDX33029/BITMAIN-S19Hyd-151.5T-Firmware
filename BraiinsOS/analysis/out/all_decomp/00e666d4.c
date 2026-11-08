// FUN_00e666d4 @ 00e666d4 size=180 calls_out=1 calls_in=2
// strings: 

void FUN_00e666d4(undefined1 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = param_2[2];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    if (iVar2 != iVar1) {
      param_1 = 0;
      goto LAB_00e66754;
    }
    break;
  case 1:
    if (iVar2 != iVar1) {
      param_1 = 1;
      goto LAB_00e66754;
    }
    break;
  case 2:
    if (iVar2 != iVar1) {
      param_1 = 2;
      goto LAB_00e66754;
    }
    break;
  case 3:
    if (iVar2 != iVar1) {
      param_1 = 3;
      goto LAB_00e66754;
    }
    break;
  case 4:
    if (iVar2 != iVar1) {
      param_1 = 4;
      goto LAB_00e66754;
    }
  }
  FUN_00edff4c(param_2,iVar1,1,1,1);
  iVar1 = param_2[2];
LAB_00e66754:
  *(undefined1 *)(param_2[1] + iVar1) = param_1;
  param_2[2] = iVar1 + 1;
  return;
}

