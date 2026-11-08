// FUN_0165a0a4 @ 0165a0a4 size=336 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_0165a0a4(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = 0;
  do {
    iVar11 = iVar5;
    if (iVar11 == param_2) {
      iVar11 = 0;
      iVar5 = param_2;
      iVar10 = 0;
      break;
    }
    pbVar9 = (byte *)(param_1 + iVar11);
    pbVar4 = pbVar9 + 1;
    uVar6 = (uint)*pbVar9;
    if (0x7fffffff < (uint)(int)(char)*pbVar9) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar9[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar4 = pbVar9 + 2;
      }
      else {
        uVar7 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
          pbVar4 = pbVar9 + 3;
        }
        else {
          uVar6 = pbVar9[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
          pbVar4 = pbVar9 + 4;
        }
      }
    }
    iVar5 = (int)pbVar4 - param_1;
    iVar10 = iVar5;
  } while (uVar6 == 0x22);
  do {
    iVar3 = param_2;
    if (iVar5 == iVar3) {
      iVar3 = iVar10;
      break;
    }
    iVar8 = param_1 + iVar3;
    pbVar4 = (byte *)(iVar8 + -1);
    uVar6 = (uint)(char)*pbVar4;
    if (0x7fffffff < uVar6) {
      pbVar4 = (byte *)(iVar8 + -2);
      bVar1 = *pbVar4;
      if ((char)bVar1 < -0x40) {
        pbVar4 = (byte *)(iVar8 + -3);
        bVar2 = *pbVar4;
        if ((char)bVar2 < -0x40) {
          pbVar4 = (byte *)(iVar8 + -4);
          uVar7 = (int)(char)bVar2 & 0x3fU | (*pbVar4 & 7) << 6;
        }
        else {
          uVar7 = bVar2 & 0xf;
        }
        uVar7 = (int)(char)bVar1 & 0x3fU | uVar7 << 6;
      }
      else {
        uVar7 = bVar1 & 0x1f;
      }
      uVar6 = uVar6 & 0x3f | uVar7 << 6;
    }
    param_2 = (int)pbVar4 - param_1;
  } while (uVar6 == 0x22);
  return CONCAT44(iVar3 - iVar11,param_1 + iVar11);
}

