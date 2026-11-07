// FUN_0084f104 @ 0084f104 size=140 calls_out=6 calls_in=1
// strings: 

void FUN_0084f104(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 10)) {
  case 0:
    goto switchD_0084f120_caseD_0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x18) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x17);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x16);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xe);
      }
    }
    goto switchD_0084f120_caseD_0;
  case 4:
    FUN_0084e8d8(param_1 + 0xb);
    break;
  case 5:
    FUN_0088632c(param_1 + 0xc);
    if (param_1[7] == -0x80000000) {
      FUN_0084f1f4();
    }
  }
  FUN_019f8c54(param_1[4],param_1[5]);
switchD_0084f120_caseD_0:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

