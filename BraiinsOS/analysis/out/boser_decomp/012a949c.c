// FUN_012a949c @ 012a949c size=92 calls_out=1 calls_in=4
// strings: 

bool FUN_012a949c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_3 + 4);
  param_4 = param_4 << 3;
  while ((param_4 != 0 &&
         ((*piVar2 != param_2 ||
          (iVar1 = thunk_FUN_01bed842(piVar2[-1],param_1,param_2), iVar1 != 0))))) {
    param_4 = param_4 + -8;
    piVar2 = piVar2 + 2;
  }
  return param_4 != 0;
}

