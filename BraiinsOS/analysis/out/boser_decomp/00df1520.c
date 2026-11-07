// FUN_00df1520 @ 00df1520 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00df1520(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    iVar1 = iVar3 + iVar2 * 0x40;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24));
  }
  FUN_0132b958(*param_1,iVar3,8,0x40);
  return;
}

