// FUN_0120bef8 @ 0120bef8 size=112 calls_out=2 calls_in=0
// strings: 

bool FUN_0120bef8(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint local_28;
  uint uStack_24;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)param_1[2];
  local_1c = puVar1 + 2;
  local_18 = param_2;
  local_14 = param_3;
  FUN_0120e89c(&local_28,*puVar1,puVar1[1],&local_1c);
  uVar2 = local_28 & 0xff;
  if (uVar2 != 4) {
    if ((char)*param_1 != '\x04') {
      FUN_0069603c(param_1);
    }
    *param_1 = local_28;
    param_1[1] = uStack_24;
  }
  return uVar2 != 4;
}

