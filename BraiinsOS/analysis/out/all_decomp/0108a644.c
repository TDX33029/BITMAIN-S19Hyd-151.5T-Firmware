// FUN_0108a644 @ 0108a644 size=168 calls_out=2 calls_in=3
// strings: 

void FUN_0108a644(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint local_20;
  undefined2 local_1a;
  uint local_18;
  undefined2 local_14;
  undefined2 local_12;
  
  FUN_01084af8(param_1 + 8);
  uVar1 = *(ushort *)(param_1 + 0x50);
  local_20 = (uint)uVar1;
  FUN_0108a6ec(param_2,&local_20,4);
  if (uVar1 == 0x24) {
    local_1a = *(undefined2 *)(param_1 + 0x52);
    FUN_0108a6ec(param_2,&local_1a,2);
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x4c);
  local_18 = uVar3;
  FUN_0108a6ec(param_2,&local_18,4);
  if (uVar3 == 6) {
    puVar2 = &local_12;
    local_12 = *(undefined2 *)(param_1 + 0x4e);
  }
  else {
    if (uVar3 != 5) {
      return;
    }
    local_14 = *(undefined2 *)(param_1 + 0x4e);
    puVar2 = &local_14;
  }
  FUN_0108a6ec(param_2,puVar2,2);
  return;
}

