// FUN_009c91f4 @ 009c91f4 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_009c91f4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[4];
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(param_1[3] - iVar2);
  }
  uVar3 = param_1[1];
  FUN_006d0d40(uVar3,param_1[2]);
  FUN_0132b958(*param_1,uVar3,4,0x54);
  return;
}

