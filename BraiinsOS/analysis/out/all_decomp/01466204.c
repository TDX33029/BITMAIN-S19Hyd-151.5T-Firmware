// FUN_01466204 @ 01466204 size=112 calls_out=1 calls_in=1
// strings: 

void FUN_01466204(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  uStack_1c = 0x46;
  local_14 = 0;
  local_18 = 0;
  puVar1 = (undefined4 *)FUN_014c8f54(param_2,&local_20);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 2;
    return;
  }
  (**(code **)*puVar1)(param_1,puVar1 + 3,puVar1[1],puVar1[2]);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(puVar1 + 4);
  return;
}

