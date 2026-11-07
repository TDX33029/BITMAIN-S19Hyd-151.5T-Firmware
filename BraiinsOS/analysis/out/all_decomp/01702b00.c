// FUN_01702b00 @ 01702b00 size=180 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01702b00(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  pbVar2 = param_1;
  do {
    pbVar3 = pbVar2 + 3;
    iVar8 = param_2[2];
    iVar7 = param_2[5];
    uVar4 = param_2[1];
    uVar1 = param_2[7];
    uVar5 = param_2[6];
    uVar6 = *param_2;
    pbVar2[1] = ('\x02' - (char)param_2[4]) * '\x10' | ('\x02' - (char)param_2[3]) * '\x02' |
                (char)(2U - iVar7) * -0x80 | (byte)((2U - iVar8 & 0xff) >> 2);
    *pbVar2 = (char)(2U - iVar8) * '@' | ('\x02' - (char)uVar4) * '\b' | 2U - (char)uVar6;
    pbVar2[2] = ('\x02' - (char)uVar1) * ' ' | ('\x02' - (char)uVar5) * '\x04' |
                (byte)((2U - iVar7 & 0xff) >> 1);
    param_2 = param_2 + 8;
    pbVar2 = pbVar3;
  } while (param_1 + 0x60 != pbVar3);
  return 0;
}

