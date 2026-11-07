// FUN_0141c678 @ 0141c678 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_0141c678(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *param_1;
  iVar6 = param_1[1];
  if (iVar5 == 4 && iVar6 == 0) {
    FUN_0141c8d4(param_1 + 2);
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
  if (iVar5 == 3 && iVar6 == 0) {
    return;
  }
  FUN_01406020(param_1);
  return;
}

