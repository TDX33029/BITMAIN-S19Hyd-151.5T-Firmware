// FUN_00aeb6f0 @ 00aeb6f0 size=152 calls_out=4 calls_in=0
// strings: 

void FUN_00aeb6f0(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x63c);
  if (cVar1 == '\0') {
    FUN_00aefea0(param_1);
    piVar3 = *(int **)(param_1 + 0x638);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      FUN_00aebcb0(param_1 + 0x640);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00654988(param_1 + 0x640);
    }
    piVar3 = *(int **)(param_1 + 0x638);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x638));
    return;
  }
  return;
}

