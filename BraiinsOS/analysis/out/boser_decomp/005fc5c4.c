// FUN_005fc5c4 @ 005fc5c4 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_005fc5c4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = 3;
  if (6 < uVar1) {
    uVar2 = uVar1 - 7;
  }
  if (uVar2 < 2) {
    return;
  }
  if (uVar2 != 2) {
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
    case 4:
      return;
    case 3:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005f96a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

