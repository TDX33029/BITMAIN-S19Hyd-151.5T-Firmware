// FUN_019e7070 @ 019e7070 size=384 calls_out=9 calls_in=2
// strings: mio: | mio: | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019e7070(uint *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint local_40;
  uint local_3c;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined *local_24;
  
  iVar2 = 0x180;
  if (*param_2 != 0) {
    iVar2 = 0xb8;
  }
  piVar5 = (int *)(param_2[1] + iVar2);
  iVar2 = *piVar5;
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01d292f4);
  }
  iVar3 = param_2[2];
  if (4 < DAT_01d51b00) {
    local_28 = 9;
    local_30 = 9;
    local_24 = &DAT_01d297f0;
    local_2c = "mio:";
    local_34 = "mio:";
    FUN_015fb650("de",0x4d,5,&local_34);
  }
  FUN_01609548(&local_40,iVar2,param_3);
  if (((char)local_40 != '\x04') && ((local_40 & 0xff) != 4)) {
    *param_1 = local_40;
    param_1[1] = local_3c;
    return;
  }
  piVar4 = piVar5 + 3;
  if ((char)*piVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
    if (bVar1) {
      *(char *)piVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019e7144;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(piVar4);
LAB_019e7144:
  FUN_0165098c(piVar4);
  iVar2 = FUN_019f7ef0(piVar5 + 2,piVar5 + 4,iVar3);
  FUN_01650a90(piVar4);
  if ((char)*piVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (bVar1) {
        *(char *)piVar4 = '\0';
        goto LAB_019e71a0;
      }
    } while ((char)*piVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar4);
LAB_019e71a0:
  if (iVar2 != 0) {
    FUN_019f8594(piVar5[1]);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

