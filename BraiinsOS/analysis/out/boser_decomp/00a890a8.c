// FUN_00a890a8 @ 00a890a8 size=140 calls_out=2 calls_in=0
// strings: 

void FUN_00a890a8(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int extraout_r2;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined1 *local_20;
  undefined4 *local_1c;
  
  uVar4 = thunk_FUN_01bee35a(param_1,param_2,0x60);
  local_34 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar1 = (uint *)((int)uVar4 + extraout_r2);
  uVar2 = *puVar1;
  local_30 = *(uint *)(param_1 + 0x420);
  local_2c = *(uint *)(param_1 + 0x424);
  uVar3 = puVar1[1];
  if ((uVar2 & local_30) == 0 && (uVar3 & local_2c) == 0) {
    local_38 = param_1 + 0x410;
    local_1c = &local_34;
    local_28 = param_1 + 0x428;
    local_20 = (undefined1 *)&local_38;
    FUN_01ab23ec(&local_30);
  }
  else {
    if ((local_30 & local_2c) != 0xffffffff) {
      uVar2 = uVar2 & ~local_30;
      uVar3 = uVar3 & ~local_2c;
    }
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
  }
  return;
}

