// FUN_01adff58 @ 01adff58 size=348 calls_out=3 calls_in=1
// strings: 

bool FUN_01adff58(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_74 [3];
  int local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50 [3];
  int iStack_44;
  uint uStack_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar4 = *param_1;
  iVar8 = param_1[1];
  iVar11 = param_1[2];
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = iVar11;
  }
  uVar5 = (uint)(iVar4 != 0);
  piVar10 = param_2;
  while (piVar9 = piVar10, piVar9 != param_2 + param_3 * 3) {
    piVar10 = piVar9 + 3;
    if (piVar9[2] == iVar11) {
      local_74[2] = *piVar9;
      local_68 = piVar9[1];
      local_54 = 0;
      if (local_74[2] != 0) {
        local_54 = iVar11;
      }
      local_74[0] = (uint)(local_74[2] != 0);
      local_28 = 0;
      local_2c = 0;
      local_3c = 0;
      local_50[1] = 0;
      local_60 = 0;
      local_74[1] = 0;
      local_64 = local_74[0];
      local_5c = local_74[2];
      local_58 = local_68;
      local_50[0] = uVar5;
      local_50[2] = iVar4;
      iStack_44 = iVar8;
      uStack_40 = uVar5;
      local_38 = iVar4;
      local_34 = iVar8;
      local_30 = iVar1;
      do {
        uVar12 = FUN_01ad608c(local_74);
        iVar6 = (int)((ulonglong)uVar12 >> 0x20);
        iVar3 = (int)uVar12;
        if (iVar3 == 0) goto LAB_01ae00a4;
        uVar12 = FUN_01ad608c(local_50);
        iVar7 = (int)((ulonglong)uVar12 >> 0x20);
        iVar2 = (int)uVar12;
        if (iVar2 == 0) goto LAB_01ae00a4;
      } while (((*(int *)(iVar3 + 8) == *(int *)(iVar2 + 8)) &&
               (iVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar2 + 4)),
               iVar3 == 0)) &&
              (iVar3 = FUN_01adb830(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8),
                                    *(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8)),
              iVar3 != 0));
    }
  }
LAB_01ae00a4:
  return piVar9 != param_2 + param_3 * 3;
}

