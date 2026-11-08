// FUN_009a1ddc @ 009a1ddc size=188 calls_out=2 calls_in=8
// strings: 

void FUN_009a1ddc(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  do {
    iVar3 = *piVar2;
    if (1 < piVar2[-1] - 1U) {
      if (piVar2[-1] == 0) {
        if ((*(uint *)(iVar3 + 4) & 0x7fffffff) == 0) {
          if ((*(uint *)(iVar3 + 0x10) & 0x7fffffff) == 0) goto LAB_009a1e40;
LAB_009a1e70:
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x14));
          uVar1 = *(uint *)(iVar3 + 0x1c);
        }
        else {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 8));
          if ((*(uint *)(iVar3 + 0x10) & 0x7fffffff) != 0) goto LAB_009a1e70;
LAB_009a1e40:
          uVar1 = *(uint *)(iVar3 + 0x1c);
        }
        if ((uVar1 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x20));
        }
      }
      else {
        FUN_009ccd38(iVar3);
      }
    }
    piVar2 = piVar2 + 2;
    thunk_FUN_016d3fb4(iVar3);
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}

