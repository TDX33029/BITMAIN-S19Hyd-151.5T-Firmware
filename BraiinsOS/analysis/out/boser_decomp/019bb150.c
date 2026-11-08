// FUN_019bb150 @ 019bb150 size=36 calls_out=2 calls_in=0
// strings: 

void FUN_019bb150(int *param_1)

{
  if (*param_1 == -0x80000000) {
    FUN_0197acb4(param_1 + 1);
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1[1]);
  return;
}

