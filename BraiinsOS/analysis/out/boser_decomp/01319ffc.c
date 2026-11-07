// FUN_01319ffc @ 01319ffc size=100 calls_out=1 calls_in=9
// strings: 

void FUN_01319ffc(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (0x3f < uVar1) {
    iVar4 = *param_2;
    do {
      if (iVar4 == 0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 4);
      *param_2 = iVar4;
      FUN_0131a060(iVar2 + 0x20,param_1 + 8);
      uVar1 = *(uint *)(param_1 + 0x408);
    } while (0x3f < uVar1);
  }
  iVar4 = param_2[1];
  iVar2 = param_2[2];
  iVar5 = param_2[3];
  piVar3 = (int *)(param_1 + 8 + uVar1 * 0x10);
  *piVar3 = *param_2;
  piVar3[1] = iVar4;
  piVar3[2] = iVar2;
  piVar3[3] = iVar5;
  *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 1;
  return;
}

