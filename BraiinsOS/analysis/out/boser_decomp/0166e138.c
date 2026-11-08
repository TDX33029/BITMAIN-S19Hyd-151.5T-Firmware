// FUN_0166e138 @ 0166e138 size=1016 calls_out=14 calls_in=3
// strings: 

void FUN_0166e138(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5
                 )

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_0166d9a4(&local_d8,param_2,*param_3,param_3[1]);
  if (local_d8 != 0) {
    local_a0 = local_d8;
    uStack_9c = uStack_d4;
    uStack_98 = uStack_d0;
    uStack_94 = uStack_cc;
    iStack_90 = local_c8;
    uStack_8c = uStack_c4;
    FUN_0166f474(&local_68,param_3,param_4,param_5);
    iVar5 = local_60;
    iVar8 = local_64;
    local_88 = local_5c;
    iStack_84 = (int)local_58;
    iStack_80 = local_58._4_4_;
    iStack_7c = iStack_50;
    local_78 = local_4c;
    iStack_74 = iStack_48;
    iStack_70 = iStack_44;
    iStack_6c = iStack_40;
    if (local_68 != -0x7ffffff6) {
      param_1[0xb] = local_3c;
      param_1[0xc] = iStack_38;
      param_1[0xd] = iStack_34;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = (int)local_58;
      param_1[5] = local_58._4_4_;
      param_1[6] = iStack_50;
      param_1[7] = local_4c;
      param_1[8] = iStack_48;
      param_1[9] = iStack_44;
      param_1[10] = iStack_40;
      goto LAB_0166e2cc;
    }
    piVar3 = (int *)thunk_FUN_01be5118(0x30);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x30);
    }
    *piVar3 = 1;
    piVar3[1] = 1;
    piVar3[2] = iVar8;
    piVar3[3] = iVar5;
    piVar3[4] = local_88;
    piVar3[5] = iStack_84;
    piVar3[6] = iStack_80;
    piVar3[7] = iStack_7c;
    piVar3[8] = local_78;
    piVar3[9] = iStack_74;
    piVar3[10] = iStack_70;
    piVar3[0xb] = iStack_6c;
    uVar10 = FUN_01347f20();
    DataMemoryBarrier(0xb);
    if (DAT_01d51a20 != '\x02') {
      FUN_01347fb0();
    }
    FUN_0165018c(&local_68,0x10,4,1);
    uVar9 = 0;
    local_58 = uVar10;
    if (param_5 < 0) {
LAB_0166e244:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,param_5);
    }
    if (param_5 == 0) {
      iVar5 = 1;
      iVar8 = 0;
    }
    else {
      uVar9 = 1;
      iVar5 = FUN_01298504(param_5,1);
      if (iVar5 == 0) goto LAB_0166e244;
      iVar8 = param_5;
      uVar10 = local_58;
    }
    local_58 = uVar10;
    FUN_01bed4e2(iVar5,param_4,param_5);
    iStack_28 = param_5;
    do {
      iVar6 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar6 + 1;
    local_30 = iVar8;
    iStack_2c = iVar5;
    if (iVar6 < 0) {
LAB_0166e538:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x166e538);
      (*pcVar1)();
    }
    piVar7 = (int *)FUN_0166db9c(&local_68,&local_30,piVar3);
    if (piVar7 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01670d04();
      }
    }
    FUN_0166dec8(&local_a0,&local_68);
LAB_0166e468:
    *param_1 = -0x7ffffff6;
    param_1[1] = (int)piVar3;
    return;
  }
  puVar4 = (undefined4 *)FUN_0166d7ac(local_c8 + -0x18,param_4,param_5);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_0166f474(&local_68,param_3,param_4,param_5);
    local_c0 = local_5c;
    iStack_bc = (int)local_58;
    iStack_b8 = local_58._4_4_;
    iStack_b4 = iStack_50;
    local_b0 = local_4c;
    iStack_ac = iStack_48;
    iStack_a8 = iStack_44;
    iStack_a4 = iStack_40;
    if (local_68 == -0x7ffffff6) {
      piVar3 = (int *)thunk_FUN_01be5118(0x30);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x30);
      }
      iVar5 = 1;
      piVar3[3] = local_60;
      *piVar3 = 1;
      piVar3[1] = 1;
      iVar8 = 0;
      piVar3[2] = local_64;
      piVar3[4] = local_c0;
      piVar3[5] = iStack_bc;
      piVar3[6] = iStack_b8;
      piVar3[7] = iStack_b4;
      piVar3[8] = local_b0;
      piVar3[9] = iStack_ac;
      piVar3[10] = iStack_a8;
      piVar3[0xb] = iStack_a4;
      if (param_5 < 0) {
LAB_0166e39c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(iVar8,param_5);
      }
      if (param_5 != 0) {
        iVar8 = 1;
        iVar5 = FUN_01298504(param_5,1);
        if (iVar5 == 0) goto LAB_0166e39c;
        iVar8 = param_5;
      }
      FUN_01bed4e2(iVar5,param_4,param_5);
      local_60 = param_5;
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + 1;
      local_68 = iVar8;
      local_64 = iVar5;
      if (iVar6 < 0) goto LAB_0166e538;
      piVar7 = (int *)FUN_0166db9c(local_c8 + -0x18,&local_68,piVar3);
      if (piVar7 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01670d04();
        }
      }
      goto LAB_0166e468;
    }
    param_1[0xb] = local_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[1] = local_64;
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = (int)local_58;
    param_1[5] = local_58._4_4_;
    param_1[6] = iStack_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
  }
  else {
    piVar3 = (int *)*puVar4;
    do {
      iVar8 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_0166e538;
    param_1[1] = (int)piVar3;
    local_68 = -0x7ffffff6;
  }
LAB_0166e2cc:
  *param_1 = local_68;
  return;
}

