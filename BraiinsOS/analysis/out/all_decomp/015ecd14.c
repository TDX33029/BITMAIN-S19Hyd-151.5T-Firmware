// FUN_015ecd14 @ 015ecd14 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_015ecd14(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_016d37dc(param_2,6);
  if (iVar2 != -1) {
    *(undefined1 *)param_1 = 5;
    return;
  }
  puVar3 = (undefined4 *)FUN_016d2bc8();
  uVar4 = *puVar3;
  cVar1 = FUN_015e6e98(uVar4);
  if (cVar1 == '\r') {
    *(undefined1 *)param_1 = 4;
    return;
  }
  *param_1 = 0;
  param_1[1] = uVar4;
  return;
}

