// FUN_0187ad04 @ 0187ad04 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_0187ad04(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    if (*(int *)(param_1 + 0x10) == 1) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        return;
      }
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x18));
      return;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x14);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    param_1 = param_1 + 0x20;
    break;
  case 1:
  case 3:
    FUN_0187a650(param_1 + 0x10);
    return;
  default:
    return;
  case 6:
    iVar3 = *(int *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    param_1 = param_1 + 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x0187ad80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 0x10))(param_1,uVar1,uVar2);
  return;
}

