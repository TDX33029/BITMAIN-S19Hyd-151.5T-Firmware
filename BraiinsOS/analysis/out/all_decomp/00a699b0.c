// FUN_00a699b0 @ 00a699b0 size=200 calls_out=2 calls_in=2
// strings: 

void FUN_00a699b0(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint uStack_20;
  uint uStack_1c;
  
  uVar3 = *param_1;
  iVar2 = 2;
  iVar1 = -(param_1[1] + (uint)(uVar3 >= 5));
  if ((uint)(uVar3 < 5) <= -param_1[1]) {
    iVar2 = uVar3 - 5;
  }
  if (iVar2 == 0) {
    FUN_00a69a80(0,0,0,uVar3,iVar1);
    local_2c = 0;
    local_30 = 4;
    local_24 = 0;
    local_28 = 0;
    FUN_00a69bb8(0,&local_30);
    return;
  }
  if (iVar2 == 1) {
    FUN_00a69a80((int)*(undefined8 *)(param_1 + 2),1,1,uVar3,iVar1);
    local_30 = 4;
    local_2c = 0;
    local_24 = 0;
    local_28 = 0;
    FUN_00a69bb8(0,&local_30);
    return;
  }
  FUN_00a69a80(0,0,iVar2,uVar3,iVar1);
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = param_1[2];
  local_24 = param_1[3];
  uStack_20 = param_1[4];
  uStack_1c = param_1[5];
  FUN_00a69bb8(1);
  return;
}

