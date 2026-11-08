// FUN_00ea8708 @ 00ea8708 size=224 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_00ea8708(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00f09308(param_1,param_2,param_2,0);
  if (*param_3 == 2 && param_3[1] == 0) {
    iVar2 = param_1[2];
    if (*param_1 == iVar2) {
      FUN_00edff4c(param_1,iVar2,1,1,1);
      iVar2 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar2) = 1;
    param_1[2] = iVar2 + 1;
    FUN_00efe698(param_3 + 2,param_1);
    return 0;
  }
  iVar2 = param_1[2];
  if (*param_1 == iVar2) {
    FUN_00edff4c(param_1,iVar2,1,1,1);
    iVar2 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar2) = 0;
  param_1[2] = iVar2 + 1;
  uVar1 = FUN_00e72efc(param_3,param_1);
  return uVar1;
}

