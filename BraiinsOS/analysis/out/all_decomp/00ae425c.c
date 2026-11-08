// FUN_00ae425c @ 00ae425c size=492 calls_out=5 calls_in=0
// strings: assertion failed: prev.is_running() | assertion failed: !prev.is_complete() | waker missing | assertion failed: prev.is_complete() | assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0

void FUN_00ae425c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 local_98 [28];
  uint local_28;
  uint local_24;
  uint *local_20;
  undefined1 *local_1c;
  uint *local_18;
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
    local_98[0] = 2;
    FUN_00cc70e4(param_1 + 6,local_98);
  }
  else if ((uVar2 & 0x10) != 0) {
    if (param_1[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("waker missing",0x1b,&DAT_018acea4);
    }
    (**(code **)(param_1[0x28] + 8))(param_1[0x29]);
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar2 & 0xffffffef;
    DataMemoryBarrier(0xb);
    if ((uVar2 & 2) == 0) {
      uVar5 = 0x24;
      puVar6 = &DAT_018ad27c;
      pcVar4 = "assertion failed: prev.is_complete()";
    }
    else {
      if ((uVar2 & 0x10) != 0) {
        if ((uVar2 & 8) == 0) {
          if (param_1[0x28] != 0) {
            (**(code **)(param_1[0x28] + 0xc))(param_1[0x29]);
          }
          param_1[0x28] = 0;
        }
        goto LAB_00ae4328;
      }
      uVar5 = 0x2a;
      puVar6 = &DAT_018ad28c;
      pcVar4 = 
      "assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0";
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(pcVar4,uVar5,puVar6);
  }
LAB_00ae4328:
  iVar3 = FUN_01659cf4(param_1[6],param_1);
  local_28 = 2;
  if (iVar3 == 0) {
    local_28 = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 + local_28 * -0x40;
  DataMemoryBarrier(0xb);
  local_24 = uVar2 >> 6;
  if (uVar2 >> 6 < local_28) {
    local_18 = &local_28;
    local_20 = &local_24;
    local_14 = &LAB_00fac484;
    local_1c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056f1c8,&local_20,&DAT_018ad26c);
  }
  if (local_24 == local_28) {
    FUN_00ad8ca4(param_1);
    return;
  }
  return;
}

