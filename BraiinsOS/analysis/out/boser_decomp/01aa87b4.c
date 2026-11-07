// FUN_01aa87b4 @ 01aa87b4 size=256 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01aa87b4(int *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = param_1[2];
  uVar7 = 1;
  if (0x7f < param_2) {
    uVar7 = 2;
  }
  if ((0x7ff < param_2) && (uVar7 = 4, param_2 < 0x10000)) {
    uVar7 = 3;
  }
  iVar4 = iVar6;
  if ((uint)(*param_1 - iVar6) < uVar7) {
    FUN_016092cc(param_1,iVar6,uVar7,1,1);
    iVar4 = param_1[2];
  }
  pbVar3 = (byte *)(param_1[1] + iVar4);
  if (param_2 < 0x80) {
    *pbVar3 = (byte)param_2;
  }
  else {
    bVar1 = (byte)param_2 & 0x3f | 0x80;
    bVar5 = (byte)(param_2 >> 6);
    if (param_2 < 0x800) {
      bVar5 = bVar5 | 0xc0;
      pbVar3[1] = bVar1;
    }
    else {
      bVar2 = bVar5 & 0x3f | 0x80;
      bVar5 = (byte)(param_2 >> 0xc);
      if (param_2 >> 0x10 != 0) {
        pbVar3[3] = bVar1;
        pbVar3[2] = bVar2;
        pbVar3[1] = bVar5 & 0x3f | 0x80;
        *pbVar3 = (byte)(param_2 >> 0x12) | 0xf0;
        goto LAB_01aa887c;
      }
      pbVar3[1] = bVar2;
      bVar5 = bVar5 | 0xe0;
      pbVar3[2] = bVar1;
    }
    *pbVar3 = bVar5;
  }
LAB_01aa887c:
  param_1[2] = uVar7 + iVar6;
  return 0;
}

