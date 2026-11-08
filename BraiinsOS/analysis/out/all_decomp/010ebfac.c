// FUN_010ebfac @ 010ebfac size=192 calls_out=3 calls_in=0
// strings: 

void FUN_010ebfac(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_28;
  undefined4 uStack_24;
  uint local_20;
  undefined4 local_1c;
  
  local_20 = 1;
  local_28 = param_2;
  if (*(byte *)(param_1 + 0x20) < 0x40) {
    local_20 = 1;
    uVar2 = (uint)*(byte *)(param_1 + 0x20);
    do {
      uVar3 = 1 << (uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar3 = 0;
      }
      param_2 = param_2 & ~uVar3;
      local_20 = local_20 & ~uVar3;
      bVar4 = uVar2 < 0x3f;
      uVar2 = uVar2 + 1;
    } while (bVar4);
    local_28 = param_2;
  }
  local_1c = 0;
  uStack_24 = 0;
  iVar1 = FUN_016d6590(*(undefined4 *)(param_1 + 0x30),0xc010b40f,&local_28);
  if (iVar1 == -1) {
    uStack_24 = FUN_0126ead8(0xffffffff);
    local_28 = 0;
    FUN_010ea424(&local_28);
    return;
  }
  return;
}

