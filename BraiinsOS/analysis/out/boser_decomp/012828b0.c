// FUN_012828b0 @ 012828b0 size=408 calls_out=1 calls_in=1
// strings: 

void FUN_012828b0(undefined1 *param_1,char *param_2,int param_3,byte *param_4,uint param_5,
                 int param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar9;
  char *pcVar8;
  uint uVar10;
  int iVar11;
  
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    cVar1 = *(char *)(param_6 + 0x80);
    uVar6 = 0;
    iVar11 = 0;
    pcVar9 = param_2;
    do {
      pcVar8 = pcVar9 + 1;
      iVar7 = (int)*pcVar9;
      if (iVar7 < 0) {
        uVar5 = 2;
        *(int *)(param_1 + 4) = iVar11;
        goto LAB_01282a1c;
      }
      uVar10 = (uint)*(byte *)(param_6 + iVar7);
      if (uVar10 == 0xff) {
        uVar5 = 1;
        *(int *)(param_1 + 4) = iVar11;
        *(int *)(param_1 + 8) = iVar7;
        goto LAB_01282a1c;
      }
      uVar3 = uVar6;
      pbVar4 = param_4;
      if (param_5 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar6,param_5,&DAT_01c25ab0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar10 = (short)(ushort)*pbVar4 * 0x3a + uVar10;
        *pbVar4 = (byte)uVar10;
        uVar10 = uVar10 >> 8;
        pbVar4 = pbVar4 + 1;
      }
      if (uVar10 != 0) {
        if (param_5 <= uVar6) goto LAB_01282a10;
        param_4[uVar6] = (byte)uVar10;
        uVar6 = uVar6 + 1;
      }
      iVar11 = iVar11 + 1;
      pcVar9 = pcVar8;
    } while (pcVar8 != param_2 + param_3);
    uVar10 = param_5;
    if (param_5 < uVar6) {
      uVar10 = uVar6;
    }
    do {
      if (*param_2 != cVar1) break;
      if (uVar10 == uVar6) {
LAB_01282a10:
        uVar5 = 0;
        *(undefined4 *)(param_1 + 4) = 0;
LAB_01282a1c:
        *param_1 = uVar5;
        return;
      }
      param_4[uVar6] = 0;
      uVar6 = uVar6 + 1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    if (param_5 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar6,param_5,&DAT_01c25aa0);
    }
    if (uVar6 >> 1 != 0) {
      uVar10 = 0;
      do {
        bVar2 = param_4[~uVar10 + uVar6];
        param_4[~uVar10 + uVar6] = param_4[uVar10];
        param_4[uVar10] = bVar2;
        uVar10 = uVar10 + 1;
      } while (uVar6 >> 1 != uVar10);
    }
  }
  *(uint *)(param_1 + 4) = uVar6;
  *param_1 = 6;
  return;
}

