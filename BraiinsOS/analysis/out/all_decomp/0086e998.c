// FUN_0086e998 @ 0086e998 size=148 calls_out=4 calls_in=0
// strings: 

ulonglong FUN_0086e998(int *param_1)

{
  undefined4 unaff_r5;
  ulonglong uVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x22]) {
  case '\0':
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[1] = *param_1 + 0x148;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861358);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861358);
  }
  uVar1 = FUN_0086ea84(param_1 + 1);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x22) = 3;
    return CONCAT44(unaff_r5,1);
  }
  if ((char)param_1[0x21] == '\x03') {
    FUN_0081b77c(param_1 + 3);
  }
  *(undefined1 *)(param_1 + 0x22) = 1;
  return uVar1 & 0xffffffff00000000;
}

