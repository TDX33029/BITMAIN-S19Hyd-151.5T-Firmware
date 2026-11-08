// FUN_008ec7a8 @ 008ec7a8 size=452 calls_out=2 calls_in=1
// strings: 

void FUN_008ec7a8(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24 [2];
  int local_1c;
  
  if ((*(uint *)(param_1 + 0xd4) & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0xe0);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    uVar1 = *(uint *)(param_1 + 0xe0);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    iVar2 = *(int *)(param_1 + 0xb0);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    iVar2 = *(int *)(param_1 + 0xb0);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
  }
  if ((*(uint *)(param_1 + 0x30) & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0xec);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
    uVar1 = *(uint *)(param_1 + 0xec);
  }
  if ((uVar1 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
  }
  iVar2 = *(int *)(param_1 + 0xcc);
  piVar3 = (int *)(iVar2 + 0x20);
  for (iVar4 = *(int *)(param_1 + 0xd0); iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
    piVar3 = piVar3 + 0xc;
  }
  if (*(int *)(param_1 + 200) != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  iVar2 = *(int *)(param_1 + 0xfc);
  if (iVar2 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x104);
    local_3c = *(undefined4 *)(param_1 + 0x100);
    local_34 = 0;
    local_44 = 0;
    local_40 = iVar2;
    local_30 = iVar2;
    local_2c = local_3c;
  }
  local_48 = (uint)(iVar2 != 0);
  local_38 = local_48;
  while (FUN_00a5bbe4(local_24,&local_48), local_24[0] != 0) {
    iVar2 = local_24[0] + local_1c * 0xc;
    if (*(int *)(iVar2 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 8));
    }
    if (*(int *)(iVar2 + 0x88) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x8c));
    }
  }
  return;
}

