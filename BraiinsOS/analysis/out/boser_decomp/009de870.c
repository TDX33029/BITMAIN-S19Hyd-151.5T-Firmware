// FUN_009de870 @ 009de870 size=164 calls_out=5 calls_in=2
// strings: 

void FUN_009de870(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\x04') {
    FUN_009de22c(param_1 + 0x28);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_009de908;
    }
    FUN_00a222f8((int *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_009de9a0(param_1 + 0x2c);
    }
    piVar3 = *(int **)(param_1 + 0x30);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a97164(*(undefined4 *)(param_1 + 0x30));
      }
    }
  }
  FUN_009de31c(param_1 + 8);
  param_1 = param_1 + 4;
LAB_009de908:
  FUN_009de9a0(param_1);
  return;
}

