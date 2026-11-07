// FUN_010ec9a8 @ 010ec9a8 size=284 calls_out=7 calls_in=1
// strings: 

void FUN_010ec9a8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 400) != '\x03') {
    if (*(char *)(param_1 + 400) != '\0') {
      return;
    }
    goto LAB_010ecac8;
  }
  cVar1 = *(char *)(param_1 + 0x91);
  if (cVar1 == '\x03') goto LAB_010ecabc;
  if (cVar1 != '\x05') {
    if (cVar1 == '\x04') {
      cVar1 = *(char *)(param_1 + 0xa4);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x116) == '\x03') {
          FUN_00ba6dc4(param_1 + 0xac);
        }
        FUN_019f8c54(*(undefined4 *)(param_1 + 0xa0),1);
      }
      else {
        bVar2 = cVar1 == '\x03';
        if (bVar2) {
          cVar1 = *(char *)(param_1 + 0xe0);
        }
        if (bVar2 && cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0xdc);
          bVar2 = cVar1 == '\x03';
          if (bVar2) {
            cVar1 = *(char *)(param_1 + 0xb8);
          }
          if (bVar2 && cVar1 == '\x04') {
            FUN_0193c3cc(param_1 + 0xbc);
          }
        }
      }
      goto switchD_010eca38_default;
    }
    goto LAB_010ecac4;
  }
  switch(*(undefined1 *)(param_1 + 0xf0)) {
  case 3:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    break;
  case 4:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    goto LAB_010ecaac;
  case 5:
    FUN_00f2b1bc(param_1 + 0xf8);
    FUN_00b9937c(param_1 + 0x174);
LAB_010ecaac:
    *(undefined1 *)(param_1 + 0xf1) = 0;
    break;
  case 6:
    FUN_00f2b1bc(param_1 + 0xf8);
    FUN_00b9937c(param_1 + 0x174);
  }
switchD_010eca38_default:
  *(undefined1 *)(param_1 + 0x90) = 0;
LAB_010ecabc:
  FUN_01139b38(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
LAB_010ecac4:
  param_1 = param_1 + 0x38;
LAB_010ecac8:
  FUN_00d39234(param_1);
  return;
}

