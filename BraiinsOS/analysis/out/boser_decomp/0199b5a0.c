// FUN_0199b5a0 @ 0199b5a0 size=120 calls_out=2 calls_in=0
// strings: 

void FUN_0199b5a0(undefined4 param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int local_24 [2];
  int local_1c;
  
  while (FUN_0199b3ec(local_24,param_1), local_24[0] != 0) {
    pcVar2 = (char *)(local_24[0] + local_1c * 0x10);
    if (*pcVar2 == 'R') {
      piVar3 = *(int **)(pcVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01989ae8(*(undefined4 *)(pcVar2 + 4));
      }
    }
  }
  return;
}

