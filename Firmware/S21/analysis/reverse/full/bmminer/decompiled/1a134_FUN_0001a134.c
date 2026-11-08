// FUN_0001a134 @ 0001a134  size=156  callers=1
// program: bmminer


uint FUN_0001a134(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar3 = 0;
  *param_1 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar3);
    if (iVar1 != 0) {
      iVar1 = 2;
      uVar5 = uVar4;
      do {
        uVar2 = FUN_00017628(iVar3,4,iVar1);
        if (uVar5 < uVar2) {
          *param_1 = iVar3;
          uVar4 = uVar2;
          uVar6 = uVar5;
        }
        else {
          uVar4 = uVar5;
          if (uVar6 < uVar2 && uVar2 < uVar5) {
            *param_1 = iVar3;
            uVar6 = uVar2;
          }
        }
        iVar1 = iVar1 + 1;
        uVar5 = uVar4;
      } while (iVar1 != 6);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return uVar6;
}

