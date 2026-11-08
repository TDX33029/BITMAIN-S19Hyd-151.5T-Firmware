// FUN_018767a8 @ 018767a8 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_018767a8(int param_1,uint param_2)

{
  uint uVar1;
  uint local_20;
  uint local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint *local_10;
  undefined1 *local_c;
  
  local_18 = (undefined1 *)&local_20;
  uVar1 = (uint)*(byte *)(param_1 + 0x1b) - (uint)*(byte *)(param_1 + 0x1a);
  if (uVar1 != 0) {
    uVar1 = uVar1 & 0xff;
    if (param_2 <= uVar1) {
      *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) + (char)param_2;
      return;
    }
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1b);
    param_2 = param_2 - uVar1;
  }
  local_1c = *(uint *)(param_1 + 8);
  if (local_1c < param_2) {
    local_c = &LAB_01a6a304;
    local_14 = &LAB_01a6a304;
    local_10 = &local_1c;
    local_20 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005ac267,&local_18,&DAT_01d2e534);
  }
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  *(uint *)(param_1 + 8) = local_1c - param_2;
  return;
}

