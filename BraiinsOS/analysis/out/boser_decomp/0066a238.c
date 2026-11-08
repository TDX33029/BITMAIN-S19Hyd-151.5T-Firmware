// FUN_0066a238 @ 0066a238 size=52 calls_out=1 calls_in=3
// strings: 

void FUN_0066a238(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    switch((char)param_1[0x6f]) {
    case '\0':
      FUN_00668de4(param_1 + 2);
      FUN_00668e4c(param_1 + 0x60);
      FUN_00668ecc(param_1 + 0x61);
      FUN_00668f4c(param_1 + 0x2e);
      FUN_005faf6c(param_1 + 0x62);
      return;
    default:
      return;
    case '\x03':
      FUN_0066a190(param_1 + 0x70);
      break;
    case '\x04':
      cVar1 = (char)param_1[0xaa];
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = (char)param_1[0xa6];
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0066a1c0(param_1 + 0x72);
      }
      break;
    case '\x05':
      if ((char)param_1[0x93] == '\x03') {
        FUN_01431b40(param_1 + 0x74);
      }
    }
    FUN_005faf6c(param_1 + 0x65);
    FUN_00668f4c(param_1 + 0x5c);
    FUN_00668ecc(param_1 + 100);
    FUN_00668e4c(param_1 + 99);
    FUN_00668de4(param_1 + 0x30);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0 && param_1[3] == 0) {
    return;
  }
  FUN_00b91e68(param_1[4],param_1[5]);
  return;
}

