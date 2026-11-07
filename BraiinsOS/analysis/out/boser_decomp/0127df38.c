// FUN_0127df38 @ 0127df38 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_0127df38(int param_1)

{
  undefined4 uVar1;
  char local_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  
  FUN_01ae1d6c(local_44);
  if (local_44[0] == '\x01') {
    local_20 = &local_30;
    local_30 = local_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    local_1c = &LAB_01ae2350;
    uVar1 = FUN_019676ac(&DAT_005b308a,&local_20);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  else {
    FUN_01bed4e2(param_1 + 1,(uint)local_44 | 1,0x10);
  }
  *(bool *)param_1 = local_44[0] == '\x01';
  return;
}

