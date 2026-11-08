// FUN_017542a0 @ 017542a0 size=104 calls_out=3 calls_in=1
// strings: 

void FUN_017542a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (((short)piVar1[0x12] == 3) && (piVar1[0x13] != 0)) {
    (**(code **)(piVar1[0x13] + 0x10))(piVar1 + 0x16,piVar1[0x14],piVar1[0x15]);
  }
  if (piVar1[0x17] != 0) {
    FUN_01443048(piVar1[0x17],piVar1[0x18]);
  }
  if (*piVar1 != 2) {
    FUN_019bb7e0(piVar1[4],piVar1[5]);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

