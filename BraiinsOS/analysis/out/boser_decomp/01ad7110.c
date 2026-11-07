// FUN_01ad7110 @ 01ad7110 size=156 calls_out=3 calls_in=4
// strings: 

void FUN_01ad7110(int *param_1)

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
    FUN_01ad7278(local_24,local_48);
    iVar1 = local_1c;
    iVar3 = local_24[0];
    if (local_24[0] == 0) break;
    iVar2 = local_24[0] + local_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar2 + 0x2c4),*(undefined4 *)(iVar2 + 0x2c8));
    FUN_01ad77e4(iVar3 + iVar1 * 0x40);
  }
  return;
}

