// FUN_016e9510 @ 016e9510 size=1764 calls_out=23 calls_in=0
// strings: Scriptcfsclc

void FUN_016e9510(uint *param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 local_c4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined8 local_6c;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar10 = *param_2;
  bVar1 = *(byte *)(iVar10 + 0x14);
  if ((bVar1 != 2) && ((bVar1 & 1) == 0)) {
    FUN_016e9480(param_1,param_2[1],param_2[2],param_3 + 7,0);
    return;
  }
  uVar5 = 2;
  if ((int)*param_3 < 0) {
    uVar5 = *param_3 ^ 0x80000000;
  }
  if (uVar5 == 0) {
    local_50 = param_3[1];
    if (local_50 < 0x80) {
      local_50 = local_50 & 0xff;
      uVar7 = 1;
    }
    else {
      uVar3 = (undefined1)local_50;
      uVar2 = (undefined1)(local_50 >> 6);
      if (local_50 < 0x800) {
        local_50 = (CONCAT11(uVar3,uVar2) & 0x3fff | 0x8000) | 0xc0;
        uVar7 = 2;
      }
      else {
        bVar1 = (byte)(local_50 >> 0xc);
        if (local_50 >> 0x10 == 0) {
          bVar4 = bVar1 | 0xe0;
          local_50._1_3_ = (CONCAT11(uVar3,uVar2) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
          uVar7 = 3;
        }
        else {
          bVar4 = (byte)(local_50 >> 0x12) | 0xf0;
          uVar7 = 4;
          local_50._1_3_ = CONCAT21(CONCAT11(uVar3,uVar2),bVar1) & 0x3f3f3f | 0x808080;
        }
        local_50 = CONCAT31(local_50._1_3_,bVar4);
      }
    }
    iVar6 = FUN_01298504(uVar7,1);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar7);
    }
    FUN_01bed4e2(iVar6,&local_50,uVar7);
    FUN_016f3ff8(&local_78,iVar6,uVar7);
    FUN_0134bd64(uVar7,iVar6);
  }
  else {
    if (uVar5 != 1) {
      uVar5 = param_3[4];
      uVar8 = param_3[5];
      FUN_016f413c(&local_3c,param_3[1],param_3[2]);
      FUN_016f413c(&local_30,uVar5,uVar8);
      FUN_016f4428(&local_50,local_38,local_34);
      uVar8 = local_48;
      uVar5 = local_4c;
      if ((char)local_50 == '\x01') {
LAB_016e9628:
        uVar9 = local_50 >> 8 & 0xff;
      }
      else if (local_4c == 0) {
        uVar9 = 0;
      }
      else if (local_48 == 6) {
        iVar6 = thunk_FUN_01bed842(local_4c,"Scriptcfsclc",6);
        local_c4 = local_2c;
        if (iVar6 != 0) goto LAB_016e9934;
        FUN_016f46a0(&local_50,local_2c,local_28);
        uVar5 = local_50 & 0xff;
        if (uVar5 == 1) goto LAB_016e9628;
        if (local_4c != 0) {
          uVar9 = 2;
          uVar7 = extraout_r1_00;
          goto LAB_016e9c38;
        }
        uVar9 = 1;
      }
      else {
        if ((local_48 == 0x10) &&
           (iVar6 = thunk_FUN_01bed842(local_4c,&DAT_00568078,0x10), local_c4 = local_2c, iVar6 == 0
           )) {
          FUN_016f4728(&local_50,local_2c,local_28);
          uVar5 = local_50 & 0xff;
          if (uVar5 == 1) goto LAB_016e9628;
          uVar9 = 1;
          if (local_4c == 0) goto LAB_016e96f8;
          uVar7 = extraout_r1;
LAB_016e9c38:
          uVar11 = CONCAT44(uVar7,uVar5);
          uVar5 = local_4c;
          uVar8 = local_48;
LAB_016e9c3c:
          local_78 = uVar9;
          local_74 = uVar5;
          local_70 = uVar8;
          local_6c = uVar11;
          FUN_0134bd64(local_30,local_c4);
          FUN_0134bd64(local_3c,local_38);
          goto LAB_016e977c;
        }
LAB_016e9934:
        FUN_016f4508(&local_50,uVar5,uVar8);
        if ((char)local_50 == '\x01') goto LAB_016e9628;
        uVar9 = 1;
        if (local_4c != 0) {
          local_c4 = local_2c;
          uVar11 = FUN_016f45e4(local_4c,local_48,local_2c,local_28);
          if ((int)uVar11 != 0) {
            uVar9 = 3;
            goto LAB_016e9c3c;
          }
        }
      }
LAB_016e96f8:
      FUN_0134bd64(local_30,local_2c);
      FUN_0134bd64(local_3c,local_38);
      goto LAB_016e9a2c;
    }
    FUN_016f3ff8(&local_78,param_3[2],param_3[3]);
  }
LAB_016e977c:
  if (local_78 != 4) {
                    /* WARNING: Could not recover jumptable at 0x016e97ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_016e97b0 + *(int *)(&DAT_016e97b0 + local_78 * 4)))
              (*(int *)(&DAT_016e97b0 + local_78 * 4),&DAT_016e97b0,(undefined4)local_6c);
    return;
  }
  uVar9 = local_74 & 0xff;
LAB_016e9a2c:
  FUN_016e9480(&local_b0,param_2[1],param_2[2],param_3 + 7,uVar9 + 3);
  if (local_b0 == 0x80000000) {
    FUN_016ea708(&local_78,iVar10,(char)param_3[0xd],(uint)&local_b0 | 4);
    if (local_78 != 0x80000000) {
      param_1[1] = local_74;
      param_1[2] = local_70;
      *(undefined8 *)(param_1 + 3) = local_6c;
      param_1[5] = local_64;
      param_1[6] = uStack_60;
      param_1[7] = uStack_5c;
      param_1[8] = uStack_58;
      param_1[9] = uStack_54;
      *param_1 = local_78;
      FUN_016eae34(&local_b0);
      return;
    }
  }
  *param_1 = local_b0;
  param_1[1] = uStack_ac;
  param_1[2] = uStack_a8;
  param_1[3] = uStack_a4;
  param_1[4] = uStack_a0;
  param_1[5] = local_9c;
  param_1[6] = uStack_98;
  param_1[7] = uStack_94;
  param_1[8] = uStack_90;
  param_1[9] = uStack_8c;
  return;
}

