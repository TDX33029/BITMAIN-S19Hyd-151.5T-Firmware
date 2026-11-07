// FUN_012d2d10 @ 012d2d10 size=672 calls_out=4 calls_in=0
// strings: not an enum | not an enum

int FUN_012d2d10(uint *param_1,undefined4 param_2,int param_3)

{
  int extraout_r1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *local_2c;
  uint **local_28;
  undefined1 *local_24;
  int iStack_20;
  int iStack_1c;
  
  uVar2 = *param_1;
  iVar1 = uVar2 - 4;
  if (uVar2 < 4) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    if (uVar2 != 3) {
LAB_012d2f4c:
      local_28 = &local_2c;
      local_24 = &LAB_012f21b4;
      local_2c = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057b59a,&local_28,&DAT_0188d5f4);
    }
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = (**(code **)(param_3 + 0x6c))(param_2);
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_28,(int)uVar4);
    if ((local_28 == (uint **)0xcbad8436 && iStack_20 == 0x159f85a5) &&
        (local_24 == (undefined1 *)0x62f4778b && iStack_1c == 0x502f3ed4)) {
                    /* WARNING: Could not recover jumptable at 0x012d2f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(uVar2 + 0xc))(uVar3,(int)uVar4);
      return iVar1;
    }
LAB_012d2f40:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  if (iVar1 == 1) {
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = (**(code **)(param_3 + 0x6c))(param_2);
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_28,(int)uVar4);
    if ((local_28 != (uint **)0xcbad8436 || iStack_20 != 0x159f85a5) ||
        (local_24 != (undefined1 *)0x62f4778b || iStack_1c != 0x502f3ed4)) goto LAB_012d2f40;
    uVar4 = (**(code **)(uVar2 + 0xc))(uVar3,(int)uVar4);
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0x10))(&local_28,(int)uVar4);
    if ((char)local_28 != '\t') {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("not an enum",0xb,&DAT_0188d5c4);
    }
  }
  else {
    if (iVar1 != 2) goto LAB_012d2f4c;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = (**(code **)(param_3 + 0x6c))(param_2);
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_28,(int)uVar4);
    if ((local_28 != (uint **)0xcbad8436 || iStack_20 != 0x159f85a5) ||
        (local_24 != (undefined1 *)0x62f4778b || iStack_1c != 0x502f3ed4)) goto LAB_012d2f40;
    (**(code **)(uVar2 + 0xc))(uVar3,(int)uVar4);
    uVar4 = (**(code **)(extraout_r1 + 0xc))();
    if ((int)uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_003b78e5,0xb,&DAT_0188d5d4);
    }
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0x10))(&local_28,(int)uVar4);
    if ((char)local_28 != '\t') {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("not an enum",0xb,&DAT_0188d5e4);
    }
  }
  return (int)local_24;
}

