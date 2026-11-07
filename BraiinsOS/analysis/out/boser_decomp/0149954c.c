// FUN_0149954c @ 0149954c size=164 calls_out=3 calls_in=1
// strings: 

void FUN_0149954c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_1028 [4100];
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  uVar1 = param_2 - (param_2 >> 1);
  uVar3 = 200000;
  if (param_2 < 200000) {
    uVar3 = param_2;
  }
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 < 0x67) {
    puVar2 = auStack_1028;
    local_24 = 0x66;
  }
  else {
    FUN_01488254(&local_24,uVar3);
    puVar2 = (undefined1 *)(iStack_20 + iStack_1c * 0x28);
    local_24 = local_24 - iStack_1c;
  }
  FUN_01499614(param_1,param_2,puVar2,local_24,param_2 < 0x41);
  if (0x66 < uVar3) {
    FUN_01488188(&local_24);
  }
  return;
}

