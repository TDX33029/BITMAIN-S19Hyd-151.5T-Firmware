// FUN_010ebe64 @ 010ebe64 size=228 calls_out=3 calls_in=0
// strings: 

void FUN_010ebe64(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte local_28 [2];
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 local_22;
  uint local_20;
  undefined4 local_1c;
  
  uStack_24 = 0;
  local_22 = 0;
  local_20 = 1;
  local_28[0] = 0;
  local_28[1] = 0;
  uStack_26 = 0;
  if (*(byte *)(param_2 + 0x20) < 0x40) {
    local_20 = 1;
    uVar3 = (uint)*(byte *)(param_2 + 0x20);
    do {
      uVar4 = 1 << (uVar3 & 0xff);
      if (-1 < (int)(uVar3 - 0x20)) {
        uVar4 = 0;
      }
      local_20 = local_20 & ~uVar4;
      bVar5 = uVar3 < 0x3f;
      uVar3 = uVar3 + 1;
    } while (bVar5);
  }
  local_1c = 0;
  iVar1 = FUN_016d6590(*(undefined4 *)(param_2 + 0x30),0xc010b40e,local_28);
  if (iVar1 == -1) {
    uStack_24 = FUN_0126ead8();
    uStack_26 = 0;
    local_22 = 0;
    local_28[0] = 0;
    local_28[1] = 0;
    uVar2 = FUN_010ea424(local_28);
    *(undefined4 *)(param_1 + 4) = uVar2;
    *param_1 = 1;
    return;
  }
  param_1[1] = (byte)local_20 & local_28[0] & 1;
  *param_1 = 0;
  return;
}

