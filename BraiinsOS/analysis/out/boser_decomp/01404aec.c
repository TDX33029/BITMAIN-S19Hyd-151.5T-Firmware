// FUN_01404aec @ 01404aec size=160 calls_out=1 calls_in=0
// strings: 

void FUN_01404aec(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *local_18;
  uint uStack_14;
  undefined1 *local_10;
  undefined2 *local_c;
  
  local_10 = (undefined1 *)&local_18;
  uVar1 = 1;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    uStack_14 = param_1[2];
    local_18 = (uint *)param_1[1];
    puVar2 = &DAT_00590e5f;
    local_c = &DAT_0132b6a0;
  }
  else {
    if (uVar1 == 1) {
      puVar2 = &DAT_00590e5f;
      local_c = (undefined2 *)&LAB_0193a90c;
    }
    else {
      param_1 = param_1 + 1;
      local_c = (undefined2 *)&DAT_0140a16c;
      puVar2 = &DAT_005a1a7f;
    }
    local_18 = param_1;
  }
  FUN_012fa178(*param_2,param_2[1],puVar2,&local_10);
  return;
}

