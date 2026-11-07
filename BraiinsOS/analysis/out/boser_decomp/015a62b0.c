// FUN_015a62b0 @ 015a62b0 size=196 calls_out=3 calls_in=1
// strings: 

void FUN_015a62b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar4 = param_1[5];
    iVar2 = *(int *)(param_2 + 0x14) << 2;
    piVar5 = *(int **)(param_2 + 0x10);
    do {
      iVar7 = param_1[2];
      iVar1 = *piVar5;
      if (iVar4 == param_1[3]) {
        FUN_01a54b48(param_1 + 3);
      }
      iVar2 = iVar2 + -4;
      *(int *)(param_1[4] + iVar4 * 4) = iVar1 + iVar7;
      iVar4 = iVar4 + 1;
      param_1[5] = iVar4;
      piVar5 = piVar5 + 1;
    } while (iVar2 != 0);
  }
  uVar3 = *(uint *)(param_2 + 8);
  iVar2 = param_1[2];
  uVar6 = *(undefined4 *)(param_2 + 4);
  if ((uint)(*param_1 - iVar2) < uVar3) {
    FUN_006520b4(param_1,iVar2,uVar3,1,1);
    iVar2 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar2,uVar6,uVar3);
  param_1[2] = iVar2 + uVar3;
  return;
}

