// FUN_0176e8a4 @ 0176e8a4 size=164 calls_out=1 calls_in=0
// strings: 

void FUN_0176e8a4(int *param_1,uint param_2)

{
  uint uVar1;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  local_20 = (undefined1 *)&local_28;
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    if (param_2 <= uVar1) {
      *param_1 = *param_1 + param_2;
      param_1[1] = uVar1 - param_2;
      return;
    }
    *param_1 = *param_1 + uVar1;
    param_1[1] = 0;
    param_2 = param_2 - uVar1;
  }
  local_24 = param_1[4];
  if (local_24 < param_2) {
    local_14 = &LAB_01a6a304;
    local_1c = &LAB_01a6a304;
    local_18 = &local_24;
    local_28 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005ac267,&local_20,&DAT_01d2e534);
  }
  param_1[3] = param_1[3] + param_2;
  param_1[4] = local_24 - param_2;
  return;
}

