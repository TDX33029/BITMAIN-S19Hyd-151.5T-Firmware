// FUN_010a7d84 @ 010a7d84 size=216 calls_out=0 calls_in=1
// strings: 

uint FUN_010a7d84(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ushort uVar6;
  
  pbVar4 = *(byte **)(param_1 + 4);
  pbVar5 = *(byte **)(param_1 + 8);
  if (pbVar5 < pbVar4) {
    bVar1 = *pbVar5;
    *(byte **)(param_1 + 8) = pbVar5 + 1;
    uVar6 = bVar1 - 0x30 & 0xff;
    uVar3 = 2;
    if (uVar6 < 10) {
      if (pbVar4 <= pbVar5 + 1) {
        return 0x30001;
      }
      bVar1 = pbVar5[1];
      *(byte **)(param_1 + 8) = pbVar5 + 2;
      if ((byte)(bVar1 - 0x30) < 10) {
        if (pbVar4 <= pbVar5 + 2) {
          return 0x30001;
        }
        bVar2 = pbVar5[2];
        *(byte **)(param_1 + 8) = pbVar5 + 3;
        if ((byte)(bVar2 - 0x30) < 10) {
          return ((short)uVar6 * 100 + (uint)(byte)(bVar1 * '\n' + 0x20) +
                  (uint)(byte)(bVar2 - 0x30) & 0x1fff) << 0x10;
        }
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3 | 0x30000;
}

