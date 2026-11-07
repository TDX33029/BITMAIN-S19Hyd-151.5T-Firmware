// FUN_009d5724 @ 009d5724 size=220 calls_out=5 calls_in=8
// strings: 

void FUN_009d5724(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_009d5880();
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      piVar2 = (int *)param_1[2];
      if (piVar2 == (int *)0x0) {
        return;
      }
      FUN_01712764(piVar2 + 2);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a85dd0(piVar2);
        return;
      }
      return;
    }
  }
  else if (param_1[1] != 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_0188d714(piVar2 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a75bd4(piVar2);
      return;
    }
    return;
  }
  return;
}

