// FUN_013c11f8 @ 013c11f8 size=92 calls_out=1 calls_in=0
// strings: 

void FUN_013c11f8(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_2[1];
  piVar4 = (int *)*param_2;
  (**(code **)(iVar3 + 0x14))(param_1,(int)piVar4 + (*(int *)(iVar3 + 8) - 1U & 0xfffffff8) + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(piVar4,iVar3);
    return;
  }
  return;
}

