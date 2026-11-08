// FUN_009a1e98 @ 009a1e98 size=168 calls_out=2 calls_in=9
// strings: 

void FUN_009a1e98(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar2 = *piVar1;
    if (1 < piVar1[-1] - 1U) {
      if (piVar1[-1] == 0) {
        if (*(int *)(iVar2 + 8) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0xc));
        }
        if (*(int *)(iVar2 + 0x14) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x18));
        }
        if (*(int *)(iVar2 + 0x20) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x24));
        }
        if (*(int *)(iVar2 + 0x2c) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x30));
        }
      }
      else {
        FUN_009cce08(iVar2);
      }
    }
    piVar1 = piVar1 + 2;
    thunk_FUN_016d3fb4(iVar2);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

