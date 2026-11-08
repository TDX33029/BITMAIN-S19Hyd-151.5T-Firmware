// FUN_0007bb30 @ 0007bb30  size=308  callers=1
// program: bmminer


int FUN_0007bb30(char *param_1)

{
  byte bVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  if (*param_1 != 'u') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("str[0] == \'u\'","load.c",0x135,"decode_unicode_escape");
  }
  local_c = 1;
  do {
    if (4 < local_c) {
      return local_10;
    }
    bVar1 = param_1[local_c];
    local_10 = local_10 * 0x10;
    if ((bVar1 < 0x30) || (0x39 < bVar1)) {
      if ((bVar1 < 0x61) || (0x7a < bVar1)) {
        if ((bVar1 < 0x41) || (0x5a < bVar1)) {
          return -1;
        }
        local_10 = local_10 + (bVar1 - 0x37);
      }
      else {
        local_10 = local_10 + (bVar1 - 0x57);
      }
    }
    else {
      local_10 = local_10 + (bVar1 - 0x30);
    }
    local_c = local_c + 1;
  } while( true );
}

