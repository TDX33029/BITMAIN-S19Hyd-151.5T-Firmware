// FUN_0154e3c8 @ 0154e3c8 size=844 calls_out=14 calls_in=1
// strings: 

undefined4
FUN_0154e3c8(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  int local_9c;
  int local_94;
  int local_90;
  int local_8c;
  int local_84;
  int local_60;
  int local_5c;
  int local_58;
  int *local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int *local_44;
  undefined4 local_40;
  undefined8 local_3c;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  iVar9 = *(int *)(param_2 + 0xc);
  FUN_0153c238(&local_90,iVar9);
  FUN_0154ef30(param_1 + 2,param_2,&local_90,param_5,1);
  uVar7 = 0;
  if (local_84 != iVar9) {
    local_4c = *(int *)(param_2 + 4);
    local_48 = *(undefined4 *)(param_2 + 8);
    local_5c = 4;
    iVar13 = param_1[0x13];
    local_34 = iVar9;
    if (local_4c == 0) {
      local_34 = 0;
    }
    local_54 = (int *)(uint)(local_4c != 0);
    local_58 = 0;
    local_9c = 4;
    local_60 = 0;
    local_40 = 0;
    local_94 = 0;
    local_50 = 0;
    local_44 = local_54;
    local_3c._0_4_ = local_4c;
    local_3c._4_4_ = local_48;
LAB_0154e4ac:
    do {
      uVar14 = FUN_01a41998(&local_54);
      iVar9 = (int)uVar14;
      if (iVar9 == 0) goto LAB_0154e598;
      uVar7 = *(undefined4 *)(iVar9 + 4);
      uVar5 = *(undefined4 *)(iVar9 + 8);
      iVar3 = FUN_01540d6c(&local_90,uVar7,uVar5);
      if (iVar3 == 0) {
        if (iVar13 == 0) {
          FUN_006666fc(&local_30,uVar7,uVar5);
          if (local_94 == local_60) {
            FUN_019abd3c(&local_60);
          }
          local_9c = local_5c;
        }
        else {
          iVar3 = FUN_01577618(param_1 + 0x13,(int)((ulonglong)uVar14 >> 0x20),param_5);
          if (iVar3 != 0) goto LAB_0154e4ac;
          FUN_006666fc(&local_30,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
          if (local_94 == local_60) {
            FUN_019abd3c(&local_60);
            local_9c = local_5c;
          }
        }
        puVar4 = (undefined4 *)(local_9c + local_94 * 0xc);
        local_94 = local_94 + 1;
        *puVar4 = local_30;
        puVar4[1] = uStack_2c;
        puVar4[2] = uStack_28;
        local_58 = local_94;
      }
    } while( true );
  }
LAB_0154e6c4:
  if ((local_8c != 0) && (iVar9 = local_8c * 4 + 4, local_8c + iVar9 != -5)) {
    thunk_FUN_01be4678(local_90 - iVar9);
  }
  return uVar7;
LAB_0154e598:
  if (local_94 == 0) {
    FUN_006a41c0(&local_60);
    uVar7 = 0;
  }
  else {
    piVar6 = (int *)*param_1;
    do {
      iVar9 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_0154e710:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x154e710);
      (*pcVar1)();
    }
    uVar11 = param_1[1];
    if (param_4 == 0) {
      local_54 = (int *)0x0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((uint *)(param_4 + 0xc),param_4);
      }
      piVar10 = *(int **)(param_4 + 0xc);
      do {
        iVar9 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0154e710;
      piVar12 = piVar6 + 2;
      uVar7 = *(undefined4 *)(param_4 + 0x10);
      uVar8 = (*(int **)(param_4 + 4))[1];
      if (uVar11 < uVar8) {
        uVar8 = 0;
      }
      else {
        iVar9 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar12,uVar8);
        if (iVar9 != 0) {
          uVar8 = 0;
        }
        piVar12 = (int *)((int)piVar12 + uVar8);
      }
      local_3c = FUN_016bc0ec(piVar12,uVar11 - uVar8);
      local_48 = 3;
      local_54 = (int *)0x2;
      local_44 = piVar10;
      local_40 = uVar7;
    }
    uVar14 = FUN_01531840(param_3);
    uVar7 = FUN_01595bb8(piVar6,uVar11,&local_54,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                         param_2,&local_60);
  }
  goto LAB_0154e6c4;
}

