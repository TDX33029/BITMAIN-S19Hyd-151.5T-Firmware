// FUN_00ef635c @ 00ef635c size=276 calls_out=5 calls_in=1
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_00ef635c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  uint local_78;
  uint local_74;
  undefined1 *local_70;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  undefined1 *local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  FUN_0165a798(&local_78);
  uVar3 = local_78 + 1;
  uVar1 = local_74 + (0xfffffffe < local_78);
  if ((int)((local_74 ^ uVar1) & ~local_74) < 0) {
LAB_00ef63d4:
    FUN_01656dc8(&local_78);
    local_48 = CONCAT44(local_48._4_4_,(undefined4)local_48);
  }
  else {
    if (local_70 < &DAT_3b9aca00) {
      puVar5 = local_70;
    }
    else {
      bVar6 = 0xfffffffe < uVar3;
      uVar3 = local_78 + 2;
      uVar4 = uVar1 + bVar6;
      if (((int)((uVar1 ^ uVar4) & ~uVar1) < 0) ||
         (uVar1 = uVar4, puVar5 = local_70 + -1000000000, local_70 + -1000000000 == &DAT_3b9aca00))
      goto LAB_00ef63d4;
    }
    local_28 = FUN_0164ec90(param_3);
    iVar2 = 0x180;
    if ((local_28 & 1) != 0) {
      iVar2 = 0xb8;
    }
    if (*(undefined1 **)((int)(local_28 >> 0x20) + iVar2 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,param_3);
    }
    local_74 = 0;
    local_78 = 0;
    local_30 = 0;
    local_40 = uVar3;
    local_3c = uVar1;
    local_38 = puVar5;
    local_48 = local_28;
  }
  FUN_016dd1aa(param_1 + 0x50,param_2,0x218);
  FUN_016dd1aa(param_1,&local_78,0x50);
  return;
}

