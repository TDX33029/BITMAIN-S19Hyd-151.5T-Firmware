// FUN_00b198bc @ 00b198bc size=152 calls_out=3 calls_in=2
// strings: 

void FUN_00b198bc(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_30 [2];
  undefined8 local_28;
  
  uVar3 = FUN_00b070a4(param_2,&DAT_0056ee18,4);
  cVar2 = '\x02';
  if ((((uVar3 & 1) == 0) && (cVar1 = FUN_00b08c68(param_2), cVar1 != '\x02')) &&
     (uVar4 = FUN_00b070a4(param_2,&DAT_00570f90,8), (uVar4 & 1) == 0)) {
    FUN_00b02b48(local_30,param_2);
    cVar2 = '\x02';
    if ((local_30[0] & 1) == 0) {
      *(int *)(param_1 + 1) = (int)(uVar3 >> 0x20);
      *(int *)((int)param_1 + 0xc) = (int)(uVar4 >> 0x20);
      *param_1 = local_28;
      cVar2 = cVar1;
    }
  }
  *(char *)(param_1 + 2) = cVar2;
  return;
}

