// FUN_00095de8 @ 00095de8  size=580  callers=2
// program: bmminer


long FUN_00095de8(byte *param_1)

{
  byte bVar1;
  size_t sVar2;
  ushort **ppuVar3;
  long lVar4;
  int local_1c;
  uint local_18;
  long local_14;
  byte *local_10;
  byte *local_c;
  
  if (param_1 == (byte *)0x0) {
    FUN_00095b4c(2,"src/zc_util.c",0x1b,"astring is null or 0");
    lVar4 = 0;
  }
  else {
    local_10 = param_1;
    for (local_c = param_1; *local_c != 0; local_c = local_c + 1) {
      ppuVar3 = __ctype_b_loc();
      if (((*ppuVar3)[*local_c] & 0x2000) == 0) {
        *local_10 = *local_c;
        local_10 = local_10 + 1;
      }
    }
    *local_10 = 0;
    sVar2 = strlen((char *)param_1);
    lVar4 = strtol((char *)param_1,(char **)0x0,10);
    if (lVar4 < 1) {
      lVar4 = 0;
    }
    else {
      if ((param_1[sVar2 - 1] == 0x42) || (param_1[sVar2 - 1] == 0x62)) {
        bVar1 = param_1[sVar2 - 2];
        local_1c = 0x400;
      }
      else {
        bVar1 = param_1[sVar2 - 1];
        local_1c = 1000;
      }
      local_18 = (uint)bVar1;
      switch(local_18) {
      case 0x47:
      case 0x67:
        lVar4 = local_1c * local_1c * local_1c * lVar4;
        break;
      default:
        ppuVar3 = __ctype_b_loc();
        if (((*ppuVar3)[local_18] & 0x800) == 0) {
          FUN_00095b4c(2,"src/zc_util.c",0x46,
                       "Wrong suffix parsing size in bytes for string [%s], ignoring suffix",param_1
                      );
        }
        break;
      case 0x4b:
      case 0x6b:
        lVar4 = local_1c * lVar4;
        break;
      case 0x4d:
      case 0x6d:
        lVar4 = local_1c * local_1c * lVar4;
      }
    }
  }
  return lVar4;
}

