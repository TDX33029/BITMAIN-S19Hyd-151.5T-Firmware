// FUN_010e0e24 @ 010e0e24 size=52 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_010e0e24(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piVar2 = (int *)param_1[1];
  *(undefined1 *)*param_1 = 0;
  FUN_0165a798(&local_18);
  puVar1 = (undefined4 *)*piVar2;
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  puVar1[2] = uStack_10;
  return 1;
}

