// FUN_013632c8 @ 013632c8 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_013632c8(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  iVar3 = 0;
  while (param_2 != iVar3) {
    if (*piVar2 == 0x110009) {
      piVar1 = param_1 + iVar3 * 0x26 + 1;
    }
    else {
      FUN_01362c64(piVar2[0x1e],piVar2[0x1f]);
      piVar1 = piVar2;
      if (piVar2[0x1d] != 0) {
        thunk_FUN_016d3fb4(piVar2[0x1e]);
      }
    }
    piVar2 = piVar2 + 0x26;
    FUN_013626c0(piVar1);
    iVar3 = iVar3 + 1;
  }
  return;
}

