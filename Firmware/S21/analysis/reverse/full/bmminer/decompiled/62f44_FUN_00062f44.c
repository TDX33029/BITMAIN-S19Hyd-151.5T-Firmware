// FUN_00062f44 @ 00062f44  size=880  callers=2
// program: bmminer


undefined4
FUN_00062f44(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  char acStack_80c [2048];
  undefined4 local_c;
  
  local_c = 0;
  switch(param_1) {
  case 0:
    *param_2 = 0x18;
    *param_3 = 0x41;
    *param_4 = 0x45;
    *param_5 = 0x46;
    break;
  case 1:
    *param_2 = 0x10;
    *param_3 = 0x41;
    *param_4 = 0x47;
    *param_5 = 0x48;
    break;
  case 2:
    *param_2 = 8;
    *param_3 = 0x41;
    *param_4 = 0x49;
    *param_5 = 0x4a;
    break;
  case 3:
    *param_2 = 0;
    *param_3 = 0x41;
    *param_4 = 0x4b;
    *param_5 = 0x4c;
    break;
  case 4:
    *param_2 = 0x18;
    *param_3 = 0x42;
    *param_4 = 0x4d;
    *param_5 = 0x4e;
    break;
  case 5:
    *param_2 = 0x10;
    *param_3 = 0x42;
    *param_4 = 0x4f;
    *param_5 = 0x50;
    break;
  case 6:
    *param_2 = 8;
    *param_3 = 0x42;
    *param_4 = 0x51;
    *param_5 = 0x52;
    break;
  case 7:
    *param_2 = 0;
    *param_3 = 0x42;
    *param_4 = 0x53;
    *param_5 = 0x54;
    break;
  case 8:
    *param_2 = 0x18;
    *param_3 = 0x43;
    *param_4 = 0x55;
    *param_5 = 0x56;
    break;
  case 9:
    *param_2 = 0x10;
    *param_3 = 0x43;
    *param_4 = 0x57;
    *param_5 = 0x58;
    break;
  case 10:
    *param_2 = 8;
    *param_3 = 0x43;
    *param_4 = 0x74;
    *param_5 = 0x75;
    break;
  case 0xb:
    *param_2 = 0;
    *param_3 = 0x43;
    *param_4 = 0x76;
    *param_5 = 0x77;
    break;
  case 0xc:
    *param_2 = 0x18;
    *param_3 = 0x44;
    *param_4 = 0x78;
    *param_5 = 0x79;
    break;
  case 0xd:
    *param_2 = 0x10;
    *param_3 = 0x44;
    *param_4 = 0x7a;
    *param_5 = 0x7b;
    break;
  default:
    snprintf(acStack_80c,0x800,"%s: The uart %d is not supported!!!\n","get_send_address_info",
             param_1);
    FUN_0004948c(0,acStack_80c,0);
    local_c = 0xffffffff;
  }
  return local_c;
}

