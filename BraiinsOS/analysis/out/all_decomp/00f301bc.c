// FUN_00f301bc @ 00f301bc size=92 calls_out=3 calls_in=1
// strings: 

void FUN_00f301bc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00f33e44();
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar1 = *param_1;
    iVar3 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar3) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
    iVar3 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar3) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
    thunk_FUN_016d3fb4();
  }
  FUN_00f30238(param_1[2],param_1[3]);
  return;
}

