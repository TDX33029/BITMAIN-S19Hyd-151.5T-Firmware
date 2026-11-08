// FUN_0146bde8 @ 0146bde8 size=116 calls_out=3 calls_in=3
// strings: 

void FUN_0146bde8(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 4 && param_1[1] == 0) {
    FUN_0146b7d0(param_1 + 2);
    return;
  }
  piVar2 = (int *)param_1[0x26];
  iVar3 = *piVar2;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)piVar2[1];
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  thunk_FUN_016d3fb4(piVar2);
  FUN_0146be90(param_1);
  return;
}

