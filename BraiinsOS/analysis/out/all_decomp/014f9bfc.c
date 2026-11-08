// FUN_014f9bfc @ 014f9bfc size=524 calls_out=2 calls_in=1
// strings: {recursion limit reached}

longlong FUN_014f9bfc(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  
  iVar18 = *param_1;
  if (iVar18 == 0) {
    if (param_1[4] != 0) {
      lVar20 = FUN_00faace8(param_1[4],"?",1);
      return lVar20;
    }
LAB_014f9df8:
    uVar8 = 0;
LAB_014f9dfc:
    return CONCAT44(param_2,uVar8);
  }
  uVar16 = param_1[1];
  uVar17 = param_1[2];
  if ((uVar17 < uVar16) && (*(char *)(iVar18 + uVar17) == '_')) {
    param_1[2] = uVar17 + 1;
    uVar16 = 0;
    uVar5 = 0;
LAB_014f9d30:
    iVar10 = 0;
    bVar19 = uVar17 - 1 <= uVar16;
    bVar1 = uVar5 == 0;
    bVar2 = bVar19 <= uVar5;
    uVar5 = uVar5 - !bVar19;
    if (bVar1 && bVar2) {
      uVar5 = param_1[3];
      iVar10 = 1;
      if (uVar5 + 1 < 0x1f5) {
        param_2 = 0;
        if (param_1[4] != 0) {
          iVar18 = *param_1;
          iVar15 = param_1[1];
          iVar12 = param_1[2];
          iVar10 = param_1[3];
          param_1[2] = uVar16;
          param_1[3] = uVar5 + 1;
          uVar8 = FUN_014f7080();
          *param_1 = iVar18;
          param_1[1] = iVar15;
          param_1[2] = iVar12;
          param_1[3] = iVar10;
          return CONCAT44(iVar18,uVar8);
        }
        goto LAB_014f9df8;
      }
    }
  }
  else {
    if (uVar16 < uVar17) {
      uVar16 = uVar17;
    }
    uVar13 = 0;
    uVar5 = 0;
    uVar9 = uVar17;
    do {
      if (uVar16 == uVar9) {
LAB_014f9d0c:
        iVar10 = 0;
        break;
      }
      cVar3 = *(char *)(iVar18 + uVar9);
      if (cVar3 == '_') {
        param_1[2] = uVar9 + 1;
        uVar16 = uVar13 + 1;
        iVar10 = 0;
        bVar1 = CARRY4(uVar5,(uint)(0xfffffffe < uVar13));
        uVar5 = uVar5 + (0xfffffffe < uVar13);
        if (!bVar1) goto LAB_014f9d30;
        break;
      }
      bVar7 = cVar3 - 0x30;
      if (9 < (byte)(cVar3 - 0x30U)) {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) {
          bVar7 = cVar3 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar3 + 0xbfU)) goto LAB_014f9d0c;
          bVar7 = cVar3 - 0x1d;
        }
      }
      uVar11 = (uint)((ulonglong)uVar13 * 0x3e);
      uVar14 = (uint)((ulonglong)uVar13 * 0x3e >> 0x20);
      uVar9 = uVar9 + 1;
      iVar10 = 0;
      param_1[2] = uVar9;
      uVar4 = (ulonglong)uVar5;
      uVar13 = (uint)(uVar4 * 0x3e);
      uVar5 = uVar14 + uVar13;
      if ((int)(uVar4 * 0x3e >> 0x20) != 0 || CARRY4(uVar14,uVar13)) break;
      uVar14 = (uint)bVar7;
      uVar13 = uVar11 + uVar14;
      bVar1 = CARRY4(uVar5,(uint)CARRY4(uVar11,uVar14));
      uVar5 = uVar5 + CARRY4(uVar11,uVar14);
    } while (!bVar1);
  }
  if (param_1[4] != 0) {
    pcVar6 = "{recursion limit reached}";
    if (iVar10 == 0) {
      pcVar6 = &DAT_00564580;
    }
    uVar8 = 0x10;
    if (iVar10 != 0) {
      uVar8 = 0x19;
    }
    param_2 = FUN_00faace8(param_1[4],pcVar6,uVar8);
    uVar8 = 1;
    uVar5 = 0;
    if (param_2 != 0) goto LAB_014f9dfc;
  }
  *param_1 = 0;
  param_1[1] = iVar10;
  return (ulonglong)uVar5 << 0x20;
}

