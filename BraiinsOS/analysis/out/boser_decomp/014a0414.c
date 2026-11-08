// FUN_014a0414 @ 014a0414 size=408 calls_out=10 calls_in=1
// strings: mio: | mio: | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

int FUN_014a0414(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint local_38;
  undefined4 local_34;
  char *local_2c;
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  iVar3 = param_1[3];
  param_1[3] = -1;
  if (iVar3 == -1) {
    return -1;
  }
  iVar2 = 0x180;
  if (*param_1 != 0) {
    iVar2 = 0xb8;
  }
  piVar6 = (int *)(param_1[1] + iVar2);
  iVar2 = *piVar6;
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01d292f4);
  }
  iVar4 = param_1[2];
  if (4 < DAT_01d51b00) {
    local_20 = 9;
    local_28 = 9;
    local_1c = &DAT_01d297f0;
    local_24 = "mio:";
    local_2c = "mio:";
    FUN_01ac6264("de",0x4d,5,&local_2c);
    iVar2 = *piVar6;
  }
  FUN_01609548(&local_38,iVar2,iVar3);
  if ((local_38 & 0xff) != 4) {
    if ((local_38 & 0xff) == 4) {
      return iVar3;
    }
    FUN_0069d8a4(local_38,local_34);
    return iVar3;
  }
  piVar5 = piVar6 + 3;
  if ((char)*piVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar5);
    if (bVar1) {
      *(char *)piVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_014a04f8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(piVar5);
LAB_014a04f8:
  FUN_0165098c(piVar5);
  iVar2 = FUN_019f7ef0(piVar6 + 2,piVar6 + 4,iVar4);
  FUN_01650a90(piVar5);
  if ((char)*piVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar5);
      if (bVar1) {
        *(char *)piVar5 = '\0';
        goto LAB_014a0554;
      }
    } while ((char)*piVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar5);
LAB_014a0554:
  if (iVar2 != 0) {
    FUN_019f8594(piVar6[1]);
  }
  return iVar3;
}

