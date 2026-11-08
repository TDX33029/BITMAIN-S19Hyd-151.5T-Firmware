// FUN_009c971c @ 009c971c size=96 calls_out=3 calls_in=0
// strings: 

void FUN_009c971c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[4];
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(param_1[3] - iVar2);
  }
  uVar3 = param_1[1];
  FUN_012759c0(uVar3,param_1[2]);
  FUN_0132b958(*param_1,uVar3,8,0xd8);
  return;
}

