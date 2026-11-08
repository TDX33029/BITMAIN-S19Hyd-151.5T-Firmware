// FUN_009e3840 @ 009e3840 size=76 calls_out=1 calls_in=2
// strings: 

undefined4 * FUN_009e3840(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = 0;
    FUN_015e8e6c(param_1,&LAB_009e3890);
    return param_1;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    return param_1;
  }
  return (undefined4 *)0x0;
}

