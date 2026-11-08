// FUN_00d3a47c @ 00d3a47c size=336 calls_out=8 calls_in=2
// strings: 

void FUN_00d3a47c(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    iVar2 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar2 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x66] != '\x03') {
    if ((char)param_1[0x66] != '\0') {
      return;
    }
    param_1 = param_1 + 2;
    goto LAB_00d3a5d4;
  }
  cVar1 = *(char *)((int)param_1 + 0x99);
  if (cVar1 == '\x03') goto LAB_00d3a5c8;
  if (cVar1 != '\x05') {
    if (cVar1 == '\x04') {
      cVar1 = (char)param_1[0x2b];
      if (cVar1 == '\x04') {
        FUN_00d32e04(param_1 + 0x2c);
        FUN_019f8c54(param_1[0x2a],1);
      }
      else {
        bVar3 = cVar1 == '\x03';
        if (bVar3) {
          cVar1 = (char)param_1[0x3a];
        }
        if (bVar3 && cVar1 == '\x03') {
          cVar1 = (char)param_1[0x39];
          bVar3 = cVar1 == '\x03';
          if (bVar3) {
            cVar1 = (char)param_1[0x30];
          }
          if (bVar3 && cVar1 == '\x04') {
            FUN_0193c3cc(param_1 + 0x31);
          }
        }
      }
      goto switchD_00d3a548_default;
    }
    goto LAB_00d3a5d0;
  }
  switch((char)param_1[0x3e]) {
  case '\x03':
    FUN_01139b38(param_1[0x40],param_1[0x41]);
    break;
  case '\x04':
    FUN_01139b38(param_1[0x40],param_1[0x41]);
    goto LAB_00d3a5b8;
  case '\x05':
    FUN_00d39444(param_1 + 0x40);
    FUN_00d394c4(param_1 + 0x5f);
LAB_00d3a5b8:
    *(undefined1 *)((int)param_1 + 0xf9) = 0;
    break;
  case '\x06':
    FUN_00d39444(param_1 + 0x40);
    FUN_00d394c4(param_1 + 0x5f);
  }
switchD_00d3a548_default:
  *(undefined1 *)(param_1 + 0x26) = 0;
LAB_00d3a5c8:
  FUN_01139b38(param_1[0x1e],param_1[0x1f]);
LAB_00d3a5d0:
  param_1 = param_1 + 0x10;
LAB_00d3a5d4:
  FUN_00d39234(param_1);
  return;
}

