// FUN_016cb9b4 @ 016cb9b4 size=556 calls_out=3 calls_in=2
// strings: 

void FUN_016cb9b4(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int local_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int local_4c;
  undefined1 *local_48;
  undefined1 local_44;
  
  iVar7 = *param_7;
  if (iVar7 == 0) {
    *param_1 = -0x7fffffe9;
    return;
  }
  local_48 = (undefined1 *)0x80000017;
  FUN_016c3a1c(&local_48);
  *param_7 = iVar7 + -1;
  if (param_3 == 0) {
LAB_016cbb5c:
    *param_1 = -0x7fffffd6;
    return;
  }
  uVar9 = param_6[2];
  iVar7 = param_6[3];
  bVar5 = false;
  puVar11 = param_2;
  do {
    while( true ) {
      puVar10 = puVar11 + 2;
      uVar6 = *puVar11;
      iVar8 = puVar11[1];
      uVar12 = (**(code **)(iVar8 + 0x18))(uVar6);
      puVar11 = puVar10;
      if (((int)((ulonglong)uVar12 >> 0x20) == iVar7) &&
         (iVar4 = thunk_FUN_016dd50a((int)uVar12,uVar9,iVar7), iVar4 == 0)) break;
      if (puVar10 == param_2 + param_3 * 2) {
        if (!bVar5) goto LAB_016cbb5c;
        goto LAB_016cbb4c;
      }
    }
    local_48 = &DAT_8000001d;
    local_44 = 0x11;
    FUN_016c3b5c(&local_68,param_4,param_5,&local_48);
    iVar3 = local_58;
    iVar2 = local_5c;
    iVar1 = iStack_60;
    iVar4 = iStack_64;
    if (local_68 == -0x7fffffd3) {
      uVar12 = (**(code **)(iVar8 + 0x14))(uVar6);
      if (((int)((ulonglong)uVar12 >> 0x20) == iVar1) &&
         (iVar4 = thunk_FUN_016dd50a((int)uVar12,iVar4,iVar1), iVar4 == 0)) {
        iVar7 = (**(code **)(iVar8 + 0x10))
                          (uVar6,iVar2,iVar3,*param_6,param_6[1],param_6[4],param_6[5]);
        local_88 = -0x7fffffd3;
        if (iVar7 != 0) {
          local_88 = -0x7ffffff1;
        }
        goto LAB_016cbbc4;
      }
      local_88 = -0x7fffffd4;
    }
    else {
      local_7c = local_5c;
      local_74 = local_54;
      iStack_70 = iStack_50;
      local_6c = local_4c;
      local_78 = local_58;
      local_88 = local_68;
      iStack_84 = iStack_64;
      iStack_80 = iStack_60;
      if (local_68 != -0x7fffffd4) {
LAB_016cbbc4:
        *param_1 = local_88;
        param_1[1] = iStack_84;
        param_1[2] = iStack_80;
        param_1[3] = local_7c;
        param_1[4] = local_78;
        param_1[5] = local_74;
        param_1[6] = iStack_70;
        param_1[7] = local_6c;
        return;
      }
    }
    FUN_016c3a1c(&local_88);
    bVar5 = true;
  } while (puVar10 != param_2 + param_3 * 2);
LAB_016cbb4c:
  *param_1 = -0x7fffffd4;
  return;
}

