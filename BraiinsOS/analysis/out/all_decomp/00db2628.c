// FUN_00db2628 @ 00db2628 size=216 calls_out=5 calls_in=1
// strings: 

void FUN_00db2628(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  FUN_00ef7cf0();
  if (*param_1 == 0) {
    FUN_00e46678(param_1[1]);
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac878(param_1[1]);
    }
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e48dc4(param_1[2]);
    }
  }
  if ((char)param_1[0x14] != '\x03') {
    return;
  }
  cVar1 = (char)param_1[0x13];
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)((int)param_1 + 0x29);
  }
  if (!bVar4 || cVar1 != '\x04') {
    return;
  }
  FUN_0163bdc0(param_1 + 0xb);
  if (param_1[0xf] != 0) {
    (**(code **)(param_1[0xf] + 0xc))(param_1[0x10]);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}

