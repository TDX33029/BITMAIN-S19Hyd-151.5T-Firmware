// FUN_0087c920 @ 0087c920 size=416 calls_out=4 calls_in=0
// strings: 

longlong FUN_0087c920(int *param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_3c [12];
  int **local_30;
  undefined1 *local_2c;
  int *local_28;
  
  DataMemoryBarrier(0xb);
  if (param_1[8] == 0) {
    iVar3 = param_1[3];
  }
  else {
    local_30 = &local_28;
    local_28 = param_1;
    FUN_015eedc4(param_1 + 8,1,&local_30,&DAT_01861d84,&DAT_018ac9b8);
    iVar3 = param_1[3];
  }
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    sVar2 = *(short *)(param_2 + 300);
    uVar4 = FUN_008350fc(param_1[4],param_1[5],param_1[6],param_1[7],sVar2);
    uVar1 = uVar4 >> 0x19;
    iVar3 = *param_1;
    iVar9 = 0;
    while( true ) {
      uVar4 = param_1[1] & uVar4;
      uVar8 = *(uint *)(iVar3 + uVar4);
      uVar5 = uVar8 ^ uVar1 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                param_1[1];
        uVar5 = uVar5 - 1 & uVar5;
        if (sVar2 == *(short *)(iVar3 + -0x10 + uVar6 * -0x10)) {
          uVar5 = (iVar3 + uVar6 * -0x10) - 0xc;
          goto LAB_0087ca08;
        }
      }
      uVar5 = 0;
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      iVar9 = iVar9 + 4;
      uVar4 = uVar4 + iVar9;
    }
  }
LAB_0087ca08:
  local_30 = (int **)(param_2 + 300);
  local_2c = &LAB_0087cc18;
  FUN_00600d2c(auStack_3c,&DAT_0057c1f6,&local_30);
  puVar7 = (undefined4 *)FUN_00808de4(auStack_3c);
  if (uVar5 == 0) {
    return CONCAT44(puVar7,1);
  }
  (**(code **)*puVar7)(puVar7);
  return (ulonglong)uVar5 << 0x20;
}

