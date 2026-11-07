// FUN_019df5e4 @ 019df5e4 size=324 calls_out=7 calls_in=2
// strings: 

void FUN_019df5e4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_b0 [128];
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 *local_20;
  code *local_1c;
  
  cVar4 = *(char *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (cVar4 == '\x01') {
    FUN_01bed93e(auStack_b0,0,0x80);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    while( true ) {
      FUN_019bb3cc(&local_30,uVar6,auStack_b0,0x80);
      if ((char)local_30 != '\x04') break;
      if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0056a4e8,0x21,&DAT_01d28f5c);
      }
    }
    cVar4 = FUN_005ef5e8(&local_30);
    if (cVar4 != '\r') {
      local_1c = FUN_019a7d7c;
      local_20 = &local_28;
      local_24 = local_2c;
      local_28 = local_30;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0057c68e,&local_20,&DAT_01d28f6c);
    }
    FUN_0069263c(local_30,local_2c);
    DataMemoryBarrier(0xb);
    if (DAT_01d50444 != 0) {
      FUN_019e9c64();
    }
    iVar3 = DAT_01d50440;
    iVar2 = DAT_01d5043c;
    if (DAT_01d50440 != 0) {
      iVar7 = 0;
      do {
        DataMemoryBarrier(0xb);
        pcVar5 = (char *)(iVar2 + iVar7 * 0x10 + 4);
        do {
          cVar4 = *pcVar5;
          bVar1 = (bool)hasExclusiveAccess(pcVar5);
        } while (!bVar1);
        *pcVar5 = '\0';
        DataMemoryBarrier(0xb);
        if (cVar4 != '\0') {
          FUN_019d81dc();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar3);
    }
  }
  return;
}

