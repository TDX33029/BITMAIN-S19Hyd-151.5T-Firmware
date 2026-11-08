// FUN_00b1c294 @ 00b1c294 size=124 calls_out=3 calls_in=2
// strings: hashboard

void FUN_00b1c294(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  uint local_30 [2];
  undefined8 local_28;
  
  FUN_00b02b48(local_30);
  cVar2 = '\x05';
  if (((local_30[0] & 1) == 0) && (uVar3 = FUN_00b070a4(param_2,"hashboard",9), (uVar3 & 1) == 0)) {
    cVar1 = FUN_00b0785c(param_2);
    cVar2 = '\x05';
    if (cVar1 != '\x05') {
      *(int *)(param_1 + 1) = (int)(uVar3 >> 0x20);
      *param_1 = local_28;
      cVar2 = cVar1;
    }
  }
  *(char *)((int)param_1 + 0xc) = cVar2;
  return;
}

