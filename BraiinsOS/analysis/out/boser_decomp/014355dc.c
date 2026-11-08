// FUN_014355dc @ 014355dc size=476 calls_out=3 calls_in=0
// strings: path is valid uri

void FUN_014355dc(char *param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined **local_ac;
  undefined **local_a8;
  undefined2 local_a2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*param_1 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
LAB_01435624:
    local_a8 = &PTR_FUN_01cf4050;
    local_ac = &PTR_FUN_01cf3fcc;
    local_b0 = 0;
    local_b4 = 1;
    uVar3 = 1;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    puVar8 = &DAT_005327c4;
    uVar2 = 0xffff;
  }
  else {
    if (*(uint *)(param_1 + 0x20) < 2) {
      pcVar1 = *(char **)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) == 0) {
        pcVar1 = &DAT_005327c4;
      }
      if (*pcVar1 == '/') goto LAB_01435624;
    }
    (*(code *)**(undefined4 **)(param_1 + 0x18))(&local_50,param_1 + 0x24);
    uStack_30 = local_48;
    local_34 = local_4c;
    uStack_38 = local_50;
    local_40 = CONCAT22(local_40._2_2_,*(undefined2 *)(param_1 + 0x28));
    local_4c = 0;
    local_48 = 0;
    local_50 = 3;
    uStack_2c = local_44;
    uStack_28 = local_40;
    FUN_01411d3c(&local_80,&local_50);
    if ((char)local_80 == '\x03') {
      local_50 = CONCAT31(local_50._1_3_,local_80._1_1_);
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("path is valid uri",0x11,&local_50,&DAT_01cf6268,&DAT_01cf6298);
    }
    local_a2 = local_56;
    local_ac = local_78;
    local_a8 = local_68;
    local_b4 = local_74;
    local_b0 = local_6c;
    uVar3 = local_60;
    uVar4 = local_5c;
    uVar5 = local_80;
    uVar6 = local_7c;
    uVar7 = local_70;
    puVar8 = local_64;
    uVar2 = local_58;
  }
  FUN_01435814(param_1);
  *(undefined2 *)(param_1 + 0x2a) = local_a2;
  *(undefined ***)(param_1 + 8) = local_ac;
  *(undefined4 *)(param_1 + 0xc) = local_b4;
  *(undefined4 *)(param_1 + 0x14) = local_b0;
  *(undefined2 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)param_1 = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  *(undefined ***)(param_1 + 0x18) = local_a8;
  *(undefined1 **)(param_1 + 0x1c) = puVar8;
  return;
}

