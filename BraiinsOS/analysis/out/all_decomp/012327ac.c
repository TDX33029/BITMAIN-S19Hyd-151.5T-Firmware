// FUN_012327ac @ 012327ac size=536 calls_out=1 calls_in=1
// strings: 

byte FUN_012327ac(undefined4 param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  
  bVar9 = 1;
  if (*param_2 == '\x03') {
    uVar4 = *(uint *)(param_2 + 0xc);
    bVar9 = 0;
    if ((1 < uVar4) && (pcVar5 = *(char **)(param_2 + 8), *pcVar5 == 'P')) {
      bVar10 = 0;
      bVar1 = 0;
      uVar2 = 1;
      bVar15 = 0;
      uVar11 = 0;
      bVar12 = 0;
      uVar6 = 0;
      uVar13 = 0;
      while( true ) {
        if (pcVar5[uVar2] == 'T') {
          if (bVar15 != 0) {
            return 0;
          }
          uVar2 = uVar2 + 1;
          if (uVar4 <= uVar2) {
            return bVar10 & bVar1;
          }
          bVar15 = 1;
          if (pcVar5[uVar2] == 'T') {
            return 0;
          }
        }
        uVar7 = uVar2;
        if (uVar4 <= uVar2) break;
        while (uVar14 = (uint)(byte)pcVar5[uVar7], uVar14 - 0x30 < 10) {
          uVar7 = uVar7 + 1;
          if (uVar4 == uVar7) {
            return 0;
          }
        }
        if (uVar7 == uVar2) {
          return 0;
        }
        if (bVar15 == 0) {
          bVar9 = 0;
          uVar3 = 0;
          switch(uVar14) {
          case 0x44:
            uVar3 = 3;
            break;
          default:
            goto switchD_012328c0_caseD_45;
          case 0x4d:
            uVar3 = 1;
            break;
          case 0x57:
            if (bVar10 == 0 && uVar13 < 3) {
              uVar3 = 2;
              bVar12 = 1;
              goto LAB_01232990;
            }
            goto switchD_012328c0_caseD_45;
          case 0x59:
            break;
          }
          bVar8 = (bool)(bVar12 | uVar3 < uVar13);
          bVar12 = bVar9;
          if (bVar8) {
            return 0;
          }
LAB_01232990:
          if ((uVar6 & 1 << uVar3) != 0) {
            return 0;
          }
          uVar14 = 1 << uVar3;
        }
        else {
          uVar2 = 0;
          if (uVar14 != 0x48) {
            if (uVar14 == 0x4d) {
              uVar2 = 1;
            }
            else {
              if (uVar14 != 0x53) {
                return 0;
              }
              uVar2 = 2;
            }
          }
          if (uVar2 < uVar11) {
            return 0;
          }
          if ((uVar6 & 0x10 << uVar2) != 0) {
            return 0;
          }
          uVar14 = 0x10 << uVar2;
          bVar1 = 1;
          uVar11 = uVar2;
          uVar3 = uVar13;
        }
        uVar2 = uVar7 + 1;
        uVar6 = uVar14 | uVar6;
        bVar10 = 1;
        uVar13 = uVar3;
        if (uVar4 <= uVar2) {
          return bVar15 ^ 1 | bVar1;
        }
      }
      bVar9 = 0;
      if (uVar2 != uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,uVar4,&DAT_0188a868);
      }
    }
  }
switchD_012328c0_caseD_45:
  return bVar9;
}

