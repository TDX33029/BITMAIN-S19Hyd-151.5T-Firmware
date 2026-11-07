// FUN_01330ab4 @ 01330ab4 size=272 calls_out=5 calls_in=0
// strings: explicit panic

void FUN_01330ab4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar7 = (**(code **)(param_3 + 0x14))(param_2);
  iVar5 = (int)uVar7;
  (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0xc))(&local_30,iVar5);
  if ((local_30 != 0x1724132c || iStack_28 != -0x21b787f6) ||
      (iStack_2c != -0x19f03515 || iStack_24 != 0xbd1edd2)) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("explicit panic",0xe,&DAT_01890748);
  }
  iVar4 = *(int *)(iVar5 + 8);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar4);
  }
  uVar6 = *(undefined4 *)(iVar5 + 4);
  if (iVar4 == 0) {
    iVar5 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar4);
    iVar5 = iVar4;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar4);
    }
  }
  FUN_016dd1aa(iVar1,uVar6,iVar4);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  *(undefined1 *)(param_1 + 3) = 1;
  *param_1 = iVar5;
  param_1[1] = iVar1;
  param_1[2] = iVar4;
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  return;
}

