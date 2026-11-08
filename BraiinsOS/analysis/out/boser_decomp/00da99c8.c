// FUN_00da99c8 @ 00da99c8 size=60 calls_out=2 calls_in=15
// strings: 

void FUN_00da99c8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_01ae17c0(iVar2,param_1[2]);
  FUN_0134aee0(iVar1,iVar2,8,0x48);
  return;
}

