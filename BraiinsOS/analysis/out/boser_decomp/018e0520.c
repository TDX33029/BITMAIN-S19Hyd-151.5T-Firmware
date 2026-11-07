// FUN_018e0520 @ 018e0520 size=368 calls_out=9 calls_in=1
// strings: 

void FUN_018e0520(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  uVar1 = *param_1;
  uVar2 = 1;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 10:
  case 0xb:
  case 0x10:
    return;
  case 1:
    FUN_0134aee0(uVar1,param_1[1],2,4);
    FUN_0134aee0(param_1[3],param_1[4],1,2);
    FUN_018aa578(param_1 + 6);
    return;
  case 2:
  case 0xf:
    FUN_018a924c(param_1 + 1);
    return;
  case 3:
    uVar1 = param_1[2];
    FUN_018a8578(uVar1,param_1[3]);
    uVar2 = param_1[1];
    uVar4 = 0x10;
    break;
  case 4:
    uVar1 = param_1[2];
    puVar5 = (undefined4 *)(uVar1 + 4);
    for (uVar2 = param_1[3]; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_0134bd64(puVar5[-1],*puVar5);
      puVar5 = puVar5 + 3;
    }
    uVar2 = param_1[1];
    uVar4 = 0xc;
    break;
  case 5:
    FUN_0134bd64(param_1[1],param_1[2]);
    FUN_018a9894(param_1 + 4);
    return;
  case 6:
    iVar3 = 4;
    uVar1 = param_1[1];
    if (uVar1 != 0x80000000) {
      FUN_0134bd64(uVar1,param_1[2]);
      iVar3 = 0x14;
    }
    puVar6 = (uint *)((int)(param_1 + 1) + iVar3);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    goto LAB_018e05a0;
  case 7:
    FUN_0134aee0(param_1[1],param_1[2],1,2);
    FUN_0134aee0(param_1[4],param_1[5],2,4);
    FUN_018a8274(param_1 + 7);
    return;
  case 8:
    FUN_0134bd64(param_1[1],param_1[2]);
    FUN_018aa5c8(param_1 + 4);
    return;
  default:
    uVar1 = param_1[1];
    uVar2 = param_1[2];
LAB_018e05a0:
    FUN_0134bd64(uVar1,uVar2);
    return;
  case 0xe:
    FUN_0134bd64(param_1[1],param_1[2]);
    FUN_0134bd64(param_1[4],param_1[5]);
    FUN_0161ac8c(param_1 + 7);
    return;
  }
  FUN_0134aee0(uVar2,uVar1,4,uVar4);
  return;
}

