// FUN_014ad234 @ 014ad234 size=984 calls_out=12 calls_in=1
// strings: Stray data following JSON

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014ad234(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint *local_88;
  undefined1 *local_84;
  undefined4 *local_80;
  undefined1 *local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined1 local_6c;
  uint local_68;
  undefined1 local_64;
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_34;
  undefined1 local_32;
  uint local_30 [3];
  
  local_7c = (undefined1 *)*param_2;
  uVar8 = param_2[1];
  local_6c = 0x80;
  local_64 = 0;
  local_70 = 0;
  local_74 = 0;
  local_80 = (undefined4 *)0x0;
  local_84 = (undefined1 *)0x1;
  local_88 = (uint *)0x0;
  local_68 = 0;
  local_78 = uVar8;
  if (uVar8 != 0) {
    do {
      uVar7 = (uint)*(byte *)((int)local_7c + local_74);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x22 || uVar7 == 0x5b) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
          if (uVar7 == 0x7b) {
            bVar1 = true;
          }
        }
        local_68 = local_74;
        FUN_014af050(&local_60,&local_88);
        piVar5 = local_5c;
        if ((char)local_60 == '\x06') {
          if (local_78 < local_74) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_74,local_78,&DAT_01cf9744);
          }
          uVar7 = 6;
          local_78 = local_74;
        }
        else {
          local_68 = local_74;
          if ((!bVar1) && (local_74 < local_78)) {
            uVar7 = (uint)*(byte *)((int)local_7c + local_74);
            if (uVar7 < 0x2c) {
              if ((0x19 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x2800013U) == 0))
              goto LAB_014ad5c4;
            }
            else if (uVar7 < 0x5d) {
              if ((uVar7 != 0x2c && uVar7 != 0x3a) && (uVar7 != 0x5b)) {
LAB_014ad5c4:
                uVar7 = local_74 + 1;
                if (local_78 <= local_74 + 1) {
                  uVar7 = local_78;
                }
                uVar9 = FUN_019679bc(local_7c,local_78,uVar7);
                local_30[0] = 0x16;
                piVar5 = (int *)FUN_01966fbc(local_30,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
                FUN_00db4764(&local_60);
                uVar7 = 6;
                goto LAB_014ad414;
              }
            }
            else if ((uVar7 != 0x5d) && (uVar7 != 0x7b && uVar7 != 0x7d)) goto LAB_014ad5c4;
          }
          uVar7 = local_60 & 0xff;
          local_32 = local_60._3_1_;
          local_34 = local_60._1_2_;
          local_48 = local_58;
          uStack_44 = uStack_54;
          uStack_40 = uStack_50;
          uStack_3c = uStack_4c;
        }
LAB_014ad414:
        uVar2 = local_68;
        local_a0 = CONCAT31(CONCAT12(local_32,local_34),(char)uVar7);
        local_98 = local_48;
        uStack_94 = uStack_44;
        uStack_90 = uStack_40;
        uStack_8c = uStack_3c;
        local_9c = piVar5;
        FUN_019bb7e0(local_88,local_84);
        if (uVar7 != 6) {
          if (uVar7 != 7) {
            local_30[0] = uVar2;
            if (uVar8 < uVar2) {
              local_80 = &local_60;
              local_7c = &LAB_01a6a304;
              local_84 = &LAB_01a6a304;
              local_88 = local_30;
              local_60 = uVar8;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_88,&DAT_01d2bbe0);
            }
            FUN_01283ef4(param_2,uVar2);
            iVar4 = param_2[1];
            if (iVar4 != 0) {
              pbVar6 = (byte *)*param_2;
              do {
                if ((0x17 < *pbVar6 - 9) || ((1 << (*pbVar6 - 9 & 0xff) & 0x80001bU) == 0)) {
                  FUN_019a18a8(&local_88,0x15,"Stray data following JSON",0x19);
                  param_1[1] = local_88;
                  param_1[2] = local_84;
                  *(undefined1 *)param_1 = 7;
                  FUN_00e0febc(&local_a0);
                  return;
                }
                pbVar6 = pbVar6 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            *param_1 = local_a0;
            param_1[1] = local_9c;
            param_1[2] = local_98;
            param_1[3] = uStack_94;
            param_1[4] = uStack_90;
            param_1[5] = uStack_8c;
            return;
          }
          goto LAB_014ad2f4;
        }
        if (*piVar5 - 2U < 4) {
          *(undefined1 *)param_1 = 6;
          FUN_006c7e7c(piVar5);
          return;
        }
        FUN_01969520(&local_88);
        param_1[1] = local_88;
        param_1[2] = local_84;
        uVar3 = 7;
        goto LAB_014ad2f8;
      }
      local_74 = local_74 + 1;
    } while (uVar8 != local_74);
    local_68 = uVar8;
  }
  local_a0 = CONCAT13(local_32,CONCAT21(local_34,7));
  FUN_019bb7e0(0,1);
LAB_014ad2f4:
  uVar3 = 6;
LAB_014ad2f8:
  *(undefined1 *)param_1 = uVar3;
  return;
}

