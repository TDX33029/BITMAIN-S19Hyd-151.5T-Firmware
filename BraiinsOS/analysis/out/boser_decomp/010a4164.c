// FUN_010a4164 @ 010a4164 size=168 calls_out=3 calls_in=0
// strings: 

void FUN_010a4164(uint *param_1)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  iVar2 = -(uVar4 + (uVar3 >= 4));
  iVar1 = 0;
  if ((uint)(uVar3 < 4) <= -uVar4) {
    iVar1 = uVar3 - 3;
  }
  if (iVar1 == 1) {
    FUN_01139b38(param_1[2],param_1[3]);
    iVar2 = extraout_r1_01;
  }
  else if ((iVar1 == 0) &&
          (FUN_01139b38(param_1[0x24],param_1[0x25]), iVar2 = extraout_r1, uVar3 != 3 || uVar4 != 0)
          ) {
    FUN_005fa438(param_1);
    iVar2 = extraout_r1_00;
  }
  if ((9 < (byte)param_1[0x2a]) && (param_1[0x2c] != 0)) {
    thunk_FUN_01be4678(param_1[0x2b],iVar2);
  }
  if (param_1[0x26] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010a4204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x26] + 0x10))(param_1 + 0x29,param_1[0x27],param_1[0x28]);
  return;
}

