// FUN_01785908 @ 01785908 size=760 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01785908(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r2;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  char local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined1 *local_44;
  uint local_40;
  uint local_3c;
  undefined1 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_01412b3c(&local_48,2);
  uVar7 = FUN_01410d80(&local_48);
  local_8c = thunk_FUN_01be5118(0x68);
  if (local_8c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x68);
  }
  iVar3 = 0;
  local_78 = CONCAT22(local_78._2_2_,1);
  local_ac = 0;
  local_b0 = 0;
  local_7c = 0;
  local_80 = 4;
  local_84 = 0;
  local_88 = 0;
  uStack_90 = 2;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  while ((local_98 = uVar7, (byte)(&DAT_0050da9f)[iVar3] == 9 ||
         ((byte)(&DAT_0050da9f)[iVar3] - 0x20 < 0x5f))) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 3) {
      local_38 = 0;
      local_3c = 0;
      local_44 = &DAT_0050da9f;
      local_40 = 3;
      local_48 = &DAT_01d1a7d0;
      FUN_0142fccc(&local_70,&local_b0,&local_58,&local_48);
      if (local_60 != '\x02') {
        (**(code **)(local_70 + 0x10))(auStack_64,local_6c,local_68);
      }
      local_54 = 10;
      local_28 = 0;
      local_2c = 4;
      local_30 = 0;
      local_58 = 1;
      uVar7 = thunk_FUN_01bee35a(1,0x2c0);
      puVar6 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
      local_68 = 0;
      local_70 = 0;
      local_6c = extraout_r2;
      if ((char)puVar6[4] == '\0') {
        FUN_019ae6ac(&local_48);
        *puVar6 = (uint)local_48;
        puVar6[1] = (uint)local_44;
        puVar6[2] = local_40;
        puVar6[3] = local_3c;
        *(undefined1 *)(puVar6 + 4) = 1;
      }
      uVar4 = *puVar6;
      uVar1 = puVar6[2];
      uVar5 = puVar6[1];
      uVar2 = puVar6[3];
      *puVar6 = uVar4 + 1;
      puVar6[1] = uVar5 + (0xfffffffe < uVar4);
      *param_1 = local_b0;
      param_1[1] = local_ac;
      param_1[2] = uStack_a8;
      param_1[3] = uStack_a4;
      param_1[4] = uStack_a0;
      param_1[5] = local_9c;
      *(undefined8 *)(param_1 + 6) = local_98;
      param_1[8] = uStack_90;
      param_1[9] = local_8c;
      param_1[10] = local_88;
      param_1[0xb] = local_84;
      param_1[0xc] = local_80;
      param_1[0xd] = local_7c;
      param_1[0xe] = local_78;
      param_1[0xf] = uStack_74;
      param_1[0x58] = local_30;
      param_1[0x59] = local_2c;
      param_1[0x5a] = local_28;
      param_1[0x3e] = local_58;
      param_1[0x3f] = local_54;
      param_1[0x40] = local_50;
      param_1[0x5b] = local_70;
      param_1[0x5c] = local_6c;
      param_1[0x5d] = local_68;
      param_1[0x1a] = 0x5a;
      param_1[0x2e] = 0x80000000;
      param_1[0x41] = 2;
      param_1[0x18] = &DAT_3b9aca00;
      param_1[0x2c] = &DAT_3b9aca00;
      param_1[0x28] = &DAT_3b9aca00;
      param_1[0x24] = &DAT_3b9aca00;
      param_1[0x20] = &DAT_3b9aca00;
      param_1[0x1b] = 0;
      param_1[0x14] = 0;
      param_1[0x12] = 0;
      param_1[0x10] = 0;
      param_1[0x1c] = 0;
      param_1[0x34] = &DAT_0056d238;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      *(undefined2 *)(param_1 + 0x61) = 0x101;
      *(undefined4 *)((int)param_1 + 0x18b) = 0;
      *(undefined2 *)(param_1 + 0x69) = 0x404;
      param_1[0x38] = uVar4;
      param_1[0x39] = uVar5;
      param_1[0x3a] = uVar1;
      param_1[0x3b] = uVar2;
      *(undefined4 *)((int)param_1 + 0x187) = 0;
      param_1[0x60] = 0x10101;
      *(undefined1 *)((int)param_1 + 0x186) = 1;
      param_1[0x5e] = 0xffffffff;
      param_1[0x5f] = 0;
      param_1[0x3c] = 0;
      *(undefined1 *)((int)param_1 + 0x193) = 2;
      *(undefined4 *)((int)param_1 + 399) = 0x2000001;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0,0,&DAT_01d1d594);
}

