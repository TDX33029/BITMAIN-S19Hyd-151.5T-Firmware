// FUN_0003b99c @ 0003b99c  size=356  callers=0
// program: bmminer


undefined4 FUN_0003b99c(int param_1)

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
  char acStack_838 [2052];
  
  if (4 < DAT_00087bbc) {
    snprintf(acStack_838,0x800,"[DEBUG] Check if is unbalanche happen, chain = %d\n",param_1);
    FUN_00032218(4,acStack_838,0);
  }
  iVar1 = FUN_0002002c();
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    param4 = 0;
    do {
      while( true ) {
        iVar6 = param_1 * 0x100 + param4 + 0x202402;
        uVar5 = *(uint *)(DAT_00507484 + iVar6 * 4);
        iVar2 = FUN_0002006c();
        if (uVar5 <= (uint)(iVar2 * 8)) break;
        uVar4 = 1;
        if (DAT_00087bbc < 4) goto LAB_0003ba1c;
LAB_0003ba88:
        iVar2 = param4 + 1;
        snprintf(acStack_838,0x800,"Unbalance happened: chain = %d, asic = %d\n",param_1,param4);
        uVar4 = 1;
        FUN_00032218(3,acStack_838,0);
        param4 = iVar2;
        if (iVar1 == iVar2) {
          return 1;
        }
      }
      uVar3 = *(undefined4 *)(DAT_00507484 + iVar6 * 4);
      iVar2 = FUN_0002006c();
      dVar8 = (double)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      dVar7 = (double)VectorSignedToFloat(iVar2 << 3,(byte)(in_fpscr >> 0x16) & 3);
      in_fpscr = in_fpscr & 0xfffffff;
      if ((dVar8 < dVar7 * 0.75) && (uVar4 = 1, 3 < DAT_00087bbc)) goto LAB_0003ba88;
LAB_0003ba1c:
      param4 = param4 + 1;
    } while (iVar1 != param4);
  }
  return uVar4;
}

