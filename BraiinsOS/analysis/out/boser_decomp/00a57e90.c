// FUN_00a57e90 @ 00a57e90 size=424 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00a57ee4) */

void FUN_00a57e90(undefined4 *param_1,char param_2)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  undefined8 uVar14;
  
  if (param_2 == '\0') {
    puVar10 = (undefined *)0x15180;
  }
  else if (param_2 == '\x01') {
    puVar10 = (undefined *)0x93a80;
  }
  else {
    puVar10 = &UNK_0024ea00;
  }
  iVar8 = LZCOUNT(puVar10);
  piVar2 = (int *)FUN_01663bcc();
  iVar4 = iVar8 + 0x20;
  piVar12 = piVar2 + 2;
  uVar5 = (uint)puVar10 >> (0x20U - iVar4 & 0xff) | 0 << iVar4;
  iVar4 = (int)puVar10 << iVar4;
  if (-1 < iVar8) {
    iVar4 = 0;
    uVar5 = (int)puVar10 << iVar8;
  }
  uVar11 = uVar5 - (iVar4 == 0);
  uVar3 = piVar2[0x42];
  do {
    if (uVar3 < 0x3f) {
      uVar6 = uVar3 + 2;
      piVar2[0x42] = uVar6;
      uVar9 = piVar12[uVar3];
      uVar5 = (piVar12 + uVar3)[1];
    }
    else {
      if (uVar3 == 0x3f) {
        uVar9 = piVar2[0x41];
        FUN_01663d68(piVar2 + 0x44,piVar12,uVar5);
        uVar6 = 1;
        uVar5 = piVar2[2];
      }
      else {
        FUN_01663d68(piVar2 + 0x44,piVar12,uVar5);
        uVar9 = piVar2[2];
        uVar6 = 2;
        uVar5 = piVar2[3];
      }
      piVar2[0x42] = uVar6;
    }
    lVar1 = ZEXT48(puVar10) * (ulonglong)uVar5 + (ZEXT48(puVar10) * (ulonglong)uVar9 >> 0x20);
    uVar7 = (uint)lVar1;
    iVar8 = (int)((ulonglong)lVar1 >> 0x20);
    bVar13 = (uint)(ZEXT48(puVar10) * (ulonglong)uVar9) <= iVar4 - 1U;
    uVar5 = uVar11 - (uVar7 + !bVar13);
    uVar3 = uVar6;
  } while (uVar11 <= uVar7 && (uint)bVar13 <= uVar11 - uVar7);
  iVar4 = *piVar2;
  *piVar2 = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    FUN_01663bac(piVar2);
  }
  uVar14 = FUN_01bf0ff0(iVar8,0,0xe10,0);
  FUN_01bf0ff0(iVar8,0,0x3c,0);
  param_1[2] = extraout_r2;
  FUN_01bf0ff0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x18,0);
  *param_1 = extraout_r2_00;
  param_1[1] = (uint)((iVar8 + (int)uVar14 * -0xe10) * 0x8889) >> 0x15;
  return;
}

