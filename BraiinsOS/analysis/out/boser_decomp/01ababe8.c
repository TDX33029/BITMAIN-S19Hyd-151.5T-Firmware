// FUN_01ababe8 @ 01ababe8 size=256 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01ababe8(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  piVar6 = (int *)*param_1;
  uVar8 = 1;
  if (0x7f < param_2) {
    uVar8 = 2;
  }
  iVar7 = piVar6[2];
  if ((0x7ff < param_2) && (uVar8 = 4, param_2 < 0x10000)) {
    uVar8 = 3;
  }
  iVar4 = iVar7;
  if ((uint)(*piVar6 - iVar7) < uVar8) {
    FUN_006520b4(piVar6,iVar7,uVar8,1,1);
    iVar4 = piVar6[2];
  }
  pbVar3 = (byte *)(piVar6[1] + iVar4);
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
        goto LAB_01abacb0;
      }
      pbVar3[1] = bVar2;
      bVar5 = bVar5 | 0xe0;
      pbVar3[2] = bVar1;
    }
    *pbVar3 = bVar5;
  }
LAB_01abacb0:
  piVar6[2] = uVar8 + iVar7;
  return 0;
}

