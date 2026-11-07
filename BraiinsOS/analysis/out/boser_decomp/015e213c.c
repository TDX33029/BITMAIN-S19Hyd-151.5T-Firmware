// FUN_015e213c @ 015e213c size=396 calls_out=1 calls_in=1
// strings: 

int FUN_015e213c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  ushort local_2a;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar6 = (**(code **)(param_3 + 0x1c))(param_2);
  iVar2 = (int)uVar6;
  (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0xc))(&local_28,iVar2);
  if ((local_28 != -0x3ec88446 || iStack_20 != -0x249b249d) ||
      (iStack_24 != 0x60d24636 || iStack_1c != 0x7ab693b4)) {
    return 1;
  }
  local_32 = *(ushort *)(param_1 + 0x4c) << 8 | *(ushort *)(param_1 + 0x4c) >> 8;
  local_30 = *(ushort *)(iVar2 + 0x4c) << 8 | *(ushort *)(iVar2 + 0x4c) >> 8;
  iVar1 = FUN_01bed842(&local_32,&local_30,2);
  if (iVar1 == 0) {
    local_2e = *(ushort *)(param_1 + 0x4e) << 8 | *(ushort *)(param_1 + 0x4e) >> 8;
    local_2c = *(ushort *)(iVar2 + 0x4e) << 8 | *(ushort *)(iVar2 + 0x4e) >> 8;
    iVar1 = FUN_01bed842(&local_2e,&local_2c,2);
    if (iVar1 == 0) {
      local_2a = *(ushort *)(param_1 + 0x50) << 8 | *(ushort *)(param_1 + 0x50) >> 8;
      local_28 = CONCAT22(local_28._2_2_,
                          *(ushort *)(iVar2 + 0x50) << 8 | *(ushort *)(iVar2 + 0x50) >> 8);
      iVar1 = FUN_01bed842(&local_2a,&local_28,2);
      if (iVar1 != 0) goto LAB_015e21f8;
      uVar5 = *(uint *)(iVar2 + 0x48);
      uVar4 = *(uint *)(param_1 + 0x48);
      uVar3 = uVar5;
      if (uVar4 < uVar5) {
        uVar3 = uVar4;
      }
      iVar1 = FUN_01bed842(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar2 + 0x44),uVar3);
      if (iVar1 == 0) {
        iVar1 = uVar4 - uVar5;
      }
    }
    iVar2 = (uint)(0 < iVar1) - (uint)(iVar1 < 0);
  }
  else {
LAB_015e21f8:
    iVar2 = (uint)(0 < iVar1) - (uint)(iVar1 < 0);
  }
  return iVar2;
}

