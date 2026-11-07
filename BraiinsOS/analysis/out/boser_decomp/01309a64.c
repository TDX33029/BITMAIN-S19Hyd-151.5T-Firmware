// FUN_01309a64 @ 01309a64 size=136 calls_out=1 calls_in=1
// strings: 

void FUN_01309a64(undefined1 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_21;
  undefined1 *local_20;
  code *local_1c;
  undefined1 *local_18;
  code *local_14;
  
  if (param_1[4] == '\x01') {
    local_21 = param_1[5];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    local_20 = &local_21;
    puVar1 = &DAT_00579ef1;
    local_14 = FUN_012fd02c;
    local_1c = FUN_012fcc70;
    local_18 = param_1;
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar1 = &DAT_0059449e;
    local_1c = FUN_012fd02c;
    local_20 = param_1;
  }
  FUN_012fa178(uVar2,uVar3,puVar1,&local_20);
  return;
}

