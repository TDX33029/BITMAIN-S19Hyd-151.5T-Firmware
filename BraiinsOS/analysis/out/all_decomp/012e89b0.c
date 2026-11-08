// FUN_012e89b0 @ 012e89b0 size=196 calls_out=2 calls_in=0
// strings: 

void FUN_012e89b0(uint *param_1,undefined4 param_2,int param_3)

{
  int extraout_r1;
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (*param_1 < 7) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724(&DAT_003b7917,0x14,&DAT_0188d624);
  }
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar3 >> 0x20) + 0xc))(&local_28,(int)uVar3);
  if ((local_28 != 0x540b9f9e || iStack_20 != 0x414783ab) ||
      (iStack_24 != 0x4b1f519d || iStack_1c != 0x65979800)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  (**(code **)(uVar1 + 0xc))(uVar2,(int)uVar3);
                    /* WARNING: Could not recover jumptable at 0x012e8a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_r1 + 0x10))();
  return;
}

