// FUN_0002d018 @ 0002d018  size=216  callers=1
// program: bmminer


uint FUN_0002d018(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r6;
  uint uVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 local_20 [2];
  
  uVar5 = 0;
  iVar4 = 0;
  local_20[0] = 8;
  local_20[1] = 0x60;
  do {
    iVar1 = FUN_0002a6f0(iVar4);
    if (iVar1 != 0) {
      uVar3 = 0;
      while( true ) {
        uVar2 = FUN_0002a514();
        if (uVar2 <= uVar3) break;
        unaff_r6 = FUN_000462cc(local_20[param_1],uVar3,iVar4);
        uVar3 = uVar3 + 10;
      }
      dVar8 = (double)VectorSignedToFloat((unaff_r6 & 0x3fff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
      dVar6 = (double)VectorSignedToFloat((unaff_r6 & 0xfffffff) >> 0x10,
                                          (byte)(in_fpscr >> 0x16) & 3);
      dVar7 = (double)VectorSignedToFloat(((unaff_r6 & 0x7f) >> 4) + 1,(byte)(in_fpscr >> 0x16) & 3)
      ;
      dVar9 = (double)VectorSignedToFloat((unaff_r6 & 7) + 1,(byte)(in_fpscr >> 0x16) & 3);
      dVar9 = (((25.0 / dVar8) * dVar6) / dVar7) / dVar9;
      uVar3 = (uint)(0.0 < dVar9) * (int)(longlong)dVar9;
      if (uVar5 < uVar3) {
        uVar5 = uVar3;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return uVar5;
}

