// FUN_012b1c8c @ 012b1c8c size=188 calls_out=3 calls_in=2
// strings: 

void FUN_012b1c8c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar4 = param_1[2];
  iVar5 = param_1[1];
  if (iVar4 != 0) {
    uVar7 = param_2[1];
    iVar8 = param_2[2];
    puVar6 = (undefined4 *)(iVar5 + 4);
    iVar3 = iVar4 * 0xc;
    do {
      if ((puVar6[1] == iVar8) && (iVar1 = thunk_FUN_01bed842(*puVar6,uVar7,iVar8), iVar1 == 0)) {
        FUN_0134bd64(*param_2,uVar7);
        return;
      }
      puVar6 = puVar6 + 3;
      iVar3 = iVar3 + -0xc;
    } while (iVar3 != 0);
  }
  if (iVar4 == *param_1) {
    FUN_018c4418(param_1);
    iVar5 = param_1[1];
  }
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  puVar6 = (undefined4 *)(iVar5 + iVar4 * 0xc);
  *puVar6 = *param_2;
  puVar6[1] = uVar7;
  puVar6[2] = uVar2;
  param_1[2] = iVar4 + 1;
  return;
}

