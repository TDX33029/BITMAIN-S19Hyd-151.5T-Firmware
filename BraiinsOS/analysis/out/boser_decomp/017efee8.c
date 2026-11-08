// FUN_017efee8 @ 017efee8 size=224 calls_out=0 calls_in=0
// strings: 

void FUN_017efee8(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_2 == 0) {
    if (param_2[1] == 0) {
      uVar2 = 0;
      *param_1 = 1;
      iVar3 = 8;
      uVar4 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
    }
    else {
      uVar2 = param_2[3];
      uVar4 = 0;
      param_1[4] = uVar2;
      *param_1 = 1;
      param_1[1] = 0;
      iVar3 = 8;
      param_1[5] = 0;
    }
  }
  else {
    if (*param_2 == 1) {
      uVar2 = param_2[4];
      uVar4 = param_2[5];
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      uVar1 = (uint)((uint)(0xfffffffd < uVar2) <= uVar4 + 1);
      *param_1 = uVar1;
      param_1[1] = 0;
    }
    else {
      uVar2 = param_2[6];
      uVar4 = param_2[7];
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      uVar1 = (uint)((uint)(0xfffffffd < uVar2) <= uVar4 + 1);
      *param_1 = uVar1;
      param_1[1] = 0;
    }
    if (uVar1 == 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    iVar3 = 0x10;
  }
  *(uint *)((int)param_1 + iVar3) = uVar2;
  ((uint *)((int)param_1 + iVar3))[1] = uVar4;
  return;
}

