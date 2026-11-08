// FUN_01b1cff8 @ 01b1cff8 size=172 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1cff8(byte *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar7 = param_2;
  do {
    cVar1 = pcVar7[8];
    cVar2 = pcVar7[0x14];
    cVar3 = pcVar7[4];
    cVar4 = pcVar7[0x1c];
    cVar5 = pcVar7[0x18];
    pcVar8 = pcVar7 + 0x20;
    cVar6 = *pcVar7;
    param_1[1] = ('\x02' - pcVar7[0x10]) * '\x10' | ('\x02' - pcVar7[0xc]) * '\x02' | cVar2 * -0x80
                 | (byte)(2U - cVar1) >> 2;
    *param_1 = (2U - cVar1) * '@' | ('\x02' - cVar3) * '\b' | 2U - cVar6;
    param_1[2] = ('\x02' - cVar4) * ' ' | ('\x02' - cVar5) * '\x04' | (byte)(2U - cVar2) >> 1;
    param_1 = param_1 + 3;
    pcVar7 = pcVar8;
  } while (param_2 + 0x400 != pcVar8);
  return 0;
}

