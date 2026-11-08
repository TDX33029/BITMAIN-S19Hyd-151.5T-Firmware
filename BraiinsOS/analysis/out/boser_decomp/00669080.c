// FUN_00669080 @ 00669080 size=356 calls_out=10 calls_in=2
// strings: 

void FUN_00669080(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    bVar3 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar3) {
      iVar2 = param_1[4];
    }
    if (bVar3 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
switchD_006690b0_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  switch((char)param_1[0x6f]) {
  case '\0':
    FUN_00668de4(param_1 + 2);
    FUN_00668e4c(param_1 + 0x60);
    FUN_00668ecc(param_1 + 0x61);
    FUN_00668f4c(param_1 + 0x2e);
    FUN_005faf6c(param_1 + 0x62);
    return;
  default:
    goto switchD_006690b0_caseD_1;
  case '\x03':
    cVar1 = (char)param_1[0x7e];
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)((int)param_1 + 0x1d5);
    }
    if (bVar3 && cVar1 == '\x04') {
      FUN_019ede44(param_1 + 0x76);
      *(undefined1 *)(param_1 + 0x75) = 0;
    }
    FUN_019ede44(param_1 + 0x8d);
    break;
  case '\x04':
    cVar1 = (char)param_1[0xaa];
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = (char)param_1[0xa6];
    }
    if (bVar3 && cVar1 == '\x03') {
      if (*(char *)((int)param_1 + 0x28d) == '\x03') {
        cVar1 = (char)param_1[0x91];
        bVar3 = cVar1 == '\x03';
        if (bVar3) {
          cVar1 = (char)param_1[0x88];
        }
        if (bVar3 && cVar1 == '\x04') {
          FUN_0193c3cc(param_1 + 0x89);
        }
        FUN_0067e38c(param_1 + 0x72);
        *(undefined1 *)(param_1 + 0xa3) = 0;
      }
      else if (*(char *)((int)param_1 + 0x28d) == '\0') {
        FUN_0067e38c(param_1 + 0x92);
      }
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

