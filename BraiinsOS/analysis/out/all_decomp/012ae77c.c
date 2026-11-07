// FUN_012ae77c @ 012ae77c size=480 calls_out=4 calls_in=0
// strings: not a message

int FUN_012ae77c(uint *param_1,undefined4 param_2,int param_3)

{
  int extraout_r1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *local_2c;
  uint **local_28;
  undefined1 *local_24;
  int local_20;
  int iStack_1c;
  
  uVar1 = *param_1;
  iVar2 = uVar1 - 4;
  if (uVar1 < 4) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    if (uVar1 != 4) goto LAB_012ae904;
    uVar3 = param_1[1];
    uVar1 = param_1[2];
    uVar4 = (**(code **)(param_3 + 0x6c))(param_2);
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_28,(int)uVar4);
    if ((local_28 == (uint **)0x552db56d && local_20 == -0xc19244c) &&
        (local_24 == (undefined1 *)0xc6ff7c2f && iStack_1c == -0x241235a4)) {
                    /* WARNING: Could not recover jumptable at 0x012ae900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(uVar1 + 0xc))(uVar3,(int)uVar4);
      return iVar2;
    }
  }
  else {
    if (iVar2 != 2) {
LAB_012ae904:
      local_28 = &local_2c;
      local_24 = &LAB_012f21b4;
      local_2c = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057b59a,&local_28,&DAT_0188d654);
    }
    uVar3 = param_1[1];
    uVar1 = param_1[2];
    uVar4 = (**(code **)(param_3 + 0x6c))(param_2);
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_28,(int)uVar4);
    if ((local_28 == (uint **)0x552db56d && local_20 == -0xc19244c) &&
        (local_24 == (undefined1 *)0xc6ff7c2f && iStack_1c == -0x241235a4)) {
      (**(code **)(uVar1 + 0xc))(uVar3,(int)uVar4);
      uVar4 = (**(code **)(extraout_r1 + 0xc))();
      if ((int)uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_003b78e5,0xb,&DAT_0188d634);
      }
      (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0x10))(&local_28,(int)uVar4);
      if (((uint)local_28 & 0xff) != 10) {
                    /* WARNING: Subroutine does not return */
        FUN_015be724("not a message",0xd,&DAT_0188d644);
      }
      return (int)local_24;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01890610);
}

