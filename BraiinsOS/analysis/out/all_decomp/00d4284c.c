// FUN_00d4284c @ 00d4284c size=76 calls_out=1 calls_in=1
// strings: 

void FUN_00d4284c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)*param_2 == 0) {
    *param_1 = 8;
    param_1[1] = 0;
    return;
  }
  cVar1 = FUN_00c7d700((int *)*param_2,*param_3);
  uVar2 = 3;
  *(char *)(param_1 + 2) = cVar1;
  if (cVar1 == '\x04') {
    uVar2 = 7;
  }
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
}

