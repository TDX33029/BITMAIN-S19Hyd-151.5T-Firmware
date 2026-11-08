// FUN_016354e0 @ 016354e0 size=628 calls_out=9 calls_in=1
// strings: assertion failed: prev.is_running() | assertion failed: !prev.is_complete() | waker missing | assertion failed: prev.is_complete() | assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0

void FUN_016354e0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 local_40 [6];
  undefined4 local_28;
  uint local_24;
  uint *local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 ^ 3;
  DataMemoryBarrier(0xb);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: prev.is_running()",0x23,&DAT_018ad24c);
  }
  if ((uVar2 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !prev.is_complete()",0x25,&DAT_018ad25c);
  }
  if ((uVar2 & 8) == 0) {
    local_40[0] = 2;
    FUN_016531b0(param_1 + 6,local_40);
  }
  else if ((uVar2 & 0x10) != 0) {
    if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("waker missing",0x1b,&DAT_018acea4);
    }
    (**(code **)(param_1[0x14] + 8))(param_1[0x15]);
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar2 & 0xffffffef;
    DataMemoryBarrier(0xb);
    if ((uVar2 & 2) == 0) {
      uVar3 = 0x24;
      puVar4 = &DAT_018ad27c;
      pcVar5 = "assertion failed: prev.is_complete()";
LAB_01635754:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(pcVar5,uVar3,puVar4);
    }
    if ((uVar2 & 0x10) == 0) {
      uVar3 = 0x2a;
      puVar4 = &DAT_018ad28c;
      pcVar5 = 
      "assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0";
      goto LAB_01635754;
    }
    if ((uVar2 & 8) == 0) {
      if (param_1[0x14] != 0) {
        (**(code **)(param_1[0x14] + 0xc))(param_1[0x15]);
      }
      param_1[0x14] = 0;
    }
  }
  if (param_1[6] != 0) goto LAB_0163563c;
  uVar2 = param_1[7];
  pcVar5 = (char *)(uVar2 + 0x180);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (!bVar1) goto LAB_01635694;
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01635694:
    FUN_01280da8(pcVar5);
  }
  FUN_0128236c(pcVar5);
  *(int *)(uVar2 + 0x1a8) = *(int *)(uVar2 + 0x1a8) + -1;
  FUN_01282570(pcVar5);
  if (*pcVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar1) {
        *pcVar5 = '\0';
        goto LAB_01635634;
      }
    } while (*pcVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar5);
LAB_01635634:
  FUN_01647770(pcVar5);
LAB_0163563c:
  local_28 = 1;
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 - 0x40;
  DataMemoryBarrier(0xb);
  local_24 = uVar2 >> 6;
  if (uVar2 >> 6 == 0) {
    local_18 = &local_28;
    local_20 = &local_24;
    local_14 = &LAB_00fac484;
    local_1c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056f1c8,&local_20,&DAT_018ad26c);
  }
  if (local_24 == 1) {
    FUN_01634c3c(param_1);
    return;
  }
  return;
}

