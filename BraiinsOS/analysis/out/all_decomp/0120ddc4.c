// FUN_0120ddc4 @ 0120ddc4 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_0120ddc4(undefined4 *param_1)

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
    FUN_00faa444(&DAT_018ac9c8);
  }
  piVar1 = (int *)(iVar2 + 0x10);
  if (*piVar1 == 0) {
    piVar1 = (int *)0x0;
  }
  uVar4 = FUN_01239010(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),piVar1);
  *puVar3 = uVar4;
  return;
}

