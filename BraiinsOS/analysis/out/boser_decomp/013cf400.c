// FUN_013cf400 @ 013cf400 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_013cf400(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar1 = (int *)param_1[0x31];
      if (*param_1 != -0x80000000) {
        FUN_013ce364(param_1);
        FUN_013cef10(param_1 + 0x30);
      }
      thunk_FUN_01be4678(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}

