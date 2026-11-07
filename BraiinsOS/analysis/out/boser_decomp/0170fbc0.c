// FUN_0170fbc0 @ 0170fbc0 size=164 calls_out=1 calls_in=1
// strings: 

void FUN_0170fbc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *(byte *)(param_1 + 0x28) - 1;
  if (*(byte *)(param_1 + 0x28) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
  switch(iVar1) {
  case 0:
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0x10))
                (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x18) + 0x10);
    param_1 = param_1 + 0x24;
    break;
  case 1:
  case 3:
  case 4:
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x10);
    param_1 = param_1 + 0x14;
    break;
  case 2:
    if ((9 < *(byte *)(param_1 + 8)) && (*(int *)(param_1 + 0x10) != 0)) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0xc));
      return;
    }
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0170fc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,uVar3);
  return;
}

