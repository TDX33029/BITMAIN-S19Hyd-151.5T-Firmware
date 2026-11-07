// FUN_00614764 @ 00614764 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_00614764(undefined4 param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int local_1c [2];
  int local_14;
  
  while (FUN_006145ac(local_1c,param_1), local_1c[0] != 0) {
    pcVar2 = (char *)(local_1c[0] + local_14 * 0x10);
    if (*pcVar2 == 'O') {
      piVar3 = *(int **)(pcVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00614130(*(undefined4 *)(pcVar2 + 4));
      }
    }
  }
  return;
}

