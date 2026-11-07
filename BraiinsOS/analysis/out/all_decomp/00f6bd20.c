// FUN_00f6bd20 @ 00f6bd20 size=388 calls_out=0 calls_in=6
// strings: 

void FUN_00f6bd20(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  
  uVar3 = *param_2;
  uVar2 = param_2[1] + param_3;
  iVar4 = (int)(((ulonglong)uVar2 << 0x20) + (longlong)(int)uVar2 * -0x3dd1baf9 >> 0x20);
  uVar1 = param_2[2];
  iVar5 = (iVar4 >> 0x10) - (iVar4 >> 0x1f);
  uVar2 = uVar2 + iVar5 * -0x15180;
  iVar5 = iVar5 + ((int)uVar2 >> 0x1f);
  iVar4 = (int)uVar3 >> 0xd;
  if (iVar5 == 1) {
    if (0x16d0 < (uVar3 & 0x1ff8)) {
      if (iVar4 - 0x3fffeU < 0xfff80002) {
        uVar3 = 0x7fffe01f;
      }
      else {
        iVar5 = (iVar4 + 1) % 400;
        puVar6 = &DAT_0035d4d3;
        if (iVar5 < 0) {
          puVar6 = &DAT_0035d663;
        }
        uVar3 = (uint)(byte)puVar6[iVar5] | (iVar4 + 1) * 0x2000 | 0x10;
      }
      goto LAB_00f6bda0;
    }
    iVar4 = 0x1d;
    uVar7 = (uVar3 & 0x1ff8) + 0x10;
  }
  else {
    if (iVar5 != -1) goto LAB_00f6bda0;
    if ((uVar3 & 0x1ff0) < 0x11) {
      uVar3 = 0x800016e7;
      iVar5 = (iVar4 + -1) % 400;
      puVar6 = &DAT_0035d4d3;
      if (iVar5 < 0) {
        puVar6 = &DAT_0035d663;
      }
      if (0xfff80001 < iVar4 - 0x40000U) {
        if (""[((byte)puVar6[iVar5] | 0x19f0) >> 3] != 0) {
          uVar3 = ((byte)puVar6[iVar5] | 0x19f0) + ""[((byte)puVar6[iVar5] | 0x19f0) >> 3] * -8 |
                  (iVar4 + -1) * 0x2000;
        }
      }
      goto LAB_00f6bda0;
    }
    iVar4 = 0x1c;
    uVar7 = (uVar3 & 0x1ff0) - 0x10;
  }
  uVar3 = uVar7 | uVar3 & (0xffffffffU >> iVar4 | 0xffffe000);
LAB_00f6bda0:
  *param_1 = uVar3;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0x15180;
  }
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

