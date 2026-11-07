// FUN_00b15fac @ 00b15fac size=428 calls_out=8 calls_in=1
// strings: 

void FUN_00b15fac(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)((int)param_1 + 0x436)) {
  case 3:
    if ((char)param_1[0x14c] != '\x03') {
      return;
    }
    cVar1 = (char)param_1[0x147];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = (char)param_1[0x145];
    }
    if (!bVar4 || cVar1 != '\x03') {
      return;
    }
    if (param_1[0x142] == 0) {
      return;
    }
    FUN_00c81a4c(param_1[0x142],param_1[0x143],1);
    return;
  case 4:
    if (*(char *)((int)param_1 + 0x529) != '\x03') goto LAB_00b16108;
    if (*(char *)((int)param_1 + 0x4ed) == '\x03') {
      cVar1 = (char)param_1[0x135];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)((int)param_1 + 0x4d1);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00accc50(param_1 + 0x119);
      }
    }
    iVar3 = param_1[0x144];
    iVar2 = 0x514;
    goto joined_r0x00b1605c;
  case 5:
    if (*(char *)((int)param_1 + 0x521) != '\x03') goto LAB_00b16108;
    if (*(char *)((int)param_1 + 0x4dd) == '\x03') {
      cVar1 = (char)param_1[0x131];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)((int)param_1 + 0x4c1);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00accc50(param_1 + 0x115);
      }
    }
    iVar3 = param_1[0x142];
    iVar2 = 0x50c;
joined_r0x00b1605c:
    if (iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar2));
    }
    goto LAB_00b16108;
  case 6:
    FUN_00b13014(param_1 + 0x10e);
    break;
  case 7:
    FUN_00b1545c(param_1 + 0x10e);
    break;
  case 8:
    FUN_00b13014(param_1 + 0x10e);
    goto LAB_00b160f4;
  case 9:
    FUN_00b13014(param_1 + 0x10e);
LAB_00b160f4:
    FUN_00ad1570(param_1 + 4);
    break;
  case 10:
    FUN_00b1545c(param_1 + 0x112);
    FUN_00c48cbc(param_1 + 0x10e);
    goto LAB_00b16108;
  default:
    return;
  }
  FUN_00c48cbc(param_1 + 0x107);
LAB_00b16108:
  bVar4 = (char)param_1[0x10d] != '\0';
  iVar2 = 0;
  if (bVar4) {
    iVar2 = *param_1;
  }
  if (bVar4 && iVar2 != 0) {
    FUN_00c48cbc(param_1 + 1);
  }
  *(undefined1 *)(param_1 + 0x10d) = 0;
  FUN_00b16fc8(param_1 + 0x2c);
  *(undefined1 *)((int)param_1 + 0x435) = 0;
  return;
}

