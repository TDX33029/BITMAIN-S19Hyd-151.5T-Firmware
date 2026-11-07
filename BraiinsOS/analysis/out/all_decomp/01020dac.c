// FUN_01020dac @ 01020dac size=188 calls_out=1 calls_in=4
// strings: 

void FUN_01020dac(int param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0xd4);
  if (((5 < uVar1 - 6) && (uVar1 < 3)) && (uVar1 != 0)) {
    if (uVar1 == 1) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0x10))
                (param_1 + 0x34,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    }
    else if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
  }
  iVar2 = *(int *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x21) = param_3;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x5c));
  }
  iVar2 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01020e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x54));
  return;
}

