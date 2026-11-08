// FUN_0007afa8 @ 0007afa8  size=112  callers=1
// program: bmminer


uint FUN_0007afa8(int param_1)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    local_10 = local_10 << 8 | (uint)*(byte *)(param_1 + local_c);
  }
  return local_10;
}

