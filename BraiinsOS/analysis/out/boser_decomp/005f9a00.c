// FUN_005f9a00 @ 005f9a00 size=144 calls_out=5 calls_in=0
// strings: 

void FUN_005f9a00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  iVar3 = param_1[1];
  if (iVar5 == 3 && iVar3 == 0) {
    puVar4 = (undefined4 *)param_1[3];
    iVar3 = param_1[2];
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(iVar3);
      return;
    }
  }
  else {
    iVar2 = param_1[0x15];
    FUN_005f9800(iVar2);
    thunk_FUN_01be4678(iVar2);
    if (param_1[0x12] != -0x80000000) {
      FUN_006a41c0();
    }
    if (iVar5 != 2 || iVar3 != 0) {
      FUN_005f8158(param_1);
      return;
    }
  }
  return;
}

