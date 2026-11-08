// FUN_0133ae30 @ 0133ae30 size=104 calls_out=1 calls_in=2
// strings: 

int * FUN_0133ae30(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x18);
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & *(byte *)(param_2 + 0x20);
  param_1[6] = param_1[6] + iVar2;
  if (*param_1 == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    *param_1 = 1;
    param_1[1] = iVar2;
  }
  else {
    *param_1 = 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = iVar3;
  FUN_01336388(uVar1,param_1 + 3,1);
  return param_1;
}

