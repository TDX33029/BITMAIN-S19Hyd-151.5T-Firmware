// FUN_015ef948 @ 015ef948 size=96 calls_out=0 calls_in=8
// strings: 

void FUN_015ef948(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_2[3];
  iVar4 = 0;
  if (uVar1 == 0) {
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar3 = param_2[2];
    uVar2 = uVar3 - uVar5;
    if (uVar3 < uVar5) {
      uVar2 = uVar3;
    }
    if (uVar5 - uVar2 < uVar1) {
      iVar4 = uVar1 - (uVar5 - uVar2);
    }
    else {
      uVar5 = uVar2 + uVar1;
    }
  }
  uVar1 = param_2[1];
  param_1[2] = uVar1;
  *param_1 = uVar1 + uVar2 * 8;
  param_1[1] = uVar1 + uVar5 * 8;
  param_1[3] = uVar1 + iVar4 * 8;
  return;
}

