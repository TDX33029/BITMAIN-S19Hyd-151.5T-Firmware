// FUN_00d0bb18 @ 00d0bb18 size=272 calls_out=5 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_00d0bb18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  undefined1 *local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  FUN_0165a798(&local_78);
  if (local_70 < 900000000) {
    puVar3 = (undefined1 *)(local_70 + 100000000);
    uVar2 = local_74;
    uVar4 = local_78;
LAB_00d0bba0:
    local_28 = FUN_0164ec90(param_3);
    iVar1 = 0x180;
    if ((local_28 & 1) != 0) {
      iVar1 = 0xb8;
    }
    if (*(undefined1 **)((int)(local_28 >> 0x20) + iVar1 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,param_3);
    }
    local_74 = 0;
    local_78 = 0;
    local_30 = 0;
    local_40 = uVar4;
    local_3c = uVar2;
    local_38 = puVar3;
    local_48 = local_28;
  }
  else {
    uVar2 = local_74 + (0xfffffffe < local_78);
    if (-1 < (int)((local_74 ^ uVar2) & ~local_74)) {
      puVar3 = (undefined1 *)(local_70 + 0xca5b1700);
      uVar4 = local_78 + 1;
      if (puVar3 != &DAT_3b9aca00) goto LAB_00d0bba0;
    }
    FUN_01656dc8(&local_78);
    local_48 = CONCAT44(local_48._4_4_,(undefined4)local_48);
  }
  FUN_016dd1aa(param_1,&local_78,0x50);
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}

