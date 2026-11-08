// FUN_016da752 @ 016da752 size=52 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_016da752(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_128 [35];
  undefined4 local_9c;
  undefined1 auStack_98 [128];
  undefined4 local_18;
  
  FUN_016dd606(auStack_98,0,0x88);
  local_18 = 0x10000000;
  local_9c = param_2;
  iVar1 = FUN_016da630(param_1,&local_9c,local_128);
  if (iVar1 < 0) {
    local_128[0] = 0xffffffff;
  }
  return local_128[0];
}

