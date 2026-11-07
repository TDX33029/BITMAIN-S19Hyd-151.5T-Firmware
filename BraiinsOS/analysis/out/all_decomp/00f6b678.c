// FUN_00f6b678 @ 00f6b678 size=392 calls_out=0 calls_in=2
// strings: 

void FUN_00f6b678(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  
  uVar4 = *param_2;
  uVar7 = param_2[2];
  uVar3 = param_2[1] + param_3;
  iVar5 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)uVar3 * -0x3dd1baf9 >> 0x20);
  iVar5 = (iVar5 >> 0x10) - (iVar5 >> 0x1f);
  uVar3 = uVar3 + iVar5 * -0x15180;
  iVar5 = iVar5 + ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 0x15180;
  }
  iVar1 = (int)uVar4 >> 0xd;
  if (iVar5 == 1) {
    if (0x16d0 < (uVar4 & 0x1ff8)) {
      if (0xfff80001 < iVar1 - 0x3fffeU) {
        iVar5 = (iVar1 + 1) % 400;
        puVar6 = &DAT_0035d4d3;
        if (iVar5 < 0) {
          puVar6 = &DAT_0035d663;
        }
        *param_1 = (uint)(byte)puVar6[iVar5] | (iVar1 + 1) * 0x2000 | 0x10;
        param_1[1] = uVar3;
        param_1[2] = uVar7;
        return;
      }
LAB_00f6b7a8:
      *param_1 = 0;
      return;
    }
    iVar5 = 0x1d;
    uVar2 = (uVar4 & 0x1ff8) + 0x10;
  }
  else {
    if (iVar5 != -1) goto LAB_00f6b6fc;
    if ((uVar4 & 0x1ff0) < 0x11) {
      puVar6 = &DAT_0035d4d3;
      iVar5 = (iVar1 + -1) % 400;
      if (iVar5 < 0) {
        puVar6 = &DAT_0035d663;
      }
      if (0xfff80001 < iVar1 - 0x40000U) {
        if (""[((byte)puVar6[iVar5] | 0x19f0) >> 3] != 0) {
          *param_1 = ((byte)puVar6[iVar5] | 0x19f0) + ""[((byte)puVar6[iVar5] | 0x19f0) >> 3] * -8 |
                     (iVar1 + -1) * 0x2000;
          param_1[1] = uVar3;
          param_1[2] = uVar7;
          return;
        }
      }
      goto LAB_00f6b7a8;
    }
    iVar5 = 0x1c;
    uVar2 = (uVar4 & 0x1ff0) - 0x10;
  }
  uVar4 = uVar2 | uVar4 & (0xffffffffU >> iVar5 | 0xffffe000);
LAB_00f6b6fc:
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar7;
  return;
}

