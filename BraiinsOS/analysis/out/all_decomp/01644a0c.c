// FUN_01644a0c @ 01644a0c size=76 calls_out=3 calls_in=0
// strings: 

void FUN_01644a0c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)*param_1;
  *(int *)*param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  uVar2 = FUN_01638a70();
  uVar3 = FUN_01638824();
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}

