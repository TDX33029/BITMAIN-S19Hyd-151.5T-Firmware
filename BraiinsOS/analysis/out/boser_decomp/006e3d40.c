// FUN_006e3d40 @ 006e3d40 size=168 calls_out=3 calls_in=1
// strings: 

void FUN_006e3d40(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_102c [4096];
  int local_2c;
  int iStack_28;
  int iStack_24;
  
  uVar1 = param_2 - (param_2 >> 1);
  uVar2 = 0xa2c2a;
  if (param_2 < 0xa2c2a) {
    uVar2 = param_2;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 >> 1 < 0xab) {
    puVar3 = auStack_102c;
    local_2c = 0x155;
  }
  else {
    FUN_006d0474(&local_2c);
    puVar3 = (undefined1 *)(iStack_28 + iStack_24 * 0xc);
    local_2c = local_2c - iStack_24;
  }
  FUN_006e3e04(param_1,param_2,puVar3,local_2c,param_2 < 0x41,param_3);
  if (0xaa < uVar2 >> 1) {
    FUN_006a41c0(&local_2c);
  }
  return;
}

