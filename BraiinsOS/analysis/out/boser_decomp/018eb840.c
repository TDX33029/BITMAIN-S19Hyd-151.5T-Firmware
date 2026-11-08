// FUN_018eb840 @ 018eb840 size=52 calls_out=1 calls_in=1
// strings: 

undefined2 FUN_018eb840(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_018eb6e4(param_1,param_2,0x22);
  uVar1 = 0x10;
  if (piVar2 == (int *)0x0) {
    return 0x10;
  }
  if (*piVar2 == -0x7fffffff) {
    uVar1 = (undefined2)piVar2[1];
  }
  return uVar1;
}

