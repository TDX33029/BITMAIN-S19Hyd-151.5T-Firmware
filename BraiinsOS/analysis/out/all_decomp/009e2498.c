// FUN_009e2498 @ 009e2498 size=184 calls_out=2 calls_in=0
// strings: 

void FUN_009e2498(int param_1)

{
  int iVar1;
  uint uVar2;
  uint extraout_r2;
  uint extraout_r3;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 in_stack_00000000;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined1 *local_20;
  undefined4 *local_1c;
  
  uVar5 = thunk_FUN_016de0ee();
  local_34 = (undefined4)((ulonglong)uVar5 >> 0x20);
  iVar1 = (int)uVar5;
  uVar4 = *(uint *)(iVar1 + 0x80);
  local_30 = *(uint *)(param_1 + 0x118);
  local_2c = *(uint *)(param_1 + 0x11c);
  uVar3 = 0xffffffff;
  if ((uVar4 & local_30) == 0 && (*(uint *)(iVar1 + 0x84) & local_2c) == 0) {
    local_38 = param_1 + 0x120;
    local_1c = &local_34;
    local_28 = in_stack_00000000;
    if (extraout_r2 != 0xffffffff || extraout_r3 != 0xffffffff) {
      local_2c = local_2c | extraout_r3;
      local_30 = local_30 | extraout_r2;
    }
    local_20 = (undefined1 *)&local_38;
    FUN_009e4aa0(&local_30);
    return;
  }
  uVar2 = 0xffffffff;
  if (local_30 != 0xffffffff || local_2c != 0xffffffff) {
    uVar3 = ~local_30;
    uVar2 = ~local_2c;
  }
  *(uint *)(iVar1 + 0x80) = uVar3 & uVar4;
  *(uint *)(iVar1 + 0x84) = uVar2 & *(uint *)(iVar1 + 0x84);
  return;
}

