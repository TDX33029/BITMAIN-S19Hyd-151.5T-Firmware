// FUN_016359d0 @ 016359d0 size=276 calls_out=2 calls_in=1
// strings: 

void FUN_016359d0(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint local_28;
  undefined2 local_22;
  undefined2 *local_20;
  code *local_1c;
  undefined2 *local_18;
  code *local_14;
  
  puVar3 = &local_28;
  uVar4 = *(uint *)(param_2 + 4);
  local_28 = uVar4;
  if (uVar4 < 8) {
    local_14 = FUN_012fd02c;
    local_18 = (undefined2 *)&DAT_0056f190;
    local_1c = FUN_012fd02c;
    local_20 = (undefined2 *)&local_28;
  }
  else {
    uVar2 = FUN_01635b0c(param_2);
    if (uVar4 < (uVar2 & 0xffff)) {
      local_22 = FUN_01635b0c(param_2);
      local_18 = &local_22;
      local_14 = FUN_012fcf18;
      local_1c = FUN_012fd02c;
    }
    else {
      uVar1 = FUN_01635b0c(param_2);
      if (7 < uVar1) {
        *param_1 = 0x80000000;
        return;
      }
      local_22 = FUN_01635b0c(param_2);
      puVar3 = (uint *)&local_22;
      local_14 = FUN_012fd02c;
      local_18 = (undefined2 *)&DAT_0056f190;
      local_1c = FUN_012fcf18;
    }
    local_20 = (undefined2 *)puVar3;
  }
  FUN_00664898(param_1,&DAT_005a04c1,&local_20);
  return;
}

