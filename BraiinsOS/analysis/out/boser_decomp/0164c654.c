// FUN_0164c654 @ 0164c654 size=68 calls_out=1 calls_in=1
// strings: 

void FUN_0164c654(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 0) {
    iVar2 = param_1[3];
    puVar3 = (undefined4 *)param_1[4];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  return;
}

