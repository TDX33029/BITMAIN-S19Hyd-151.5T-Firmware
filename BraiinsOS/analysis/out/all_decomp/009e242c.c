// FUN_009e242c @ 009e242c size=104 calls_out=2 calls_in=0
// strings: 

void FUN_009e242c(int param_1)

{
  uint *puVar1;
  int extraout_r3;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int local_20;
  undefined4 local_1c;
  
  uVar6 = thunk_FUN_016de0ee();
  local_1c = (undefined4)((ulonglong)uVar6 >> 0x20);
  puVar1 = (uint *)((int)uVar6 + extraout_r3);
  uVar2 = *puVar1;
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar5 = *(uint *)(param_1 + 0x2c);
  uVar3 = puVar1[1];
  if ((uVar2 & uVar4) == 0 && (uVar3 & uVar5) == 0) {
    local_20 = param_1;
    FUN_009e38c0(&local_20,&local_1c);
    return;
  }
  if ((uVar4 & uVar5) != 0xffffffff) {
    uVar3 = uVar3 & ~uVar5;
    uVar2 = uVar2 & ~uVar4;
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}

