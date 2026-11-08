// FUN_00c62444 @ 00c62444 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_00c62444(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 4:
  case 6:
  case 8:
  case 10:
  case 0xc:
    if (*(char *)(param_1 + 0xb4) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa4);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x90);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x38);
        return;
      }
    }
switchD_00c6245c_caseD_5:
    return;
  case 5:
  case 7:
  case 9:
  case 0xb:
    goto switchD_00c6245c_caseD_5;
  default:
    return;
  }
}

