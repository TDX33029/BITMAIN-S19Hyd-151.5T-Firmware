// FUN_012b3c0c @ 012b3c0c size=196 calls_out=2 calls_in=0
// strings: 

void FUN_012b3c0c(uint *param_1,undefined4 param_2,int param_3)

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
  if ((local_28 != 0x1659e18 || iStack_20 != -0x32a2bac3) ||
      (iStack_24 != 0x1890e6dc || iStack_1c != 0x30fcc917)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  (**(code **)(uVar1 + 0xc))(uVar2,(int)uVar3);
                    /* WARNING: Could not recover jumptable at 0x012b3ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_r1 + 0x10))();
  return;
}

