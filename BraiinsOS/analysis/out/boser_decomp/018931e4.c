// FUN_018931e4 @ 018931e4 size=352 calls_out=9 calls_in=1
// strings: InconsistentComponents

void FUN_018931e4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34 [3];
  int local_28;
  
  uVar9 = *param_2;
  iVar10 = param_2[1];
  local_40 = param_2[2];
  uStack_3c = param_2[3];
  uStack_38 = param_2[4];
  FUN_0189ba04(local_34,iVar10);
  uVar11 = FUN_0189b9a4(local_34);
  iVar3 = (int)((ulonglong)uVar11 >> 0x20);
  uVar1 = (undefined4)uVar11;
  iVar2 = FUN_01895ca0(param_3,param_4,uVar1,iVar3);
  if (iVar2 == 0) {
    local_34[0] = iVar10;
    local_28 = iVar3;
    if (iVar3 != iVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_28,local_34,0);
    }
    iVar2 = FUN_01bd4ff4(uVar1,uVar9,iVar10);
    if ((iVar2 == -1) && (iVar2 = FUN_01bd4fd4(uVar1,iVar10), iVar3 = iVar10, iVar2 == 0)) {
      uVar7 = param_2[5];
      uVar4 = param_2[6];
      FUN_01bda5e0(uVar7,uVar7,uVar7,uVar9,&local_40,uVar4);
      uVar9 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar8 = param_2[4];
      *param_1 = *param_2;
      param_1[1] = uVar9;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar8;
      param_1[5] = uVar7;
      param_1[6] = uVar4;
      param_1[7] = uVar1;
      param_1[8] = iVar10;
      return;
    }
  }
  if (iVar3 != 0) {
    thunk_FUN_01be4678(uVar1);
  }
  *param_1 = 0;
  param_1[1] = "InconsistentComponents";
  param_1[2] = 0x16;
  FUN_01899664(param_2);
  return;
}

