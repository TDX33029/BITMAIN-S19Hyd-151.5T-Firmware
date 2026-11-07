// FUN_0077e988 @ 0077e988 size=184 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_0077e988(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 **local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 **local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  DataMemoryBarrier(0xb);
  if (DAT_018cc6d0 != 0) {
    local_28 = &local_38;
    local_38 = &DAT_018cc6c0;
    FUN_015eedc4(&DAT_018cc6d0,1,&local_28,&DAT_0185bc7c,&DAT_018ac9b8);
  }
  uVar1 = DAT_018cc6c4;
  uVar2 = DAT_018cc6c8;
  puVar3 = DAT_018cc6c0;
  FUN_015f3b0c(&local_28,1);
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = local_20;
  local_38 = puVar3;
  local_34 = uVar1;
  local_30 = uVar2;
  FUN_015f3c24(&local_28,&local_48,&local_38);
  if (((uint)local_28 & 1) != 0) {
    local_20 = 0;
    local_1c = 0;
  }
  return CONCAT44(local_1c,local_20);
}

