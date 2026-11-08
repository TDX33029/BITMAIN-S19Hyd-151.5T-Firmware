// FUN_00027f1c @ 00027f1c  size=352  callers=3
// program: bmminer


undefined4 FUN_00027f1c(undefined1 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte local_1c;
  byte local_1b;
  ushort local_1a;
  
  if (2 < DAT_008c7044) {
    return 0;
  }
  uVar1 = (&DAT_0009b620)[DAT_008c7044];
  iVar2 = FUN_0002a584();
  FUN_000835dc(1,param_1,param_2 * iVar2,uVar1,&local_1c);
  if ((local_1b & 0x3f) != 0) {
    dVar5 = (double)VectorSignedToFloat(local_1b & 0x3f,(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = (double)VectorSignedToFloat(local_1a & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
    dVar4 = (double)VectorSignedToFloat(((local_1c & 0x7f) >> 4) + 1,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (double)VectorSignedToFloat((local_1c & 7) + 1,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (((25.0 / dVar5) * dVar3) / dVar4) / dVar6;
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar6 != 50.0) goto LAB_00028070;
    iVar2 = FUN_0002a584();
    FUN_000835dc(0,param_1,param_2 * iVar2,uVar1,&local_1c);
    if ((local_1b & 0x3f) != 0) {
      dVar5 = (double)VectorSignedToFloat(local_1b & 0x3f,(byte)(in_fpscr >> 0x16) & 3);
      dVar3 = (double)VectorSignedToFloat(local_1a & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
      dVar4 = (double)VectorSignedToFloat(((local_1c & 0x7f) >> 4) + 1,(byte)(in_fpscr >> 0x16) & 3)
      ;
      dVar6 = (double)VectorSignedToFloat((local_1c & 7) + 1,(byte)(in_fpscr >> 0x16) & 3);
      dVar6 = (((25.0 / dVar5) * dVar3) / dVar4) / dVar6;
      goto LAB_00028070;
    }
  }
  dVar6 = 0.0;
LAB_00028070:
  return SUB84(dVar6,0);
}

