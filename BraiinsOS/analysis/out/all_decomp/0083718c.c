// FUN_0083718c @ 0083718c size=192 calls_out=3 calls_in=0
// strings: 

void FUN_0083718c(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 **local_2c;
  undefined1 *local_28;
  undefined1 local_24;
  undefined1 *local_20;
  undefined1 auStack_1c [12];
  
  uVar1 = 2;
  local_20 = param_3;
  if (param_3 != &DAT_000f4240) {
    if (param_3 != &DAT_002faf08) {
      local_2c = &local_20;
      local_28 = &LAB_00fac484;
      FUN_00600d2c(auStack_1c,&DAT_00575243,&local_2c);
      uVar2 = FUN_008c8bc8(auStack_1c);
      param_1[3] = uVar2;
      *(undefined1 *)(param_1 + 2) = 9;
      *param_1 = 1;
      return;
    }
    uVar1 = 0;
  }
  local_24 = 1;
  local_2c = (undefined1 **)((uint)uVar1 << 0x10);
  local_28 = (undefined1 *)0x0;
  FUN_008a2a2c(param_1 + 1,&local_2c);
  param_1[6] = param_3;
  *param_1 = 0;
  return;
}

