// FUN_013342dc @ 013342dc size=156 calls_out=5 calls_in=0
// strings: 

void FUN_013342dc(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016bbfc4();
  }
  puVar4 = (undefined4 *)param_2[0xbd];
  iVar2 = param_2[0xbc];
  pcVar3 = (code *)*puVar4;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(iVar2);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_01be4678(iVar2);
  }
  FUN_014fe178(param_2 + 0xbf);
  if (*param_2 != 2) {
    FUN_01334b50(param_2);
  }
  thunk_FUN_01be4678(param_2);
  return;
}

