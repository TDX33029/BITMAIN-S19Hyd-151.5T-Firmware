// FUN_0181ff40 @ 0181ff40 size=228 calls_out=4 calls_in=6
// strings: 

void FUN_0181ff40(undefined4 param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  FUN_018521d0(param_2);
  FUN_01820044(param_1);
  piVar4 = param_2 + 2;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 3;
  DataMemoryBarrier(0xb);
  cVar2 = FUN_01ae6348(iVar3);
  if (cVar2 == '\x02') {
    piVar4 = param_2 + 5;
    do {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *(char *)piVar4 = '\x01';
      DataMemoryBarrier(0xb);
    } while ((char)iVar3 != '\0');
    iVar3 = param_2[3];
    param_2[3] = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_2 + 5) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(param_2[4]);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(param_2);
    return;
  }
  return;
}

