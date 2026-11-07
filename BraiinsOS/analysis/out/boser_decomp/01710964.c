// FUN_01710964 @ 01710964 size=76 calls_out=3 calls_in=2
// strings: 

int * FUN_01710964(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_01427b74(1,0);
  iVar2 = FUN_01754244(param_1);
  if (*piVar1 != 0) {
    FUN_01443048(*piVar1,piVar1[1]);
  }
  *piVar1 = iVar2;
  piVar1[1] = (int)&DAT_01d19c54;
  return piVar1;
}

