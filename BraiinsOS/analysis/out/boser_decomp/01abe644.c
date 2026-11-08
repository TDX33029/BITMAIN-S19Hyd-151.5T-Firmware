// FUN_01abe644 @ 01abe644 size=72 calls_out=1 calls_in=3
// strings: 

undefined4 * FUN_01abe644(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = 0;
    FUN_019a2bcc(param_1,&LAB_01abe690);
  }
  else if (*(char *)(param_1 + 2) != '\x01') {
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}

