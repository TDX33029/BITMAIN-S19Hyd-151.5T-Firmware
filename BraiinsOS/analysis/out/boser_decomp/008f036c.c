// FUN_008f036c @ 008f036c size=140 calls_out=5 calls_in=2
// strings: 

void FUN_008f036c(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    goto switchD_008f0388_caseD_0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x16) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x15);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x14);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xc);
      }
    }
    goto LAB_008f03f8;
  case 4:
    FUN_0084e8d8(param_1 + 9);
    break;
  case 5:
    FUN_008ef8d0(param_1 + 10);
  }
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    FUN_019f8c54(param_1[5],param_1[6]);
  }
LAB_008f03f8:
  *(undefined1 *)((int)param_1 + 0x21) = 0;
switchD_008f0388_caseD_0:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

