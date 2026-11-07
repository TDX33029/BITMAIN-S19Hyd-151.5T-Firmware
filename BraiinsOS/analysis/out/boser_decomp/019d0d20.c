// FUN_019d0d20 @ 019d0d20 size=132 calls_out=3 calls_in=5
// strings: invalid key

void FUN_019d0d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_14;
  
  local_1c = param_2;
  uVar2 = FUN_019d0db0();
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    local_18 = &local_1c;
    local_14 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00590a3d,&local_18,param_3);
  }
  if ((*(uint *)(param_1 + 0x2c) <= uVar1) ||
     (*(int *)(*(int *)(param_1 + 0x28) + uVar1 * 0x28) == 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("invalid key",0xb,param_3);
  }
  return;
}

