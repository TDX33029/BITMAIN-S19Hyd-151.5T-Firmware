// FUN_00659484 @ 00659484 size=156 calls_out=3 calls_in=2
// strings: 

void FUN_00659484(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x44);
  if (cVar1 == '\0') {
    FUN_006472c4(param_1 + 8);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_007ab648(param_1 + 0x48);
    FUN_005c3320(param_1 + 0x48);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      iVar2 = 0x28;
    }
    else {
      iVar2 = 8;
      if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_006594f8;
    }
    FUN_006472c4(param_1 + 0x48 + iVar2);
  }
LAB_006594f8:
  *(undefined1 *)(param_1 + 0x46) = 0;
  if (*(char *)(param_1 + 0x45) != '\0') {
    FUN_005c3320(param_1 + 0x20);
  }
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  return;
}

