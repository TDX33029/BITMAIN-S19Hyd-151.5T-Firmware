// FUN_01a5c83c @ 01a5c83c size=88 calls_out=2 calls_in=1
// strings: 

void FUN_01a5c83c(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0134aee0(*param_1,param_1[1],4,0xc);
  iVar2 = param_1[3];
  if (iVar2 != 0) {
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

