// FUN_017269b0 @ 017269b0 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_017269b0(int *param_1)

{
  int *piVar1;
  
  if (*param_1 == -0x7ffffffe) {
    return;
  }
  if (1 < *(byte *)(param_1 + 6)) {
    piVar1 = (int *)param_1[7];
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    thunk_FUN_01be4678(piVar1);
  }
  (**(code **)(param_1[8] + 0x10))(param_1 + 0xb,param_1[9],param_1[10]);
  (**(code **)(param_1[0xc] + 0x10))(param_1 + 0xf,param_1[0xd],param_1[0xe]);
  FUN_01440d48(param_1);
  return;
}

