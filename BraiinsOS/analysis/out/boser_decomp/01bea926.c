// FUN_01bea926 @ 01bea926 size=64 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01bea926(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
LAB_01bea93c:
    software_interrupt(0);
    uVar1 = FUN_01be3b5a();
    return uVar1;
  }
  if ((*(int *)(param_1 + 4) << 0x1e < 0) || (0x7ff < *(uint *)(param_1 + 8))) {
    if (-1 < *(int *)(param_1 + 4) << 0x1f) goto LAB_01bea93c;
    puVar2 = (undefined4 *)FUN_01be3244();
    *puVar2 = 0x16;
  }
  else {
    puVar2 = (undefined4 *)FUN_01be3244();
    *puVar2 = 0xc;
  }
  return 0xffffffff;
}

