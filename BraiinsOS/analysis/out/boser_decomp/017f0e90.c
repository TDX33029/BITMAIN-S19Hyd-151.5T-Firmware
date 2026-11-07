// FUN_017f0e90 @ 017f0e90 size=152 calls_out=2 calls_in=0
// strings: 

void FUN_017f0e90(int param_1,uint param_2)

{
  uint local_20;
  uint local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint *local_10;
  undefined1 *local_c;
  
  local_18 = (undefined1 *)&local_20;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00567698,0x10,&DAT_01d1cf04);
    }
    local_1c = *(uint *)(param_1 + 0x30);
    if (local_1c < param_2) {
      local_c = &LAB_01a6a304;
      local_14 = &LAB_01a6a304;
      local_10 = &local_1c;
      local_20 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_18,&DAT_01d2e534);
    }
    *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_2;
    *(uint *)(param_1 + 0x30) = local_1c - param_2;
  }
  return;
}

