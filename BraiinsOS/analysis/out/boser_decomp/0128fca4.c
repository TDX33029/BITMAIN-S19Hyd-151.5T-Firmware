// FUN_0128fca4 @ 0128fca4 size=396 calls_out=0 calls_in=6
// strings: 

void FUN_0128fca4(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = param_2[1] + param_3;
  uVar4 = param_2[2];
  iVar5 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)uVar3 * -0x3dd1baf9 >> 0x20);
  iVar5 = (iVar5 >> 0x10) - (iVar5 >> 0x1f);
  uVar3 = uVar3 + iVar5 * -0x15180;
  iVar5 = iVar5 + ((int)uVar3 >> 0x1f);
  if (iVar5 == -1) {
    uVar1 = *param_2;
    if ((uVar1 & 0x1ff0) < 0x11) {
      iVar8 = ((int)uVar1 >> 0xd) + -1;
      uVar7 = 0x800016e7;
      iVar5 = iVar8 % 400;
      puVar6 = &DAT_00405081;
      if (iVar5 < 0) {
        puVar6 = &DAT_00405211;
      }
      if (0xfff80001 < ((int)uVar1 >> 0xd) - 0x40000U) {
        if (""[((byte)puVar6[iVar5] | 0x19f0) >> 3] != 0) {
          uVar7 = ((byte)puVar6[iVar5] | 0x19f0) + ""[((byte)puVar6[iVar5] | 0x19f0) >> 3] * -8 |
                  iVar8 * 0x2000;
        }
      }
      goto LAB_0128fe20;
    }
    uVar2 = uVar1 & 0xffffe00f;
    uVar7 = (uVar1 & 0x1ff0) - 0x10;
  }
  else {
    if (iVar5 != 1) {
      uVar7 = *param_2;
      goto LAB_0128fe20;
    }
    uVar1 = *param_2;
    if (0x16d0 < (uVar1 & 0x1ff8)) {
      if (((int)uVar1 >> 0xd) - 0x3fffeU < 0xfff80002) {
        uVar7 = 0x7fffe01f;
      }
      else {
        iVar5 = ((int)uVar1 >> 0xd) + 1;
        iVar8 = iVar5 % 400;
        puVar6 = &DAT_00405081;
        if (iVar8 < 0) {
          puVar6 = &DAT_00405211;
        }
        uVar7 = (uint)(byte)puVar6[iVar8] | iVar5 * 0x2000 | 0x10;
      }
      goto LAB_0128fe20;
    }
    uVar2 = uVar1 & 0xffffe007;
    uVar7 = (uVar1 & 0x1ff8) + 0x10;
  }
  uVar7 = uVar7 | uVar2;
LAB_0128fe20:
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 0x15180;
  }
  *param_1 = uVar7;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  return;
}

