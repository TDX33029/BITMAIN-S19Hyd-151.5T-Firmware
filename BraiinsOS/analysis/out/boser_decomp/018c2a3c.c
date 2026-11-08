// FUN_018c2a3c @ 018c2a3c size=408 calls_out=10 calls_in=1
// strings: 

void FUN_018c2a3c(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = *param_1;
  uVar1 = 1;
  if ((int)uVar6 < 0) {
    uVar1 = uVar6 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      return;
    }
    param_1 = param_1 + 1;
    uVar6 = *param_1;
    goto switchD_018c2a90_caseD_0;
  }
  uVar1 = param_1[3];
  uVar3 = 1;
  if ((int)uVar1 < 0) {
    uVar3 = uVar1 ^ 0x80000000;
  }
  switch(uVar3) {
  case 0:
  case 10:
  case 0xb:
  case 0x10:
    break;
  case 1:
    FUN_0134aee0(uVar1,param_1[4],2,4);
    FUN_0134aee0(param_1[6],param_1[7],1,2);
    FUN_018aa578(param_1 + 9);
    break;
  case 2:
  case 0xf:
    uVar3 = param_1[5];
    FUN_018a85e0(uVar3,param_1[6]);
    uVar1 = param_1[4];
    uVar5 = 0x14;
    goto LAB_018c2b60;
  case 3:
    uVar3 = param_1[5];
    FUN_018a8578(uVar3,param_1[6]);
    uVar1 = param_1[4];
    uVar5 = 0x10;
LAB_018c2b60:
    FUN_0134aee0(uVar1,uVar3,4,uVar5);
    break;
  case 4:
    FUN_006a41c0(param_1 + 4);
    break;
  case 5:
    FUN_0134bd64(param_1[4],param_1[5]);
    FUN_018a9894(param_1 + 7);
    break;
  case 6:
    iVar4 = 4;
    uVar1 = param_1[4];
    if (uVar1 != 0x80000000) {
      FUN_0134bd64(uVar1,param_1[5]);
      iVar4 = 0x14;
    }
    puVar2 = (uint *)((int)(param_1 + 4) + iVar4);
    goto LAB_018c2ae8;
  case 7:
    FUN_0134aee0(param_1[4],param_1[5],1,2);
    FUN_0134aee0(param_1[7],param_1[8],2,4);
    FUN_018a8274(param_1 + 10);
    break;
  case 8:
    FUN_0134bd64(param_1[4],param_1[5]);
    FUN_018aa5c8(param_1 + 7);
    break;
  default:
    puVar2 = param_1 + 4;
LAB_018c2ae8:
    FUN_0134bd64(*puVar2,puVar2[1]);
    break;
  case 0xe:
    FUN_0134bd64(param_1[4],param_1[5]);
    FUN_0134bd64(param_1[7],param_1[8]);
    FUN_0161ac8c(param_1 + 10);
  }
switchD_018c2a90_caseD_0:
  FUN_0134bd64(uVar6,param_1[1]);
  return;
}

