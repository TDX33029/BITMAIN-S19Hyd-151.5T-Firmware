// FUN_007adc6c @ 007adc6c size=60 calls_out=1 calls_in=0
// strings: 

void FUN_007adc6c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  param_4 = param_4 << 3;
  piVar1 = (int *)(param_3 + 4);
  do {
    piVar2 = piVar1;
    if (param_4 == 0) {
      iVar3 = 1;
      iVar4 = 0;
      goto LAB_007adca0;
    }
    iVar4 = *piVar2;
    param_4 = param_4 + -8;
    piVar1 = piVar2 + 2;
  } while (iVar4 == 0);
  iVar3 = piVar2[-1];
LAB_007adca0:
  FUN_007aef20(param_1,param_2,iVar3,iVar4);
  return;
}

