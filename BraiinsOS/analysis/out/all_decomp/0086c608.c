// FUN_0086c608 @ 0086c608 size=196 calls_out=4 calls_in=0
// strings: 

longlong FUN_0086c608(int *param_1)

{
  int iVar1;
  undefined4 unaff_r5;
  uint uVar2;
  ulonglong uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x23]) {
  case '\0':
    uVar2 = 0;
    if (*param_1 != 1) goto LAB_0086c6b0;
    unaff_r5 = 0x20000;
    iVar1 = *(int *)(param_1[2] + 0x148);
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    param_1[4] = 0x20000;
    param_1[5] = 1;
    param_1[6] = param_1[1];
    param_1[7] = iVar1 + 8;
    param_1[8] = (int)(param_1 + 3);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861278);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861278);
  }
  uVar3 = FUN_00818c80(param_1 + 5);
  uVar2 = (uint)(uVar3 >> 0x20);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x23) = 3;
    return CONCAT44(unaff_r5,1);
  }
  FUN_0081b77c(param_1 + 5);
LAB_0086c6b0:
  *(undefined1 *)(param_1 + 0x23) = 1;
  return (ulonglong)uVar2 << 0x20;
}

