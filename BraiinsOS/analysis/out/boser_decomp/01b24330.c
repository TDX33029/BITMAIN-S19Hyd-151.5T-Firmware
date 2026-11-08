// FUN_01b24330 @ 01b24330 size=184 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b24330(int param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  
  psVar5 = (short *)(param_1 + -2);
  uVar4 = 0;
  uVar3 = *param_2 & 0x3f | 1;
  uVar1 = (param_3 + 4) / 5;
  while (uVar4 < uVar1 - 1) {
    uVar4 = uVar4 + 1;
    sVar2 = ((ushort)uVar3 & 0x3f) - 0x20;
    uVar6 = 1;
    psVar5 = psVar5 + 1;
    *psVar5 = sVar2;
    uVar3 = (int)(uVar3 - (int)sVar2) >> 5;
    uVar7 = uVar4 * 5;
    do {
      uVar7 = uVar7 + 1;
      if (uVar7 < param_3) {
        uVar3 = (uint)(short)((ushort)uVar3 |
                             (ushort)((*(uint *)(param_2 + (uVar7 >> 5) * 2) >> (uVar7 & 0x1f) & 1)
                                     << (uVar6 & 0xff)));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 6);
  }
  *(ushort *)(param_1 + uVar1 * 2 + -2) = (ushort)uVar3;
  return 0;
}

