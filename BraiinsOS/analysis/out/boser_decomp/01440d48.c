// FUN_01440d48 @ 01440d48 size=80 calls_out=1 calls_in=7
// strings: 

void FUN_01440d48(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = 2;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  if (uVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x01440d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  FUN_019bb7e0(uVar1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  return;
}

