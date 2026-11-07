// FUN_015e9624 @ 015e9624 size=132 calls_out=4 calls_in=3
// strings: 

void FUN_015e9624(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(*param_1) {
  default:
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    break;
  case 1:
  case 3:
    FUN_0134bd64(param_1[1],param_1[2]);
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    break;
  case 2:
    iVar3 = param_1[1];
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x30));
    if (*(int *)(iVar3 + 0x20) != -0x80000000) {
      FUN_0134bd64(*(int *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x24));
    }
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x38),*(undefined4 *)(iVar3 + 0x3c));
    FUN_0134bd64(*(undefined4 *)(iVar3 + 0x44),*(undefined4 *)(iVar3 + 0x48));
    FUN_015d1628(iVar3);
    FUN_015a8f24(iVar3 + 0x50);
    thunk_FUN_01be4678(iVar3);
    return;
  }
  FUN_0134bd64(uVar1,uVar2);
  return;
}

