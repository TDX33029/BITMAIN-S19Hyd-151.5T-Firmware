// FUN_00b52204 @ 00b52204 size=216 calls_out=4 calls_in=0
// strings: 

void FUN_00b52204(int param_1,int param_2)

{
  undefined4 **ppuVar1;
  undefined4 uVar2;
  undefined1 auStack_330 [320];
  undefined4 **local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 *local_28;
  
  FUN_016dd1aa(auStack_330,param_2,0x140);
  uVar2 = *(undefined4 *)(param_2 + 0x140);
  FUN_015f3b0c(&local_1f0,1);
  ppuVar1 = local_1f0;
  DataMemoryBarrier(0xb);
  if (DAT_018daad0 != 0) {
    local_1f0 = &local_28;
    local_28 = &DAT_018daad0;
    FUN_015eedc4(&DAT_018daad0,1,&local_1f0,&DAT_018590cc,&DAT_018ac9b8);
  }
  FUN_006f8940(&local_1f0,DAT_018daadc,ppuVar1,uStack_1ec,uStack_1e8,DAT_018daad8,DAT_018daadc);
  FUN_016dd1aa(param_1,param_2,0x140);
  FUN_016dd1aa(param_1 + 0x140,&local_1f0,0x1c0);
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  return;
}

