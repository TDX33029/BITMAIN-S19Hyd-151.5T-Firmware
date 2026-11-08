// FUN_0171801c @ 0171801c size=264 calls_out=4 calls_in=5
// strings: 

ulonglong FUN_0171801c(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    iVar1 = FUN_01717e5c();
    if (iVar1 != 0) {
      uVar5 = FUN_01714a30(param_1,param_2);
      return uVar5;
    }
    iVar1 = 0;
    if (param_1[3] != 0) {
      param_1[3] = 0;
      uVar3 = FUN_01717ee0(param_1,param_2);
      iVar1 = FUN_01717e5c(param_1);
      if (iVar1 == 0) {
        param_1[3] = (uint)(param_1[3] == 0);
      }
      goto LAB_01718040;
    }
    do {
      if (param_1[1] <= iVar1) {
        if (param_1[1] == iVar1) {
          iVar2 = FUN_0171464c(param_1,iVar1 + 1);
          uVar3 = 0;
          if (iVar2 == 0) goto LAB_01718040;
          param_1[1] = param_1[1] + 1;
          *(uint *)(*param_1 + iVar1 * 4) = param_2;
        }
        break;
      }
      uVar3 = *(uint *)(*param_1 + iVar1 * 4);
      bVar4 = CARRY4(uVar3,param_2);
      iVar2 = uVar3 + param_2;
      param_2 = 1;
      *(int *)(*param_1 + iVar1 * 4) = iVar2;
      iVar1 = iVar1 + 1;
    } while (bVar4);
  }
  uVar3 = 1;
LAB_01718040:
  return (ulonglong)uVar3;
}

