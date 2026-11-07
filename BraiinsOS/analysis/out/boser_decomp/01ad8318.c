// FUN_01ad8318 @ 01ad8318 size=248 calls_out=6 calls_in=1
// strings: 

void FUN_01ad8318(int *param_1)

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
  
  if (param_1[0x1a] == -0x80000000) {
    FUN_0134bd64(*param_1,param_1[1]);
    FUN_0134bd64(param_1[3],param_1[4]);
    FUN_0134bd64(param_1[6],param_1[7]);
    return;
  }
  FUN_0134bd64(param_1[0x1a],param_1[0x1b]);
  FUN_01ad74cc(param_1 + 0x14);
  FUN_0094cbc0(param_1 + 8);
  if (*param_1 != 0) {
    FUN_01ada488(param_1);
  }
  iVar3 = param_1[0x17];
  if (iVar3 == 0) {
    local_28 = 0;
  }
  else {
    local_3c = param_1[0x18];
    local_28 = param_1[0x19];
    local_34 = 0;
    local_48[1] = 0;
    local_48[2] = iVar3;
    local_30 = iVar3;
    local_2c = local_3c;
  }
  local_48[0] = (uint)(iVar3 != 0);
  local_38 = local_48[0];
  while( true ) {
    FUN_01ad846c(local_24,local_48);
    iVar1 = local_1c;
    iVar3 = local_24[0];
    if (local_24[0] == 0) break;
    iVar2 = local_24[0] + local_1c * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar2 + 0x794),*(undefined4 *)(iVar2 + 0x798));
    FUN_01ad8610(iVar1 * 0xb0 + iVar3);
  }
  return;
}

