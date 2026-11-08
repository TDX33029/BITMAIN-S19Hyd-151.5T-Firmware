// FUN_01551b14 @ 01551b14 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_01551b14(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  piVar2 = (int *)*param_1;
  puVar1 = (undefined4 *)*piVar2;
  puVar4 = (undefined8 *)piVar2[2];
  *piVar2 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  piVar3 = (int *)0x0;
  if (*(int *)piVar2[1] != 0) {
    piVar3 = (int *)piVar2[1];
  }
  uVar5 = FUN_01534b44(*puVar1,puVar1[1],piVar3);
  *puVar4 = uVar5;
  return;
}

