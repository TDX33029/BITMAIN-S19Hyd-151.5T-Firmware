// FUN_0190cdf8 @ 0190cdf8 size=104 calls_out=1 calls_in=2
// strings: 

void FUN_0190cdf8(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0192fac8(param_2,1);
  if (((char *)uVar4 == (char *)0x0) || ((int)((ulonglong)uVar4 >> 0x20) != 1)) {
    *(undefined **)(param_1 + 4) = &DAT_00523181;
    *(undefined4 *)(param_1 + 8) = 0xf;
    uVar2 = 0xc;
  }
  else {
    cVar1 = *(char *)uVar4;
    uVar3 = 2;
    param_1[2] = cVar1;
    if (cVar1 == '\x02') {
      uVar3 = 1;
    }
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    uVar2 = 0x18;
    param_1[1] = uVar3;
  }
  *param_1 = uVar2;
  return;
}

