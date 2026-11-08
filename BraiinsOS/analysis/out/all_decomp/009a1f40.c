// FUN_009a1f40 @ 009a1f40 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_009a1f40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    do {
      if (*param_1 != -0x80000000) {
        iVar2 = FUN_009a09a4(param_1);
        iVar3 = param_1[0xd];
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar2 = iVar3 * 7;
          iVar1 = iVar3 * 0x39;
        }
        if (iVar3 != 0 && iVar1 != -0x3d) {
          thunk_FUN_016d3fb4(param_1[0xc] + iVar2 * -8 + -0x38);
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 0x16;
    } while (param_2 != 0);
  }
  return;
}

