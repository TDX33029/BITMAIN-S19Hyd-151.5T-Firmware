// FUN_00f99560 @ 00f99560 size=408 calls_out=0 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

int FUN_00f99560(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar7 = param_1 + param_2;
  iVar2 = 0;
  bVar3 = 0;
LAB_00f99578:
  do {
    do {
      bVar4 = bVar3;
      if (param_1 == pbVar7) {
        return iVar2;
      }
      uVar6 = (uint)*param_1;
      pbVar1 = param_1 + 1;
      if (0x7fffffff < (uint)(int)(char)*param_1) {
        if (uVar6 < 0xe0) {
          uVar6 = param_1[1] & 0x3f | (uVar6 & 0x1f) << 6;
          pbVar1 = param_1 + 2;
        }
        else {
          uVar5 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
          if (uVar6 < 0xf0) {
            uVar6 = uVar5 | (uVar6 & 0x1f) << 0xc;
            pbVar1 = param_1 + 3;
          }
          else {
            uVar6 = param_1[3] & 0x3f | uVar5 << 6 | (uVar6 & 7) << 0x12;
            pbVar1 = param_1 + 4;
          }
        }
      }
      param_1 = pbVar1;
      bVar3 = 1;
    } while (uVar6 < 0x20);
    bVar3 = 1;
  } while (uVar6 == 0x7f);
  if (!(bool)(~bVar4 & 1) && uVar6 == 0x6d) goto code_r0x00f99628;
  goto LAB_00f996e8;
code_r0x00f99628:
  if (param_1 == pbVar7) {
    return iVar2;
  }
  uVar6 = (uint)*param_1;
  pbVar1 = param_1 + 1;
  if (0x7fffffff < (uint)(int)(char)*param_1) {
    if (uVar6 < 0xe0) {
      uVar6 = param_1[1] & 0x3f | (uVar6 & 0x1f) << 6;
      pbVar1 = param_1 + 2;
    }
    else {
      uVar5 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
      if (uVar6 < 0xf0) {
        uVar6 = uVar5 | (uVar6 & 0x1f) << 0xc;
        pbVar1 = param_1 + 3;
      }
      else {
        uVar6 = param_1[3] & 0x3f | uVar5 << 6 | (uVar6 & 7) << 0x12;
        pbVar1 = param_1 + 4;
      }
    }
  }
  param_1 = pbVar1;
  if ((0x1f < uVar6) && (uVar6 != 0x7f)) {
    bVar4 = 0;
LAB_00f996e8:
    iVar2 = iVar2 + (uint)(byte)~bVar4;
    bVar3 = bVar4;
  }
  goto LAB_00f99578;
}

