// FUN_006183c4 @ 006183c4 size=196 calls_out=0 calls_in=1
// strings: 

void FUN_006183c4(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar6 = param_2[1];
  uVar10 = 0;
  uVar2 = 0;
  uVar9 = 0;
  uVar7 = 0;
  pbVar8 = (byte *)*param_2;
  while( true ) {
    iVar6 = iVar6 + -1;
    if (iVar6 == -1) {
      *(byte **)(param_1 + 4) = pbVar8;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(byte **)(param_1 + 8) = pbVar8;
      param_1[1] = (char)uVar10;
      *param_1 = 0x13;
      return;
    }
    bVar1 = *pbVar8;
    uVar10 = (uint)bVar1;
    *param_2 = pbVar8 + 1;
    param_2[1] = iVar6;
    if ((uVar2 == 0x3f) && (1 < uVar10)) break;
    uVar5 = uVar2 & 0x3f;
    uVar3 = uVar10 & 0x7f;
    uVar11 = uVar5 - 0x20;
    uVar4 = uVar3 << uVar5;
    uVar2 = uVar2 + 7;
    if (-1 < (int)uVar11) {
      uVar4 = 0;
    }
    uVar9 = uVar4 | uVar9;
    uVar4 = uVar3 >> (0x20 - uVar5 & 0xff);
    if (-1 < (int)uVar11) {
      uVar4 = uVar3 << (uVar11 & 0xff);
    }
    uVar7 = uVar4 | uVar7;
    pbVar8 = pbVar8 + 1;
    if ((uint)(int)(char)bVar1 < 0x80000000) {
      *(uint *)(param_1 + 8) = uVar9;
      *param_1 = 0x4f;
      *(uint *)(param_1 + 0xc) = uVar7;
      return;
    }
  }
  *param_1 = 6;
  return;
}

