// FUN_01416cc4 @ 01416cc4 size=192 calls_out=0 calls_in=1
// strings: 

uint FUN_01416cc4(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ushort uVar8;
  
  pbVar6 = *(byte **)(param_1 + 4);
  uVar4 = 3;
  pbVar7 = *(byte **)(param_1 + 8);
  uVar3 = 0;
  if (pbVar7 < pbVar6) {
    bVar1 = *pbVar7;
    *(byte **)(param_1 + 8) = pbVar7 + 1;
    uVar8 = bVar1 - 0x30 & 0xff;
    uVar5 = 2;
    if (9 < uVar8) goto LAB_01416d78;
    if (pbVar7 + 1 < pbVar6) {
      bVar1 = pbVar7[1];
      *(byte **)(param_1 + 8) = pbVar7 + 2;
      if (9 < (byte)(bVar1 - 0x30)) goto LAB_01416d78;
      if (pbVar7 + 2 < pbVar6) {
        bVar2 = pbVar7[2];
        *(byte **)(param_1 + 8) = pbVar7 + 3;
        if ((byte)(bVar2 - 0x30) < 10) {
          uVar5 = 0;
          uVar4 = (short)uVar8 * 100 + (uint)(byte)(bVar1 * '\n' + 0x20) +
                  (uint)(byte)(bVar2 - 0x30);
          uVar3 = uVar4 & 0x1f00;
          uVar4 = uVar4 & 0xff;
        }
        goto LAB_01416d78;
      }
    }
  }
  uVar5 = 1;
LAB_01416d78:
  return uVar5 | (uVar4 | uVar3) << 0x10;
}

