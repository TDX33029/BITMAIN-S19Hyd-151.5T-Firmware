// FUN_016ae2b8 @ 016ae2b8 size=280 calls_out=1 calls_in=0
// strings: UnsupportedAnchored

byte FUN_016ae2b8(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  code *pcVar3;
  int *local_14;
  undefined4 *local_10;
  byte local_c;
  byte local_b;
  
  if (*param_1 == 3) {
    local_14 = param_1 + 1;
    local_c = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00567260,4);
    puVar2 = &DAT_00567548;
    pcVar3 = FUN_01135a50;
  }
  else {
    local_14 = param_1;
    local_c = (**(code **)(param_2[1] + 0xc))(*param_2,"UnsupportedAnchored",0x13);
    puVar2 = &DAT_005675d0;
    pcVar3 = FUN_016a813c;
  }
  local_b = 0;
  local_10 = param_2;
  FUN_00fb2258(&local_10,puVar2,4,&local_14,pcVar3);
  if (local_b != 1 || (local_c & 1) != 0) {
    return (local_b | local_c) & 1;
  }
  if ((*(byte *)((int)local_10 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_10[1] + 0xc))(*local_10," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_10[1] + 0xc))(*local_10,"}",1);
  return bVar1 & 1;
}

