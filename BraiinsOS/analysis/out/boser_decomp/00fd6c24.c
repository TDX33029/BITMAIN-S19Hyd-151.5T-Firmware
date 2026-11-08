// FUN_00fd6c24 @ 00fd6c24 size=60 calls_out=3 calls_in=0
// strings: 

void FUN_00fd6c24(byte *param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if (0xd < *param_1) {
    cVar1 = *param_1 - 0xe;
  }
  switch(cVar1) {
  case '\0':
    FUN_0183a528(param_1 + 4);
    return;
  case '\x01':
  case '\x02':
    FUN_00f80320(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  case '\x03':
    FUN_00fbc188();
    return;
  default:
    return;
  }
}

