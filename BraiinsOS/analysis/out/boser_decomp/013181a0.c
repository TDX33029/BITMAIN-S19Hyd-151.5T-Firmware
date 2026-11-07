// FUN_013181a0 @ 013181a0 size=312 calls_out=1 calls_in=1
// strings: 

void FUN_013181a0(undefined4 *param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined2 local_34;
  byte local_31;
  byte *local_30;
  code *local_2c;
  ushort *local_28;
  code *local_24;
  ushort *local_20;
  code *local_1c;
  
  uVar3 = (uint)*(ushort *)(param_2 + 0x12);
  local_34 = 7;
  if (uVar3 < 8) {
    uVar3 = 7 - uVar3;
    local_34 = (undefined2)uVar3;
    if ((uVar3 < *(ushort *)(param_2 + 0xc)) || (*(ushort *)(param_2 + 0xe) < uVar3)) {
      local_30 = (byte *)&local_34;
      puVar2 = &DAT_005a01eb;
      local_2c = FUN_012fcf18;
      local_1c = FUN_012fcf18;
      local_28 = (ushort *)(param_2 + 0xc);
      local_20 = (ushort *)(param_2 + 0xe);
    }
    else {
      if ((~*(byte *)(param_2 + 0x15) & param_3) == 0) {
        if (uVar3 < *(uint *)(param_2 + 8)) {
          *(byte *)(*(int *)(param_2 + 4) + uVar3) =
               *(byte *)(*(int *)(param_2 + 4) + uVar3) & ~param_3;
          uVar1 = 7;
          goto LAB_013182b0;
        }
        local_30 = (byte *)&local_34;
        local_2c = FUN_012fcf18;
        puVar2 = &DAT_0058c541;
        goto LAB_013182a0;
      }
      local_30 = &local_31;
      puVar2 = &DAT_0043101f;
      local_2c = FUN_012fd5c4;
      local_28 = (ushort *)(param_2 + 0x15);
    }
    local_24 = local_2c;
  }
  else {
    local_30 = (byte *)&local_34;
    puVar2 = &DAT_00593ebd;
    local_24 = FUN_012fcf18;
    local_2c = FUN_012fcf18;
    local_28 = (ushort *)(param_2 + 0x12);
  }
LAB_013182a0:
  local_31 = param_3;
  FUN_00664898(param_1 + 1,puVar2,&local_30);
  uVar1 = 6;
LAB_013182b0:
  *param_1 = uVar1;
  return;
}

