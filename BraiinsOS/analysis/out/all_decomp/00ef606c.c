// FUN_00ef606c @ 00ef606c size=312 calls_out=5 calls_in=1
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_00ef606c(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  undefined1 local_38;
  undefined8 local_2c;
  
  FUN_0165a798(&local_80);
  uVar4 = local_80 + param_3;
  uVar1 = local_7c + param_4 + (uint)CARRY4(local_80,param_3);
  if ((int)param_4 < 0 == (int)((local_7c ^ uVar1) & ~(local_7c ^ param_4)) < 0) {
    puVar5 = (undefined1 *)(local_78 + param_5);
    if (puVar5 < &DAT_3b9aca00) {
LAB_00ef6120:
      local_2c = FUN_0164ec90(param_8);
      iVar2 = 0x180;
      if ((local_2c & 1) != 0) {
        iVar2 = 0xb8;
      }
      if (*(undefined1 **)((int)(local_2c >> 0x20) + iVar2 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,param_8);
      }
      local_7c = 0;
      local_80 = 0;
      local_38 = 0;
      local_48 = uVar4;
      local_44 = uVar1;
      local_40 = puVar5;
      local_50 = local_2c;
      goto LAB_00ef6174;
    }
    bVar6 = 0xfffffffe < uVar4;
    uVar4 = uVar4 + 1;
    uVar3 = uVar1 + bVar6;
    if (-1 < (int)((uVar1 ^ uVar3) & ~uVar1)) {
      puVar5 = puVar5 + -1000000000;
      uVar1 = uVar3;
      if (puVar5 != &DAT_3b9aca00) goto LAB_00ef6120;
    }
  }
  FUN_01656dc8(&local_80);
  local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
LAB_00ef6174:
  FUN_016dd1aa(param_1,&local_80,0x50);
  *(undefined4 *)(param_1 + 0x50) = param_6;
  *(undefined4 *)(param_1 + 0x54) = param_7;
  return;
}

