// FUN_015df7dc @ 015df7dc size=228 calls_out=0 calls_in=1
// strings: 

void FUN_015df7dc(undefined1 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  
  pbVar1 = (byte *)*param_2;
  iVar3 = param_2[1];
  if (iVar3 == 0) {
    bVar10 = 0;
  }
  else {
    pbVar12 = pbVar1 + iVar3;
    uVar8 = 0;
    uVar9 = 0;
    uVar2 = 0;
    do {
      iVar3 = iVar3 + -1;
      pbVar7 = pbVar1 + 1;
      bVar10 = *pbVar1;
      if ((uVar2 == 0x3f) && (1 < bVar10)) {
        *param_2 = pbVar7;
        param_2[1] = iVar3;
        *param_1 = 6;
        return;
      }
      uVar6 = uVar2 & 0x3f;
      uVar5 = bVar10 & 0x7f;
      uVar11 = uVar6 - 0x20;
      uVar4 = uVar5 << uVar6;
      if (-1 < (int)uVar11) {
        uVar4 = 0;
      }
      uVar8 = uVar4 | uVar8;
      uVar4 = uVar5 >> (0x20 - uVar6 & 0xff);
      if (-1 < (int)uVar11) {
        uVar4 = uVar5 << (uVar11 & 0xff);
      }
      uVar9 = uVar4 | uVar9;
      if ((uint)(int)(char)bVar10 < 0x80000000) {
        *param_2 = pbVar7;
        param_2[1] = iVar3;
        *param_1 = 0x52;
        *(uint *)(param_1 + 8) = uVar8;
        *(uint *)(param_1 + 0xc) = uVar9;
        return;
      }
      uVar2 = uVar2 + 7;
      pbVar1 = pbVar7;
    } while (iVar3 != 0);
    *param_2 = pbVar12;
    param_2[1] = 0;
    pbVar1 = pbVar12;
  }
  *(byte **)(param_1 + 4) = pbVar1;
  *(byte **)(param_1 + 8) = pbVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[1] = bVar10;
  *param_1 = 0x13;
  return;
}

