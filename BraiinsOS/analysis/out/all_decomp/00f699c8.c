// FUN_00f699c8 @ 00f699c8 size=328 calls_out=0 calls_in=1
// strings: 

void FUN_00f699c8(undefined1 *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  
  if (0x35 < param_3) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  uVar8 = 0;
  if (0xfff80001 < param_2 - 0x3ffffU) {
    uVar8 = 1;
    uVar7 = param_5 & 0xff;
    puVar2 = &DAT_0035d4d3;
    if (param_2 % 400 < 0) {
      puVar2 = &DAT_0035d663;
    }
    bVar1 = puVar2[param_2 % 400];
    iVar3 = (bVar1 >> 4 | 1) + (bVar1 & 7);
    uVar5 = param_4 & 0xff;
    uVar4 = iVar3 + ((uint)((short)iVar3 * 0x2493) >> 0x10) * -7 & 0xffff;
    uVar6 = uVar7;
    if (uVar7 < uVar4) {
      uVar6 = (param_5 & 0xff) + 7;
    }
    if (uVar5 < uVar7) {
      uVar5 = (param_4 & 0xff) + 7;
    }
    uVar7 = (((param_3 * 7 + uVar5) - (uVar4 + (param_5 & 0xff))) + uVar6) - 6;
    if (0 < (int)uVar7) {
      if ((uVar7 < 0x16f) &&
         (uVar7 = param_2 << 0xd | bVar1 & 0xf | uVar7 * 0x10, (uVar7 & 0x1ff8) < 0x16e1)) {
        *(uint *)(param_1 + 4) = uVar7;
        *param_1 = 0;
        return;
      }
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  param_1[1] = uVar8;
  *param_1 = 1;
  return;
}

