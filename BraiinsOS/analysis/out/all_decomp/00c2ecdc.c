// FUN_00c2ecdc @ 00c2ecdc size=432 calls_out=2 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00c2ecdc(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  int local_14;
  
  iVar2 = *param_1;
  if (iVar2 == -0x80000000) {
    return;
  }
  if ((param_1[9] & 0x7fffffffU) != 0) {
    thunk_FUN_016d3fb4(param_1[10]);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  if (param_1[6] != 0) {
    thunk_FUN_016d3fb4(param_1[7]);
  }
  if ((param_1[0xc] & 0x7fffffffU) == 0) {
    uVar1 = param_1[0xf];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0xd]);
    uVar1 = param_1[0xf];
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = param_1[0x12];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x10]);
    uVar1 = param_1[0x12];
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = param_1[0x15];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x13]);
    uVar1 = param_1[0x15];
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    iVar2 = param_1[0x18];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x16]);
    iVar2 = param_1[0x18];
  }
  if (iVar2 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = param_1[0x1a];
    local_34 = param_1[0x19];
    local_2c = 0;
    local_3c = 0;
    local_38 = iVar2;
    local_28 = iVar2;
    local_24 = local_34;
  }
  local_40 = (uint)(iVar2 != 0);
  local_30 = local_40;
  while (FUN_00c4564c(local_1c,&local_40), local_1c[0] != 0) {
    iVar2 = local_1c[0] + local_14 * 0xc;
    if (*(int *)(iVar2 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 8));
    }
    if (*(int *)(iVar2 + 0x88) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x8c));
    }
  }
  return;
}

