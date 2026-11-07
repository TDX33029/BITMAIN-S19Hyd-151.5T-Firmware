// FUN_019d81dc @ 019d81dc size=232 calls_out=5 calls_in=1
// strings: 

bool FUN_019d81dc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_1;
  iVar5 = *(int *)(iVar6 + 0xa0);
  if (iVar5 == 0) goto LAB_019d82a8;
  piVar3 = (int *)(iVar6 + 0x98);
  if (*piVar3 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (!bVar1) goto LAB_019d82b8;
    *piVar3 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019d82b8:
    FUN_0164d8d8(piVar3);
  }
  FUN_0165098c(piVar3);
  FUN_0165098c((uint)piVar3 | 1);
  piVar2 = (int *)(iVar6 + 0x9c);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 2;
  FUN_01650a90(piVar3);
  FUN_01650a90((uint)piVar3 | 1);
  if (*piVar3 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (bVar1) {
        *piVar3 = 0;
        goto LAB_019d828c;
      }
    } while (*piVar3 == 8);
  }
  ClearExclusiveLocal();
  FUN_0164d408(piVar3);
LAB_019d828c:
  iVar4 = 0;
  do {
    FUN_019e03e8(iVar6 + 8 + iVar4);
    iVar4 = iVar4 + 0x10;
  } while (iVar4 != 0x80);
LAB_019d82a8:
  return iVar5 == 0;
}

