// FUN_0077fbec @ 0077fbec size=104 calls_out=2 calls_in=2
// strings: 

void FUN_0077fbec(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = 7;
  local_18 = param_2;
  piVar2 = (int *)FUN_00749168(param_1,&local_18,1);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2 + 2);
  } while (!bVar1);
  piVar2[2] = param_3;
  piVar2[3] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  return;
}

