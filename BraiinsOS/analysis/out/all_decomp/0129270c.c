// FUN_0129270c @ 0129270c size=76 calls_out=2 calls_in=0
// strings: 

void FUN_0129270c(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = *(int **)*param_1;
  *(int *)*param_1 = 0;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  puVar2 = (undefined4 *)*piVar1;
  FUN_01292dc4(&local_30);
  *puVar2 = local_30;
  puVar2[1] = uStack_2c;
  puVar2[2] = uStack_28;
  puVar2[3] = uStack_24;
  puVar2[4] = uStack_20;
  puVar2[5] = uStack_1c;
  return;
}

