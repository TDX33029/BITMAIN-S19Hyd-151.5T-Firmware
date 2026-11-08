// FUN_009f6410 @ 009f6410 size=372 calls_out=1 calls_in=0
// strings: 

char FUN_009f6410(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(char *)(param_1 + 0x9d) == '\0') {
LAB_009f6530:
      uVar7 = thunk_FUN_016de0ee(0,0x80);
      iVar2 = (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20);
      if (*(int *)(iVar2 + 8) == 0) {
        *(undefined1 *)(iVar2 + 0xc) = 3;
      }
      return '\0';
    }
LAB_009f64ec:
    if (*(char *)(param_1 + 0x98) == '\0') {
      return '\x02';
    }
    uVar7 = thunk_FUN_016de0ee(2,0x80);
    iVar2 = (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20);
    if (*(int *)(iVar2 + 8) == 0) {
      cVar3 = *(char *)(iVar2 + 0xc);
      *(undefined1 *)(iVar2 + 0xc) = 3;
      if (cVar3 != '\x03') {
        return cVar3;
      }
    }
    return '\x02';
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  puVar4 = puVar6 + *(int *)(param_1 + 8) * 2;
  cVar3 = '\0';
  do {
    cVar1 = (**(code **)(puVar6[1] + 0x14))(*puVar6,param_2);
    cVar5 = cVar1;
    if (((cVar3 != '\x01' || cVar1 != '\x02') && (cVar5 = cVar3, cVar3 == '\0')) && (cVar1 != '\0'))
    {
      cVar5 = cVar1;
    }
    puVar6 = puVar6 + 2;
    cVar3 = cVar5;
  } while (puVar6 != puVar4);
  if (*(char *)(param_1 + 0x9d) != '\0') goto LAB_009f64ec;
  if (cVar5 == '\0') goto LAB_009f6530;
  if (*(char *)(param_1 + 0x98) != '\0') {
    uVar7 = thunk_FUN_016de0ee(*(char *)(param_1 + 0x98),0x80);
    iVar2 = (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20);
    if (*(int *)(iVar2 + 8) == 0) {
      cVar3 = *(char *)(iVar2 + 0xc);
      *(undefined1 *)(iVar2 + 0xc) = 3;
      if (cVar3 == '\x03') {
        cVar3 = '\x02';
      }
      goto joined_r0x009f64cc;
    }
  }
  cVar3 = '\x02';
joined_r0x009f64cc:
  if (cVar5 == '\x01') {
    return '\x01';
  }
  if (cVar3 == '\0') {
    return *(char *)(param_1 + 0x9e);
  }
  return cVar3;
}

