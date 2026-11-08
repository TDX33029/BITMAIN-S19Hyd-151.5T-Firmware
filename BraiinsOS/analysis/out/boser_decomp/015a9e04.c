// FUN_015a9e04 @ 015a9e04 size=544 calls_out=10 calls_in=4
// strings: 

void FUN_015a9e04(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint **ppuVar4;
  int iVar5;
  uint *local_a8;
  code *local_a4;
  uint **local_a0;
  uint *local_98;
  code *local_94;
  uint **ppuStack_90;
  undefined1 *puStack_8c;
  uint *puStack_88;
  code *pcStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined2 local_64;
  uint local_60;
  undefined4 local_5c;
  uint *local_58;
  code *local_54;
  uint **local_50;
  undefined1 *local_4c;
  uint *local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 local_24;
  
  local_50 = (uint **)0x0;
  local_54 = (code *)0x1;
  local_58 = (uint *)0x0;
  iVar5 = FUN_015a8f74(*param_3,param_3[1],&local_58);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_98,&DAT_01cfc6c8,&DAT_01d30334);
  }
  local_a8 = local_58;
  local_a4 = local_54;
  local_a0 = local_50;
  FUN_015eda34(&local_98,param_2[8],param_3);
  puVar1 = local_98;
  if (local_98 == (uint *)0x2 && local_94 == (code *)0x0) {
    local_68 = 0x7f;
    uStack_66 = 0x100;
    local_64 = 0;
    FUN_015f7b04(&local_60,0x7f,0x100);
    uVar3 = local_5c;
    if ((char)local_60 == '\x04') {
      FUN_01609da8(&local_60,local_5c,local_a4,local_a0,param_2);
      if ((char)local_60 == '\x04') {
        *param_1 = 4;
      }
      else {
        local_44 = FUN_019a7d7c;
        local_48 = &local_28;
        local_24 = local_5c;
        local_28 = local_60;
        local_4c = &LAB_00632348;
        local_54 = FUN_0130a2f8;
        local_58 = param_2;
        local_50 = &local_a8;
        FUN_00664898(&local_98,&DAT_005a9f46,&local_58);
        pcVar2 = local_94;
        puVar1 = local_98;
        FUN_0069d8a4(local_28 & 0xff,local_24);
        *param_1 = 2;
        param_1[1] = puVar1;
        param_1[2] = pcVar2;
        param_1[3] = ppuStack_90;
      }
      FUN_01bf01d6(uVar3);
    }
    else {
      local_94 = FUN_019a7d7c;
      local_98 = &local_28;
      local_24 = local_5c;
      local_28 = local_60;
      FUN_00664898(&local_58,&DAT_005891cc,&local_98);
      ppuVar4 = local_50;
      pcVar2 = local_54;
      puVar1 = local_58;
      FUN_0069d8a4(local_28 & 0xff,local_24);
      *param_1 = 2;
      param_1[1] = puVar1;
      param_1[2] = pcVar2;
      param_1[3] = ppuVar4;
    }
  }
  else {
    local_58 = local_98;
    local_54 = local_94;
    local_50 = ppuStack_90;
    local_4c = puStack_8c;
    local_48 = puStack_88;
    local_44 = pcStack_84;
    local_40 = local_80;
    uStack_3c = uStack_7c;
    uStack_38 = uStack_78;
    uStack_34 = uStack_74;
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    FUN_015aa164(&local_50);
    *param_1 = puVar1;
  }
  FUN_0134bd64(local_a8,local_a4);
  return;
}

