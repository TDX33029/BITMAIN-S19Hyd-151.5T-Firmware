// FUN_0154f8fc @ 0154f8fc size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0154f8fc(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  puVar3 = (undefined8 *)piVar1[1];
  *piVar1 = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  uVar4 = FUN_01534cac(iVar2);
  *puVar3 = uVar4;
  return;
}

