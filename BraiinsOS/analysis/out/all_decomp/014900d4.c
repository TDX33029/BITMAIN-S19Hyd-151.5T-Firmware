// FUN_014900d4 @ 014900d4 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_014900d4(int *param_1)

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
      thunk_FUN_016d3fb4(param_1);
      param_1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}

