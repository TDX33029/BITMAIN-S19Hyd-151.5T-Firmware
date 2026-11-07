// FUN_015fa1fc @ 015fa1fc size=152 calls_out=4 calls_in=2
// strings: 

void FUN_015fa1fc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[3];
  }
  if (*param_1 != 0 && iVar1 != 5) {
    switch(iVar1) {
    default:
      iVar1 = param_1[4];
      iVar2 = param_1[5];
      break;
    case 1:
    case 3:
      FUN_0134bd64(param_1[4],param_1[5]);
      iVar1 = param_1[7];
      iVar2 = param_1[8];
      break;
    case 2:
      iVar1 = param_1[4];
      FUN_0134bd64(*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x30));
      if (*(int *)(iVar1 + 0x20) != -0x80000000) {
        FUN_0134bd64(*(int *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24));
      }
      FUN_0134bd64(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c));
      FUN_0134bd64(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
      FUN_015d1628(iVar1);
      FUN_015a8f24(iVar1 + 0x50);
      thunk_FUN_01be4678(iVar1);
      return;
    }
    FUN_0134bd64(iVar1,iVar2);
    return;
  }
  return;
}

