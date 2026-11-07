// FUN_0138ab08 @ 0138ab08 size=192 calls_out=1 calls_in=1
// strings: 

void FUN_0138ab08(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar4;
  
  if (*param_1 - 2 < 2) {
    return;
  }
  if (*param_1 < 2) {
    iVar1 = 8;
  }
  else {
    iVar1 = 4;
  }
  pbVar4 = (byte *)((int)param_1 + iVar1);
  iVar1 = pbVar4[0x20] - 1;
  if (pbVar4[0x20] == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
  switch(iVar1) {
  case 0:
    if (*(int *)pbVar4 != 0) {
      (**(code **)(*(int *)pbVar4 + 0x10))
                (pbVar4 + 0xc,*(undefined4 *)(pbVar4 + 4),*(undefined4 *)(pbVar4 + 8));
    }
    uVar2 = *(undefined4 *)(pbVar4 + 0x14);
    uVar3 = *(undefined4 *)(pbVar4 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(pbVar4 + 0x10) + 0x10);
    pbVar4 = pbVar4 + 0x1c;
    break;
  case 1:
  case 3:
  case 4:
  case 5:
    uVar2 = *(undefined4 *)(pbVar4 + 4);
    uVar3 = *(undefined4 *)(pbVar4 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)pbVar4 + 0x10);
    pbVar4 = pbVar4 + 0xc;
    break;
  case 2:
    if (*pbVar4 < 10) {
      return;
    }
    if (*(int *)(pbVar4 + 8) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(pbVar4 + 4));
      return;
    }
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0138ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pbVar4,uVar2,uVar3);
  return;
}

