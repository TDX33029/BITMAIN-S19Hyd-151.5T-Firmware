// FUN_012654c8 @ 012654c8 size=96 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_012654c8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  *(undefined1 *)*param_1 = 0;
  FUN_014b5e64(&local_30);
  puVar2 = (undefined4 *)param_1[1];
  piVar1 = (int *)*puVar2;
  if (*piVar1 != -0x80000000) {
    FUN_019bb7e0(*piVar1,piVar1[1]);
    FUN_019bb7e0(piVar1[3],piVar1[4]);
    piVar1 = (int *)*puVar2;
  }
  *piVar1 = local_30;
  piVar1[1] = iStack_2c;
  piVar1[2] = iStack_28;
  piVar1[3] = iStack_24;
  piVar1[4] = iStack_20;
  piVar1[5] = iStack_1c;
  return 1;
}

