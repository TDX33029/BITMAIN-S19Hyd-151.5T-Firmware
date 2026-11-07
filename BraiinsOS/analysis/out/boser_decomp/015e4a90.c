// FUN_015e4a90 @ 015e4a90 size=488 calls_out=1 calls_in=1
// strings: 

int FUN_015e4a90(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ushort local_38 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar7 = (**(code **)(param_3 + 0x1c))(param_2);
  iVar6 = (int)uVar7;
  (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0xc))(&local_28,iVar6);
  iVar5 = 1;
  if ((local_28 == -0x2573b0e2 && local_20 == 0x19da2243) &&
      (local_24 == -0x4dbea2a8 && local_1c == -0x367c12f5)) {
    bVar1 = *(byte *)(iVar6 + 0x50);
    bVar2 = *(byte *)(param_1 + 0x50);
    if (bVar2 == bVar1) {
      if (bVar2 == 0) {
        iVar6 = FUN_01bed842(param_1 + 0x51,iVar6 + 0x51,4);
        iVar5 = (uint)(0 < iVar6) - (uint)(iVar6 < 0);
      }
      else {
        local_38[6] = *(ushort *)(param_1 + 0x5d) << 8 | *(ushort *)(param_1 + 0x5d) >> 8;
        local_38[5] = *(ushort *)(param_1 + 0x5b) << 8 | *(ushort *)(param_1 + 0x5b) >> 8;
        local_38[4] = *(ushort *)(param_1 + 0x59) << 8 | *(ushort *)(param_1 + 0x59) >> 8;
        local_38[3] = *(ushort *)(param_1 + 0x57) << 8 | *(ushort *)(param_1 + 0x57) >> 8;
        local_38[2] = *(ushort *)(param_1 + 0x55) << 8 | *(ushort *)(param_1 + 0x55) >> 8;
        local_38[1] = *(ushort *)(param_1 + 0x53) << 8 | *(ushort *)(param_1 + 0x53) >> 8;
        local_38[0] = *(ushort *)(param_1 + 0x51) << 8 | *(ushort *)(param_1 + 0x51) >> 8;
        local_38[7] = *(ushort *)(param_1 + 0x5f) << 8 | *(ushort *)(param_1 + 0x5f) >> 8;
        local_20 = CONCAT22(*(ushort *)(iVar6 + 0x5b) << 8 | *(ushort *)(iVar6 + 0x5b) >> 8,
                            *(ushort *)(iVar6 + 0x59) << 8 | *(ushort *)(iVar6 + 0x59) >> 8);
        local_24 = CONCAT22(*(ushort *)(iVar6 + 0x57) << 8 | *(ushort *)(iVar6 + 0x57) >> 8,
                            *(ushort *)(iVar6 + 0x55) << 8 | *(ushort *)(iVar6 + 0x55) >> 8);
        local_28 = CONCAT22(*(ushort *)(iVar6 + 0x53) << 8 | *(ushort *)(iVar6 + 0x53) >> 8,
                            *(ushort *)(iVar6 + 0x51) << 8 | *(ushort *)(iVar6 + 0x51) >> 8);
        local_1c = CONCAT22(*(ushort *)(iVar6 + 0x5f) << 8 | *(ushort *)(iVar6 + 0x5f) >> 8,
                            *(ushort *)(iVar6 + 0x5d) << 8 | *(ushort *)(iVar6 + 0x5d) >> 8);
        iVar6 = 0;
        do {
          if (iVar6 + 2 == 0x12) {
            return 0;
          }
          uVar3 = *(ushort *)((int)&local_28 + iVar6);
          uVar4 = *(ushort *)((int)local_38 + iVar6);
          iVar6 = iVar6 + 2;
        } while (uVar4 == uVar3);
        iVar5 = (uint)(uVar4 >= uVar3) - (uint)(uVar4 < uVar3);
      }
    }
    else {
      iVar5 = (uint)(bVar1 < bVar2) - (uint)(bVar2 < bVar1);
    }
  }
  return iVar5;
}

