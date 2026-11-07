// FUN_00bfdec8 @ 00bfdec8 size=196 calls_out=4 calls_in=1
// strings: assertion failed: m.is_empty()

void FUN_00bfdec8(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  code *local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: m.is_empty()",0x1e,&DAT_01893ec0);
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  local_2c = uVar1 + 1;
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01893ed0);
  }
  local_28 = *(uint *)(param_2 + 0x1c);
  local_24 = *(uint *)(param_2 + 0x14);
  if ((local_28 + 1 <= uVar1) || (local_24 < local_28)) {
    local_1c = FUN_005ffff4;
    local_20 = &local_2c;
    local_14 = &LAB_00fac484;
    local_18 = &local_24;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057a181,&local_20,&DAT_01893ee0);
  }
  *(int *)(param_2 + 0x18) = local_2c;
  FUN_00bfdfa8(param_1,param_5,param_2 + 8);
  return;
}

