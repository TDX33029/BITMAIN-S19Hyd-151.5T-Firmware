// FUN_013ab8ec @ 013ab8ec size=132 calls_out=3 calls_in=0
// strings: 

void FUN_013ab8ec(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar3 = 0;
  if ((uint)(uVar1 < 4) <= -uVar2) {
    iVar3 = uVar1 - 3;
  }
  if (iVar3 == 0) {
    if (uVar1 == 3 && uVar2 == 0) {
      FUN_0142e6dc(param_1 + 2);
      FUN_0178e884(param_1[0x12]);
      return;
    }
    FUN_009d5814(param_1,uVar2,0,-(uVar2 + (uVar1 >= 4)));
    return;
  }
  if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x013ab934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  }
  FUN_0142e6dc(param_1 + 2);
  return;
}

