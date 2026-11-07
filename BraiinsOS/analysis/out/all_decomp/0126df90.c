// FUN_0126df90 @ 0126df90 size=216 calls_out=5 calls_in=8
// strings: 

void FUN_0126df90(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = 0;
  local_30 = 1;
  iVar2 = FUN_016e034e(param_2,&local_30,8);
  if (iVar2 != -1) {
    *(undefined1 *)param_1 = 4;
    return;
  }
  puVar3 = (undefined4 *)FUN_016d2bc8();
  uVar4 = *puVar3;
  cVar1 = FUN_005bc530(uVar4);
  if (cVar1 != '\r') {
    *param_1 = 0;
    param_1[1] = uVar4;
    return;
  }
  local_24 = 0;
  local_28 = 0;
  iVar2 = FUN_016e0250(param_2,&local_28,8);
  if (iVar2 == -1) {
    uVar4 = *puVar3;
    cVar1 = FUN_005bc530(uVar4);
    if (cVar1 != '\r') {
      *param_1 = 0;
      param_1[1] = uVar4;
      return;
    }
  }
  FUN_0126df90(param_1,param_2);
  return;
}

