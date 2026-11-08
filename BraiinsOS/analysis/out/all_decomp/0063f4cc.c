// FUN_0063f4cc @ 0063f4cc size=156 calls_out=3 calls_in=4
// strings: 

uint FUN_0063f4cc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint local_1c;
  
  bVar14 = 7 < param_3;
  bVar13 = param_3 == 8;
  if (param_3 < 9) {
    bVar14 = param_4 <= param_3;
    bVar13 = param_3 == param_4;
  }
  if (bVar14 && !bVar13) {
    if (param_3 < 5) {
      param_3 = 4;
    }
    local_1c = 0;
    iVar2 = FUN_016d51b0(&local_1c,param_3,param_4);
    uVar3 = local_1c;
    uVar5 = 0;
    if ((iVar2 == 0) && (local_1c != 0)) {
      if (param_4 < param_2) {
        param_2 = param_4;
      }
      FUN_016dd1aa(local_1c,param_1,param_2);
      thunk_FUN_016d3fb4(param_1);
      uVar5 = uVar3;
    }
    return uVar5;
  }
  if (param_1 == 0) {
    uVar3 = FUN_016d4a50(param_4);
    return uVar3;
  }
  if (0x7fffeffe < param_4) {
    puVar4 = (undefined4 *)FUN_016d2bc8();
    *puVar4 = 0xc;
    return 0;
  }
  if ((param_1 & 0xf) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4ec2);
    (*pcVar1)();
  }
  uVar3 = (uint)*(ushort *)(param_1 - 2);
  uVar5 = *(byte *)(param_1 - 3) & 0x1f;
  if (*(char *)(param_1 - 4) != '\0') {
    if (uVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4ed8);
      (*pcVar1)();
    }
    uVar3 = *(uint *)(param_1 - 8);
    if ((int)uVar3 < 0x10000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4ee4);
      (*pcVar1)();
    }
  }
  iVar2 = uVar3 * -0x10 + -0x10;
  uVar9 = *(uint *)(param_1 + iVar2);
  if (param_1 + iVar2 != *(int *)(uVar9 + 8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4ef8);
    (*pcVar1)();
  }
  if ((*(byte *)(uVar9 + 0x14) & 0x1f) < uVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4f04);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar9 + 0xc) >> uVar5) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4f0e);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar9 + 0x10) >> uVar5) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4f18);
    (*pcVar1)();
  }
  if (((int *)(uVar9 & 0xfffff000))[1] != DAT_018ddb54 ||
      *(int *)(uVar9 & 0xfffff000) != DAT_018ddb50) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4f36);
    (*pcVar1)();
  }
  uVar8 = (*(ushort *)(uVar9 + 0x14) & 0xfff) >> 6;
  if (uVar8 < 0x30) {
    uVar8 = (uint)*(ushort *)(&DAT_0042567c + uVar8 * 2);
    if ((int)uVar3 < (int)(uVar8 * uVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4f52);
      (*pcVar1)();
    }
    if ((int)(uVar5 * uVar8 + uVar8) <= (int)uVar3) {
LAB_016d4f7c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4f7c);
      (*pcVar1)();
    }
  }
  else if ((*(ushort *)(uVar9 + 0x14) & 0xfc0) != 0xfc0) goto LAB_016d4f7c;
  if ((*(uint *)(uVar9 + 0x14) & 0xfffff000) == 0) {
    uVar3 = (uint)*(byte *)(param_1 - 3);
    uVar5 = uVar3 & 0x1f;
LAB_016d5076:
    iVar2 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(uVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  else {
    uVar8 = *(uint *)(uVar9 + 0x14) & 0xfffff000;
    if ((uVar8 >> 4) - 1 < uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4f9e);
      (*pcVar1)();
    }
    uVar3 = (uint)*(byte *)(param_1 - 3);
    uVar5 = uVar3 & 0x1f;
    if ((*(byte *)(uVar9 + 0x14) & 0x1f) != 0) goto LAB_016d5076;
    iVar2 = uVar8 - 0x10;
  }
  uVar3 = uVar3 >> 5;
  iVar6 = iVar2 * uVar5 + *(int *)(uVar9 + 8) + 0x10;
  iVar11 = iVar6 + iVar2 + -4;
  if (4 < uVar3) {
    if (uVar3 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d50a4);
      (*pcVar1)();
    }
    uVar3 = *(uint *)(iVar11 + -4);
    if (uVar3 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d50ae);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d50b6);
      (*pcVar1)();
    }
  }
  uVar5 = iVar11 - param_1;
  if (uVar5 < uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d50c0);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar3) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d50ca);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 + iVar2 + -4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d50d0);
    (*pcVar1)();
  }
  uVar8 = uVar5;
  if (0x1ffea < uVar5) {
    uVar8 = 0x1ffeb;
  }
  uVar12 = (*(ushort *)(uVar9 + 0x14) & 0xfff) >> 6;
  if (uVar8 < param_4) {
    bVar14 = 0x1ffea < param_4;
    bVar13 = param_4 == 0x1ffeb;
    if (0x1ffeb < param_4) {
      bVar14 = 0x2e < uVar12;
      bVar13 = uVar12 == 0x2f;
    }
    if (bVar14 && !bVar13) {
      if ((*(ushort *)(uVar9 + 0x14) & 0xfc0) != 0xfc0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d5102);
        (*pcVar1)();
      }
      iVar6 = param_1 - iVar6;
      uVar8 = param_4 + 0x1013 + iVar6;
      iVar2 = *(int *)(uVar9 + 8);
      uVar5 = *(uint *)(uVar9 + 0x14) & 0xfffff000;
      uVar12 = uVar8 & 0xfffff000;
      if (uVar5 != uVar12) {
        iVar2 = FUN_016d6a6c(iVar2,uVar5,uVar12,1);
      }
      if (iVar2 != -1) {
        iVar10 = uVar12 - 0x14;
        *(int *)(uVar9 + 8) = iVar2;
        iVar2 = iVar2 + 0x10;
        iVar11 = (iVar10 - iVar6) - param_4;
        uVar3 = *(uint *)(uVar9 + 0x14) & 0xfff | uVar8 & 0xfffff000;
        *(uint *)(uVar9 + 0x14) = uVar3;
        uVar5 = iVar2 + iVar6;
        *(undefined1 *)(iVar2 + iVar10) = 0;
        if (iVar11 == 0) {
          uVar3 = 0;
        }
        cVar7 = (char)uVar3;
        iVar2 = iVar2 + iVar10;
        if (iVar11 != 0) {
          iVar6 = iVar11;
          if (iVar11 < 5) {
            iVar6 = iVar11 * 0x20;
          }
          *(undefined1 *)(iVar2 - iVar11) = 0;
          if (iVar11 < 5) {
            cVar7 = (char)iVar6;
          }
          else {
            cVar7 = -0x60;
            *(int *)(iVar2 + -4) = iVar6;
            *(undefined1 *)(iVar2 + -5) = 0;
          }
        }
        *(byte *)(uVar5 - 3) = cVar7 + (*(byte *)(uVar5 - 3) & 0x1f);
        return uVar5;
      }
    }
    goto LAB_016d5006;
  }
  uVar9 = param_4 + 3 >> 4;
  if (param_4 + 3 < 0xa0) {
LAB_016d5000:
    uVar9 = uVar9 + 1;
  }
  else {
    uVar8 = uVar9 + 1;
    iVar2 = (0x1e - LZCOUNT(uVar8)) * 4;
    uVar9 = iVar2 + 1;
    if (*(ushort *)(&DAT_0042567c + uVar9 * 2) < uVar8) {
      uVar9 = iVar2 + 3;
      iVar2 = iVar2 + 2;
    }
    if (*(ushort *)(&DAT_0042567c + iVar2 * 2) < uVar8) goto LAB_016d5000;
  }
  if ((int)uVar12 <= (int)uVar9) {
    iVar2 = uVar5 - param_4;
    if (iVar2 == 0) {
      cVar7 = '\0';
    }
    else {
      if (iVar2 < 5) {
        uVar9 = iVar2 * 0x20;
      }
      *(undefined1 *)(iVar11 - iVar2) = 0;
      if (iVar2 < 5) {
        cVar7 = (char)uVar9;
      }
      else {
        cVar7 = -0x60;
        *(int *)(iVar11 + -4) = iVar2;
        *(undefined1 *)(iVar11 + -5) = 0;
      }
    }
    *(byte *)(param_1 - 3) = cVar7 + (*(byte *)(param_1 - 3) & 0x1f);
    return param_1;
  }
LAB_016d5006:
  uVar5 = FUN_016d4a50(param_4);
  if (uVar5 != 0) {
    uVar3 = (int)(iVar11 - uVar3) - param_1;
    if (param_4 <= uVar3) {
      uVar3 = param_4;
    }
    FUN_016dd1aa(uVar5,param_1,uVar3);
    FUN_016d3fb4(param_1);
  }
  return uVar5;
}

