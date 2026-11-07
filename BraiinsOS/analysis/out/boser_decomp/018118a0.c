// FUN_018118a0 @ 018118a0 size=60 calls_out=3 calls_in=1
// strings: 

void FUN_018118a0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_01443048(*param_1,param_1[1]);
  }
  if (*(char *)((int)param_1 + 0x15) != '\x02') {
    FUN_0143b85c(param_1 + 2);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

