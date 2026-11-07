// FUN_0006ed8c @ 0006ed8c  size=200  callers=1
// program: bmminer


undefined2 FUN_0006ed8c(byte *param_1,short param_2)

{
  short local_16;
  byte *local_14;
  undefined2 local_a;
  
  local_a = 0xffff;
  local_16 = param_2;
  local_14 = param_1;
  while (local_16 != 0) {
    local_a = CONCAT11((&DAT_000a9050)[(ushort)((byte)local_a ^ *local_14)],
                       local_a._1_1_ ^ (&DAT_000a8f50)[(ushort)((byte)local_a ^ *local_14)]);
    local_16 = local_16 + -1;
    local_14 = local_14 + 1;
  }
  return local_a;
}

