// FUN_0141be60 @ 0141be60 size=452 calls_out=7 calls_in=1
// strings: 

void FUN_0141be60(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [12];
  
  piVar7 = param_1 + 4;
  puVar4 = (undefined4 *)*param_3;
  iVar8 = param_1[10];
  iVar1 = param_1[0xb];
  if (*piVar7 == 3) {
LAB_0141bf0c:
    *piVar7 = 3;
    if (puVar4 == (undefined4 *)0x0) goto LAB_0141bf4c;
    (*(code *)*puVar4)(&local_48,param_3 + 3,param_3[1],param_3[2]);
  }
  else {
    iVar6 = *param_1;
    if ((iVar6 != 0) == (puVar4 == (undefined4 *)0x0)) {
      if (iVar6 != 0) goto LAB_0141bef0;
      goto LAB_0141bf0c;
    }
    if (iVar6 != 0) {
      if ((param_1[2] == param_3[2]) &&
         (iVar5 = thunk_FUN_01bed842(param_1[1],param_3[1]), iVar5 == 0)) goto LAB_0141bfc0;
LAB_0141bef0:
      (**(code **)(iVar6 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
      puVar4 = (undefined4 *)*param_3;
      goto LAB_0141bf0c;
    }
    if ((char)param_1[1] == (char)param_3[1]) goto LAB_0141bfc0;
    *piVar7 = 3;
LAB_0141bf4c:
    local_48 = 0;
    local_44 = CONCAT31(local_44._1_3_,(char)param_3[1]);
  }
  iVar3 = iStack_3c;
  iVar2 = iStack_40;
  iVar5 = local_44;
  iVar6 = local_48;
  FUN_0141df14(auStack_30,iVar8,param_3);
  FUN_0141e854(&local_48,auStack_30);
  *param_1 = iVar6;
  param_1[1] = iVar5;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  param_1[4] = local_48;
  param_1[5] = local_44;
  param_1[6] = iStack_40;
  param_1[7] = iStack_3c;
  param_1[8] = iStack_38;
  param_1[9] = iStack_34;
LAB_0141bfc0:
  iVar8 = FUN_0141e8d8(piVar7);
  if (iVar8 == 0) {
    uVar9 = FUN_00f80570(param_3);
    if ((char)iVar1 != '\0') {
      FUN_0142f0d0(param_2,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      return;
    }
  }
  else {
    uVar9 = *(undefined8 *)(iVar8 + 4);
  }
  FUN_01ac6cbc(param_2,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  return;
}

