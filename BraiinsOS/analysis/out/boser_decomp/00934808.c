// FUN_00934808 @ 00934808 size=228 calls_out=5 calls_in=1
// strings: 

void FUN_00934808(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x19a) == '\0') {
    FUN_019bb7e0(param_1[0x194],param_1[0x195]);
    FUN_019bb7e0(param_1[0x197],param_1[0x198]);
    return;
  }
  if (*(char *)(param_1 + 0x19a) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xb)) {
  case 0:
    goto switchD_00934718_caseD_0;
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
    goto LAB_0093479c;
  case 4:
    FUN_0084e8d8(param_1 + 0xc);
    break;
  case 5:
    FUN_0084e8d8(param_1 + 0xc);
    break;
  case 6:
    FUN_00933e60(param_1 + 0xc);
  }
  if (*(char *)((int)param_1 + 0x2d) != '\0') {
    FUN_019f8c54(param_1[7],param_1[8]);
  }
LAB_0093479c:
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
switchD_00934718_caseD_0:
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  return;
}

