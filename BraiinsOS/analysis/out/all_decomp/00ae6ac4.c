// FUN_00ae6ac4 @ 00ae6ac4 size=628 calls_out=9 calls_in=0
// strings: assertion failed: prev.is_running() | assertion failed: !prev.is_complete() | waker missing | assertion failed: prev.is_complete() | assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0

void FUN_00ae6ac4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 local_620 [380];
  undefined4 local_30;
  uint local_2c;
  uint *local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  
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
    local_620[0] = 2;
    FUN_00ccce8c(param_1 + 6,local_620);
  }
  else if ((uVar2 & 0x10) != 0) {
    if (param_1[0x18a] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("waker missing",0x1b,&DAT_018acea4);
    }
    (**(code **)(param_1[0x18a] + 8))(param_1[0x18b]);
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
LAB_00ae6d38:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(pcVar5,uVar3,puVar4);
    }
    if ((uVar2 & 0x10) == 0) {
      uVar3 = 0x2a;
      puVar4 = &DAT_018ad28c;
      pcVar5 = 
      "assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0";
      goto LAB_00ae6d38;
    }
    if ((uVar2 & 8) == 0) {
      if (param_1[0x18a] != 0) {
        (**(code **)(param_1[0x18a] + 0xc))(param_1[0x18b]);
      }
      param_1[0x18a] = 0;
    }
  }
  if (param_1[6] != 0) goto LAB_00ae6c24;
  uVar2 = param_1[7];
  pcVar5 = (char *)(uVar2 + 0x180);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (!bVar1) goto LAB_00ae6c74;
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00ae6c74:
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
        goto LAB_00ae6c1c;
      }
    } while (*pcVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar5);
LAB_00ae6c1c:
  FUN_01647770(pcVar5);
LAB_00ae6c24:
  local_30 = 1;
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 - 0x40;
  DataMemoryBarrier(0xb);
  local_2c = uVar2 >> 6;
  if (uVar2 >> 6 == 0) {
    local_20 = &local_30;
    local_28 = &local_2c;
    local_1c = &LAB_00fac484;
    local_24 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056f1c8,&local_28,&DAT_018ad26c);
  }
  if (local_2c == 1) {
    FUN_00addd58(param_1);
  }
  return;
}

