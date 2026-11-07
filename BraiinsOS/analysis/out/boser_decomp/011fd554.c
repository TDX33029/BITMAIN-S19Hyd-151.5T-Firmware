// FUN_011fd554 @ 011fd554 size=208 calls_out=3 calls_in=1
// strings: 

void FUN_011fd554(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x12) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x11);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 8);
        }
        if (bVar4 && cVar1 == '\x04') {
          FUN_019f9a9c(param_1 + 9);
          if (param_1[10] != 0) {
            (**(code **)(param_1[10] + 0xc))(param_1[0xb]);
          }
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_019f8c54(param_1[2],1);
    }
    param_1 = param_1 + 1;
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cf18(*param_1);
    return;
  }
  return;
}

