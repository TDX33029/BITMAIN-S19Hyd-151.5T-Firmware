// FUN_01b81dec @ 01b81dec size=644 calls_out=0 calls_in=1
// strings: 

undefined1 *
FUN_01b81dec(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  bVar3 = false;
  uVar13 = 4;
  uVar11 = param_5 - 5;
  iVar2 = 1 << (param_5 & 0xff);
  iVar8 = iVar2 + 1;
  iVar9 = param_5 + 1;
  uVar5 = 0;
  puVar1 = param_1;
  while (1 < iVar8 && uVar5 < param_4 + 1) {
    if (bVar3) {
      psVar10 = (short *)(param_3 + uVar5 * 2);
      uVar12 = uVar5;
      while (*psVar10 == 0) {
        uVar7 = uVar12 + 1;
        psVar10 = psVar10 + 1;
        if (param_4 + 1 <= uVar7) {
          if (param_4 == uVar12) goto LAB_01b81ef8;
          goto LAB_01b81ee0;
        }
        uVar12 = uVar7;
      }
      uVar7 = uVar12;
LAB_01b81ee0:
      while( true ) {
        uVar12 = uVar13;
        if (uVar7 < uVar5 + 0x18) break;
        if ((param_6 == 0) && (param_1 + param_2 + -2 < puVar1)) goto LAB_01b81f18;
        uVar12 = (0xffff << (uVar13 & 0xff)) + uVar11;
        *puVar1 = (char)uVar12;
        uVar11 = uVar12 >> 0x10;
        puVar1[1] = (char)(uVar12 >> 8);
        puVar1 = puVar1 + 2;
        uVar5 = uVar5 + 0x18;
      }
      while( true ) {
        uVar13 = uVar12 + 2;
        if (uVar7 < uVar5 + 3) break;
        uVar11 = uVar11 + (3 << (uVar12 & 0xff));
        uVar5 = uVar5 + 3;
        uVar12 = uVar13;
      }
      uVar11 = uVar11 + (uVar7 - uVar5 << (uVar12 & 0xff));
      if (0x10 < (int)uVar13) {
        if ((param_6 == 0) && (param_1 + param_2 + -2 < puVar1)) goto LAB_01b81f18;
        *puVar1 = (char)uVar11;
        puVar1[1] = (char)(uVar11 >> 8);
        uVar11 = uVar11 >> 0x10;
        puVar1 = puVar1 + 2;
        uVar13 = uVar12 - 0xe;
      }
    }
    else {
      uVar7 = uVar5;
    }
    iVar6 = (iVar2 * 2 - iVar8) + -1;
    uVar5 = (uint)*(short *)(param_3 + uVar7 * 2);
    iVar4 = uVar5 + 1;
    if (iVar2 <= iVar4) {
      iVar4 = iVar4 + iVar6;
    }
    iVar8 = iVar8 - ((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f) & 0xffff);
    if (iVar8 < 1) goto LAB_01b81ef8;
    uVar11 = uVar11 + (iVar4 << (uVar13 & 0xff));
    uVar13 = iVar9 + uVar13;
    if (iVar4 < iVar6) {
      uVar13 = uVar13 - 1;
    }
    for (; iVar8 < iVar2; iVar2 = iVar2 >> 1) {
      iVar9 = iVar9 + -1;
    }
    if (0x10 < (int)uVar13) {
      if ((param_6 == 0) && (param_1 + param_2 + -2 < puVar1)) goto LAB_01b81f18;
      *puVar1 = (char)uVar11;
      puVar1[1] = (char)(uVar11 >> 8);
      uVar11 = uVar11 >> 0x10;
      puVar1 = puVar1 + 2;
      uVar13 = uVar13 - 0x10;
    }
    bVar3 = iVar4 == 1;
    uVar5 = uVar7 + 1;
  }
  if (iVar8 == 1) {
    if ((param_6 == 0) && (param_1 + param_2 + -2 < puVar1)) {
LAB_01b81f18:
      puVar1 = (undefined1 *)0xffffffba;
    }
    else {
      iVar2 = uVar13 + 7;
      *puVar1 = (char)uVar11;
      if (iVar2 < 0) {
        iVar2 = uVar13 + 0xe;
      }
      puVar1[1] = (char)(uVar11 >> 8);
      puVar1 = puVar1 + ((iVar2 >> 3) - (int)param_1);
    }
  }
  else {
LAB_01b81ef8:
    puVar1 = (undefined1 *)0xffffffff;
  }
  return puVar1;
}

