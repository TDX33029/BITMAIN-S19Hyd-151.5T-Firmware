// FUN_0144323c @ 0144323c size=76 calls_out=2 calls_in=0
// strings: 

void FUN_0144323c(int *param_1)

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
  FUN_014432bc(param_1 + 2);
  return;
}

