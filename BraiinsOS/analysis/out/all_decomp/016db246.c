// FUN_016db246 @ 016db246 size=94 calls_out=4 calls_in=2
// strings: 

int FUN_016db246(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3 * param_2;
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (*(int *)(param_4 + 0x4c) < 0) {
    iVar1 = FUN_016db1c8(param_1,iVar3,param_4,*(int *)(param_4 + 0x4c),param_4);
  }
  else {
    iVar2 = FUN_016dab18(param_4);
    iVar1 = FUN_016db1c8(param_1,iVar3,param_4);
    if (iVar2 != 0) {
      FUN_016dabbe(param_4);
    }
  }
  if (iVar3 != iVar1) {
    param_3 = FUN_018462e8(iVar1,param_2);
  }
  return param_3;
}

