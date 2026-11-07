// FUN_00f5da98 @ 00f5da98 size=432 calls_out=1 calls_in=1
// strings: 

void FUN_00f5da98(undefined1 *param_1,char *param_2,int param_3,byte *param_4,uint param_5,
                 int param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  char *pcVar8;
  char *pcVar7;
  uint uVar9;
  int iVar10;
  
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    cVar1 = *(char *)(param_6 + 0x80);
    uVar5 = 0;
    iVar10 = 0;
    pcVar8 = param_2;
    do {
      pcVar7 = pcVar8 + 1;
      iVar6 = (int)*pcVar8;
      if (iVar6 < 0) {
        *(int *)(param_1 + 4) = iVar10;
        *param_1 = 2;
        return;
      }
      uVar9 = (uint)*(byte *)(param_6 + iVar6);
      if (uVar9 == 0xff) {
        *(int *)(param_1 + 4) = iVar10;
        *(int *)(param_1 + 8) = iVar6;
        *param_1 = 1;
        return;
      }
      uVar3 = uVar5;
      pbVar4 = param_4;
      if (param_5 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar5,param_5,&DAT_0187f984);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar9 = (short)(ushort)*pbVar4 * 0x3a + uVar9;
        *pbVar4 = (byte)uVar9;
        uVar9 = uVar9 >> 8;
        pbVar4 = pbVar4 + 1;
      }
      if (uVar9 != 0) {
        if (param_5 <= uVar5) goto LAB_00f5dc14;
        param_4[uVar5] = (byte)uVar9;
        uVar5 = uVar5 + 1;
      }
      iVar10 = iVar10 + 1;
      pcVar8 = pcVar7;
    } while (pcVar7 != param_2 + param_3);
    uVar9 = param_5;
    if (param_5 < uVar5) {
      uVar9 = uVar5;
    }
    do {
      if (*param_2 != cVar1) break;
      if (uVar9 == uVar5) {
LAB_00f5dc14:
        *param_1 = 0;
        return;
      }
      param_4[uVar5] = 0;
      uVar5 = uVar5 + 1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    if (param_5 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar5,param_5,&DAT_0187f974);
    }
    if (uVar5 >> 1 != 0) {
      uVar9 = 0;
      do {
        bVar2 = param_4[~uVar9 + uVar5];
        param_4[~uVar9 + uVar5] = param_4[uVar9];
        param_4[uVar9] = bVar2;
        uVar9 = uVar9 + 1;
      } while (uVar5 >> 1 != uVar9);
    }
  }
  *(uint *)(param_1 + 4) = uVar5;
  *param_1 = 6;
  return;
}

