// FUN_016ac76c @ 016ac76c size=76 calls_out=1 calls_in=2
// strings: 

undefined4 * FUN_016ac76c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = 0;
    FUN_015e8e6c(param_1,&LAB_016ac7bc);
    return param_1;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    return param_1;
  }
  return (undefined4 *)0x0;
}

