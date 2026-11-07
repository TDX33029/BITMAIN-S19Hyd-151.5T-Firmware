// FUN_016d32fc @ 016d32fc size=176 calls_out=1 calls_in=1
// strings: 

int FUN_016d32fc(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[2];
  if (param_1[5] != 0) {
    iVar3 = param_1[5] + -1;
    param_1[5] = iVar3;
    piVar1 = (int *)(param_1[4] + iVar3 * 0xc);
    iVar3 = *piVar1;
    if (iVar3 != -0x80000000) {
      iVar6 = piVar1[1];
      if (iVar5 == *param_1) {
        FUN_018c4418(param_1);
      }
      iVar2 = param_1[1];
      piVar1 = (int *)(iVar2 + iVar5 * 0xc);
      *piVar1 = iVar3;
      piVar1[1] = iVar6;
      goto LAB_016d338c;
    }
  }
  if (iVar5 == *param_1) {
    FUN_018c4418(param_1);
  }
  iVar2 = param_1[1];
  puVar4 = (undefined4 *)(iVar2 + iVar5 * 0xc);
  *puVar4 = 0;
  puVar4[1] = 4;
LAB_016d338c:
  param_1[2] = iVar5 + 1;
  *(undefined4 *)(iVar2 + iVar5 * 0xc + 8) = 0;
  return iVar5;
}

