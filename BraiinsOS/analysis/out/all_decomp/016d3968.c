// FUN_016d3968 @ 016d3968 size=548 calls_out=2 calls_in=1
// strings: 

uint FUN_016d3968(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  bool bVar14;
  
  uVar7 = -param_1 & param_1;
  if ((param_1 & ~-param_1) != 0) {
    puVar10 = (undefined4 *)FUN_016d2bc8();
    *puVar10 = 0x16;
    return 0;
  }
  puVar10 = (undefined4 *)0x0;
  if ((CARRY4(uVar7,param_2)) ||
     ((DAT_018ddd50 != 0 && (puVar10 = &DAT_018ddd4c, DAT_018ddd4c == 0)))) {
    puVar10 = (undefined4 *)FUN_016d2bc8(param_1,param_2,uVar7 + param_2,puVar10,param_4);
    *puVar10 = 0xc;
    return 0;
  }
  if (param_1 < 0x10) {
    param_1 = 0x10;
  }
  uVar7 = FUN_016d4a50((param_2 - 0x10) + param_1);
  if (uVar7 == 0) {
    return 0;
  }
  if ((uVar7 & 0xf) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d39ac);
    (*pcVar1)();
  }
  uVar2 = (uint)*(ushort *)(uVar7 - 2);
  uVar8 = *(byte *)(uVar7 - 3) & 0x1f;
  if (*(char *)(uVar7 - 4) != '\0') {
    if (uVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d39c2);
      (*pcVar1)();
    }
    uVar2 = *(uint *)(uVar7 - 8);
    if ((int)uVar2 < 0x10000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d39ce);
      (*pcVar1)();
    }
  }
  iVar3 = uVar2 * -0x10 + -0x10;
  uVar4 = *(uint *)(uVar7 + iVar3);
  if (uVar7 + iVar3 != *(int *)(uVar4 + 8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d39e2);
    (*pcVar1)();
  }
  if ((*(byte *)(uVar4 + 0x14) & 0x1f) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d39ee);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar4 + 0xc) >> uVar8) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d39f8);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar4 + 0x10) >> uVar8) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d3a02);
    (*pcVar1)();
  }
  if (((int *)(uVar4 & 0xfffff000))[1] != DAT_018ddb54 ||
      *(int *)(uVar4 & 0xfffff000) != DAT_018ddb50) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d3a22);
    (*pcVar1)();
  }
  uVar11 = (*(ushort *)(uVar4 + 0x14) & 0xfff) >> 6;
  if (uVar11 < 0x30) {
    uVar11 = (uint)*(ushort *)(&DAT_0042567c + uVar11 * 2);
    if ((int)uVar2 < (int)(uVar11 * uVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d3a40);
      (*pcVar1)();
    }
    if ((int)(uVar8 * uVar11 + uVar11) <= (int)uVar2) {
LAB_016d3a78:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d3a78);
      (*pcVar1)();
    }
  }
  else if ((*(ushort *)(uVar4 + 0x14) & 0xfc0) != 0xfc0) goto LAB_016d3a78;
  if ((*(uint *)(uVar4 + 0x14) & 0xfffff000) == 0) {
    bVar13 = *(byte *)(uVar7 - 3);
    uVar2 = bVar13 & 0x1f;
  }
  else {
    uVar8 = *(uint *)(uVar4 + 0x14) & 0xfffff000;
    if ((uVar8 >> 4) - 1 < uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d3a98);
      (*pcVar1)();
    }
    bVar13 = *(byte *)(uVar7 - 3);
    uVar2 = bVar13 & 0x1f;
    if ((*(byte *)(uVar4 + 0x14) & 0x1f) == 0) {
      iVar3 = uVar8 - 0x10;
      goto LAB_016d3b16;
    }
  }
  iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(uVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
LAB_016d3b16:
  iVar12 = *(int *)(uVar4 + 8) + 0x10;
  uVar8 = -uVar7 & param_1 - 1;
  iVar5 = iVar3 * (uVar2 + 1) + iVar12;
  iVar9 = iVar3 * uVar2 + iVar12;
  iVar3 = iVar5 + -4;
  if (uVar8 == 0) {
    iVar9 = (iVar3 - uVar7) - param_2;
    cVar6 = '\0';
    if (iVar9 != 0) {
      iVar12 = iVar9;
      if (iVar9 < 5) {
        iVar12 = iVar9 * 0x20;
      }
      *(undefined1 *)(iVar3 - iVar9) = 0;
      if (iVar9 < 5) {
        cVar6 = (char)iVar12;
        bVar13 = *(byte *)(uVar7 - 3);
      }
      else {
        *(int *)(iVar5 + -8) = iVar12;
        cVar6 = -0x60;
        *(undefined1 *)(iVar5 + -9) = 0;
        bVar13 = *(byte *)(uVar7 - 3);
      }
    }
    *(byte *)(uVar7 - 3) = cVar6 + (bVar13 & 0x1f);
  }
  else {
    uVar7 = uVar7 + uVar8;
    bVar14 = uVar7 - iVar12 < 0x100000;
    uVar8 = uVar7 - iVar12 >> 4;
    if (bVar14) {
      *(short *)(uVar7 - 2) = (short)uVar8;
    }
    else {
      *(uint *)(uVar7 - 8) = uVar8;
    }
    *(bool *)(uVar7 - 4) = !bVar14;
    if (!bVar14) {
      param_1 = 0;
    }
    *(char *)(uVar7 - 3) = (char)uVar2;
    if (!bVar14) {
      *(short *)(uVar7 - 2) = (short)param_1;
    }
    iVar12 = (iVar3 - uVar7) - param_2;
    if (iVar12 != 0) {
      *(undefined1 *)(iVar3 - iVar12) = 0;
      if (iVar12 < 5) {
        bVar13 = (*(byte *)(uVar7 - 3) & 0x1f) + (char)iVar12 * ' ';
      }
      else {
        *(int *)(iVar5 + -8) = iVar12;
        *(undefined1 *)(iVar5 + -9) = 0;
        bVar13 = (*(byte *)(uVar7 - 3) & 0x1f) + 0xa0;
      }
      uVar2 = (uint)bVar13;
    }
    *(char *)(uVar7 - 3) = (char)uVar2;
    *(undefined1 *)(iVar9 + -3) = 0xe0;
    *(short *)(iVar9 + -2) = (short)(uVar7 - iVar9 >> 4);
  }
  return uVar7;
}

