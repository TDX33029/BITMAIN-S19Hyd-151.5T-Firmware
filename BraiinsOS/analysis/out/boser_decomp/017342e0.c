// FUN_017342e0 @ 017342e0 size=72 calls_out=1 calls_in=3
// strings: 

void FUN_017342e0(int *param_1,int param_2)

{
  int extraout_r1;
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)param_1[4];
    if (*param_1 != 0) {
      param_2 = param_1[1];
    }
    if (*param_1 != 0 && param_2 != 0) {
      thunk_FUN_01be4678();
    }
    thunk_FUN_01be4678(param_1);
    param_2 = extraout_r1;
    param_1 = piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}

