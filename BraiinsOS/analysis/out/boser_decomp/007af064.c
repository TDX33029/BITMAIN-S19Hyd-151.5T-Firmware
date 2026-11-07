// FUN_007af064 @ 007af064 size=80 calls_out=1 calls_in=0
// strings: 

void FUN_007af064(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    piVar1 = param_1 + 2;
    if (*piVar1 == 0) {
      piVar1 = param_1 + 4;
    }
    iVar3 = *piVar1;
    puVar4 = (undefined4 *)piVar1[1];
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(iVar3);
      return;
    }
  }
  return;
}

