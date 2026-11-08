// FUN_01744c78 @ 01744c78 size=116 calls_out=3 calls_in=1
// strings: 

void FUN_01744c78(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 0) {
    FUN_01744d2c(param_1 + 0xc);
    if ((char)param_1[1] == '\x03') {
      return;
    }
    FUN_01a8c248(param_1 + 1);
    return;
  }
  if (*param_1 == 1) {
    puVar3 = (undefined4 *)param_1[2];
    iVar2 = param_1[1];
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

