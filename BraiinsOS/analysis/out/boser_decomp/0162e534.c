// FUN_0162e534 @ 0162e534 size=1000 calls_out=15 calls_in=1
// strings: Invalid TCA_ROOT_EXT_WARN_MSG | Invalid TCA_ROOT_COUNT | Invalid TCA_ROOT_TIME_DELTA | invalid length

void FUN_0162e534(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  int ****local_98;
  int ****local_94;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  int ****local_84;
  int ****local_80;
  int ****local_7c;
  int ****local_78;
  undefined8 local_70;
  int ****ppppiStack_68;
  int ****local_64;
  int ***local_60;
  int ***pppiStack_5c;
  int ***pppiStack_58;
  int ***pppiStack_54;
  undefined8 local_50;
  int ****ppppiStack_48;
  int ****ppppiStack_44;
  int ***local_40;
  int ***pppiStack_3c;
  int ***pppiStack_38;
  int ***pppiStack_34;
  int ****local_30;
  int ****local_2c;
  int ****local_28;
  
  piVar6 = *(int **)(param_2 + 0xc);
  FUN_0162385c(&local_98);
  if (local_98 == (int ****)&DAT_80000001) goto LAB_0162e914;
  ppppiVar2 = local_98;
  if (local_98 != (int ****)&DAT_80000000) goto LAB_0162e900;
  uVar1 = FUN_01623bc0(local_94,local_90);
  switch(uVar1) {
  case 1:
    local_70 = FUN_01623bf0(local_94,local_90);
    local_8c = (int ****)&DAT_80000000;
    local_64 = (int ****)&local_8c;
    ppppiStack_68 = (int ****)0x0;
    FUN_0162eb3c(&local_60,&local_70);
    if (local_60 == (int ***)0x80000000) {
      local_78 = (int ****)0x0;
      local_7c = (int ****)&SUB_00000004;
      local_80 = (int ****)0x0;
    }
    else {
      ppppiVar2 = (int ****)thunk_FUN_01be5118(0x40);
      if (ppppiVar2 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x40);
      }
      *ppppiVar2 = local_60;
      ppppiVar2[1] = pppiStack_5c;
      ppppiVar2[2] = pppiStack_58;
      ppppiVar2[3] = pppiStack_54;
      local_30 = (int ****)&SUB_00000004;
      local_28 = (int ****)&DAT_00000001;
      ppppiStack_48 = ppppiStack_68;
      ppppiStack_44 = local_64;
      local_2c = ppppiVar2;
      local_50 = local_70;
      while( true ) {
        ppppiVar4 = local_28;
        FUN_0162eb3c(&local_40,&local_50);
        if (local_40 == (int ***)0x80000000) break;
        if (ppppiVar4 == local_30) {
          FUN_006520b4(&local_30,ppppiVar4,1,4,0x10);
          ppppiVar2 = local_2c;
        }
        ppppiVar3 = ppppiVar2 + (int)ppppiVar4 * 4;
        local_28 = (int ****)((int)ppppiVar4 + 1);
        *ppppiVar3 = local_40;
        ppppiVar3[1] = pppiStack_3c;
        ppppiVar3[2] = pppiStack_38;
        ppppiVar3[3] = pppiStack_34;
      }
      local_80 = local_30;
      local_7c = local_2c;
      local_78 = local_28;
    }
    ppppiVar2 = local_8c;
    if (local_8c != (int ****)&DAT_80000000) {
      FUN_0161cfb8(&local_80);
      local_94 = local_88;
      local_90 = local_84;
      goto LAB_0162e900;
    }
    ppppiVar4 = (int ****)&DAT_80000000;
    local_50._4_4_ = local_80;
    ppppiStack_48 = local_7c;
    ppppiStack_44 = local_78;
    break;
  case 2:
    uVar7 = FUN_01623bf0(local_94,local_90);
    if ((int)((ulonglong)uVar7 >> 0x20) == 8) {
      local_50._4_4_ = (int ****)*(undefined4 *)uVar7;
      ppppiStack_48 = (int ****)((undefined4 *)uVar7)[1];
    }
    else {
      FUN_0160f520(&local_50,"invalid length",0xe);
      if ((int ****)local_50 != (int ****)&DAT_80000000) {
        ppppiVar2 = (int ****)local_50;
        local_94 = local_50._4_4_;
        local_90 = ppppiStack_48;
        goto LAB_0162e900;
      }
    }
    ppppiVar4 = (int ****)&DAT_80000001;
    ppppiStack_44 = local_90;
    break;
  case 3:
    uVar7 = FUN_01623bf0(local_94,local_90);
    FUN_0160f300(&local_70,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    ppppiVar2 = ppppiStack_68;
    if ((int ****)local_70 == (int ****)&DAT_80000000) {
      local_30 = (int ****)local_70;
      local_2c = local_70._4_4_;
      local_28 = ppppiStack_68;
      ppppiVar2 = local_90;
    }
    else {
      local_50._0_4_ = (int ****)local_70;
      local_50._4_4_ = local_70._4_4_;
      ppppiStack_48 = ppppiStack_68;
      FUN_016403ac(&local_30,&local_50,"Invalid TCA_ROOT_COUNT",0x16);
    }
    if (local_30 == (int ****)&DAT_80000000) {
      ppppiVar4 = (int ****)0x80000002;
      local_50._4_4_ = local_2c;
      ppppiStack_44 = ppppiVar2;
      goto LAB_0162e7d4;
    }
LAB_0162e7dc:
    ppppiVar2 = local_30;
    local_94 = local_2c;
    local_90 = local_28;
    goto LAB_0162e900;
  case 4:
    uVar7 = FUN_01623bf0(local_94,local_90);
    FUN_0160f178(&local_70,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    ppppiVar2 = ppppiStack_68;
    if ((int ****)local_70 == (int ****)&DAT_80000000) {
      local_30 = (int ****)local_70;
      local_2c = local_70._4_4_;
      local_28 = ppppiStack_68;
      ppppiVar2 = local_90;
    }
    else {
      local_50._0_4_ = (int ****)local_70;
      local_50._4_4_ = local_70._4_4_;
      ppppiStack_48 = ppppiStack_68;
      FUN_016403ac(&local_30,&local_50,"Invalid TCA_ROOT_TIME_DELTA",0x1b);
    }
    if (local_30 != (int ****)&DAT_80000000) goto LAB_0162e7dc;
    ppppiVar4 = (int ****)0x80000003;
    local_50._4_4_ = local_2c;
    ppppiStack_44 = ppppiVar2;
LAB_0162e7d4:
    ppppiStack_48 = local_50._4_4_;
    break;
  case 5:
    uVar7 = FUN_01623bf0(local_94,local_90);
    FUN_0160ef98(&local_50,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    if (((uint)(int ****)local_50 & 1) == 0) {
      local_70 = CONCAT44(local_50._4_4_,(int ****)local_50);
      ppppiStack_68 = ppppiStack_48;
      local_64 = ppppiStack_44;
      ppppiVar4 = (int ****)&DAT_80000004;
      ppppiVar2 = local_50._4_4_;
      local_94 = ppppiStack_48;
      local_90 = ppppiStack_44;
      if (((uint)(int ****)local_50 & 1) == 0) break;
    }
    else {
      puVar5 = (undefined4 *)((uint)&local_50 | 4);
      local_30 = (int ****)*puVar5;
      local_2c = (int ****)puVar5[1];
      local_28 = (int ****)puVar5[2];
      FUN_016403ac((uint)&local_70 | 4,&local_30,"Invalid TCA_ROOT_EXT_WARN_MSG",0x1d);
      ppppiVar2 = local_70._4_4_;
      local_94 = ppppiStack_68;
      local_90 = local_64;
    }
LAB_0162e900:
    if (*piVar6 != -0x80000000) {
      FUN_0134bd64(*piVar6,piVar6[1]);
    }
    *piVar6 = (int)ppppiVar2;
    piVar6[1] = (int)local_94;
    piVar6[2] = (int)local_90;
LAB_0162e914:
    ppppiVar4 = (int ****)&DAT_80000005;
    goto LAB_0162e918;
  default:
    FUN_01623ae4(&local_50,local_94,local_90);
    ppppiVar4 = (int ****)local_50;
    ppppiVar2 = local_50._4_4_;
    local_94 = ppppiStack_48;
    local_90 = ppppiStack_44;
    if ((int ****)local_50 == (int ****)&DAT_80000000) goto LAB_0162e900;
  }
  param_1[1] = local_50._4_4_;
  param_1[2] = ppppiStack_48;
  param_1[3] = ppppiStack_44;
LAB_0162e918:
  *param_1 = ppppiVar4;
  return;
}

