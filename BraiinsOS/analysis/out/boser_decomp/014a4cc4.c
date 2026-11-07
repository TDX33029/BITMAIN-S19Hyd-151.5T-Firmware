// FUN_014a4cc4 @ 014a4cc4 size=732 calls_out=13 calls_in=0
// strings: Check command | Exists | Access | BUG: response serialization failedAPI

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014a4cc4(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_80;
  int local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  int iStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = thunk_FUN_01be5118(0xd);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xd);
  }
  FUN_01bed4e2(iVar2,"Check command",0xd);
  puVar3 = (undefined1 *)thunk_FUN_01be5118(2);
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,2);
  }
  puVar3[1] = param_3;
  *puVar3 = param_2;
  puVar4 = (undefined4 *)FUN_01298504(5,1);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,5);
  }
  *(undefined1 *)(puVar4 + 1) = 0x4b;
  *puVar4 = 0x43454843;
  FUN_0196aa8c(&local_48,1);
  if (local_48 == -0x80000000) {
    iVar5 = local_44;
  }
  else {
    iVar7 = 0;
    local_90 = local_48;
    local_8c = local_44;
    local_88 = iStack_40;
    while( true ) {
      iVar5 = local_90;
      if (iVar7 == 2) {
        local_48 = *(int *)((uint)&local_90 | 4);
        local_44 = ((int *)((uint)&local_90 | 4))[1];
        FUN_0132b958(1,puVar3,1,2);
        param_1[0xc] = 0xd;
        param_1[0xe] = 0xd;
        *(undefined1 *)(param_1 + 6) = 4;
        param_1[0xd] = iVar2;
        param_1[1] = 0x48;
        *(undefined1 *)(param_1 + 0xf) = 2;
        param_1[7] = iVar5;
        *param_1 = 0;
        param_1[2] = 5;
        param_1[4] = 5;
        param_1[3] = puVar4;
        param_1[8] = local_48;
        param_1[9] = local_44;
        param_1[10] = iStack_40;
        param_1[0xb] = uStack_3c;
        return;
      }
      uVar1 = (puVar3 + iVar7)[1];
      local_58 = 0x80000000;
      local_5c = 0;
      local_64 = 0;
      local_68 = 0;
      iVar5 = FUN_014a796c(&local_68,"Exists",6,puVar3[iVar7]);
      if ((iVar5 != 0) || (iVar5 = FUN_014a796c(&local_68,"Access",6,uVar1), iVar5 != 0)) break;
      local_48 = local_68;
      local_44 = local_64;
      iStack_40 = iStack_60;
      uStack_3c = local_5c;
      uStack_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      FUN_0196ac88(&local_80);
      iVar5 = local_88;
      if ((char)local_80 == '\x06') {
        iVar5 = local_7c;
        goto LAB_014a4f78;
      }
      if (local_88 == local_90) {
        FUN_01969b6c(&local_90);
      }
      iVar7 = iVar7 + 2;
      puVar6 = (undefined4 *)(local_8c + iVar5 * 0x18);
      *puVar6 = local_80;
      puVar6[1] = local_7c;
      puVar6[2] = uStack_78;
      puVar6[3] = uStack_74;
      puVar6[4] = uStack_70;
      puVar6[5] = uStack_6c;
      local_88 = iVar5 + 1;
    }
    FUN_0126ee34(&local_68);
LAB_014a4f78:
    FUN_00949b70(&local_90);
  }
  FUN_0132b958(1,puVar3,1,2);
  local_48 = iVar5;
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("BUG: response serialization failedAPI",0x22,&local_48,&DAT_01cf9524,&DAT_01cf9514);
}

