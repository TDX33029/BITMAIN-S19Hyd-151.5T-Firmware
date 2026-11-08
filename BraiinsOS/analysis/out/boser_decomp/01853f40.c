// FUN_01853f40 @ 01853f40 size=76 calls_out=3 calls_in=1
// strings: 

int * FUN_01853f40(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_01427b74(1,0);
  iVar2 = FUN_0183a75c(param_1);
  if (*piVar1 != 0) {
    FUN_01443048(*piVar1,piVar1[1]);
  }
  *piVar1 = iVar2;
  piVar1[1] = (int)&DAT_01d1e854;
  return piVar1;
}

