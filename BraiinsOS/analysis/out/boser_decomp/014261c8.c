// FUN_014261c8 @ 014261c8 size=976 calls_out=12 calls_in=5
// strings: 

void FUN_014261c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 uStack_a4;
  char local_9c;
  undefined1 local_9b;
  undefined4 *local_94;
  int local_90;
  undefined4 *local_8c;
  undefined4 ***local_88;
  undefined4 ***local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 ***local_78;
  undefined4 ***pppuStack_74;
  undefined4 ***pppuStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 ***local_60;
  undefined4 ***local_5c;
  undefined4 uStack_58;
  undefined4 **local_54;
  undefined4 ***local_50;
  undefined4 ***local_4c;
  undefined4 ***pppuStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 ***local_38;
  undefined4 ***local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar7 = 0;
  local_b0 = 4;
  local_bc = 4;
  uVar6 = param_4 * 0x10;
  bVar9 = 0xffffffe < param_4;
  bVar8 = param_4 == 0xfffffff;
  if (param_4 < 0x10000000) {
    bVar9 = 0x7ffffffb < uVar6;
    bVar8 = uVar6 == 0x7ffffffc;
  }
  local_dc = 0;
  local_e0 = 0;
  local_a8 = local_a8 & 0xffff0000;
  local_ac = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_c8 = 2;
  if (bVar9 && !bVar8) {
LAB_0142621c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,uVar6);
  }
  if (uVar6 == 0) {
    puVar1 = (undefined4 *)&SUB_00000004;
    uVar2 = 0;
  }
  else {
    uVar7 = 4;
    puVar1 = (undefined4 *)FUN_01298504(uVar6,4);
    uVar2 = param_4;
    if (puVar1 == (undefined4 *)0x0) goto LAB_0142621c;
  }
  if (param_4 < 2) {
    uVar6 = 1;
    puVar4 = puVar1;
    if (param_4 == 0) {
      uVar6 = 0;
      goto LAB_014262c8;
    }
  }
  else {
    iVar5 = param_4 - 1;
    puVar3 = puVar1;
    do {
      puVar4 = puVar3 + 4;
      iVar5 = iVar5 + -1;
      *puVar3 = 1;
      puVar3[1] = 0;
      puVar3[2] = 1;
      puVar3[3] = 0;
      puVar3 = puVar4;
    } while (iVar5 != 0);
    uVar6 = param_4;
  }
  *puVar4 = 1;
  puVar4[1] = 0;
  puVar4[2] = 1;
  puVar4[3] = 0;
LAB_014262c8:
  FUN_01417268(&local_9c,param_2,param_3,puVar1,uVar6);
  if (local_9c == '\x01') {
    FUN_014272c8(&local_50,local_9b);
  }
  else {
    if (local_94 != (undefined4 *)0x0) {
      if (local_90 != 0) {
        puVar4 = local_94;
        do {
          local_8c = puVar4;
          FUN_01413248(&local_50,*puVar4,puVar4[1]);
          if (local_50 != (undefined4 ***)0x0) {
            local_54 = &local_8c;
            local_5c = (undefined4 ***)FUN_01422f84;
            local_60 = &local_54;
            FUN_00664898(&local_38,&DAT_0057311d,&local_60);
            local_60 = local_38;
            local_5c = local_34;
            uStack_58 = uStack_30;
            FUN_019ecaa4(&local_38,0x14,&local_60);
            local_50 = local_38;
            local_4c = local_34;
            goto LAB_01426454;
          }
          local_88 = local_4c;
          local_84 = pppuStack_48;
          local_80 = uStack_44;
          uStack_7c = local_40;
          FUN_01ac6204(&local_50,local_8c[2],local_8c[3]);
          if ((char)local_40 == '\x02') {
            local_54 = &local_8c;
            local_5c = (undefined4 ***)FUN_01422f84;
            local_60 = &local_54;
            FUN_00664898(&local_38,&DAT_00599adf,&local_60);
            local_60 = local_38;
            local_5c = local_34;
            uStack_58 = uStack_30;
            FUN_019ecaa4(&local_38,0x14,&local_60);
            *param_1 = 3;
            param_1[1] = 0;
            param_1[2] = local_38;
            param_1[3] = local_34;
            if (local_88 != (undefined4 ***)0x0) {
              (*(code *)local_88[4])(&uStack_7c,local_84,local_80);
            }
            goto LAB_01426470;
          }
          local_78 = local_50;
          pppuStack_74 = local_4c;
          pppuStack_70 = pppuStack_48;
          uStack_6c = uStack_44;
          uStack_68 = local_40;
          local_38 = local_88;
          local_34 = local_84;
          uStack_30 = local_80;
          uStack_2c = uStack_7c;
          FUN_0141d310(&local_50,&local_e0,&local_38,&local_78);
          if ((char)local_40 != '\x02') {
            (*(code *)local_50[4])(&uStack_44,local_4c,pppuStack_48);
          }
          puVar4 = puVar4 + 4;
        } while (puVar4 != local_94 + local_90 * 4);
      }
      *param_1 = local_e0;
      param_1[1] = local_dc;
      param_1[2] = uStack_d8;
      param_1[3] = uStack_d4;
      param_1[4] = uStack_d0;
      param_1[5] = local_cc;
      param_1[6] = local_c8;
      param_1[7] = local_c4;
      param_1[8] = local_c0;
      param_1[9] = local_bc;
      param_1[10] = local_b8;
      param_1[0xb] = local_b4;
      param_1[0xc] = local_b0;
      param_1[0xd] = local_ac;
      param_1[0xe] = local_a8;
      param_1[0xf] = uStack_a4;
      FUN_0134c054(uVar2,puVar1,4,0x10);
      return;
    }
    FUN_019a18a8(&local_50,0x14,&DAT_00477c6e,0xe);
  }
LAB_01426454:
  param_1[2] = local_50;
  *param_1 = 3;
  param_1[1] = 0;
  param_1[3] = local_4c;
LAB_01426470:
  FUN_0134c054(uVar2,puVar1,4,0x10);
  FUN_0142e6dc(&local_e0);
  return;
}

