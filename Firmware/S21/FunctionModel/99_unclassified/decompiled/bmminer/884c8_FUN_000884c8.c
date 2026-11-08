// FUN_000884c8 @ 000884c8  size=156  callers=1
// program: bmminer


void FUN_000884c8(int param_1,int param_2)

{
  uint local_c;
  
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    *(byte *)(param_1 + local_c + 0x408) =
         *(byte *)(param_1 + local_c + 0x408) | *(byte *)(param_2 + local_c + 0x1008);
  }
  return;
}

