// FUN_019deb7c @ 019deb7c size=420 calls_out=10 calls_in=15
// strings: mio: | mio: | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019deb7c(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint local_38;
  undefined4 local_34;
  char *local_2c;
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  iVar4 = param_1[3];
  param_1[3] = -1;
  if (iVar4 == -1) {
    return;
  }
  iVar3 = 0x180;
  if (*param_1 != 0) {
    iVar3 = 0xb8;
  }
  piVar7 = (int *)(param_1[1] + iVar3);
  iVar3 = *piVar7;
  if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01d292f4);
  }
  iVar5 = param_1[2];
  if (4 < DAT_01d51b00) {
    local_20 = 9;
    local_28 = 9;
    local_1c = &DAT_01d297f0;
    local_24 = "mio:";
    local_2c = "mio:";
    FUN_015fb650("de",0x4d,5,&local_2c);
    iVar3 = *piVar7;
  }
  FUN_01609548(&local_38,iVar3,iVar4);
  if ((local_38 & 0xff) != 4) {
    if ((local_38 & 0xff) != 4) {
      FUN_0069263c(local_38,local_34);
    }
    goto LAB_014d20c4;
  }
  piVar6 = piVar7 + 3;
  if ((char)*piVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar6);
    if (!bVar1) goto LAB_019dec60;
    *(char *)piVar6 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019dec60:
    FUN_0164fba8(piVar6);
  }
  FUN_0165098c(piVar6);
  iVar3 = FUN_019f7ef0(piVar7 + 2,piVar7 + 4,iVar5);
  FUN_01650a90(piVar6);
  if ((char)*piVar6 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
      if (bVar1) {
        *(char *)piVar6 = '\0';
        goto LAB_019decc4;
      }
    } while ((char)*piVar6 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar6);
LAB_019decc4:
  if (iVar3 != 0) {
    FUN_019f8594(piVar7[1]);
  }
LAB_014d20c4:
  uVar2 = FUN_01beaf68(iVar4);
  iVar4 = thunk_FUN_01bee080(6,uVar2,0);
  if (iVar4 == -4) {
    iVar4 = 0;
  }
  FUN_01be3b5a(iVar4);
  return;
}

