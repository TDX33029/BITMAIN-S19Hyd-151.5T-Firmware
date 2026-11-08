// FUN_00dafdd8 @ 00dafdd8 size=1336 calls_out=22 calls_in=0
// strings: idlast_updatedlast_ticknext_tickran | label | offset

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dafdd8(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint local_d4;
  uint local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  uint *local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_34;
  uint local_2c;
  uint **local_28;
  
LAB_00dafe1c:
  do {
    (**(code **)(param_2[0x1d] + 0xc))(&local_80,param_2[0x1c],param_3);
    uVar7 = local_7c;
    if ((char)local_80 == '\x02') {
      if ((*param_2 == 2 && param_2[1] == 0) ||
         (FUN_00709104(&local_98,param_2,*param_3), local_98 == 0)) {
        *param_1 = 6;
        param_1[1] = 0;
        return;
      }
      local_78 = local_98;
      local_74 = local_94;
      local_70 = local_90;
      local_6c = local_8c;
      goto LAB_00db0238;
    }
    if ((local_80 & 1) != 0) {
      local_7c = local_78;
      local_34 = 0;
      local_80 = uVar7;
      FUN_0101f274(param_2 + 0x1c,&local_80);
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    FUN_019606b4(local_7c + 0x88);
    uVar9 = *(uint *)(uVar7 + 0xa8);
    DataMemoryBarrier(0xb);
    uVar1 = *(undefined2 *)(uVar7 + 0x94);
    FUN_00b92330();
    local_7c = uVar9 & 0xfffffffe;
    uVar10 = 0;
    local_34 = 0;
    local_80 = uVar7;
    FUN_0101f274(param_2 + 0x1c,&local_80);
    lVar11 = FUN_01297c64(uVar1);
    uVar7 = (uint)((ulonglong)lVar11 >> 0x20);
    uVar5 = (undefined4)lVar11;
    if (lVar11 < 0) {
LAB_00db030c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,local_d4);
    }
    uVar10 = 1;
    if (uVar7 == 0) {
      FUN_01bed4e2(1,uVar5,0);
      uVar9 = 0;
      local_d4 = 1;
      local_94 = 1;
      local_90 = 0;
      local_98 = 0;
    }
    else {
      local_d4 = FUN_01298504(uVar7,1);
      if (local_d4 == 0) {
        local_d4 = uVar7;
        goto LAB_00db030c;
      }
      FUN_01bed4e2(local_d4,uVar5,uVar7);
      local_90 = 0;
      local_94 = 1;
      local_98 = 0;
      FUN_0132b898(&local_98,0,uVar7,1,1);
      uVar9 = uVar7;
    }
    uVar4 = local_90;
    uVar3 = local_94;
    uVar2 = local_98;
    FUN_01bed4e2(local_94 + local_90,uVar5,uVar7);
    FUN_014bf31c(&local_98,uVar1);
    local_c8 = 0;
    local_cc = 1;
    local_d0 = 0;
    iVar6 = FUN_014bed7c(local_98,local_94,local_90,&local_d0,&DAT_01c0c458);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_2c,&DAT_01c0c470,&DAT_01d30334);
    }
    local_68 = local_d0;
    local_64 = local_cc;
    local_60 = local_c8;
    local_7c = local_d4;
    local_80 = uVar9;
    local_78 = uVar7;
    local_74 = uVar2;
    local_70 = uVar3;
    local_6c = uVar4 + uVar7;
    iVar6 = thunk_FUN_01be5118(0x80);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x80);
    }
    local_c8 = 0;
    local_d0 = 0x80;
    local_cc = iVar6;
    local_9c = &local_d0;
    FUN_01ac6cbc(&local_d0,"{",1);
    local_28 = &local_9c;
    local_2c = 0x100;
    iVar6 = FUN_006e6e30(&local_2c,"idlast_updatedlast_ticknext_tickran",2,local_d4,uVar7);
    if (iVar6 != 0) {
LAB_00db00a4:
      FUN_019bb7e0(local_d0,local_cc);
      local_a4 = iVar6;
LAB_00db00b0:
      local_a8 = 0x80000000;
      FUN_00e7a800(&local_a8);
      local_bc = 0;
      FUN_00949bc0(&local_80);
      goto LAB_00dafe1c;
    }
    if ((char)local_2c != '\0') {
LAB_00db005c:
      local_98 = 10;
      iVar6 = FUN_01966fbc(&local_98,0,0);
      goto LAB_00db00a4;
    }
    iVar6 = FUN_006e6e30(&local_2c,"label",5,uVar3,uVar4 + uVar7);
    if (iVar6 != 0) goto LAB_00db00a4;
    if ((char)local_2c != '\0') goto LAB_00db005c;
    iVar6 = FUN_006e6e30(&local_2c,"offset",6,local_64,local_60);
    if (iVar6 != 0) goto LAB_00db00a4;
    if (((local_2c & 0xff00) != 0) && ((local_2c & 1) == 0)) {
      FUN_01ac6cbc(*local_28,"}",1);
    }
    local_a4 = local_cc;
    if (local_d0 == 0x80000000) goto LAB_00db00b0;
    local_a0 = local_c8;
    local_88 = local_88 & 0xffffff00;
    local_90 = 0;
    local_94 = 0;
    local_8c = 1;
    local_98 = 1;
    FUN_00ea99c0(&local_bc,&local_98,&local_d0);
    uVar7 = local_bc;
    FUN_00949bc0(&local_80);
    if (uVar7 != 0) {
      puVar8 = (undefined4 *)((uint)&local_d0 | 4);
      *puVar8 = local_b8;
      puVar8[1] = uStack_b4;
      puVar8[2] = uStack_b0;
      puVar8[3] = uStack_ac;
      local_d0 = uVar7;
      if (*param_2 != 2 || param_2[1] != 0) {
        FUN_00709188(param_2);
      }
      local_98 = local_d0;
      local_94 = local_cc;
      local_90 = local_c8;
      local_8c = uStack_c4;
      local_88 = uStack_c0;
      FUN_00709268(&local_78);
LAB_00db0238:
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_78;
      param_1[3] = local_74;
      param_1[4] = local_70;
      param_1[5] = local_6c;
      param_1[6] = local_68;
      param_1[7] = local_64;
      param_1[8] = local_60;
      param_1[9] = uStack_5c;
      param_1[10] = local_58;
      param_1[0xb] = uStack_54;
      param_1[0xc] = uStack_50;
      param_1[0xd] = uStack_4c;
      param_1[0xe] = uStack_48;
      param_1[0xf] = uStack_44;
      return;
    }
  } while( true );
}

