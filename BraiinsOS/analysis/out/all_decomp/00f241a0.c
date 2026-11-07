// FUN_00f241a0 @ 00f241a0 size=520 calls_out=2 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00f241a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [2];
  int local_1c;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (puVar1[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar1);
    }
    puVar1 = puVar1 + 3;
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  iVar2 = param_1[3];
  if (iVar2 == -0x80000000) {
    return;
  }
  if (param_1[0xc] != -0x80000000 && param_1[0xc] != 0) {
    thunk_FUN_016d3fb4(param_1[0xd]);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  if (param_1[6] != 0) {
    thunk_FUN_016d3fb4(param_1[7]);
  }
  if (param_1[9] != 0) {
    thunk_FUN_016d3fb4(param_1[10]);
  }
  if (param_1[0xf] == -0x80000000 || param_1[0xf] == 0) {
    if (param_1[0x12] != -0x80000000 && param_1[0x12] != 0) goto LAB_00f242f4;
LAB_00f24270:
    if (param_1[0x15] != -0x80000000 && param_1[0x15] != 0) goto LAB_00f2430c;
LAB_00f24280:
    if (param_1[0x18] == -0x80000000 || param_1[0x18] == 0) {
LAB_00f24290:
      iVar2 = param_1[0x1b];
      goto joined_r0x00f24334;
    }
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x10]);
    if (param_1[0x12] == -0x80000000 || param_1[0x12] == 0) goto LAB_00f24270;
LAB_00f242f4:
    thunk_FUN_016d3fb4(param_1[0x13]);
    if (param_1[0x15] == -0x80000000 || param_1[0x15] == 0) goto LAB_00f24280;
LAB_00f2430c:
    thunk_FUN_016d3fb4(param_1[0x16]);
    if (param_1[0x18] == -0x80000000 || param_1[0x18] == 0) goto LAB_00f24290;
  }
  thunk_FUN_016d3fb4(param_1[0x19]);
  iVar2 = param_1[0x1b];
joined_r0x00f24334:
  if (iVar2 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = param_1[0x1d];
    local_3c = param_1[0x1c];
    local_34 = 0;
    local_44 = 0;
    local_40 = iVar2;
    local_30 = iVar2;
    local_2c = local_3c;
  }
  local_48 = (uint)(iVar2 != 0);
  local_38 = local_48;
  while (FUN_00ea8ae8(local_24,&local_48), local_24[0] != 0) {
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

