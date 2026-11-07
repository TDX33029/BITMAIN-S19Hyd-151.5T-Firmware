// FUN_000703f8 @ 000703f8  size=444  callers=1
// program: bmminer


int FUN_000703f8(void)

{
  uint in_fpscr;
  float fVar1;
  double dVar2;
  char local_844 [2048];
  float fStack_44;
  undefined1 auStack_40 [4];
  char acStack_3c [28];
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  int local_14;
  undefined2 local_e;
  int local_c;
  
  local_20 = 0x304aa55;
  local_1c = 0x304;
  memset(auStack_40,0,0x20);
  local_e = 0;
  local_14 = 0;
  local_18 = FUN_0006f67c(DAT_009451f0,&local_20,6,auStack_40,10);
  if (local_18 == 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      local_844[local_c + 0x800] = acStack_3c[local_c];
    }
    fVar1 = fStack_44 * 100.0 + 1e-05;
    local_14 = (uint)(0.0 < fVar1) * (int)(longlong)fVar1;
    if ((DAT_00945200 != '\0') && (DAT_00945368 != '\0')) {
      dVar2 = (double)VectorUnsignedToFloat(local_14,(byte)(in_fpscr >> 0x16) & 3);
      fVar1 = (float)FUN_0006ff88(SUB84(dVar2 / 100.0,0));
      local_14 = (uint)(0.0 < fVar1 * 100.0) * (int)(fVar1 * 100.0);
    }
  }
  else {
    builtin_strncpy(local_844,"Get power set_volt value failed\n",0x21);
    FUN_0004948c(3,local_844,0);
    local_14 = 0;
  }
  return local_14;
}

