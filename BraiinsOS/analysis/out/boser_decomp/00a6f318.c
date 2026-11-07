// FUN_00a6f318 @ 00a6f318 size=168 calls_out=3 calls_in=1
// strings: 

void FUN_00a6f318(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 < 0x80000001) {
    uVar1 = 0;
  }
  if ((uVar1 & 0x7fffffff) < 4) {
                    /* WARNING: Could not recover jumptable at 0x00a6f344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((int)&DAT_00a6f348 + (&DAT_00a6f348)[uVar1]))();
    return;
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 != -0x7fffffff) {
    if (iVar2 != -0x80000000) {
      FUN_019bb7e0(iVar2,*(undefined4 *)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 0x58) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    }
    if (*(int *)(param_1 + 100) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 8));
  }
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x28));
  return;
}

