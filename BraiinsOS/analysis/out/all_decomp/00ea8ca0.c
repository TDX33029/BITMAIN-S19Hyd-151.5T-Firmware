// FUN_00ea8ca0 @ 00ea8ca0 size=252 calls_out=3 calls_in=0
// strings: 

void FUN_00ea8ca0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_50 [3];
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  int local_24;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    local_30 = 0;
  }
  else {
    local_44 = param_1[1];
    local_30 = param_1[2];
    local_3c = 0;
    local_50[1] = 0;
    local_50[2] = iVar2;
    local_38 = iVar2;
    local_34 = local_44;
  }
  local_50[0] = (uint)(iVar2 != 0);
  local_40 = local_50[0];
  while( true ) {
    FUN_00ea8d9c(local_2c,local_50);
    iVar4 = local_24;
    iVar2 = local_2c[0];
    if (local_2c[0] == 0) break;
    iVar1 = local_2c[0] + local_24 * 0xc;
    if (*(int *)(iVar1 + 0x94c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x950));
    }
    iVar2 = iVar4 * 0xd8 + iVar2;
    piVar3 = (int *)(*(int *)(iVar2 + 0xcc) + 8);
    for (iVar4 = *(int *)(iVar2 + 0xd0); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*piVar3 != 0) {
        thunk_FUN_016d3fb4(piVar3[1]);
      }
      piVar3 = piVar3 + 8;
    }
    if (*(int *)(iVar2 + 200) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0xcc));
    }
    FUN_00ea8f64(iVar2);
  }
  return;
}

