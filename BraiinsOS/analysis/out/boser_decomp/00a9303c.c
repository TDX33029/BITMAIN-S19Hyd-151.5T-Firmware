// FUN_00a9303c @ 00a9303c size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00a9303c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    iVar1 = iVar3 + iVar2 * 0x20;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
  }
  FUN_0132b958(*param_1,iVar3,8,0x20);
  return;
}

