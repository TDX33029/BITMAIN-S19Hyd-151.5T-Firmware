// FUN_0089f9b4 @ 0089f9b4 size=180 calls_out=4 calls_in=0
// strings: 

longlong FUN_0089f9b4(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((char)param_1[4] == '\0') {
    iVar2 = *param_1;
    iVar3 = param_1[1];
    iVar4 = param_1[2];
    uVar1 = FUN_00808f1c(&DAT_00344cb7,0x1b);
    puVar5 = (undefined4 *)(iVar3 + 4);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      puVar5 = puVar5 + 3;
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
    *(undefined1 *)(param_1 + 4) = 1;
    return (ulonglong)uVar1 << 0x20;
  }
  if ((char)param_1[4] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01862d8c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb7cc0(&DAT_01862d8c);
}

