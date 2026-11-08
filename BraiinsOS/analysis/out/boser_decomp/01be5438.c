// FUN_01be5438 @ 01be5438 size=286 calls_out=0 calls_in=1
// strings: 

bool FUN_01be5438(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if ((param_1 & 0xf) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be543e);
    (*pcVar1)();
  }
  uVar3 = (uint)*(ushort *)(param_1 - 2);
  uVar4 = *(byte *)(param_1 - 3) & 0x1f;
  if (*(char *)(param_1 - 4) != '\0') {
    if (uVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be5454);
      (*pcVar1)();
    }
    uVar3 = *(uint *)(param_1 - 8);
    if ((int)uVar3 < 0x10000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be5460);
      (*pcVar1)();
    }
  }
  iVar5 = uVar3 * -0x10 + -0x10;
  uVar6 = *(uint *)(param_1 + iVar5);
  if (param_1 + iVar5 != *(int *)(uVar6 + 8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5474);
    (*pcVar1)();
  }
  if ((*(byte *)(uVar6 + 0x14) & 0x1f) < uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5480);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar6 + 0xc) >> uVar4) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be548a);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar6 + 0x10) >> uVar4) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5494);
    (*pcVar1)();
  }
  if (((int *)(uVar6 & 0xfffff000))[1] != DAT_01d535bc ||
      *(int *)(uVar6 & 0xfffff000) != DAT_01d535b8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be54b4);
    (*pcVar1)();
  }
  uVar7 = (*(ushort *)(uVar6 + 0x14) & 0xfff) >> 6;
  if (uVar7 < 0x30) {
    uVar7 = (uint)*(ushort *)(&DAT_0056569c + uVar7 * 2);
    if ((int)uVar3 < (int)(uVar7 * uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be54d2);
      (*pcVar1)();
    }
    if ((int)(uVar4 * uVar7 + uVar7) <= (int)uVar3) {
LAB_01be54f2:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be54f2);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(uVar6 + 0x14);
    if ((uVar4 & 0xfffff000) == 0) goto LAB_01be5512;
  }
  else {
    if ((*(ushort *)(uVar6 + 0x14) & 0xfc0) != 0xfc0) goto LAB_01be54f2;
    uVar4 = *(uint *)(uVar6 + 0x14);
    if ((uVar4 & 0xfffff000) == 0) {
      return true;
    }
  }
  if (((uVar4 & 0xfffff000) >> 4) - 1 < uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5510);
    (*pcVar1)();
  }
LAB_01be5512:
  uVar3 = (*(ushort *)(uVar6 + 0x14) & 0xfff) >> 6;
  if (0x2f < uVar3) {
    return true;
  }
  bVar2 = *(byte *)(uVar6 + 0x14);
  bVar8 = (bVar2 & 0x1f) != 0;
  if (bVar8) {
    bVar2 = 0;
  }
  if (bVar8) {
    return (bool)bVar2;
  }
  uVar4 = *(uint *)(uVar6 + 0x14) & 0xfffff000;
  if (uVar4 == 0) {
    return false;
  }
  return uVar4 - 0x10 < (uint)*(ushort *)(&DAT_0056569c + uVar3 * 2) << 4;
}

