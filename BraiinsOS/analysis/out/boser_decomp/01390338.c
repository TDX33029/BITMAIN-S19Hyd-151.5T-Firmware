// FUN_01390338 @ 01390338 size=164 calls_out=1 calls_in=9
// strings: 

void FUN_01390338(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = param_1[0x20] - 1;
  if (param_1[0x20] == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
  switch(iVar1) {
  case 0:
    if (*(int *)param_1 != 0) {
      (**(code **)(*(int *)param_1 + 0x10))
                (param_1 + 0xc,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    }
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x10) + 0x10);
    param_1 = param_1 + 0x1c;
    break;
  case 1:
  case 3:
  case 4:
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)param_1 + 0x10);
    param_1 = param_1 + 0xc;
    break;
  case 2:
    if ((9 < *param_1) && (*(int *)(param_1 + 8) != 0)) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 4));
      return;
    }
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01390390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,uVar3);
  return;
}

