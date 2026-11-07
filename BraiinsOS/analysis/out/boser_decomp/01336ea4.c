// FUN_01336ea4 @ 01336ea4 size=96 calls_out=4 calls_in=1
// strings: 

void FUN_01336ea4(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[0xbd];
  iVar2 = param_1[0xbc];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(iVar2);
  }
  FUN_014fe178(param_1 + 0xbf);
  if (*param_1 != 2) {
    FUN_01336f5c(param_1);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

