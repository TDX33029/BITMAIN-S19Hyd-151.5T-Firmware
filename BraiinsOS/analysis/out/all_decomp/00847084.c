// FUN_00847084 @ 00847084 size=192 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_00847084(undefined4 *param_1)

{
  int iVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x15)) {
  case 0:
    *(undefined1 *)(param_1 + 0x13) = 0;
    *param_1 = 3;
    param_1[0x12] = param_1[0x14];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860a8c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860a8c);
  }
  iVar1 = FUN_00845c8c(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x15) = 3;
    return 1;
  }
  if (*(char *)(param_1 + 0x13) == '\x03') {
    FUN_00845020(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(undefined1 *)(param_1 + 0x15) = 1;
      return 0;
    }
    FUN_00845840(param_1);
  }
  *(undefined1 *)(param_1 + 0x15) = 1;
  return 0;
}

