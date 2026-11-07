// FUN_01be556c @ 01be556c size=720 calls_out=5 calls_in=0
// strings: 

uint FUN_01be556c(uint param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (param_1 == 0) {
    uVar2 = FUN_01be5118(param_2);
    return uVar2;
  }
  if (0x7fffeffe < param_2) {
    puVar3 = (undefined4 *)FUN_01be3244();
    *puVar3 = 0xc;
    return 0;
  }
  if ((param_1 & 0xf) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be558a);
    (*pcVar1)();
  }
  uVar2 = (uint)*(ushort *)(param_1 - 2);
  uVar4 = *(byte *)(param_1 - 3) & 0x1f;
  if (*(char *)(param_1 - 4) != '\0') {
    if (uVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be55a0);
      (*pcVar1)();
    }
    uVar2 = *(uint *)(param_1 - 8);
    if ((int)uVar2 < 0x10000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be55ac);
      (*pcVar1)();
    }
  }
  iVar8 = uVar2 * -0x10 + -0x10;
  uVar9 = *(uint *)(param_1 + iVar8);
  if (param_1 + iVar8 != *(int *)(uVar9 + 8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be55c0);
    (*pcVar1)();
  }
  if ((*(byte *)(uVar9 + 0x14) & 0x1f) < uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be55cc);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar9 + 0xc) >> uVar4) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be55d6);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar9 + 0x10) >> uVar4) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be55e0);
    (*pcVar1)();
  }
  if (((int *)(uVar9 & 0xfffff000))[1] != DAT_01d535bc ||
      *(int *)(uVar9 & 0xfffff000) != DAT_01d535b8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be55fe);
    (*pcVar1)();
  }
  uVar7 = (*(ushort *)(uVar9 + 0x14) & 0xfff) >> 6;
  if (uVar7 < 0x30) {
    uVar7 = (uint)*(ushort *)(&DAT_0056569c + uVar7 * 2);
    if ((int)uVar2 < (int)(uVar7 * uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be561a);
      (*pcVar1)();
    }
    if ((int)(uVar4 * uVar7 + uVar7) <= (int)uVar2) {
LAB_01be5644:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be5644);
      (*pcVar1)();
    }
  }
  else if ((*(ushort *)(uVar9 + 0x14) & 0xfc0) != 0xfc0) goto LAB_01be5644;
  if ((*(uint *)(uVar9 + 0x14) & 0xfffff000) == 0) {
    uVar2 = (uint)*(byte *)(param_1 - 3);
    uVar4 = uVar2 & 0x1f;
LAB_01be573e:
    iVar8 = (uint)*(ushort *)(&DAT_0056569c + ((*(ushort *)(uVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  else {
    uVar7 = *(uint *)(uVar9 + 0x14) & 0xfffff000;
    if ((uVar7 >> 4) - 1 < uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be5666);
      (*pcVar1)();
    }
    uVar2 = (uint)*(byte *)(param_1 - 3);
    uVar4 = uVar2 & 0x1f;
    if ((*(byte *)(uVar9 + 0x14) & 0x1f) != 0) goto LAB_01be573e;
    iVar8 = uVar7 - 0x10;
  }
  uVar2 = uVar2 >> 5;
  iVar5 = iVar8 * uVar4 + *(int *)(uVar9 + 8) + 0x10;
  iVar11 = iVar5 + iVar8 + -4;
  if (4 < uVar2) {
    if (uVar2 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be576c);
      (*pcVar1)();
    }
    uVar2 = *(uint *)(iVar11 + -4);
    if (uVar2 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be5776);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be577e);
      (*pcVar1)();
    }
  }
  uVar4 = iVar11 - param_1;
  if (uVar4 < uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5788);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar2) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5792);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 + iVar8 + -4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5798);
    (*pcVar1)();
  }
  uVar7 = uVar4;
  if (0x1ffea < uVar4) {
    uVar7 = 0x1ffeb;
  }
  uVar12 = (*(ushort *)(uVar9 + 0x14) & 0xfff) >> 6;
  if (uVar7 < param_2) {
    bVar14 = 0x1ffea < param_2;
    bVar13 = param_2 == 0x1ffeb;
    if (0x1ffeb < param_2) {
      bVar14 = 0x2e < uVar12;
      bVar13 = uVar12 == 0x2f;
    }
    if (bVar14 && !bVar13) {
      if ((*(ushort *)(uVar9 + 0x14) & 0xfc0) != 0xfc0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x1be57ca);
        (*pcVar1)();
      }
      iVar5 = param_1 - iVar5;
      uVar7 = param_2 + 0x1013 + iVar5;
      iVar8 = *(int *)(uVar9 + 8);
      uVar4 = *(uint *)(uVar9 + 0x14) & 0xfffff000;
      uVar12 = uVar7 & 0xfffff000;
      if (uVar4 != uVar12) {
        iVar8 = FUN_01be6d40(iVar8,uVar4,uVar12,1);
      }
      if (iVar8 != -1) {
        iVar10 = uVar12 - 0x14;
        *(int *)(uVar9 + 8) = iVar8;
        iVar8 = iVar8 + 0x10;
        iVar11 = (iVar10 - iVar5) - param_2;
        uVar2 = *(uint *)(uVar9 + 0x14) & 0xfff | uVar7 & 0xfffff000;
        *(uint *)(uVar9 + 0x14) = uVar2;
        uVar4 = iVar8 + iVar5;
        *(undefined1 *)(iVar8 + iVar10) = 0;
        if (iVar11 == 0) {
          uVar2 = 0;
        }
        cVar6 = (char)uVar2;
        iVar8 = iVar8 + iVar10;
        if (iVar11 != 0) {
          iVar5 = iVar11;
          if (iVar11 < 5) {
            iVar5 = iVar11 * 0x20;
          }
          *(undefined1 *)(iVar8 - iVar11) = 0;
          if (iVar11 < 5) {
            cVar6 = (char)iVar5;
          }
          else {
            cVar6 = -0x60;
            *(int *)(iVar8 + -4) = iVar5;
            *(undefined1 *)(iVar8 + -5) = 0;
          }
        }
        *(byte *)(uVar4 - 3) = cVar6 + (*(byte *)(uVar4 - 3) & 0x1f);
        return uVar4;
      }
    }
    goto LAB_01be56ce;
  }
  uVar9 = param_2 + 3 >> 4;
  if (param_2 + 3 < 0xa0) {
LAB_01be56c8:
    uVar9 = uVar9 + 1;
  }
  else {
    uVar7 = uVar9 + 1;
    iVar8 = (0x1e - LZCOUNT(uVar7)) * 4;
    uVar9 = iVar8 + 1;
    if (*(ushort *)(&DAT_0056569c + uVar9 * 2) < uVar7) {
      uVar9 = iVar8 + 3;
      iVar8 = iVar8 + 2;
    }
    if (*(ushort *)(&DAT_0056569c + iVar8 * 2) < uVar7) goto LAB_01be56c8;
  }
  if ((int)uVar12 <= (int)uVar9) {
    iVar8 = uVar4 - param_2;
    if (iVar8 == 0) {
      cVar6 = '\0';
    }
    else {
      if (iVar8 < 5) {
        uVar9 = iVar8 * 0x20;
      }
      *(undefined1 *)(iVar11 - iVar8) = 0;
      if (iVar8 < 5) {
        cVar6 = (char)uVar9;
      }
      else {
        cVar6 = -0x60;
        *(int *)(iVar11 + -4) = iVar8;
        *(undefined1 *)(iVar11 + -5) = 0;
      }
    }
    *(byte *)(param_1 - 3) = cVar6 + (*(byte *)(param_1 - 3) & 0x1f);
    return param_1;
  }
LAB_01be56ce:
  uVar4 = FUN_01be5118(param_2);
  if (uVar4 != 0) {
    uVar2 = (int)(iVar11 - uVar2) - param_1;
    if (param_2 <= uVar2) {
      uVar2 = param_2;
    }
    FUN_01bed4e2(uVar4,param_1,uVar2);
    FUN_01be4678(param_1);
  }
  return uVar4;
}

