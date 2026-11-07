// FUN_01aeda5c @ 01aeda5c size=164 calls_out=2 calls_in=1
// strings: 

void FUN_01aeda5c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_48 [3];
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [2];
  int local_1c;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    local_28 = 0;
  }
  else {
    local_3c = param_1[1];
    local_28 = param_1[2];
    local_34 = 0;
    local_48[1] = 0;
    local_48[2] = iVar3;
    local_30 = iVar3;
    local_2c = local_3c;
  }
  local_48[0] = (uint)(iVar3 != 0);
  local_38 = local_48[0];
  while( true ) {
    FUN_01aed6c0(local_24,local_48);
    iVar1 = local_1c;
    iVar3 = local_24[0];
    if (local_24[0] == 0) break;
    iVar2 = local_24[0] + local_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar2 + 0x1bc),*(undefined4 *)(iVar2 + 0x1c0));
    iVar3 = iVar3 + iVar1 * 0x28;
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x1c));
  }
  return;
}

