// FUN_0121a258 @ 0121a258 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_0121a258(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    iVar1 = iVar3 + iVar2 * 0x20;
    FUN_0134bd64(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  FUN_0134aee0(*param_1,iVar3,8,0x20);
  return;
}

