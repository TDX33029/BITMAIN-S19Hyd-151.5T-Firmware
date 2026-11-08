// FUN_00070220 @ 00070220  size=472  callers=1
// program: bmminer


undefined4 FUN_00070220(void)

{
  undefined4 uVar1;
  double in_d0;
  undefined1 auStack_44 [32];
  byte local_24 [8];
  short local_1c;
  float fStack_18;
  int local_14;
  ushort local_10;
  short local_e;
  undefined4 local_c;
  
  local_c = 0;
  fStack_18 = (float)in_d0;
  local_24[0] = 0x55;
  local_24[1] = 0xaa;
  local_24[2] = 8;
  local_24[3] = 0x83;
  local_24[4] = 0;
  local_24[5] = 0;
  local_24[6] = 0;
  local_24[7] = 0;
  local_1c = 0;
  memset(auStack_44,0,0x20);
  local_e = 0;
  if ((DAT_00945200 != '\0') && (DAT_00945368 != '\0')) {
    fStack_18 = (float)FUN_0006fab0(SUB84(in_d0,0));
    if (fStack_18 < 0.0) {
      return 0xffffffff;
    }
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    local_24[local_14 + 4] = local_24[local_14 + 0xc];
  }
  for (local_10 = 2; local_10 < 8; local_10 = local_10 + 2) {
    local_e = (ushort)local_24[local_10] + local_e;
    local_e = (ushort)local_24[local_10 + 1] * 0x100 + local_e;
  }
  local_1c = local_e;
  uVar1 = FUN_0006f67c(DAT_009451f0,local_24,10,auStack_44,10);
  return uVar1;
}

