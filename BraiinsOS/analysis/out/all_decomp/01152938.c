// FUN_01152938 @ 01152938 size=320 calls_out=1 calls_in=2
// strings: 

uint FUN_01152938(int param_1,uint param_2,uint *param_3,int param_4,uint param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  uVar5 = *param_3;
  uVar6 = param_2 - 6;
  bVar12 = uVar6 == uVar5;
  if (uVar5 <= uVar6) {
    bVar12 = param_2 == 5;
  }
  if ((uVar5 > uVar6 || param_2 < 5) || bVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar5,uVar6,param_2,&DAT_01888c44);
  }
  if (param_5 < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_6,param_5,param_5,&DAT_01888c34);
  }
  uVar6 = uVar6 - uVar5;
  param_5 = param_5 - param_6;
  uVar7 = (uVar6 & 0x7fffffff) >> 2;
  if (param_5 >> 2 < uVar7) {
    uVar7 = param_5 >> 2;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
    if (param_5 < uVar6) {
      uVar6 = param_5;
    }
    iVar10 = 0;
    if (uVar6 == 0) goto LAB_01152a2c;
  }
  else {
    uVar7 = uVar7 * 4;
    uVar11 = 0;
    do {
      uVar9 = *(uint *)(param_4 + param_6 + uVar11);
      uVar8 = *(uint *)(param_1 + uVar5 + uVar11);
      if (uVar8 != uVar9) {
        uVar9 = uVar9 ^ uVar8;
        bVar2 = (byte)uVar9;
        bVar3 = (byte)(uVar9 >> 8);
        bVar4 = (byte)(uVar9 >> 0x10);
        bVar1 = (byte)(uVar9 >> 0x18);
        uVar11 = uVar11 | (uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                         bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1
                                                       | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1
                                                     | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                                        (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                         bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1
                                                       | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                                                     | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                                        (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                         bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                       | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                     | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                                        (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                         bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                       | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                     | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3;
        *param_3 = uVar11 + uVar5;
        return uVar11;
      }
      uVar11 = uVar11 + 4;
    } while (uVar7 != uVar11);
    if (param_5 < uVar6) {
      uVar6 = param_5;
    }
    iVar10 = 0;
    if (uVar6 <= uVar7 - 1 || uVar6 <= uVar7) goto LAB_01152a2c;
  }
  iVar10 = 0;
  do {
    if (*(char *)(param_1 + uVar7 + uVar5 + iVar10) != *(char *)(param_4 + uVar7 + param_6 + iVar10)
       ) goto LAB_01152a2c;
    iVar10 = iVar10 + 1;
  } while (uVar6 - uVar7 != iVar10);
  iVar10 = uVar6 - uVar7;
LAB_01152a2c:
  *param_3 = iVar10 + uVar7 + uVar5;
  return iVar10 + uVar7;
}

