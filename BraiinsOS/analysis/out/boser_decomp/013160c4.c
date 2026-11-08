// FUN_013160c4 @ 013160c4 size=252 calls_out=1 calls_in=7
// strings: 

void FUN_013160c4(undefined4 *param_1,int param_2,ushort param_3,byte param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ushort local_34;
  byte local_31;
  ushort *local_30;
  code *local_2c;
  ushort *local_28;
  code *local_24;
  ushort *local_20;
  code *local_1c;
  
  uVar1 = (uint)param_3;
  if ((uVar1 < *(ushort *)(param_2 + 0xc)) || (*(ushort *)(param_2 + 0xe) < uVar1)) {
    local_30 = &local_34;
    puVar3 = &DAT_005a01eb;
    local_2c = FUN_012fcf18;
    local_1c = FUN_012fcf18;
    local_28 = (ushort *)(param_2 + 0xc);
    local_20 = (ushort *)(param_2 + 0xe);
LAB_01316180:
    local_24 = local_2c;
  }
  else {
    if ((~*(byte *)(param_2 + 0x15) & param_4) != 0) {
      local_30 = (ushort *)&local_31;
      puVar3 = &DAT_0043101f;
      local_2c = FUN_012fd5c4;
      local_28 = (ushort *)(param_2 + 0x15);
      goto LAB_01316180;
    }
    if (uVar1 < *(uint *)(param_2 + 8)) {
      *(bool *)(param_1 + 1) = (*(byte *)(*(int *)(param_2 + 4) + uVar1) & param_4) != 0;
      uVar2 = 7;
      goto LAB_01316198;
    }
    local_30 = &local_34;
    local_2c = FUN_012fcf18;
    puVar3 = &DAT_0058c541;
  }
  local_34 = param_3;
  local_31 = param_4;
  FUN_00664898(param_1 + 1,puVar3,&local_30);
  uVar2 = 6;
LAB_01316198:
  *param_1 = uVar2;
  return;
}

