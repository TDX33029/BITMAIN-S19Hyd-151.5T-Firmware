// FUN_006cd114 @ 006cd114 size=472 calls_out=5 calls_in=2
// strings: capacity overflow

uint FUN_006cd114(int param_1,uint param_2,char *param_3,int param_4)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  iVar12 = param_2 + 1;
  if (0xfffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("capacity overflow",0x23,&DAT_01d2fe10);
  }
  uVar5 = iVar12 * 4;
  bVar18 = 0x3ffffffd < param_2;
  bVar17 = param_2 == 0x3ffffffe;
  uVar9 = 0;
  if (param_2 < 0x3fffffff) {
    bVar18 = 0x7ffffffb < uVar5;
    bVar17 = uVar5 == 0x7ffffffc;
  }
  if (!bVar18 || bVar17) {
    uVar11 = 0;
    if (uVar5 == 0) {
      puVar2 = (uint *)&SUB_00000004;
      iVar12 = 0;
    }
    else {
      uVar9 = 4;
      puVar2 = (uint *)FUN_01298504(uVar5,4);
      if (puVar2 == (uint *)0x0) goto LAB_006cd13c;
    }
    if (param_2 != 0) {
      uVar11 = 0;
      do {
        puVar2[uVar11] = uVar11;
        uVar11 = uVar11 + 1;
      } while (param_2 != uVar11);
    }
    uVar5 = uVar11 + 1;
    puVar2[uVar11] = param_2;
    if (param_4 != 0) {
      uVar3 = 0;
      pcVar14 = param_3;
      do {
        if (uVar5 == 0) {
          param_2 = 0;
          uVar5 = 0;
          puVar8 = &DAT_01c05f6c;
          goto LAB_006cd2b8;
        }
        pcVar15 = pcVar14 + 1;
        cVar1 = *pcVar14;
        uVar13 = uVar3 + 1;
        *puVar2 = uVar13;
        if (param_2 != 0) {
          uVar10 = 0;
          uVar4 = uVar13;
          do {
            if (uVar11 == uVar10) {
              param_2 = uVar10 + 1;
              puVar8 = &DAT_01c05f7c;
              goto LAB_006cd2b8;
            }
            uVar16 = uVar10 + 1;
            uVar6 = puVar2[uVar10 + 1];
            if (cVar1 != *(char *)(param_1 + uVar10)) {
              uVar3 = uVar3 + 1;
            }
            if (uVar4 + 1 <= uVar3) {
              uVar3 = uVar4 + 1;
            }
            uVar7 = uVar6 + 1;
            uVar4 = uVar3;
            if (uVar7 <= uVar3) {
              uVar4 = uVar7;
            }
            puVar2[uVar10 + 1] = uVar4;
            uVar3 = uVar6;
            uVar10 = uVar16;
          } while (param_2 != uVar16);
        }
        uVar3 = uVar13;
        pcVar14 = pcVar15;
      } while (pcVar15 != param_3 + param_4);
    }
    if (param_2 < uVar5) {
      uVar5 = puVar2[param_2];
      FUN_0134aee0(iVar12,puVar2,4,4);
      return uVar5;
    }
    puVar8 = &DAT_01c05f5c;
LAB_006cd2b8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,uVar5,puVar8);
  }
LAB_006cd13c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar9,uVar5);
}

