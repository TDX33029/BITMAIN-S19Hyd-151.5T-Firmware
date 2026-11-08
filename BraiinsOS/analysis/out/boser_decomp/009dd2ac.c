// FUN_009dd2ac @ 009dd2ac size=136 calls_out=3 calls_in=1
// strings: 

void FUN_009dd2ac(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
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
    uVar2 = param_1[3];
    puVar1 = (undefined4 *)(uVar2 + 4);
    break;
  default:
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  for (uVar3 = param_1[4]; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(param_1[2],uVar2,4,0xc);
  return;
}

