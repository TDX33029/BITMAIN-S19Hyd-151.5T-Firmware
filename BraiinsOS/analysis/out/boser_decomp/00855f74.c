// FUN_00855f74 @ 00855f74 size=80 calls_out=2 calls_in=10
// strings: 

void FUN_00855f74(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  if (iVar2 == -0x80000000) {
    return;
  }
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  for (iVar3 = 0; iVar5 != iVar3; iVar3 = iVar3 + 1) {
    iVar1 = iVar4 + iVar3 * 0x20;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
  }
  FUN_0132b958(iVar2,iVar4,8,0x20);
  return;
}

