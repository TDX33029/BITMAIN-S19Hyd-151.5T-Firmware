// FUN_019c7284 @ 019c7284 size=116 calls_out=2 calls_in=0
// strings: 

uint FUN_019c7284(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  iVar3 = FUN_01be6608(7,&local_20);
  uVar2 = local_1c;
  uVar1 = local_20;
  uVar4 = 0x200;
  if (iVar3 == 0) {
    local_20 = local_18;
    local_1c = local_14;
    iVar3 = FUN_01be6bc0(7,&local_20);
    if (iVar3 != 0) {
      local_20 = uVar1;
      local_1c = uVar2;
    }
    uVar4 = (uint)((byte)local_1c & 1) << 0x1f | local_20 >> 1;
  }
  return uVar4;
}

