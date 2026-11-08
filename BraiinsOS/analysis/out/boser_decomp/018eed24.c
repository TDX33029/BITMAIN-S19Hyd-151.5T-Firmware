// FUN_018eed24 @ 018eed24 size=416 calls_out=5 calls_in=0
// strings: 

void FUN_018eed24(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 extraout_r1;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int local_68;
  int local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_018eebbc(&local_48);
  if (local_48 == -0x7fffffd7) {
    uVar1 = (**(code **)(iStack_40 + 0x24))(uStack_44);
    lVar9 = (**(code **)(iStack_40 + 0x1c))(uStack_44);
    iVar3 = (int)((ulonglong)lVar9 >> 0x20);
    if (lVar9 < 0) {
      uVar8 = 0;
LAB_018eed84:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,iVar3);
    }
    if (iVar3 == 0) {
      iVar2 = 1;
      local_68 = 0;
    }
    else {
      uVar8 = 1;
      iVar2 = FUN_01298504(iVar3,1);
      if (iVar2 == 0) goto LAB_018eed84;
      local_68 = iVar3;
    }
    FUN_01bed4e2(iVar2,(int)lVar9,iVar3);
    (**(code **)(iStack_40 + 0xc))(&local_48,uStack_44,param_3,param_4);
    puVar4 = (undefined4 *)((uint)&local_48 | 4);
    uVar8 = *puVar4;
    uVar5 = puVar4[1];
    uVar6 = puVar4[2];
    uVar7 = puVar4[3];
    if (local_48 == -0x7fffffd7) {
      param_1[4] = uVar8;
      param_1[5] = uVar5;
      param_1[6] = uVar6;
      param_1[7] = uVar7;
      *(undefined2 *)((int)param_1 + 0x22) = extraout_r1;
      *(undefined2 *)(param_1 + 8) = uVar1;
      *param_1 = 0;
      param_1[1] = local_68;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
    }
    else {
      param_1[7] = local_34;
      param_1[8] = uStack_30;
      param_1[9] = uStack_2c;
      param_1[3] = uVar8;
      param_1[4] = uVar5;
      param_1[5] = uVar6;
      param_1[6] = uVar7;
      *param_1 = 1;
      param_1[2] = local_48;
      FUN_0134bd64(local_68,iVar2);
    }
  }
  else {
    param_1[5] = local_3c;
    param_1[6] = uStack_38;
    param_1[7] = local_34;
    param_1[8] = uStack_30;
    param_1[9] = uStack_2c;
    param_1[2] = local_48;
    param_1[3] = uStack_44;
    param_1[4] = iStack_40;
    *param_1 = 1;
  }
  return;
}

