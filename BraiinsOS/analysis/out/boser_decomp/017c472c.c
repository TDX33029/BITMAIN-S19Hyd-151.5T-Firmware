// FUN_017c472c @ 017c472c size=76 calls_out=3 calls_in=2
// strings: 

int * FUN_017c472c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0143b8e8(1,0);
  iVar2 = FUN_017beab4(param_1);
  if (*piVar1 != 0) {
    FUN_01443048(*piVar1,piVar1[1]);
  }
  *piVar1 = iVar2;
  piVar1[1] = (int)&DAT_01d1c1a8;
  return piVar1;
}

