// FUN_00d31700 @ 00d31700 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_00d31700(uint *param_1)

{
  if ((*param_1 < 5) && ((1 << (*param_1 & 0xff) & 0x16U) != 0)) {
    return;
  }
  switch((char)param_1[1]) {
  case '\0':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
    return;
  case '\x01':
    FUN_006a41c0(param_1 + 2);
    return;
  default:
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
}

