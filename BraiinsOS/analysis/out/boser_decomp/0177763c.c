// FUN_0177763c @ 0177763c size=144 calls_out=2 calls_in=3
// strings: 

void FUN_0177763c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uStack_18;
  uint uStack_14;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x1b) - (uint)*(byte *)(param_1 + 0x1a) & 0xff;
  uVar2 = uVar1 + *(uint *)(param_1 + 8);
  if (CARRY4(uVar1,*(uint *)(param_1 + 8))) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 != 0) {
    if (param_2 <= uVar2) {
      FUN_018767a8(param_1,param_2);
      return;
    }
    FUN_018767a8(param_1,uVar2);
    param_2 = param_2 - uVar2;
  }
  uStack_14 = *(uint *)(param_1 + 0x20);
  if (uStack_14 < param_2) {
    uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&uStack_18);
  }
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
  *(uint *)(param_1 + 0x20) = uStack_14 - param_2;
  return;
}

