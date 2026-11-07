// FUN_018a8408 @ 018a8408 size=196 calls_out=6 calls_in=1
// strings: 

void FUN_018a8408(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  
  switch(*param_1) {
  case 0:
  case 8:
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = 1;
    uVar6 = 2;
    goto LAB_018a8494;
  case 1:
  case 2:
  case 6:
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = 2;
    uVar6 = 4;
LAB_018a8494:
    FUN_0134aee0(uVar2,uVar4,uVar5,uVar6);
    return;
  case 3:
    FUN_018a8130(param_1 + 1);
    return;
  case 4:
    iVar1 = param_1[1];
    if (iVar1 == -0x80000000) {
      return;
    }
    iVar3 = param_1[2];
    break;
  case 5:
    param_1 = param_1 + 1;
    goto LAB_018a84fc;
  case 7:
    FUN_018a80e8(param_1 + 1);
    return;
  case 9:
    FUN_015e8b48(param_1 + 1);
    param_1 = param_1 + 4;
LAB_018a84fc:
    FUN_018a8274(param_1);
    return;
  default:
    iVar1 = param_1[1];
    iVar3 = param_1[2];
    break;
  case 0xb:
  case 0xd:
  case 0x10:
    return;
  case 0xc:
    piVar7 = param_1 + 1;
    iVar3 = 8;
    if (*piVar7 != -0x80000000) {
      FUN_018a8274(piVar7);
      iVar3 = 0xc;
    }
    iVar1 = *(int *)((int)piVar7 + iVar3);
    iVar3 = ((int *)((int)piVar7 + iVar3))[1];
  }
  FUN_0134bd64(iVar1,iVar3);
  return;
}

