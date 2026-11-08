// FUN_000632ec @ 000632ec  size=540  callers=1
// program: bmminer


undefined4 FUN_000632ec(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char acStack_80c [2048];
  undefined4 local_c;
  
  local_c = 0;
  switch(param_1) {
  case 0:
    *param_2 = 0x60;
    *param_3 = 0x61;
    break;
  case 1:
    *param_2 = 0x62;
    *param_3 = 99;
    break;
  case 2:
    *param_2 = 100;
    *param_3 = 0x65;
    break;
  case 3:
    *param_2 = 0x66;
    *param_3 = 0x67;
    break;
  case 4:
    *param_2 = 0x68;
    *param_3 = 0x69;
    break;
  case 5:
    *param_2 = 0x6a;
    *param_3 = 0x6b;
    break;
  case 6:
    *param_2 = 0x6c;
    *param_3 = 0x6d;
    break;
  case 7:
    *param_2 = 0x6e;
    *param_3 = 0x6f;
    break;
  case 8:
    *param_2 = 0x70;
    *param_3 = 0x71;
    break;
  case 9:
    *param_2 = 0x72;
    *param_3 = 0x73;
    break;
  case 10:
    *param_2 = 0x7c;
    *param_3 = 0x7d;
    break;
  case 0xb:
    *param_2 = 0x7e;
    *param_3 = 0x7f;
    break;
  case 0xc:
    *param_2 = 0x80;
    *param_3 = 0x81;
    break;
  case 0xd:
    *param_2 = 0x82;
    *param_3 = 0x83;
    break;
  default:
    snprintf(acStack_80c,0x800,"%s: The uart%d is not supported!!!\n","get_read_address_info",
             param_1);
    FUN_0004948c(0,acStack_80c,0);
    local_c = 0xffffffff;
  }
  return local_c;
}

