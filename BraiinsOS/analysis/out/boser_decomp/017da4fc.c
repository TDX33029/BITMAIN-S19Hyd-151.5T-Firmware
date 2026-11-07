// FUN_017da4fc @ 017da4fc size=72 calls_out=3 calls_in=1
// strings: 

void FUN_017da4fc(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_01443048(*param_1,param_1[1]);
  }
  if (*(char *)((int)param_1 + 0x15) != '\x02') {
    FUN_014323b0(param_1 + 2);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

