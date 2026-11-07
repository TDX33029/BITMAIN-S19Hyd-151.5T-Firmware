// FUN_008f1d48 @ 008f1d48 size=348 calls_out=8 calls_in=1
// strings: 

void FUN_008f1d48(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *local_24;
  int *local_20;
  int *local_1c;
  
  piVar6 = *(int **)(param_1 + 0x48);
  if ((char)piVar6[0x1f] == '\0') {
    *(undefined1 *)(piVar6 + 0x1f) = 1;
  }
  FUN_01646818(piVar6 + 0x20);
  FUN_0163b708(piVar6 + 0x18);
  local_20 = piVar6 + 8;
  local_24 = piVar6 + 0x1c;
  local_1c = piVar6 + 0x20;
  FUN_008ea084(&local_24);
  FUN_008ea084(&local_24);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2028(*(undefined4 *)(param_1 + 0x48));
  }
  piVar6 = *(int **)(param_1 + 0x4c);
  FUN_008ea250(piVar6);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2220(*(undefined4 *)(param_1 + 0x4c));
  }
  piVar6 = *(int **)(param_1 + 0x50);
  FUN_00aa30a8(piVar6);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x50));
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
    cVar3 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar3 = '\x04';
    }
    iVar5 = 0xc;
    if ((cVar3 != '\x05') && (cVar3 != '\x04' || bVar1 != 3)) {
      return;
    }
  }
  else {
    iVar5 = 4;
    if (iVar4 != 2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x008f1ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x18 + iVar5))();
  return;
}

