// FUN_019b6d58 @ 019b6d58 size=292 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_019b6d58(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *local_24;
  char local_20;
  undefined1 local_1f;
  int local_1c;
  
  uVar2 = 1;
  local_20 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053340d,1);
  local_1f = 0;
  local_24 = param_2;
  local_1c = param_1;
  uVar1 = FUN_01303170(&local_24,&local_1c,&DAT_019a4a68);
  local_1c = param_1 + 1;
  uVar1 = FUN_01303170(uVar1,&local_1c,&DAT_019a4a68);
  local_1c = param_1 + 2;
  uVar1 = FUN_01303170(uVar1,&local_1c,&DAT_019a4a68);
  local_1c = param_1 + 3;
  uVar1 = FUN_01303170(uVar1,&local_1c,&DAT_019a4a68);
  local_1c = param_1 + 4;
  uVar1 = FUN_01303170(uVar1,&local_1c,&DAT_019a4a68);
  local_1c = param_1 + 5;
  uVar1 = FUN_01303170(uVar1,&local_1c,&DAT_019a4a68);
  local_1c = param_1 + 6;
  uVar1 = FUN_01303170(uVar1,&local_1c,&DAT_019a4a68);
  local_1c = param_1 + 7;
  FUN_01303170(uVar1,&local_1c,&DAT_019a4a68);
  if (local_20 == '\0') {
    uVar2 = (**(code **)(local_24[1] + 0xc))(*local_24,"]",1);
  }
  return uVar2;
}

