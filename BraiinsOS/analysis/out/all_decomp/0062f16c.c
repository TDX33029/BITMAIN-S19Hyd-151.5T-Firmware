// FUN_0062f16c @ 0062f16c size=352 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_0062f16c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte local_2d;
  byte *local_2c;
  code *local_28;
  
  uVar1 = (uint)*(ushort *)(param_2 + 3);
  uVar6 = *param_2;
  iVar4 = param_2[1];
  if (uVar1 < 0x41) {
    uVar1 = 0x40;
  }
  uVar5 = (uint)*(ushort *)((int)param_2 + 0xe);
  if ((param_2[2] & 0x8000000) == 0) {
    uVar1 = 0x40;
  }
  iVar3 = uVar1 - 0x3f;
  if ((param_2[2] & 0x10000000) == 0) {
    uVar5 = 0x40;
  }
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    iVar2 = (**(code **)(iVar4 + 0xc))(uVar6,&DAT_00412ff6,1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  uVar1 = uVar5 >> 1;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if (iVar3 == -0x20) break;
      local_2c = (byte *)(param_1 + 0x1f + iVar3);
      local_28 = FUN_00facb58;
      iVar2 = FUN_00fa948c(uVar6,iVar4,&DAT_00569c68,&local_2c);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + -1;
    } while (-iVar3 != uVar1);
  }
  if ((uVar5 & 0xffffffc1) == 1) {
    local_2d = *(byte *)((param_1 - uVar1) + 0x1f) >> 4;
    local_28 = FUN_00facb58;
    local_2c = &local_2d;
    uVar6 = FUN_00fa948c(uVar6,iVar4,&DAT_00590e71,&local_2c);
    return uVar6;
  }
  return 0;
}

