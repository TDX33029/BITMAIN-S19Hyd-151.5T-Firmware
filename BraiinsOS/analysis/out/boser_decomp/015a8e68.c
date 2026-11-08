// FUN_015a8e68 @ 015a8e68 size=84 calls_out=3 calls_in=3
// strings: 

void FUN_015a8e68(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
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
    uVar1 = param_1[1];
    FUN_015a8ee0(uVar1);
    thunk_FUN_01be4678(uVar1);
    return;
  }
  FUN_0134bd64(uVar1,uVar2);
  return;
}

