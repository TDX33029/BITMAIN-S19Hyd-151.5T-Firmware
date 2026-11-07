// FUN_0151f0d8 @ 0151f0d8 size=180 calls_out=2 calls_in=0
// strings: 

void FUN_0151f0d8(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 1;
  if (0x80000000 < *param_2) {
    iVar2 = *param_2 + 0x7fffffff;
  }
  if (iVar2 == 2) {
    iVar3 = 0xc;
    iVar2 = 8;
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    iVar3 = 8;
    iVar2 = 4;
  }
  uVar4 = *(uint *)((int)param_2 + iVar3);
  uVar1 = *(undefined4 *)((int)param_2 + iVar2);
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < uVar4) {
    FUN_0154e5f8(param_1,iVar2,uVar4,1,1);
    iVar2 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar2,uVar1,uVar4);
  param_1[2] = iVar2 + uVar4;
  return;
}

