// FUN_01aee0f8 @ 01aee0f8 size=344 calls_out=3 calls_in=2
// strings: 

void FUN_01aee0f8(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,int *param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined1 *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48 = (undefined1 *)0x80000017;
  iVar8 = *param_7;
  if (iVar8 == 0) {
    *param_1 = 0x80000017;
  }
  else {
    FUN_01aeb5f4(&local_48);
    uVar3 = *param_6;
    puVar9 = param_2 + param_3 * 2;
    uVar4 = param_6[1];
    uVar11 = param_6[2];
    iVar10 = param_6[3];
    uVar5 = param_6[4];
    uVar6 = param_6[5];
    *param_7 = iVar8 + -1;
    bVar12 = false;
    while (param_2 != puVar9) {
      uVar7 = *param_2;
      iVar8 = param_2[1];
      uVar13 = (**(code **)(iVar8 + 0x18))(uVar7);
      if (((int)((ulonglong)uVar13 >> 0x20) == iVar10) &&
         (iVar1 = thunk_FUN_01bed842((int)uVar13,uVar11,iVar10), iVar1 == 0)) {
        FUN_01aedbe8(&local_48,uVar7,*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14),
                     param_4,param_5,uVar3,uVar4,uVar5,uVar6);
        if ((local_48 == (undefined1 *)0x8000002d) || (local_48 != &DAT_8000002c)) {
          *param_1 = local_48;
          param_1[1] = uStack_44;
          param_1[2] = uStack_40;
          param_1[3] = uStack_3c;
          param_1[4] = local_38;
          param_1[5] = uStack_34;
          param_1[6] = uStack_30;
          param_1[7] = uStack_2c;
          return;
        }
        param_2 = param_2 + 2;
        FUN_01aeb5f4(&local_48);
        bVar12 = true;
      }
      else {
        param_2 = param_2 + 2;
      }
    }
    if (bVar12) {
      puVar2 = &DAT_8000002c;
    }
    else {
      puVar2 = (undefined1 *)0x8000002a;
    }
    *param_1 = puVar2;
  }
  return;
}

