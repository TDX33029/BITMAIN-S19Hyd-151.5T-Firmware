// FUN_00734dd0 @ 00734dd0 size=376 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00734dd0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 ***local_50;
  code **local_4c;
  undefined4 **local_48;
  code *local_44;
  undefined4 ***local_40;
  undefined *local_3c;
  int iStack_38;
  undefined4 ***local_30;
  undefined *local_2c;
  undefined4 **local_28;
  
  local_44 = FUN_00734dd0;
  local_2c = (undefined *)0x4;
  local_28 = (undefined4 **)0x0;
  local_30 = (undefined4 ***)0x0;
  uVar4 = FUN_0073256c();
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  local_3c = &DAT_01c07944;
  local_4c = &local_44;
  local_40 = &local_50;
  local_50 = &local_30;
  FUN_01bdf9c8(FUN_0072305c,&local_40);
  if ((uVar2 & 0xff) != 2) {
    FUN_00732994();
    FUN_012e8f40((int)uVar4,uVar2);
  }
  if ((local_28 < local_30) &&
     (iVar1 = FUN_01609230(&local_30,local_28,4,0x1c), iVar1 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  local_50 = local_30;
  local_4c = (code **)local_2c;
  local_48 = local_28;
  if (local_28 != (undefined4 **)0x0) {
    piVar3 = (int *)((int)local_2c + 0x10);
    iVar1 = (int)local_28 * 0x1c;
    do {
      if (*piVar3 == -0x80000000) {
        local_28 = (undefined4 **)0x0;
        local_2c = (undefined *)0x4;
        local_30 = (undefined4 ***)0x0;
        uVar4 = FUN_0073256c();
        local_40 = &local_30;
        FUN_007258d4(piVar3[-4],piVar3[-3],&local_40);
        FUN_0071ae08((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
        local_40 = local_30;
        local_3c = local_2c;
        iStack_38 = (int)local_28;
        *piVar3 = (int)local_30;
        piVar3[1] = (int)local_2c;
        piVar3[2] = (int)local_28;
      }
      piVar3 = piVar3 + 7;
      iVar1 = iVar1 + -0x1c;
    } while (iVar1 != 0);
  }
  *param_1 = (uint)local_50;
  param_1[1] = (uint)local_4c;
  param_1[2] = (uint)local_48;
  return;
}

