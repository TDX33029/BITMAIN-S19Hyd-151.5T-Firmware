// FUN_0147beec @ 0147beec size=92 calls_out=2 calls_in=7
// strings: 

void FUN_0147beec(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)param_1[1];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  if (*(char *)((int)param_1 + 0x15) == '\x02') {
    return;
  }
  FUN_014217b4(param_1 + 2);
  return;
}

