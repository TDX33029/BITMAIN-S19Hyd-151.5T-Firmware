// FUN_006e6f14 @ 006e6f14 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_006e6f14(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_006e7044(param_1);
    return;
  }
  iVar3 = param_1[3];
  iVar2 = param_1[4] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_006e7044(iVar1);
    iVar1 = iVar1 + 0x90;
  }
  FUN_0132b958(param_1[2],iVar3,8,0x90);
  return;
}

