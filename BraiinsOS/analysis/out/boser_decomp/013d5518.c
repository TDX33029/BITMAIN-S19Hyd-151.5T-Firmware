// FUN_013d5518 @ 013d5518 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_013d5518(short *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 == 2) {
    FUN_013f6af8(param_1 + 2);
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
  return;
}

