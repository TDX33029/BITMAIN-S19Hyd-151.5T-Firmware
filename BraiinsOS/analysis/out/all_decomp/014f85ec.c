// FUN_014f85ec @ 014f85ec size=532 calls_out=2 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_014f85ec(int *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  
  iVar16 = *param_1;
  if (iVar16 == 0) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar4 = FUN_00faace8(param_1[4],"?",1);
    return uVar4;
  }
  uVar13 = param_1[1];
  uVar14 = param_1[2];
  if ((uVar14 < uVar13) && (*(char *)(iVar16 + uVar14) == '_')) {
    param_1[2] = uVar14 + 1;
    uVar6 = 0;
    uVar13 = 0;
LAB_014f8720:
    iVar8 = 0;
    if (uVar13 == 0 && (uVar14 - 1 <= uVar6) <= uVar13) {
      iVar8 = 1;
      if (param_1[3] + 1U < 0x1f5) {
        if (param_1[4] == 0) {
          return 0;
        }
        iVar16 = *param_1;
        iVar12 = param_1[1];
        iVar9 = param_1[2];
        iVar8 = param_1[3];
        param_1[2] = uVar6;
        param_1[3] = param_1[3] + 1U;
        uVar4 = FUN_014f7968(param_1,param_2 & 1);
        *param_1 = iVar16;
        param_1[1] = iVar12;
        param_1[2] = iVar9;
        param_1[3] = iVar8;
        return uVar4;
      }
    }
  }
  else {
    if (uVar13 < uVar14) {
      uVar13 = uVar14;
    }
    uVar10 = 0;
    uVar3 = 0;
    uVar5 = uVar14;
    do {
      if (uVar13 == uVar5) {
LAB_014f86fc:
        iVar8 = 0;
        break;
      }
      cVar1 = *(char *)(iVar16 + uVar5);
      if (cVar1 == '_') {
        uVar6 = uVar10 + 1;
        uVar13 = uVar3 + (0xfffffffe < uVar10);
        iVar8 = 0;
        param_1[2] = uVar5 + 1;
        if (!CARRY4(uVar3,(uint)(0xfffffffe < uVar10))) goto LAB_014f8720;
        break;
      }
      bVar15 = cVar1 - 0x30;
      if (9 < (byte)(cVar1 - 0x30U)) {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          bVar15 = cVar1 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar1 + 0xbfU)) goto LAB_014f86fc;
          bVar15 = cVar1 - 0x1d;
        }
      }
      uVar11 = (uint)((ulonglong)uVar10 * 0x3e);
      uVar7 = (uint)((ulonglong)uVar10 * 0x3e >> 0x20);
      uVar5 = uVar5 + 1;
      iVar8 = 0;
      param_1[2] = uVar5;
      uVar10 = (uint)((ulonglong)uVar3 * 0x3e);
      uVar6 = uVar7 + uVar10;
      if ((int)((ulonglong)uVar3 * 0x3e >> 0x20) != 0 || CARRY4(uVar7,uVar10)) break;
      uVar7 = (uint)bVar15;
      uVar10 = uVar11 + uVar7;
      uVar3 = uVar6 + CARRY4(uVar11,uVar7);
    } while (!CARRY4(uVar6,(uint)CARRY4(uVar11,uVar7)));
  }
  if (param_1[4] != 0) {
    pcVar2 = "{recursion limit reached}";
    if (iVar8 == 0) {
      pcVar2 = &DAT_00564580;
    }
    uVar4 = 0x10;
    if (iVar8 != 0) {
      uVar4 = 0x19;
    }
    iVar16 = FUN_00faace8(param_1[4],pcVar2,uVar4);
    if (iVar16 != 0) {
      return 1;
    }
  }
  *param_1 = 0;
  param_1[1] = iVar8;
  return 0;
}

