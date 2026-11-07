// FUN_0184f010 @ 0184f010 size=52 calls_out=2 calls_in=12
// strings: 

void FUN_0184f010(int *param_1)

{
  if (*param_1 != 0) {
    FUN_01443048(*param_1,param_1[1]);
  }
  if (*(char *)((int)param_1 + 0x15) == '\x02') {
    return;
  }
  FUN_014323b0(param_1 + 2);
  return;
}

