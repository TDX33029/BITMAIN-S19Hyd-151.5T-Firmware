// FUN_01be428c @ 01be428c size=204 calls_out=0 calls_in=2
// strings: 

void FUN_01be428c(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_1 & 0xf) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be4292);
    (*pcVar1)();
  }
  uVar4 = (uint)*(ushort *)(param_1 - 2);
  uVar5 = *(byte *)(param_1 - 3) & 0x1f;
  if (*(char *)(param_1 - 4) != '\0') {
    if (uVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be42a8);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(param_1 - 8);
    if ((int)uVar4 < 0x10000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be42b4);
      (*pcVar1)();
    }
  }
  iVar3 = uVar4 * -0x10 + -0x10;
  uVar2 = *(uint *)(param_1 + iVar3);
  if (*(int *)(uVar2 + 8) != param_1 + iVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be42c8);
    (*pcVar1)();
  }
  if ((*(byte *)(uVar2 + 0x14) & 0x1f) < uVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be42d4);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar2 + 0xc) >> uVar5) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be42de);
    (*pcVar1)();
  }
  if ((int)((*(uint *)(uVar2 + 0x10) >> uVar5) << 0x1f) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be42e8);
    (*pcVar1)();
  }
  if (((int *)(uVar2 & 0xfffff000))[1] != DAT_01d535bc ||
      *(int *)(uVar2 & 0xfffff000) != DAT_01d535b8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be4308);
    (*pcVar1)();
  }
  uVar6 = (*(ushort *)(uVar2 + 0x14) & 0xfff) >> 6;
  if (uVar6 < 0x30) {
    uVar6 = (uint)*(ushort *)(&DAT_0056569c + uVar6 * 2);
    if ((int)uVar4 < (int)(uVar5 * uVar6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be4326);
      (*pcVar1)();
    }
    if ((int)uVar4 < (int)(uVar5 * uVar6 + uVar6)) {
LAB_01be4348:
      uVar5 = *(uint *)(uVar2 + 0x14) & 0xfffff000;
      if ((uVar5 != 0) && ((uVar5 >> 4) - 1 < uVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x1be435c);
        (*pcVar1)();
      }
      return;
    }
  }
  else if ((*(ushort *)(uVar2 + 0x14) & 0xfc0) == 0xfc0) goto LAB_01be4348;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x1be4346);
  (*pcVar1)();
}

