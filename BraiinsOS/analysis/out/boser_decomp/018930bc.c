// FUN_018930bc @ 018930bc size=244 calls_out=5 calls_in=1
// strings: InconsistentComponents

void FUN_018930bc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar7 = *param_2;
  local_30 = param_2[2];
  uStack_2c = param_2[3];
  uStack_28 = param_2[4];
  uVar9 = FUN_01895d9c(param_3,param_4,uVar7,param_2[1]);
  iVar1 = (int)uVar9;
  if (iVar1 != 0) {
    iVar2 = FUN_01bd4fd4(iVar1);
    if (iVar2 == 0) {
      uVar8 = param_2[5];
      uVar3 = param_2[6];
      FUN_01bda5e0(uVar8,uVar8,uVar8,uVar7,&local_30,uVar3);
      uVar7 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      *param_1 = *param_2;
      param_1[1] = uVar7;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      param_1[4] = uVar6;
      param_1[5] = uVar8;
      param_1[6] = uVar3;
      *(undefined8 *)(param_1 + 7) = uVar9;
      return;
    }
    if ((int)((ulonglong)uVar9 >> 0x20) != 0) {
      thunk_FUN_01be4678(iVar1);
    }
  }
  *param_1 = 0;
  param_1[1] = "InconsistentComponents";
  param_1[2] = 0x16;
  FUN_01899664(param_2);
  return;
}

