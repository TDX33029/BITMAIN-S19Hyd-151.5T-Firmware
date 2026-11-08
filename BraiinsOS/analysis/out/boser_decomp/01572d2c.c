// FUN_01572d2c @ 01572d2c size=496 calls_out=1 calls_in=1
// strings: 

int * FUN_01572d2c(int param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_28;
  
  uVar14 = *(uint *)(param_1 + 8);
  if (0x7ffffffe < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01cfbe90);
  }
  *(uint *)(param_1 + 8) = uVar14 + 1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x20);
    uVar15 = *(uint *)(param_1 + 0x24);
    uVar12 = *(uint *)(param_1 + 0x28) ^ param_2;
    uVar6 = *(uint *)(param_1 + 0x2c);
    uVar7 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
            uVar6 >> 0x18;
    lVar4 = (ulonglong)uVar7 * 0xb36a80d2;
    uVar9 = (uint)lVar4;
    uVar7 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
            uVar12 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar10 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18;
    uVar6 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18) ^
            uVar6 * 0x2df45158 + uVar12 * 0x2d7f954c + (int)((ulonglong)uVar12 * 0x2df45158 >> 0x20)
    ;
    uVar9 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^ (uint)((ulonglong)uVar12 * 0x2df45158);
    lVar4 = (ulonglong)uVar10 * (ulonglong)uVar9;
    uVar7 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
            uVar6 >> 0x18;
    lVar5 = (ulonglong)~uVar13 * (ulonglong)uVar7;
    uVar12 = (uint)lVar5;
    iVar11 = *(int *)(param_1 + 0x10);
    uVar7 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18) * ~uVar13 + uVar7 * ~uVar15 + (int)((ulonglong)lVar5 >> 0x20);
    uVar10 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^
             uVar6 * uVar10 +
             uVar9 * (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18) + (int)((ulonglong)lVar4 >> 0x20);
    uVar6 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^ (uint)lVar4;
    uVar7 = uVar10;
    if ((uVar9 & 0x20) != 0) {
      uVar7 = uVar6;
      uVar6 = uVar10;
    }
    uVar7 = uVar6 << (uVar9 & 0x1f) | (uVar7 >> 1) >> (~uVar9 & 0x1f);
    uVar6 = uVar7 >> 0x19;
    local_28 = 0;
    while( true ) {
      uVar7 = *(uint *)(param_1 + 0x14) & uVar7;
      uVar10 = *(uint *)(iVar11 + uVar7);
      uVar9 = uVar10 ^ uVar6 * 0x1010101;
      uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
      while (uVar9 != 0) {
        uVar12 = uVar9 >> 8;
        uVar13 = uVar9 >> 0x10;
        uVar15 = uVar9 >> 0x18;
        uVar2 = uVar9 << 0x18;
        uVar9 = uVar9 - 1 & uVar9;
        uVar12 = uVar7 + ((uint)LZCOUNT(uVar2 | (uVar12 & 0xff) << 0x10 | (uVar13 & 0xff) << 8 |
                                        uVar15) >> 3) & *(uint *)(param_1 + 0x14);
        if (*(uint *)(iVar11 + -8 + uVar12 * -8) == param_2) {
          piVar8 = *(int **)(iVar11 + uVar12 * -8 + -4);
          do {
            iVar11 = *piVar8;
            bVar3 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar3);
          *piVar8 = iVar11 + 1;
          if (iVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x1572f18);
            (*pcVar1)();
          }
          uVar14 = *(int *)(param_1 + 8) - 1;
          goto LAB_01572efc;
        }
      }
      piVar8 = (int *)0x0;
      if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar7 = uVar7 + local_28;
    }
  }
LAB_01572efc:
  *(uint *)(param_1 + 8) = uVar14;
  return piVar8;
}

