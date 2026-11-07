// FUN_0081b674 @ 0081b674 size=188 calls_out=4 calls_in=2
// strings: 

ulonglong FUN_0081b674(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_r5;
  ulonglong uVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x23)) {
  case 0:
    iVar1 = *(int *)param_1[2];
    *(undefined2 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    unaff_r5 = 1;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)((int)param_1 + 0x13) = *(undefined1 *)((int)param_1 + 0x8d);
    *(undefined4 *)((int)param_1 + 0xd) = 1;
    param_1[5] = *param_1;
    param_1[6] = param_1[1];
    param_1[7] = iVar1 + 8;
    param_1[8] = param_1 + 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01862b54);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01862b54);
  }
  uVar2 = FUN_0081b024(param_1 + 5);
  if ((uVar2 & 1) == 0) {
    FUN_0081b77c(param_1 + 5);
    *(undefined1 *)(param_1 + 0x23) = 1;
    return uVar2 & 0xffffffff00000000;
  }
  *(undefined1 *)(param_1 + 0x23) = 3;
  return CONCAT44(unaff_r5,1);
}

