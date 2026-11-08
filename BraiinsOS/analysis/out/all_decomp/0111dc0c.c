// FUN_0111dc0c @ 0111dc0c size=204 calls_out=5 calls_in=2
// strings: 

void FUN_0111dc0c(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  undefined1 *local_28;
  uint *local_24;
  undefined1 **local_20;
  undefined *local_1c;
  
  local_2c = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
             param_2 >> 0x18;
  local_1c = &DAT_00563e90;
  local_24 = &local_2c;
  local_20 = &local_28;
  local_28 = &DAT_00110000;
  FUN_01124f94(&local_38,&local_28);
  uVar1 = 0;
  if (local_30 < 0) {
LAB_0111dc64:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,local_30);
  }
  if (local_30 == 0) {
    iVar2 = 1;
    iVar3 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(local_30);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_0111dc64;
    }
    iVar3 = local_30;
  }
  FUN_016dd1aa(iVar2,local_34,local_30);
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = local_30;
  *param_1 = 3;
  if (local_38 != 0) {
    thunk_FUN_016d3fb4(local_34);
  }
  return;
}

