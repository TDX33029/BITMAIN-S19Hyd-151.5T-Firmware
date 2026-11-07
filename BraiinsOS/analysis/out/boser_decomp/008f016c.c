// FUN_008f016c @ 008f016c size=160 calls_out=5 calls_in=2
// strings: 

void FUN_008f016c(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xb)) {
  case 0:
    goto switchD_008f0188_caseD_0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x19) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x18);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x17);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xf);
      }
    }
    goto LAB_008f020c;
  case 4:
    FUN_0084e8d8(param_1 + 0xc);
    break;
  case 5:
    FUN_0084e8d8(param_1 + 0xc);
    break;
  case 6:
    FUN_008ef8d0(param_1 + 0xc);
  }
  if (*(char *)((int)param_1 + 0x2d) != '\0') {
    FUN_019f8c54(param_1[7],param_1[8]);
  }
LAB_008f020c:
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
switchD_008f0188_caseD_0:
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  return;
}

