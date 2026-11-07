// FUN_00d9240c @ 00d9240c size=452 calls_out=2 calls_in=2
// strings: 

void FUN_00d9240c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
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
  
  if (*(int *)(param_1 + 0xd4) == -0x80000000 || *(int *)(param_1 + 0xd4) == 0) {
    if (*(int *)(param_1 + 0xe0) != -0x80000000 && *(int *)(param_1 + 0xe0) != 0) {
LAB_00d925ac:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
      iVar1 = *(int *)(param_1 + 0xb0);
      goto joined_r0x00d92440;
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    if (*(int *)(param_1 + 0xe0) != -0x80000000 && *(int *)(param_1 + 0xe0) != 0) goto LAB_00d925ac;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
joined_r0x00d92440:
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
  }
  if ((*(uint *)(param_1 + 0x30) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0xec) != -0x80000000 && *(int *)(param_1 + 0xec) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
  }
  iVar1 = *(int *)(param_1 + 0xcc);
  piVar2 = (int *)(iVar1 + 0x20);
  for (iVar3 = *(int *)(param_1 + 0xd0); iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*piVar2 != 0) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
    piVar2 = piVar2 + 0xc;
  }
  if (*(int *)(param_1 + 200) != 0) {
    thunk_FUN_016d3fb4(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x104);
    local_3c = *(undefined4 *)(param_1 + 0x100);
    local_34 = 0;
    local_44 = 0;
    local_40 = iVar1;
    local_30 = iVar1;
    local_2c = local_3c;
  }
  local_48 = (uint)(iVar1 != 0);
  local_38 = local_48;
  while (FUN_00ea8ae8(local_24,&local_48), local_24[0] != 0) {
    iVar1 = local_24[0] + local_1c * 0xc;
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 8));
    }
    if (*(int *)(iVar1 + 0x88) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x8c));
    }
  }
  return;
}

