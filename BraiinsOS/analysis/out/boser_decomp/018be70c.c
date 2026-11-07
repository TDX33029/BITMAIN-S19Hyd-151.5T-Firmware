// FUN_018be70c @ 018be70c size=104 calls_out=1 calls_in=1
// strings: 

void FUN_018be70c(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_018beed0(param_2,1);
  if (((char *)uVar4 == (char *)0x0) || ((int)((ulonglong)uVar4 >> 0x20) != 1)) {
    *(undefined **)(param_1 + 4) = &DAT_0056a2f8;
    *(undefined4 *)(param_1 + 8) = 0x10;
    uVar2 = 0xb;
  }
  else {
    cVar1 = *(char *)uVar4;
    param_1[2] = cVar1;
    cVar3 = cVar1;
    if (cVar1 != '\x01') {
      cVar3 = '\x02';
    }
    if (cVar1 == '\0') {
      cVar3 = cVar1;
    }
    uVar2 = 0x14;
    param_1[1] = cVar3;
  }
  *param_1 = uVar2;
  return;
}

