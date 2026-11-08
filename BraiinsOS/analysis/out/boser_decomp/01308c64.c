// FUN_01308c64 @ 01308c64 size=228 calls_out=1 calls_in=1
// strings: Waker | vtable

byte FUN_01308c64(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 local_24;
  undefined4 *local_20;
  byte local_1c;
  byte local_1b;
  
  local_24 = *param_1;
  local_1c = (**(code **)(param_2[1] + 0xc))(*param_2,"Waker",5);
  local_1b = 0;
  local_20 = param_2;
  uVar2 = FUN_01302c38(&local_20,&DAT_0056f5ec,4,param_1 + 1,FUN_01308d60);
  FUN_01302c38(uVar2,"vtable",6,&local_24,FUN_01308d60);
  bVar1 = local_1b | local_1c;
  if (local_1b == 1 && (local_1c & 1) == 0) {
    if ((*(byte *)((int)local_20 + 10) & 0x80) == 0) {
      uVar2 = *local_20;
      uVar4 = 2;
      pcVar5 = *(code **)(local_20[1] + 0xc);
      pcVar3 = " }AlertMessagePayloadChangeCipherSpecPayload\x0e";
    }
    else {
      uVar2 = *local_20;
      uVar4 = 1;
      pcVar5 = *(code **)(local_20[1] + 0xc);
      pcVar3 = "}";
    }
    bVar1 = (*pcVar5)(uVar2,pcVar3,uVar4);
  }
  return bVar1 & 1;
}

