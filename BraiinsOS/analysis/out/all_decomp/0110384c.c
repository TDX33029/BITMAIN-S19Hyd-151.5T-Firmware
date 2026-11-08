// FUN_0110384c @ 0110384c size=236 calls_out=2 calls_in=0
// strings: 

void FUN_0110384c(undefined1 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    puVar4 = param_3 + param_4 * 2;
    uVar3 = 0;
    piVar1 = param_3 + 1;
    do {
      param_4 = param_4 + -1;
      uVar3 = *piVar1 + uVar3;
      piVar1 = piVar1 + 2;
    } while (param_4 != 0);
    iVar2 = param_2[2];
    if ((uint)(*param_2 - iVar2) < uVar3) {
      FUN_011096d4(param_2,iVar2,uVar3,1,1);
      iVar2 = param_2[2];
    }
    do {
      uVar5 = *param_3;
      uVar6 = param_3[1];
      if ((uint)(*param_2 - iVar2) < uVar6) {
        FUN_011096d4(param_2,iVar2,uVar6,1,1);
        iVar2 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + iVar2,uVar5,uVar6);
      iVar2 = iVar2 + uVar6;
      param_3 = param_3 + 2;
      param_2[2] = iVar2;
    } while (param_3 != puVar4);
  }
  *(uint *)(param_1 + 4) = uVar3;
  *param_1 = 4;
  return;
}

