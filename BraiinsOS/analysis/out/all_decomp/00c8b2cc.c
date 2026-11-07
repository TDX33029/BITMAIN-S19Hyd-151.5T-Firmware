// FUN_00c8b2cc @ 00c8b2cc size=280 calls_out=1 calls_in=4
// strings: 

void FUN_00c8b2cc(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((char)param_1[0x29] == '\0') {
    if (*param_1 == 0) {
      bVar1 = *(byte *)(param_1 + 2);
      cVar2 = bVar1 - 4;
      if (bVar1 < 4) {
        cVar2 = '\x04';
      }
      iVar4 = 0xc;
      if (cVar2 != '\x05') {
        if (cVar2 != '\x04') {
          return;
        }
        if (bVar1 != 3) {
          return;
        }
      }
    }
    else {
      iVar4 = 4;
      if (*param_1 != 2) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00c8b374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)((int)param_1 + iVar4))();
    return;
  }
  if ((char)param_1[0x29] != '\x03') {
    return;
  }
  cVar2 = (char)param_1[0x27];
  bVar5 = cVar2 == '\x03';
  if (bVar5) {
    cVar2 = (char)param_1[0x1e];
  }
  if (bVar5 && cVar2 == '\x04') {
    FUN_0163c790(param_1 + 0x1f);
    if (param_1[0x20] != 0) {
      (**(code **)(param_1[0x20] + 0xc))(param_1[0x21]);
    }
  }
  iVar4 = param_1[0xc];
  if (iVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 0xe);
    cVar2 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar2 = '\x04';
    }
    iVar3 = 0xc;
    if ((cVar2 != '\x05') && (cVar2 != '\x04' || bVar1 != 3)) goto LAB_00c8b3b4;
  }
  else {
    iVar3 = 4;
    if (iVar4 != 2) goto LAB_00c8b3b4;
  }
  (**(code **)**(undefined4 **)((int)(param_1 + 0xc) + iVar3))();
LAB_00c8b3b4:
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  return;
}

