// FUN_015752f0 @ 015752f0 size=124 calls_out=0 calls_in=6
// strings: 

void FUN_015752f0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = 1;
  uVar6 = 1;
  if ((int)*(uint *)(param_2 + 8) < 0) {
    uVar3 = *(uint *)(param_2 + 8) ^ 0x80000000;
  }
  if (uVar3 == 0) {
    piVar1 = (int *)(param_2 + 0xc);
    iVar4 = 4;
    if (*piVar1 == 0) {
      uVar6 = 0;
      goto LAB_01575364;
    }
  }
  else {
    if (uVar3 == 1) {
      uVar6 = 2;
      iVar5 = 0x10;
      iVar4 = 0xc;
    }
    else {
      uVar6 = 3;
      iVar5 = 0x14;
      iVar4 = 0x10;
    }
    iVar2 = *(int *)(param_2 + iVar5);
    iVar5 = *(int *)(param_2 + iVar4);
    iVar4 = 8;
    param_1[1] = iVar5;
    piVar1 = (int *)(iVar5 + iVar2 * 0x20);
  }
  *(int **)((int)param_1 + iVar4) = piVar1;
LAB_01575364:
  *param_1 = uVar6;
  return;
}

