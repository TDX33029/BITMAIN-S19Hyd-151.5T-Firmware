// FUN_0195b96c @ 0195b96c size=76 calls_out=2 calls_in=5
// strings: 

void FUN_0195b96c(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_2;
  piVar2 = piVar1;
  if (-0x7fffffff < (int)piVar1) {
    piVar2 = param_2;
  }
  *(undefined1 *)(param_2 + 0x34) = 1;
  if (-0x7fffffff < (int)piVar1) {
    FUN_01a2affc(piVar2);
  }
  FUN_01bed4e2(param_2,param_3,0xb8);
  FUN_01bed4e2(param_1,param_2,0xd8);
  return;
}

