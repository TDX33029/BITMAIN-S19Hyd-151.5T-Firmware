// FUN_0199bff4 @ 0199bff4 size=168 calls_out=3 calls_in=1
// strings: 

void FUN_0199bff4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1[1];
  iVar7 = param_1[2];
  if (iVar7 != 0) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      iVar4 = iVar6 + iVar4 * 0x120;
      piVar2 = *(int **)(iVar4 + 0x100);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01989ae8(*(undefined4 *)(iVar4 + 0x100));
      }
      FUN_01989b80(iVar4 + 0x10);
      iVar4 = iVar5;
    } while (iVar5 != iVar7);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar6);
  return;
}

