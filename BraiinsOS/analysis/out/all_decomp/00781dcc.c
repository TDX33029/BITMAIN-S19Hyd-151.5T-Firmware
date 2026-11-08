// FUN_00781dcc @ 00781dcc size=188 calls_out=2 calls_in=2
// strings: 

void FUN_00781dcc(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_r6;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x20);
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
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  FUN_00bb02f4(param_1 + 0x70);
  FUN_00bb02f4(param_1 + 0xb8);
  FUN_00bb02f4(param_1 + 0x100);
  FUN_00bb02f4(param_1 + 0x148);
  FUN_00bb02f4(param_1 + 400);
  FUN_00bb02f4(param_1 + 0x1d8);
  FUN_00bb02f4(param_1 + 0x220);
  return;
}

