// FUN_00ebaa80 @ 00ebaa80 size=204 calls_out=3 calls_in=4
// strings: 

void FUN_00ebaa80(uint *param_1)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  code *pcVar2;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  iVar3 = -(uVar5 + (uVar4 >= 4));
  iVar1 = 0;
  if ((uint)(uVar4 < 4) <= -uVar5) {
    iVar1 = uVar4 - 3;
  }
  if (iVar1 == 1) {
    uVar4 = param_1[2];
    puVar6 = (undefined4 *)param_1[3];
    pcVar2 = (code *)*puVar6;
    iVar3 = 0;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
      iVar3 = extraout_r1_01;
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar4);
      iVar3 = extraout_r1_02;
    }
  }
  else if ((iVar1 == 0) &&
          (FUN_01139b38(param_1[0x24],param_1[0x25]), iVar3 = extraout_r1, uVar4 != 3 || uVar5 != 0)
          ) {
    FUN_00ebabdc(param_1);
    iVar3 = extraout_r1_00;
  }
  if ((9 < (byte)param_1[0x2a]) && (param_1[0x2c] != 0)) {
    thunk_FUN_01be4678(param_1[0x2b],iVar3);
  }
  if (param_1[0x26] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ebab44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x26] + 0x10))(param_1 + 0x29,param_1[0x27],param_1[0x28]);
  return;
}

