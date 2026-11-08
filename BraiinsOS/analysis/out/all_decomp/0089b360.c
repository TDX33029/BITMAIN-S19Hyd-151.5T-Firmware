// FUN_0089b360 @ 0089b360 size=196 calls_out=3 calls_in=0
// strings: 

void FUN_0089b360(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 **local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 *local_20;
  undefined1 auStack_1c [12];
  
  uVar1 = 2;
  local_20 = param_3;
  if (param_3 != &DAT_000f4240) {
    if (param_3 != &DAT_002faf08) {
      local_30 = &local_20;
      local_2c = &LAB_00fac484;
      FUN_00600d2c(auStack_1c,&DAT_00575243,&local_30);
      uVar2 = FUN_008c8bc8(auStack_1c);
      param_1[3] = uVar2;
      *(undefined1 *)(param_1 + 2) = 9;
      *param_1 = 1;
      return;
    }
    uVar1 = 0;
  }
  local_2c = (undefined1 *)0x1300;
  local_24 = 0;
  local_30 = (undefined1 **)(uint)uVar1;
  local_28 = 0;
  FUN_0080bb54(param_1 + 1,&local_30);
  param_1[6] = param_3;
  *param_1 = 0;
  return;
}

