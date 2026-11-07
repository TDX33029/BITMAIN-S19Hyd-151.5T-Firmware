// FUN_00029354 @ 00029354  size=348  callers=1
// program: bmminer


void FUN_00029354(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  char acStack_818 [2048];
  
  iVar3 = FUN_00029324();
  iVar2 = DAT_00b2d25c;
  uVar1 = DAT_00b2d258;
  iVar5 = iVar3 - DAT_0008928c;
  DAT_0008928c = iVar3;
  dVar6 = (double)FUN_000679c4(DAT_00b2d258 - DAT_00089290,
                               DAT_00b2d25c - (DAT_00089294 + (uint)(DAT_00b2d258 < DAT_00089290)));
  dVar7 = (double)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  DAT_00089290 = uVar1;
  DAT_00089294 = iVar2;
  DAT_00b2d250 = ((dVar6 * 4294967295.0) / 1000000000.0) / dVar7;
  uVar4 = FUN_0001d93c();
  dVar6 = (double)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  if (DAT_00b2d250 < dVar6 * 0.75) {
    if (DAT_00087bbc < 4) {
      return;
    }
    snprintf(acStack_818,0x800,"avg rate is lower than ideal rate, %0.2f in %ld mins\n",DAT_00b2d250
             ,iVar5 / 0x3c);
    FUN_00032218(3,acStack_818,0);
  }
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(acStack_818,0x800,"30m avg rate is %0.2f in %ld mins\n",DAT_00b2d250,iVar5 / 0x3c);
  FUN_00032218(3,acStack_818,0);
  return;
}

