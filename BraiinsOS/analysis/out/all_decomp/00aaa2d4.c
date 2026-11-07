// FUN_00aaa2d4 @ 00aaa2d4 size=140 calls_out=2 calls_in=0
// strings: 

void FUN_00aaa2d4(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_r6;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + -1;
      bVar5 = *(int *)(iVar4 - iVar2) != 0;
      iVar1 = 0;
      if (bVar5) {
        unaff_r6 = iVar4 - iVar2;
        iVar1 = *(int *)(unaff_r6 + 4);
      }
      if (bVar5 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar2 = iVar2 + -0xc;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  FUN_00a1f528(param_1 + 0x28);
  return;
}

