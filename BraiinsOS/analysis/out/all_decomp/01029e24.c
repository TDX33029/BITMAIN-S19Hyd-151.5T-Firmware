// FUN_01029e24 @ 01029e24 size=192 calls_out=1 calls_in=0
// strings: 

void FUN_01029e24(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x20);
  if (((5 < uVar1 - 6) && (uVar1 < 3)) && (uVar1 != 0)) {
    if (uVar1 == 1) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0x10))
                (param_1 + 0x34,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    }
    else if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
      iVar2 = *(int *)(param_1 + 0x40);
      goto joined_r0x01029e84;
    }
  }
  iVar2 = *(int *)(param_1 + 0x40);
joined_r0x01029e84:
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01029ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
  return;
}

