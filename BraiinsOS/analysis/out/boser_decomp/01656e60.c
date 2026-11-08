// FUN_01656e60 @ 01656e60 size=200 calls_out=2 calls_in=0
// strings: 

void FUN_01656e60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_40 [5];
  char local_29;
  undefined4 *local_28;
  code *local_24;
  char *local_20;
  code *local_1c;
  
  pcVar3 = (char *)*param_1;
  uVar2 = *param_2;
  uVar1 = param_2[1];
  if (*pcVar3 == '\x01') {
    FUN_01bed4e2(local_40,pcVar3 + 1,0x10);
    local_29 = pcVar3[0x11];
    local_24 = FUN_01308e28;
  }
  else {
    local_29 = pcVar3[5];
    local_40[0] = *(undefined4 *)(pcVar3 + 1);
    local_24 = FUN_013095bc;
  }
  local_1c = FUN_012fcc70;
  local_20 = &local_29;
  local_28 = local_40;
  FUN_012fa178(uVar2,uVar1,&DAT_005b25a2,&local_28);
  return;
}

