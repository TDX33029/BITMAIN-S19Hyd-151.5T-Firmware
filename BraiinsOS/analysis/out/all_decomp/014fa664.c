// FUN_014fa664 @ 014fa664 size=760 calls_out=4 calls_in=2
// strings: {recursion limit reached}

undefined1 FUN_014fa664(uint *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar17 = *param_1;
  if (uVar17 != 0) {
    uVar16 = param_1[1];
    uVar15 = param_1[2];
    if (uVar15 < uVar16) {
      if (*(char *)(uVar17 + uVar15) == 'I') {
        param_1[2] = uVar15 + 1;
        iVar5 = FUN_014f5b4c(param_1,0);
        if ((iVar5 != 0) ||
           ((param_1[4] != 0 && (iVar5 = FUN_00faace8(param_1[4],"<",1), iVar5 != 0)))) {
          return 2;
        }
        uVar17 = *param_1;
        if (uVar17 != 0) {
          iVar5 = 0;
          do {
            uVar15 = param_1[2];
            if ((uVar15 < param_1[1]) && (uVar17 = (uint)*(byte *)(uVar17 + uVar15), uVar17 == 0x45)
               ) {
              param_1[2] = uVar15 + 1;
              return 1;
            }
            if (iVar5 != 0) {
              uVar17 = param_1[4];
            }
            if ((iVar5 != 0 && uVar17 != 0) &&
               (iVar3 = FUN_00faace8(uVar17,&DAT_0041950f,2), iVar3 != 0)) {
              return 2;
            }
            iVar3 = FUN_014f77d4(param_1);
            if (iVar3 != 0) {
              return 2;
            }
            uVar17 = *param_1;
            iVar5 = iVar5 + -1;
          } while (uVar17 != 0);
        }
        return 1;
      }
      if (*(char *)(uVar17 + uVar15) == 'B') {
        uVar8 = uVar15 + 1;
        param_1[2] = uVar8;
        if ((uVar8 < uVar16) && (*(char *)(uVar17 + uVar8) == '_')) {
          param_1[2] = uVar15 + 2;
          uVar16 = 0;
          uVar17 = 0;
LAB_014fa87c:
          uVar13 = 0;
          if (uVar17 == 0 && (uVar15 <= uVar16) <= uVar17) {
            uVar13 = 1;
            if (param_1[3] + 1 < 0x1f5) {
              if (param_1[4] == 0) {
                return 0;
              }
              uVar17 = *param_1;
              uVar14 = param_1[1];
              uVar8 = param_1[2];
              uVar15 = param_1[3];
              param_1[2] = uVar16;
              param_1[3] = param_1[3] + 1;
              uVar2 = FUN_014fa664();
              *param_1 = uVar17;
              param_1[1] = uVar14;
              param_1[2] = uVar8;
              param_1[3] = uVar15;
              return uVar2;
            }
          }
        }
        else {
          uVar11 = 0;
          uVar14 = 0;
          do {
            if (uVar16 == uVar8) {
LAB_014fa858:
              uVar13 = 0;
              break;
            }
            cVar1 = *(char *)(uVar17 + uVar8);
            if (cVar1 == '_') {
              uVar16 = uVar11 + 1;
              param_1[2] = uVar8 + 1;
              uVar17 = uVar14 + (0xfffffffe < uVar11);
              uVar13 = 0;
              if (!CARRY4(uVar14,(uint)(0xfffffffe < uVar11))) goto LAB_014fa87c;
              break;
            }
            bVar6 = cVar1 - 0x30;
            if (9 < (byte)(cVar1 - 0x30U)) {
              if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                bVar6 = cVar1 + 0xa9;
              }
              else {
                if (0x19 < (byte)(cVar1 + 0xbfU)) goto LAB_014fa858;
                bVar6 = cVar1 - 0x1d;
              }
            }
            uVar12 = (uint)((ulonglong)uVar11 * 0x3e);
            uVar11 = (uint)((ulonglong)uVar11 * 0x3e >> 0x20);
            uVar8 = uVar8 + 1;
            uVar13 = 0;
            param_1[2] = uVar8;
            uVar9 = (uint)((ulonglong)uVar14 * 0x3e);
            uVar10 = uVar11 + uVar9;
            if ((int)((ulonglong)uVar14 * 0x3e >> 0x20) != 0 || CARRY4(uVar11,uVar9)) break;
            uVar9 = (uint)bVar6;
            uVar11 = uVar12 + uVar9;
            uVar14 = uVar10 + CARRY4(uVar12,uVar9);
          } while (!CARRY4(uVar10,(uint)CARRY4(uVar12,uVar9)));
        }
        if (param_1[4] != 0) {
          uVar7 = 0x10;
          pcVar4 = &DAT_00564580;
          if (uVar13 != 0) {
            uVar7 = 0x19;
            pcVar4 = "{recursion limit reached}";
          }
          iVar5 = FUN_00faace8(param_1[4],pcVar4,uVar7);
          if (iVar5 != 0) {
            return 2;
          }
        }
        *param_1 = 0;
        param_1[1] = uVar13;
        return 0;
      }
    }
  }
  iVar5 = FUN_014f5b4c(param_1,0);
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}

