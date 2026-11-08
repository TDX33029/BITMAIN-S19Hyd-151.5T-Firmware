// FUN_00046d24 @ 00046d24  size=428  callers=3
// program: bmminer


uint FUN_00046d24(int param_1)

{
  uint local_80c;
  char acStack_808 [2052];
  
  local_80c = 0;
  switch(param_1) {
  case 0:
    FUN_00045bc4(0x59,&local_80c);
    local_80c = (local_80c & 0x3ffffff) >> 0x10;
    break;
  case 1:
    FUN_00045bc4(0x59,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 2:
    FUN_00045bc4(0x5a,&local_80c);
    local_80c = (local_80c & 0x3ffffff) >> 0x10;
    break;
  case 3:
    FUN_00045bc4(0x5a,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 4:
    FUN_00045bc4(0x5b,&local_80c);
    local_80c = (local_80c & 0x3ffffff) >> 0x10;
    break;
  case 5:
    FUN_00045bc4(0x5b,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 6:
    FUN_00045bc4(0x5c,&local_80c);
    local_80c = (local_80c & 0x3ffffff) >> 0x10;
    break;
  case 7:
    FUN_00045bc4(0x5c,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 8:
    FUN_00045bc4(0x5d,&local_80c);
    local_80c = (local_80c & 0x3ffffff) >> 0x10;
    break;
  case 9:
    FUN_00045bc4(0x5d,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 10:
    FUN_00045bc4(0x5e,&local_80c);
    local_80c = (local_80c & 0x3ffffff) >> 0x10;
    break;
  case 0xb:
    FUN_00045bc4(0x5e,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 0xc:
    FUN_00045bc4(0x5f,&local_80c);
    local_80c = (local_80c & 0x3ffffff) >> 0x10;
    break;
  case 0xd:
    FUN_00045bc4(0x5f,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  default:
    snprintf(acStack_808,0x800,"%s: The uart%d is not supported!!!\n",
             "check_how_many_uart_data_in_fpga",param_1);
    FUN_00032218(0,acStack_808);
    local_80c = 0;
  }
  return local_80c;
}

