// FUN_00db414c @ 00db414c size=52 calls_out=2 calls_in=0
// strings: 

void FUN_00db414c(int param_1)

{
  if (*(char *)(param_1 + 0xce) == '\x03') {
    FUN_005c270c(param_1);
    *(undefined1 *)(param_1 + 0xcd) = 0;
    FUN_005c37bc(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0xcc) = 0;
    return;
  }
  return;
}

