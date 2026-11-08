// FUN_0151eddc @ 0151eddc size=192 calls_out=2 calls_in=21
// strings: 

int * FUN_0151eddc(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 1;
  if (0x80000000 < *param_2) {
    iVar1 = *param_2 + 0x7fffffff;
  }
  if (iVar1 == 2) {
    iVar1 = param_1[5];
    iVar2 = param_1[6];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
  }
  else {
    if (iVar1 != 1) {
      return param_1;
    }
    iVar1 = param_1[5];
    iVar2 = param_1[6];
    uVar3 = param_2[1];
    uVar4 = param_2[2];
  }
  (**(code **)(iVar2 + 0x18))(iVar1,uVar3,uVar4);
  if (*param_1 != -0x80000000) {
    iVar1 = param_1[2];
    if ((uint)(*param_1 - iVar1) < uVar4) {
      FUN_0154e5f8(param_1,iVar1,uVar4,1,1);
      iVar1 = param_1[2];
    }
    FUN_016dd1aa(param_1[1] + iVar1,uVar3,uVar4);
    param_1[2] = iVar1 + uVar4;
  }
  return param_1;
}

