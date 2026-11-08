// FUN_013169a4 @ 013169a4 size=312 calls_out=1 calls_in=3
// strings: 

void FUN_013169a4(undefined4 *param_1,int param_2,ushort param_3,byte param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  ushort local_34;
  byte local_31;
  ushort *local_30;
  code *local_2c;
  ushort *local_28;
  code *local_24;
  ushort *local_20;
  code *local_1c;
  
  uVar3 = (uint)*(ushort *)(param_2 + 0x12);
  if (param_3 < uVar3) {
    local_30 = &local_34;
    puVar2 = &DAT_00593ebd;
    local_24 = FUN_012fcf18;
    local_2c = FUN_012fcf18;
    local_34 = param_3;
    local_28 = (ushort *)(param_2 + 0x12);
  }
  else {
    uVar3 = param_3 - uVar3;
    local_34 = (ushort)uVar3;
    if ((uVar3 < *(ushort *)(param_2 + 0xc)) || (*(ushort *)(param_2 + 0xe) < uVar3)) {
      local_30 = &local_34;
      local_2c = FUN_012fcf18;
      puVar2 = &DAT_005a01eb;
      local_1c = FUN_012fcf18;
      local_28 = (ushort *)(param_2 + 0xc);
      local_20 = (ushort *)(param_2 + 0xe);
    }
    else {
      if ((~*(byte *)(param_2 + 0x15) & param_4) == 0) {
        if (uVar3 < *(uint *)(param_2 + 8)) {
          *(byte *)(*(int *)(param_2 + 4) + uVar3) =
               *(byte *)(*(int *)(param_2 + 4) + uVar3) | param_4;
          uVar1 = 7;
          goto LAB_01316ab4;
        }
        local_30 = &local_34;
        local_2c = FUN_012fcf18;
        puVar2 = &DAT_0058c541;
        goto LAB_01316aa4;
      }
      local_30 = (ushort *)&local_31;
      puVar2 = &DAT_0043101f;
      local_2c = FUN_012fd5c4;
      local_28 = (ushort *)(param_2 + 0x15);
    }
    local_24 = local_2c;
  }
LAB_01316aa4:
  local_31 = param_4;
  FUN_00664898(param_1 + 1,puVar2,&local_30);
  uVar1 = 6;
LAB_01316ab4:
  *param_1 = uVar1;
  return;
}

