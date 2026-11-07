// FUN_01b49618 @ 01b49618 size=52 calls_out=0 calls_in=7
// strings: 

bool FUN_01b49618(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0x800) {
    return *(int *)(param_1 + 0xc) != 0;
  }
  return false;
}

