// FUN_00845b78 @ 00845b78 size=168 calls_out=5 calls_in=0
// strings: 

int FUN_00845b78(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x19)) {
  case 0:
    *(undefined1 *)(param_1 + 0x17) = 0;
    param_1[4] = 2;
    param_1[0x16] = param_1[0x18];
    param_1[6] = *param_1;
    param_1[7] = param_1[1];
    param_1[8] = param_1[2];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860a2c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860a2c);
  }
  iVar1 = FUN_00845c8c(param_1 + 4);
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x17) == '\x03') {
      FUN_00845020(param_1 + 0xc);
    }
    else if (*(char *)(param_1 + 0x17) == '\0') {
      FUN_00845840(param_1 + 4);
    }
  }
  *(undefined1 *)(param_1 + 0x19) = uVar2;
  return iVar1;
}

