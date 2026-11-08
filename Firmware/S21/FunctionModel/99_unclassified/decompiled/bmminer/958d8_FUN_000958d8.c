// FUN_000958d8 @ 000958d8  size=156  callers=6
// program: bmminer


int FUN_000958d8(int param_1)

{
  int local_10;
  uint local_c;
  
  local_c = 0;
  do {
    if (*(uint *)(param_1 + 8) <= local_c) {
      return 0;
    }
    local_10 = *(int *)(*(int *)(param_1 + 4) + local_c * 4);
    while (local_10 != 0) {
      if (local_10 != 0) {
        return local_10;
      }
      local_10 = iRam00000010;
    }
    local_c = local_c + 1;
  } while( true );
}

