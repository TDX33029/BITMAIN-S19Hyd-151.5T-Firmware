// FUN_00fe4444 @ 00fe4444 size=80 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_00fe4444(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)*param_1;
  if (puVar2 == &DAT_80000005) {
    return 2;
  }
  puVar3 = (undefined1 *)0x5;
  if ((int)puVar2 < 0) {
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00fe4470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_00fe4474 + *(int *)(&DAT_00fe4474 + (int)puVar3 * 4)))(param_1,9);
  return uVar1;
}

