// FUN_01689f10 @ 01689f10 size=168 calls_out=1 calls_in=0
// strings: 

void FUN_01689f10(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char local_26;
  char local_25;
  undefined4 local_24;
  char *local_20;
  code *local_1c;
  char *local_18;
  code *local_14;
  undefined4 *local_10;
  undefined1 *local_c;
  
  local_25 = *(char *)((int)param_1 + 5);
  cVar1 = *(char *)(param_1 + 1);
  local_24 = *param_1;
  if (cVar1 == local_25) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    local_14 = (code *)&LAB_01a6a304;
    local_18 = (char *)&local_24;
    puVar4 = &DAT_0057d11c;
    local_20 = &local_25;
    local_25 = cVar1;
  }
  else {
    local_10 = &local_24;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    local_18 = &local_25;
    puVar4 = &DAT_00591f01;
    local_c = &LAB_01a6a304;
    local_20 = &local_26;
    local_14 = FUN_016bc3c0;
    local_26 = cVar1;
  }
  local_1c = FUN_016bc3c0;
  FUN_012fa178(uVar2,uVar3,puVar4,&local_20);
  return;
}

