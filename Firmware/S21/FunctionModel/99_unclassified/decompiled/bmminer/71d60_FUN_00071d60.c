// FUN_00071d60 @ 00071d60  size=304  callers=1
// program: bmminer


uint FUN_00071d60(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_38 [32];
  byte local_18 [4];
  undefined4 uStack_14;
  undefined4 local_10;
  ushort local_c;
  short local_a;
  
  local_10 = 0;
  local_18[0] = 0x55;
  local_18[1] = 0xaa;
  local_18[2] = 6;
  local_18[3] = 0x81;
  uStack_14 = 0;
  memset(auStack_38,0,0x20);
  local_a = 0;
  uStack_14._0_2_ = CONCAT11(param_2,(undefined1)uStack_14);
  for (local_c = 2; local_c < 6; local_c = local_c + 2) {
    local_a = (ushort)local_18[local_c + 1] * 0x100 + (ushort)local_18[local_c] + local_a;
  }
  uStack_14 = CONCAT13((char)((ushort)local_a >> 8),CONCAT12((char)local_a,(undefined2)uStack_14));
  iVar1 = FUN_0006f67c(param_1,local_18,8,auStack_38,8);
  if (iVar1 == 0) {
    uVar2 = uStack_14 >> 8 & 0xff;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

