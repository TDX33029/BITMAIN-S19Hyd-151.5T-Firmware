// FUN_000705cc @ 000705cc  size=472  callers=2
// program: bmminer


int FUN_000705cc(void)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  double dVar3;
  undefined1 auStack_844 [4];
  undefined1 auStack_840 [28];
  char local_824 [2048];
  float afStack_24 [2];
  undefined2 local_1c;
  int local_18;
  undefined2 local_12;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    afStack_24[1] = 1.5594738e-36;
    local_1c = 0x404;
    memset(auStack_844,0,0x20);
    local_12 = 0;
    local_18 = FUN_0006f67c(DAT_009451f0,afStack_24 + 1,6,auStack_844,10);
    if (local_18 == 0) {
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        *(undefined1 *)((int)afStack_24 + local_c) = auStack_840[local_c];
      }
      fVar2 = afStack_24[0] * 100.0 + 1e-05;
      local_10 = (uint)(0.0 < fVar2) * (int)(longlong)fVar2;
      if ((DAT_00945200 != '\0') && (DAT_00945368 != '\0')) {
        dVar3 = (double)VectorUnsignedToFloat(local_10,(byte)(in_fpscr >> 0x16) & 3);
        fVar2 = (float)FUN_0006ff88(SUB84(dVar3 / 100.0,0));
        local_10 = (int)(fVar2 * 100.0);
      }
    }
    else {
      builtin_strncpy(local_824,"Get power dc_volt value failed\n",0x20);
      FUN_0004948c(3,local_824,0);
      local_10 = 0;
    }
  }
  return local_10;
}

