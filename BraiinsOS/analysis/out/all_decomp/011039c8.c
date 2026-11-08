// FUN_011039c8 @ 011039c8 size=224 calls_out=2 calls_in=0
// strings: 

void FUN_011039c8(undefined1 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_4 != 0) {
    puVar3 = param_3 + param_4 * 2;
    uVar2 = 0;
    piVar1 = param_3 + 1;
    do {
      param_4 = param_4 + -1;
      uVar2 = *piVar1 + uVar2;
      piVar1 = piVar1 + 2;
    } while (param_4 != 0);
    iVar4 = param_2[2];
    if ((uint)(*param_2 - iVar4) < uVar2) {
      FUN_011096d4(param_2,iVar4,uVar2,1,1);
      iVar4 = param_2[2];
    }
    do {
      uVar5 = *param_3;
      uVar2 = param_3[1];
      if ((uint)(*param_2 - iVar4) < uVar2) {
        FUN_011096d4(param_2,iVar4,uVar2,1,1);
        iVar4 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + iVar4,uVar5,uVar2);
      iVar4 = iVar4 + uVar2;
      param_3 = param_3 + 2;
      param_2[2] = iVar4;
    } while (param_3 != puVar3);
  }
  *param_1 = 4;
  return;
}

