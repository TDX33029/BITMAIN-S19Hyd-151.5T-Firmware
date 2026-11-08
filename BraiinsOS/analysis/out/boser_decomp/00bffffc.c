// FUN_00bffffc @ 00bffffc size=324 calls_out=4 calls_in=2
// strings: 

void FUN_00bffffc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0xc9) == '\0') goto LAB_00bffe70;
  if (*(char *)(param_1 + 0xc9) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x7d)) {
  case 0:
    goto switchD_00bffedc_caseD_0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar6 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    goto LAB_00bfff88;
  case 4:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar6 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar6 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  }
  *(undefined1 *)(param_1 + 0x7e) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
LAB_00bfff88:
  *(undefined1 *)(param_1 + 0x7f) = 0;
switchD_00bffedc_caseD_0:
  param_1 = param_1 + 0x30;
LAB_00bffe70:
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 < -0x7ffffffe) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  puVar3 = (undefined4 *)(iVar4 + 0x20);
  for (iVar5 = *(int *)(param_1 + 0x28); iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_019bb7e0(*puVar3,puVar3[1]);
    puVar3 = puVar3 + 0xc;
  }
  FUN_0132b958(iVar2,iVar4,8,0x30);
  return;
}

