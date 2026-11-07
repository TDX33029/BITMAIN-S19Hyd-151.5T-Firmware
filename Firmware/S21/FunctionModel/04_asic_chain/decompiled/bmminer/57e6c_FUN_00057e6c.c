// FUN_00057e6c @ 00057e6c  size=356  callers=0
// program: bmminer


undefined4 FUN_00057e6c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int param4;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  double dVar7;
  double dVar8;
  char acStack_2038 [8196];
  
  if (4 < DAT_000be63c) {
    snprintf(acStack_2038,0x2000,"[DEBUG] Check if is unbalanche happen, chain = %d\n",param_1);
    FUN_0004948c(4,acStack_2038,0);
  }
  iVar1 = FUN_0002a514();
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    param4 = 0;
    do {
      while( true ) {
        iVar6 = param_1 * 0x100 + param4 + 0x3fe402;
        uVar5 = *(uint *)(DAT_00944b7c + iVar6 * 4);
        iVar2 = FUN_0002a554();
        if (uVar5 <= (uint)(iVar2 * 8)) break;
        uVar4 = 1;
        if (DAT_000be63c < 4) goto LAB_00057eec;
LAB_00057f58:
        iVar2 = param4 + 1;
        snprintf(acStack_2038,0x2000,"Unbalance happened: chain = %d, asic = %d\n",param_1,param4);
        uVar4 = 1;
        FUN_0004948c(3,acStack_2038,0);
        param4 = iVar2;
        if (iVar1 == iVar2) {
          return 1;
        }
      }
      uVar3 = *(undefined4 *)(DAT_00944b7c + iVar6 * 4);
      iVar2 = FUN_0002a554();
      dVar8 = (double)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      dVar7 = (double)VectorSignedToFloat(iVar2 << 3,(byte)(in_fpscr >> 0x16) & 3);
      in_fpscr = in_fpscr & 0xfffffff;
      if ((dVar8 < dVar7 * 0.75) && (uVar4 = 1, 3 < DAT_000be63c)) goto LAB_00057f58;
LAB_00057eec:
      param4 = param4 + 1;
    } while (iVar1 != param4);
  }
  return uVar4;
}

