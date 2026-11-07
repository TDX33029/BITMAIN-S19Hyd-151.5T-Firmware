// FUN_000757a4 @ 000757a4  size=480  callers=1
// program: bmminer


undefined4 FUN_000757a4(int param_1)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  int local_14;
  double local_10;
  
  local_10 = 0.0;
  if (DAT_0094521c < 2) {
    local_10._0_4_ = 0;
  }
  else {
    for (local_14 = 0; local_14 < DAT_0094521c + -1; local_14 = local_14 + 1) {
      if ((((int)(uint)*(byte *)((int)&DAT_00945220 + local_14) <= param_1) &&
          (param_1 <= (int)(uint)*(byte *)((int)&DAT_00945220 + local_14 + 1))) ||
         ((param_1 <= (int)(uint)*(byte *)((int)&DAT_00945220 + local_14) &&
          ((int)(uint)*(byte *)((int)&DAT_00945220 + local_14 + 1) <= param_1)))) {
        dVar1 = (double)VectorSignedToFloat((uint)*(byte *)((int)&DAT_00945220 + local_14 + 1) -
                                            (uint)*(byte *)((int)&DAT_00945220 + local_14),
                                            (byte)(in_fpscr >> 0x16) & 3);
        dVar2 = (double)VectorSignedToFloat(param_1 - (uint)*(byte *)((int)&DAT_00945220 + local_14)
                                            ,(byte)(in_fpscr >> 0x16) & 3);
        local_10 = dVar2 * ((*(double *)(&DAT_00945208 + (local_14 + 0x18) * 2) -
                            *(double *)(&DAT_00945208 + (local_14 + 0x17) * 2)) / dVar1) +
                   *(double *)(&DAT_00945208 + (local_14 + 0x17) * 2);
      }
    }
  }
  return local_10._0_4_;
}

