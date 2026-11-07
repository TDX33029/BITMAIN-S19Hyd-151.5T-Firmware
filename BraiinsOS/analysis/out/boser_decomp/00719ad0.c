// FUN_00719ad0 @ 00719ad0 size=232 calls_out=0 calls_in=4
// strings: 

void FUN_00719ad0(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar7 = param_2[1];
  uVar11 = 0;
  uVar5 = 0;
  uVar9 = 0;
  uVar10 = 0;
  pbVar8 = (byte *)*param_2;
  while( true ) {
    iVar7 = iVar7 + -1;
    if (iVar7 == -1) {
      *(byte **)(param_1 + 4) = pbVar8;
      *(undefined4 *)(param_1 + 0xc) = 0;
      uVar2 = 0x13;
      *(byte **)(param_1 + 8) = pbVar8;
      param_1[1] = (char)uVar11;
      goto LAB_00719ba8;
    }
    bVar1 = *pbVar8;
    uVar11 = (uint)bVar1;
    *param_2 = pbVar8 + 1;
    param_2[1] = iVar7;
    if ((uVar5 == 0x3f) && (uVar11 != 0x7f && uVar11 != 0)) break;
    uVar6 = uVar5 & 0x3f;
    uVar3 = uVar11 & 0x7f;
    uVar12 = uVar6 - 0x20;
    uVar4 = uVar3 << uVar6;
    uVar5 = uVar5 + 7;
    if (-1 < (int)uVar12) {
      uVar4 = 0;
    }
    uVar9 = uVar4 | uVar9;
    uVar4 = uVar3 >> (0x20 - uVar6 & 0xff);
    if (-1 < (int)uVar12) {
      uVar4 = uVar3 << (uVar12 & 0xff);
    }
    uVar10 = uVar4 | uVar10;
    pbVar8 = pbVar8 + 1;
    if (-1 < (char)bVar1) {
      if (((int)uVar5 < 0x40) && (0x3f < uVar11)) {
        uVar11 = 0xffffffff;
        uVar4 = (uVar5 & 0x3f) - 0x20;
        uVar5 = -1 << (uVar5 & 0x3f);
        if (-1 < (int)uVar4) {
          uVar11 = -1 << (uVar4 & 0xff);
          uVar5 = 0;
        }
        uVar10 = uVar10 | uVar11;
        uVar9 = uVar9 | uVar5;
      }
      uVar2 = 0x4f;
      *(uint *)(param_1 + 8) = uVar9;
      *(uint *)(param_1 + 0xc) = uVar10;
LAB_00719ba8:
      *param_1 = uVar2;
      return;
    }
  }
  uVar2 = 7;
  goto LAB_00719ba8;
}

