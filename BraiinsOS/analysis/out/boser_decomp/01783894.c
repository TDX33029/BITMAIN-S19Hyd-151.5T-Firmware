// FUN_01783894 @ 01783894 size=1096 calls_out=11 calls_in=0
// strings: should be valid Url

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01783894(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 auStack_d9 [2];
  undefined2 uStack_d7;
  undefined1 uStack_d5;
  undefined2 *puStack_d4;
  undefined8 *local_d0;
  undefined2 *local_cc;
  char **local_c8;
  undefined8 local_c4;
  undefined8 *local_bc;
  undefined2 *puStack_b8;
  uint local_b4;
  undefined8 local_90;
  char *local_88;
  uint local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_60;
  undefined2 *local_5c;
  undefined8 *local_58;
  undefined2 *puStack_54;
  undefined4 uStack_50;
  undefined2 *local_4c;
  int *piStack_48;
  undefined8 *puStack_44;
  undefined2 *puStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 *puStack_30;
  undefined2 *puStack_2c;
  
  local_90 = FUN_017db990(param_3);
  local_38 = FUN_017db910(param_3);
  uVar5 = FUN_017db950(param_3);
  local_84 = uVar5 & 0xffff;
  local_88 = ":";
  if ((uVar5 & 1) == 0) {
    local_88 = (char *)0x1;
  }
  uVar11 = FUN_017db950(param_3);
  uVar5 = (uint)(uVar11 >> 0x20);
  if ((uVar11 & 1) == 0) {
    local_11c = 1;
    local_118 = 0;
  }
  else {
    uVar7 = uVar5 & 0xffff;
    if ((uVar5 & 0xffff) >> 3 < 0x7d) {
      if (9 < uVar7) {
        iVar8 = 3;
        uVar7 = (uint)((short)(uVar7 >> 2) * 0x147b) >> 0x11;
        uVar10 = uVar5;
        goto LAB_01783990;
      }
      iVar8 = 5;
LAB_017839ec:
      local_118 = 6 - iVar8;
      puVar9 = auStack_d9 + iVar8;
      *puVar9 = (&DAT_00534999)[(uVar5 & 0xf) * 2];
    }
    else {
      uVar7 = (uint)((short)(uVar7 >> 4) * 0x347) >> 0x13;
      uVar10 = uVar5 + uVar7 * -10000;
      uStack_d7 = *(undefined2 *)
                   (&DAT_00534998 + ((uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
      iVar8 = 1;
LAB_01783990:
      uVar5 = uVar7;
      uStack_d5 = (undefined1)
                  *(undefined2 *)
                   (&DAT_00534998 +
                   (uVar10 + ((uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 &
                   0xffff) * 2);
      puStack_d4._0_1_ =
           (undefined1)
           ((ushort)*(undefined2 *)
                     (&DAT_00534998 +
                     (uVar10 + ((uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 &
                     0xffff) * 2) >> 8);
      if (((uVar11 & 0xffff00000000) == 0) || (uVar5 != 0)) goto LAB_017839ec;
      local_118 = 5 - iVar8;
      puVar9 = auStack_d9 + iVar8 + 1;
    }
    iVar8 = FUN_01298504(local_118,1);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,local_118);
    }
    FUN_01bed4e2(iVar8,puVar9,local_118);
    local_11c = iVar8;
  }
  local_c8 = &local_88;
  local_d0 = &local_38;
  local_c4._4_4_ = &local_120;
  auStack_d9[1] = SUB41(&local_90,0);
  uStack_d7 = (undefined2)((uint)&local_90 >> 8);
  uStack_d5 = (undefined1)((uint)&local_90 >> 0x18);
  local_bc = (undefined8 *)&LAB_00632348;
  local_c4._0_4_ = &DAT_0132b6a0;
  local_cc = &DAT_0132b6a0;
  puStack_d4 = &DAT_0132b6a0;
  local_120 = local_118;
  FUN_00664898(&local_60,&DAT_005a0ae6,auStack_d9 + 1);
  FUN_019bb7e0(local_120,local_11c);
  puVar3 = local_5c;
  uVar5 = local_60;
  local_118 = 0;
  local_120 = 0;
  local_110 = 0;
  FUN_01ac814c(auStack_d9 + 1,&local_120,local_5c,local_58);
  if (CONCAT13(uStack_d5,CONCAT21(uStack_d7,auStack_d9[1])) == 2) {
    local_120 = CONCAT31(local_120._1_3_,puStack_d4._0_1_);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("should be valid Url",0x13,&local_120,&DAT_01d1a7b0,&DAT_01d1b69c);
  }
  FUN_01bed4e2(&local_120,auStack_d9 + 1,0x48);
  FUN_019bb7e0(uVar5,puVar3);
  (**(code **)(param_2[1] + 0x14))
            (&local_60,*param_2 + (*(int *)(param_2[1] + 8) - 1U & 0xfffffff8) + 8,&local_120);
  if (local_60 != 3) {
    auStack_d9[1] = (undefined1)local_60;
    uStack_d7 = (undefined2)(local_60 >> 8);
    uStack_d5 = (undefined1)(local_60 >> 0x18);
    puStack_d4 = local_5c;
    local_d0 = local_58;
    local_cc = puStack_54;
    local_c8 = uStack_50;
    local_c4._0_4_ = local_4c;
    local_c4._4_4_ = piStack_48;
    uVar2 = CONCAT44(piStack_48,local_4c);
    local_bc = puStack_44;
    puStack_b8 = puStack_40;
    local_b4 = uStack_3c;
    if (local_60 == 2) {
      FUN_01783e28(auStack_d9 + 1);
    }
    else {
      puVar6 = (undefined4 *)((uint)&local_60 | 4);
      local_88 = (char *)*puVar6;
      local_84 = puVar6[1];
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      local_78 = puVar6[4];
      uStack_74 = puVar6[5];
      uStack_70 = puVar6[6];
      uStack_6c = puVar6[7];
      uStack_68 = puVar6[8];
      if (local_60 != 2) {
        puVar6 = (undefined4 *)((uint)(auStack_d9 + 1) | 4);
        *puVar6 = local_88;
        puVar6[1] = local_84;
        puVar6[2] = uStack_80;
        puVar6[3] = uStack_7c;
        puVar6[4] = local_78;
        puVar6[5] = uStack_74;
        puVar6[6] = uStack_70;
        puVar6[7] = uStack_6c;
        puVar6[8] = uStack_68;
        uVar1 = local_90;
        if ((local_60 & 1) == 0) {
          if ((uStack_3c & 0xff) == 2) {
            uVar4 = 2;
            if ((char)param_2[6] != '\x02') {
              (**(code **)param_2[2])(&local_60,param_2 + 5,param_2[3],param_2[4]);
              uVar2 = local_90;
              goto LAB_01783c44;
            }
            goto LAB_01783c68;
          }
        }
        else {
          uVar2 = CONCAT44(piStack_48,local_4c);
          if ((uStack_3c & 0xff) == 2) {
            uVar4 = 2;
            if ((char)param_2[6] != '\x02') {
              (**(code **)param_2[2])(&local_60,param_2 + 5,param_2[3],param_2[4]);
              uVar2 = local_90;
LAB_01783c44:
              local_90._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
              uVar4 = (undefined1)param_2[6];
              local_38 = CONCAT44(local_5c,local_60);
              puStack_30 = local_58;
              puStack_2c = puStack_54;
              local_90._3_1_ = (undefined1)((ulonglong)uVar2 >> 0x18);
              local_90._0_4_ = CONCAT22(CONCAT11(local_90._3_1_,uStack_50._3_1_),uStack_50._1_2_);
              uVar1 = CONCAT44(local_90._4_4_,(undefined4)local_90);
            }
LAB_01783c68:
            local_bc = puStack_30;
            puStack_b8 = puStack_2c;
            local_90._2_1_ = (undefined1)((ulonglong)uVar1 >> 0x10);
            local_b4 = CONCAT13(local_90._2_1_,(int3)CONCAT31((int3)uVar1,uVar4));
            local_90 = uVar1;
            uVar2 = local_38;
          }
        }
        *param_1 = CONCAT13(uStack_d5,CONCAT21(uStack_d7,auStack_d9[1]));
        param_1[1] = puStack_d4;
        param_1[2] = local_d0;
        param_1[3] = local_cc;
        param_1[4] = local_c8;
        *(undefined8 *)(param_1 + 5) = uVar2;
        param_1[7] = local_bc;
        param_1[8] = puStack_b8;
        param_1[9] = local_b4;
        goto LAB_01783b94;
      }
    }
  }
  uVar2 = CONCAT44(local_c4._4_4_,(undefined2 *)local_c4);
  *param_1 = 2;
LAB_01783b94:
  local_c4 = uVar2;
  FUN_019bb7e0(local_110,local_10c);
  return;
}

