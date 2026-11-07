// FUN_01be728e @ 01be728e size=246 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01be728e(int param_1,int param_2,code *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 < 0xc) {
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 3) & 0xf) == 0) {
    pbVar4 = (byte *)(param_1 + 0xc);
    uVar1 = (uint)CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5));
    while (bVar6 = uVar1 != 0, uVar1 = uVar1 - 1, bVar6) {
      do {
        pbVar3 = pbVar4;
        if (param_2 <= (int)pbVar3 - param_1) break;
        pbVar4 = pbVar3 + 1;
      } while (*pbVar3 - 1 < 0x7f);
      if ((byte *)(param_2 + -6 + param_1) < pbVar3) {
        return 0xffffffff;
      }
      if (*pbVar3 == 0) {
        iVar5 = 5;
      }
      else {
        iVar5 = 6;
      }
      pbVar4 = pbVar3 + iVar5;
    }
    uVar1 = (uint)CONCAT11(*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7));
    while (bVar6 = uVar1 != 0, uVar1 = uVar1 - 1, bVar6) {
      do {
        pbVar3 = pbVar4;
        if (param_2 <= (int)pbVar3 - param_1) break;
        pbVar4 = pbVar3 + 1;
      } while (*pbVar3 - 1 < 0x7f);
      if ((byte *)(param_2 + -0xc + param_1) < pbVar3) {
        return 0xffffffff;
      }
      if (*pbVar3 == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
      pbVar3 = pbVar3 + iVar5;
      uVar2 = (uint)CONCAT11(pbVar3[8],pbVar3[9]);
      if ((param_1 + param_2) - (int)pbVar3 <= (int)(uVar2 + 9)) {
        return 0xffffffff;
      }
      iVar5 = (*param_3)(param_4,pbVar3[1],pbVar3 + 10,uVar2,param_1,param_2);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      pbVar4 = pbVar3 + uVar2 + 10;
    }
  }
  return 0;
}

