// FUN_00063540 @ 00063540  size=556  callers=3
// program: bmminer


uint FUN_00063540(byte param_1)

{
  char acStack_80c [2048];
  uint local_c;
  
  local_c = 0;
  switch(param_1) {
  case 0:
    FUN_00061240(0x59,&local_c);
    local_c = local_c >> 0x10 & 0x3ff;
    break;
  case 1:
    FUN_00061240(0x59,&local_c);
    local_c = local_c & 0x3ff;
    break;
  case 2:
    FUN_00061240(0x5a,&local_c);
    local_c = local_c >> 0x10 & 0x3ff;
    break;
  case 3:
    FUN_00061240(0x5a,&local_c);
    local_c = local_c & 0x3ff;
    break;
  case 4:
    FUN_00061240(0x5b,&local_c);
    local_c = local_c >> 0x10 & 0x3ff;
    break;
  case 5:
    FUN_00061240(0x5b,&local_c);
    local_c = local_c & 0x3ff;
    break;
  case 6:
    FUN_00061240(0x5c,&local_c);
    local_c = local_c >> 0x10 & 0x3ff;
    break;
  case 7:
    FUN_00061240(0x5c,&local_c);
    local_c = local_c & 0x3ff;
    break;
  case 8:
    FUN_00061240(0x5d,&local_c);
    local_c = local_c >> 0x10 & 0x3ff;
    break;
  case 9:
    FUN_00061240(0x5d,&local_c);
    local_c = local_c & 0x3ff;
    break;
  case 10:
    FUN_00061240(0x5e,&local_c);
    local_c = local_c >> 0x10 & 0x3ff;
    break;
  case 0xb:
    FUN_00061240(0x5e,&local_c);
    local_c = local_c & 0x3ff;
    break;
  case 0xc:
    FUN_00061240(0x5f,&local_c);
    local_c = local_c >> 0x10 & 0x3ff;
    break;
  case 0xd:
    FUN_00061240(0x5f,&local_c);
    local_c = local_c & 0x3ff;
    break;
  default:
    snprintf(acStack_80c,0x800,"%s: The uart%d is not supported!!!\n",
             "check_how_many_uart_data_in_fpga",(uint)param_1);
    FUN_0004948c(0,acStack_80c,0);
    local_c = 0;
  }
  return local_c;
}

