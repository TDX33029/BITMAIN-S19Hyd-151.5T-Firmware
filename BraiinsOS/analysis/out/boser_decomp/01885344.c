// FUN_01885344 @ 01885344 size=176 calls_out=3 calls_in=1
// strings: 

void FUN_01885344(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((char)param_1[2] == '\x02') {
    return;
  }
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(*param_1 + 0x20);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    FUN_01422650(param_1);
  }
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01853e68(*param_1);
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014210d0(param_1[1]);
    return;
  }
  return;
}

