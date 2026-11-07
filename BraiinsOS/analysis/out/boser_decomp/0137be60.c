// FUN_0137be60 @ 0137be60 size=168 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_0137be60(byte *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte unaff_r7;
  
  cVar1 = *param_1 - 6;
  if (*param_1 < 6) {
    cVar1 = '\x06';
  }
  uVar2 = 1;
  switch(cVar1) {
  case '\0':
    bVar3 = 9;
    bVar4 = (byte)param_2 ^ 1;
    if (param_2 != 0) {
      bVar3 = 10;
    }
    unaff_r7 = 0;
    break;
  default:
    goto switchD_0137be8c_caseD_2;
  case '\x03':
    if (param_1[1] != 0) {
      return 1;
    }
    unaff_r7 = param_1[2];
    bVar3 = 9;
    if (param_2 == 0) {
      bVar4 = 1;
    }
    else {
      bVar3 = 10;
      bVar4 = unaff_r7;
    }
    break;
  case '\x05':
    if (param_1[1] != 0) {
      return 1;
    }
  case '\x01':
    bVar3 = 0xb;
    if (param_2 != 0) {
      bVar3 = 3;
    }
    bVar4 = 1;
  }
  FUN_0137ac50(param_1);
  uVar2 = 0xc;
  param_1[2] = unaff_r7;
  param_1[1] = bVar4;
  *param_1 = bVar3;
switchD_0137be8c_caseD_2:
  return uVar2;
}

