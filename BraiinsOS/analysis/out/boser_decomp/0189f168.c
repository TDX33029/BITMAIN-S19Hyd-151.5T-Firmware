// FUN_0189f168 @ 0189f168 size=280 calls_out=2 calls_in=2
// strings: 

void FUN_0189f168(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar4;
  byte *pbVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = FUN_018a0130(param_2,param_3,"0",1);
  iVar1 = (int)(uVar8 >> 0x20);
  uVar2 = 0;
  if (uVar8 < 0x1100000000) {
    if (iVar1 == 0) {
      uVar7 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      pbVar4 = (byte *)uVar8;
      do {
        pbVar3 = pbVar4 + 1;
        uVar6 = (uint)*pbVar4;
        if (0x7fffffff < (uint)(int)(char)*pbVar4) {
          if (uVar6 < 0xe0) {
            uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
            pbVar3 = pbVar4 + 2;
          }
          else {
            uVar7 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
            if (uVar6 < 0xf0) {
              uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
              pbVar3 = pbVar4 + 3;
            }
            else {
              pbVar3 = pbVar4 + 4;
              uVar6 = pbVar4[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
            }
          }
        }
        uVar7 = uVar6 - 0x30;
        if (0x39 < uVar6) {
          uVar7 = (uVar6 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d21f6c);
        }
        uVar7 = uVar7 | uVar2 << 4;
        uVar5 = uVar5 << 4 | uVar2 >> 0x1c;
        uVar2 = uVar7;
        pbVar4 = pbVar3;
      } while (pbVar3 != (byte *)uVar8 + iVar1);
    }
    uVar2 = 1;
    param_1[2] = uVar7;
    param_1[3] = uVar5;
  }
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
}

