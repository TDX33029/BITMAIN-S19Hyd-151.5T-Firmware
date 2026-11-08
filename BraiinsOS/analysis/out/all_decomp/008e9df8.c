// FUN_008e9df8 @ 008e9df8 size=356 calls_out=7 calls_in=4
// strings: 

void FUN_008e9df8(int param_1)

{
  bool bVar1;
  char *pcVar2;
  byte local_28 [16];
  
  pcVar2 = (char *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  FUN_01646818(pcVar2);
  FUN_0163b708(param_1 + 0x60);
  while (FUN_008e693c(local_28,param_1 + 0x70,param_1 + 0x20), 1 < local_28[0] - 9) {
    if (*pcVar2 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar2);
      if (!bVar1) goto LAB_008e9e84;
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_008e9e84:
      FUN_01280da8(pcVar2);
    }
    FUN_0128236c(pcVar2);
    FUN_0163af68(pcVar2,1,pcVar2);
    if (1 < local_28[0] - 9) {
      FUN_008e7c78(local_28);
    }
  }
  do {
    FUN_008e693c(local_28,param_1 + 0x70,param_1 + 0x20);
    if (local_28[0] - 9 < 2) {
      return;
    }
    if (*pcVar2 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar2);
      if (!bVar1) goto LAB_008e9f10;
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_008e9f10:
      FUN_01280da8(pcVar2);
    }
    FUN_0128236c(pcVar2);
    FUN_0163af68(pcVar2,1,pcVar2);
    if (1 < local_28[0] - 9) {
      FUN_008e7c78(local_28);
    }
  } while( true );
}

