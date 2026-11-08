// FUN_0077ee84 @ 0077ee84 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_0077ee84(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_110 [8];
  undefined1 *local_108;
  
  iVar4 = *(int *)(param_1 + 0x1f0);
  iVar2 = *(int *)(param_1 + 500);
  piVar1 = (int *)(param_1 + 8);
  if (2 < *(uint *)(param_1 + 0x1e8)) {
    piVar1 = (int *)*(int *)(param_1 + 8);
  }
  iVar3 = (int)(piVar1 + iVar4 * 0x3c);
  while( true ) {
    if (iVar2 == iVar4) {
      return;
    }
    iVar4 = iVar4 + 1;
    *(int *)(param_1 + 0x1f0) = iVar4;
    FUN_01bed4e2(auStack_110,iVar3,0xf0);
    if (local_108 == &DAT_3b9aca00) break;
    FUN_00769584(auStack_110);
    iVar3 = iVar3 + 0xf0;
  }
  return;
}

