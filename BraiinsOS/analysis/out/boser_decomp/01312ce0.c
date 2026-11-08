// FUN_01312ce0 @ 01312ce0 size=240 calls_out=0 calls_in=5
// strings: 

void FUN_01312ce0(undefined4 *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar6;
  byte *pbVar5;
  byte *pbVar7;
  
  pbVar7 = param_2 + (int)param_3;
  if (param_3 == (byte *)0x0) {
    iVar3 = 0;
    pbVar1 = (byte *)0x0;
  }
  else {
    pbVar1 = (byte *)0x0;
    pbVar6 = param_2;
    do {
      pbVar5 = pbVar6 + 1;
      uVar2 = (uint)*pbVar6;
      if (0x7fffffff < (uint)(int)(char)*pbVar6) {
        if (uVar2 < 0xe0) {
          uVar2 = pbVar6[1] & 0x3f | (uVar2 & 0x1f) << 6;
          pbVar5 = pbVar6 + 2;
        }
        else {
          uVar4 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar2 < 0xf0) {
            uVar2 = uVar4 | (uVar2 & 0x1f) << 0xc;
            pbVar5 = pbVar6 + 3;
          }
          else {
            pbVar5 = pbVar6 + 4;
            uVar2 = pbVar6[3] & 0x3f | uVar4 << 6 | (uVar2 & 7) << 0x12;
          }
        }
      }
      if ((0x17 < uVar2 - 9) || ((1 << (uVar2 - 9 & 0xff) & 0x800013U) == 0)) {
        pbVar7 = param_2 + (int)pbVar1;
        iVar3 = (int)param_3 - (int)pbVar1;
        goto LAB_01312dbc;
      }
      pbVar1 = pbVar5 + ((int)pbVar1 - (int)pbVar6);
      pbVar6 = pbVar5;
    } while (pbVar5 != pbVar7);
    iVar3 = 0;
    pbVar1 = param_3;
  }
LAB_01312dbc:
  *param_1 = 0;
  param_1[1] = pbVar7;
  param_1[2] = iVar3;
  param_1[3] = param_2;
  param_1[4] = pbVar1;
  return;
}

