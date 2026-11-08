// FUN_009f7814 @ 009f7814 size=152 calls_out=2 calls_in=1
// strings: 

void FUN_009f7814(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  FUN_009ee7d0();
  if (param_1[1] != 0) {
    thunk_FUN_016d3fb4(*param_1);
  }
  iVar3 = 0;
  uVar4 = 0;
  do {
    iVar5 = *(int *)((int)param_1 + iVar3 + 0xc);
    if (iVar5 != 0) {
      puVar1 = (undefined4 *)(iVar5 + 8);
      iVar2 = 1 << (uVar4 & 0xff);
      do {
        if ((*(char *)(puVar1 + 2) == '\x01') && (puVar1[-1] != 0)) {
          thunk_FUN_016d3fb4(*puVar1);
        }
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      thunk_FUN_016d3fb4(iVar5);
    }
    iVar3 = iVar3 + 4;
    uVar4 = uVar4 + 1;
  } while (iVar3 != 0x7c);
  return;
}

