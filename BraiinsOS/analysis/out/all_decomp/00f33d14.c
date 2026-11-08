// FUN_00f33d14 @ 00f33d14 size=224 calls_out=1 calls_in=4
// strings: 

void FUN_00f33d14(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)*param_1;
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)param_1[2];
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  if ((undefined1 *)param_1[4] != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)param_1[4];
    for (iVar1 = param_1[5]; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    iVar3 = param_1[4];
    iVar4 = param_1[5];
    iVar1 = 0;
    param_1[4] = 0;
    if ((iVar3 != 0) && (iVar4 != 0)) {
      do {
        *(undefined1 *)(iVar3 + iVar1) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar4 != iVar1);
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  param_1[4] = 0;
  param_1[5] = param_1;
  return;
}

