// FUN_01b2e458 @ 01b2e458 size=244 calls_out=4 calls_in=5
// strings: 

undefined4 FUN_01b2e458(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    iVar1 = FUN_01b2e300();
    if (iVar1 != 0) {
      uVar2 = FUN_01b2b4cc(param_1,param_2);
      return uVar2;
    }
    iVar1 = 0;
    if (param_1[3] != 0) {
      param_1[3] = 0;
      uVar2 = FUN_01b2e358(param_1,param_2);
      iVar1 = FUN_01b2e300(param_1);
      if (iVar1 == 0) {
        param_1[3] = (uint)(param_1[3] == 0);
        return uVar2;
      }
      return uVar2;
    }
    do {
      if (param_1[1] <= iVar1) {
        if (param_1[1] != iVar1) {
          return 1;
        }
        iVar3 = FUN_01b2b248(param_1,iVar1 + 1);
        if (iVar3 == 0) {
          return 0;
        }
        param_1[1] = param_1[1] + 1;
        *(uint *)(*param_1 + iVar1 * 4) = param_2;
        return 1;
      }
      uVar4 = *(uint *)(*param_1 + iVar1 * 4);
      bVar5 = CARRY4(uVar4,param_2);
      iVar3 = uVar4 + param_2;
      param_2 = 1;
      *(int *)(*param_1 + iVar1 * 4) = iVar3;
      iVar1 = iVar1 + 1;
    } while (bVar5);
  }
  return 1;
}

