// FUN_01962be4 @ 01962be4 size=96 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01962be4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_4 != 0) {
    piVar2 = (int *)(param_3 + 4);
    param_4 = param_4 << 3;
    do {
      if ((*piVar2 == param_2) &&
         (iVar1 = thunk_FUN_01bed842(piVar2[-1],param_1,param_2), iVar1 == 0)) {
        return 1;
      }
      piVar2 = piVar2 + 2;
      param_4 = param_4 + -8;
    } while (param_4 != 0);
  }
  return 0;
}

