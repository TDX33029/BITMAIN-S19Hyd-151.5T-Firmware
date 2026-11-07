// FUN_014d06ac @ 014d06ac size=320 calls_out=5 calls_in=3
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_014d06ac(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint local_78;
  uint local_74;
  int local_70;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  undefined1 *local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  FUN_0165a798(&local_78);
  uVar5 = local_78 + param_3;
  uVar1 = local_74 + param_4 + (uint)CARRY4(local_78,param_3);
  if ((int)param_4 < 0 == (int)((local_74 ^ uVar1) & ~(local_74 ^ param_4)) < 0) {
    puVar3 = (undefined1 *)(local_70 + param_5);
    if (puVar3 < &DAT_3b9aca00) {
LAB_014d075c:
      local_28 = FUN_0164ec90(param_7);
      iVar2 = 0x180;
      if ((local_28 & 1) != 0) {
        iVar2 = 0xb8;
      }
      if (*(undefined1 **)((int)(local_28 >> 0x20) + iVar2 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,param_7);
      }
      local_74 = 0;
      local_78 = 0;
      local_30 = 0;
      local_40 = uVar5;
      local_3c = uVar1;
      local_38 = puVar3;
      local_48 = local_28;
      goto LAB_014d07b0;
    }
    bVar6 = 0xfffffffe < uVar5;
    uVar5 = uVar5 + 1;
    uVar4 = uVar1 + bVar6;
    if (-1 < (int)((uVar1 ^ uVar4) & ~uVar1)) {
      puVar3 = puVar3 + -1000000000;
      uVar1 = uVar4;
      if (puVar3 != &DAT_3b9aca00) goto LAB_014d075c;
    }
  }
  FUN_01656dc8(&local_78);
  local_48 = CONCAT44(local_48._4_4_,(undefined4)local_48);
LAB_014d07b0:
  FUN_016dd1aa(param_1 + 0x50,param_6,0x48);
  FUN_016dd1aa(param_1,&local_78,0x50);
  return;
}

