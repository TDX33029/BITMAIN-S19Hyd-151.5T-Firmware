// FUN_00fe3e98 @ 00fe3e98 size=164 calls_out=3 calls_in=1
// strings: 

void FUN_00fe3e98(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  
  if (*(int *)(param_1 + 0x2c) == -0x80000000) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    iVar2 = 0x34;
  }
  else {
    FUN_019bb7e0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    iVar2 = 0x3c;
  }
  FUN_019bb7e0(uVar1,*(undefined4 *)(param_1 + iVar2));
  if (*(int *)(param_1 + 0x44) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x50) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x5c) == -0x80000000) {
    return;
  }
  FUN_0134aee0(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),1,2,unaff_r4);
  FUN_006e82bc(param_1 + 0x68);
  FUN_006e82bc(param_1 + 0x74);
  return;
}

