// FUN_00a5cafc @ 00a5cafc size=56 calls_out=1 calls_in=2
// strings: 

void FUN_00a5cafc(char *param_1)

{
  if (*param_1 != '\x01') {
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 4) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

