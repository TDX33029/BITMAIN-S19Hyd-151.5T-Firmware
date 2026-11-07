// FUN_00ec8a1c @ 00ec8a1c size=356 calls_out=7 calls_in=2
// strings: 

void FUN_00ec8a1c(int param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined1 auStack_a8 [8];
  int local_a0;
  
  pcVar2 = (char *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  FUN_01646818(pcVar2);
  FUN_0163b708(param_1 + 0x60);
  while (FUN_005c9474(auStack_a8,param_1 + 0x70,param_1 + 0x20), 1 < local_a0 - 3U) {
    if (*pcVar2 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar2);
      if (!bVar1) goto LAB_00ec8aa8;
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00ec8aa8:
      FUN_01280da8(pcVar2);
    }
    FUN_0128236c(pcVar2);
    FUN_0163af68(pcVar2,1,pcVar2);
    if (1 < local_a0 - 3U) {
      FUN_005becd4(auStack_a8);
    }
  }
  do {
    FUN_005c9474(auStack_a8,param_1 + 0x70,param_1 + 0x20);
    if (local_a0 - 3U < 2) {
      return;
    }
    if (*pcVar2 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar2);
      if (!bVar1) goto LAB_00ec8b34;
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00ec8b34:
      FUN_01280da8(pcVar2);
    }
    FUN_0128236c(pcVar2);
    FUN_0163af68(pcVar2,1,pcVar2);
    if (1 < local_a0 - 3U) {
      FUN_005becd4(auStack_a8);
    }
  } while( true );
}

