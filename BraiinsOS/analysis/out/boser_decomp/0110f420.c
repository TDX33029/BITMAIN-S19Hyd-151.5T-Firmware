// FUN_0110f420 @ 0110f420 size=140 calls_out=1 calls_in=2
// strings: 

void FUN_0110f420(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 5) == '\x03') {
    if (*(char *)(param_1 + 0x40) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x3c);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x18);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x1c);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x04') {
      return;
    }
    piVar2 = *(int **)(param_1 + 0xc);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(piVar2);
      if (bVar3) {
        *piVar2 = 0x84;
        goto LAB_0110f4a0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_0110f4a0:
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

