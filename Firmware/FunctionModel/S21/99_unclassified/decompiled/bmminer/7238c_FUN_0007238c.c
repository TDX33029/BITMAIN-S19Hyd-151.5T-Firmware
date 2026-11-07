// FUN_0007238c @ 0007238c  size=632  callers=1
// program: bmminer


undefined8 FUN_0007238c(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  char local_838 [2048];
  undefined4 local_38;
  byte local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_1e;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  int local_18;
  uint local_14;
  
  local_19 = 4;
  local_1a = 0x8a;
  local_38 = 0;
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  local_34[9] = 0;
  local_14 = 0x80000300;
  local_1e = 0x8e;
  local_28 = 0x55;
  local_24 = 0x8e;
  local_1b = 6;
  iVar2 = FUN_0006f4a8(param_1,&local_28,8,&local_38,0xe);
  if (iVar2 == 0) {
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      bVar1 = local_34[local_18];
      dVar3 = (double)VectorSignedToFloat(local_18 << 3,(byte)(in_fpscr >> 0x16) & 3);
      dVar3 = pow(2.0,dVar3);
      iVar2 = FUN_00098f78(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
      local_14 = local_14 | iVar2 * (uint)bVar1;
    }
    iVar2 = (int)local_14 >> 0x1f;
  }
  else {
    builtin_strncpy(local_838,"clear power status failed\n",0x1b);
    FUN_0004948c(0,local_838,0);
    local_14 = 0x80000300;
    iVar2 = 0;
  }
  return CONCAT44(iVar2,local_14);
}

