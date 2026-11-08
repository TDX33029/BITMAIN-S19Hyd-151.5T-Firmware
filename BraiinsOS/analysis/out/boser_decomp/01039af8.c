// FUN_01039af8 @ 01039af8 size=36 calls_out=2 calls_in=2
// strings: 

void FUN_01039af8(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\x03') {
    FUN_01039ab0(param_1 + 5);
    return;
  }
  return;
}

