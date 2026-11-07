// FUN_01436f54 @ 01436f54 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_01436f54(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x18));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  FUN_0143becc(uVar1,*(undefined4 *)(param_1 + 0x28));
  FUN_0134c054(*(undefined4 *)(param_1 + 0x20),uVar1,4,0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  FUN_0143be58(uVar1,*(undefined4 *)(param_1 + 0x34));
  FUN_0134c054(*(undefined4 *)(param_1 + 0x2c),uVar1,4,0x20);
  return;
}

