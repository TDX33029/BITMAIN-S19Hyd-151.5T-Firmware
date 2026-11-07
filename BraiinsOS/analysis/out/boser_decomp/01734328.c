// FUN_01734328 @ 01734328 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_01734328(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar2 = (int *)param_1[5];
      iVar1 = 0;
      if (*param_1 != 0) {
        iVar1 = param_1[1];
      }
      if (*param_1 != 0 && iVar1 != 0) {
        (**(code **)(iVar1 + 0x10))(param_1 + 4,param_1[2],param_1[3]);
      }
      thunk_FUN_01be4678(param_1);
      param_1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}

