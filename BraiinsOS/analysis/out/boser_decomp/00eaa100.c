// FUN_00eaa100 @ 00eaa100 size=164 calls_out=3 calls_in=1
// strings: 

void FUN_00eaa100(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_1024 [4096];
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  uVar1 = param_2 - (param_2 >> 1);
  uVar2 = 0xa2c2a;
  if (param_2 < 0xa2c2a) {
    uVar2 = param_2;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 >> 1 < 0xab) {
    puVar3 = auStack_1024;
    local_24 = 0x155;
  }
  else {
    FUN_00dee004(&local_24);
    puVar3 = (undefined1 *)(iStack_20 + iStack_1c * 0xc);
    local_24 = local_24 - iStack_1c;
  }
  FUN_0117dd70(param_1,param_2,puVar3,local_24,param_2 < 0x41);
  if (0xaa < uVar2 >> 1) {
    FUN_019c71c4(&local_24);
  }
  return;
}

