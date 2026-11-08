// FUN_00ac5bb4 @ 00ac5bb4 size=320 calls_out=1 calls_in=2
// strings: 

void FUN_00ac5bb4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 10) != '\x03') {
    if (*(char *)(param_1 + 10) != '\x04') {
      return;
    }
LAB_00ac5bd0:
    *(undefined1 *)(param_1 + 9) = 0;
    return;
  }
  if (*(char *)(param_1 + 0xb4) != '\x03') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 == 0) {
        bVar1 = *(byte *)(param_1 + 0x18);
        cVar2 = bVar1 - 4;
        if (bVar1 < 4) {
          cVar2 = '\x04';
        }
        iVar3 = 0xc;
        if ((cVar2 != '\x05') && ((cVar2 != '\x04' || (bVar1 != 3)))) goto LAB_00ac5bd0;
      }
      else {
        iVar3 = 4;
        if (iVar4 != 2) goto LAB_00ac5bd0;
      }
      (**(code **)**(undefined4 **)(param_1 + 0x10 + iVar3))();
    }
    goto LAB_00ac5bd0;
  }
  cVar2 = *(char *)(param_1 + 0xac);
  bVar5 = cVar2 == '\x03';
  if (bVar5) {
    cVar2 = *(char *)(param_1 + 0x88);
  }
  if (bVar5 && cVar2 == '\x04') {
    FUN_0163c790(param_1 + 0x8c);
    if (*(int *)(param_1 + 0x90) != 0) {
      (**(code **)(*(int *)(param_1 + 0x90) + 0xc))(*(undefined4 *)(param_1 + 0x94));
    }
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 0x48);
    cVar2 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar2 = '\x04';
    }
    iVar3 = 0xc;
    if ((cVar2 != '\x05') && (cVar2 != '\x04' || bVar1 != 3)) goto LAB_00ac5cbc;
  }
  else {
    iVar3 = 4;
    if (iVar4 != 2) goto LAB_00ac5cbc;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x40 + iVar3))();
LAB_00ac5cbc:
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}

