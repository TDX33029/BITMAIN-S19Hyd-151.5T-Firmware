// FUN_00868ee4 @ 00868ee4 size=152 calls_out=4 calls_in=0
// strings: 

ulonglong FUN_00868ee4(undefined8 *param_1)

{
  undefined4 unaff_r5;
  ulonglong uVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x54)) {
  case 0:
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 10);
    param_1[1] = *param_1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018611b8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018611b8);
  }
  uVar1 = FUN_00868fd8(param_1 + 1);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x54) = 3;
    return CONCAT44(unaff_r5,1);
  }
  if (*(char *)(param_1 + 9) == '\x03') {
    FUN_010ef0b4((int)param_1 + 0x14);
  }
  *(undefined1 *)((int)param_1 + 0x54) = 1;
  return uVar1 & 0xffffffff00000000;
}

