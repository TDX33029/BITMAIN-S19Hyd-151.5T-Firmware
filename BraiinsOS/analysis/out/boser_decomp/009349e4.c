// FUN_009349e4 @ 009349e4 size=180 calls_out=5 calls_in=1
// strings: 

void FUN_009349e4(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x196) == '\0') {
    FUN_019bb7e0(param_1[0x193],param_1[0x194]);
    return;
  }
  if (*(char *)(param_1 + 0x196) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    goto switchD_00934918_caseD_0;
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
    goto LAB_00934988;
  case 4:
    FUN_0084e8d8(param_1 + 9);
    break;
  case 5:
    FUN_00933e60(param_1 + 10);
  }
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    FUN_019f8c54(param_1[5],param_1[6]);
  }
LAB_00934988:
  *(undefined1 *)((int)param_1 + 0x21) = 0;
switchD_00934918_caseD_0:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

