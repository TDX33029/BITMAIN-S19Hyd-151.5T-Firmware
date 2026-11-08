// FUN_010c816c @ 010c816c size=480 calls_out=3 calls_in=0
// strings: path is valid uri

void FUN_010c816c(char *param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  char cVar9;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined3 uStack_ac;
  undefined4 local_a8;
  undefined4 local_80;
  char local_7c;
  undefined1 local_7b;
  undefined2 uStack_7a;
  undefined1 local_78;
  undefined **local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined **local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*param_1 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
LAB_010c81a8:
    local_b8 = 0;
    local_bc = 1;
    ppuVar3 = &PTR_LAB_0188508c;
    uVar4 = 0;
    puVar5 = &DAT_00418645;
    uVar6 = 1;
    ppuVar7 = &PTR_LAB_0188508c;
    uVar8 = 0;
    cVar9 = '\0';
    uVar1 = 0xffff;
  }
  else {
    if (*(uint *)(param_1 + 0x20) < 2) {
      pcVar2 = *(char **)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) == 0) {
        pcVar2 = &DAT_00418645;
      }
      if (*pcVar2 == '/') goto LAB_010c81a8;
    }
    local_a8 = CONCAT31(local_a8._1_3_,3);
    (*(code *)**(undefined4 **)(param_1 + 0x18))(&local_50,param_1 + 0x24);
    uStack_30 = uStack_48;
    uStack_38 = local_50;
    local_80 = CONCAT22(local_80._2_2_,*(undefined2 *)(param_1 + 0x28));
    local_50 = local_a8;
    uStack_48 = 0;
    uStack_34 = uStack_4c;
    uStack_2c = uStack_44;
    uStack_28 = local_80;
    FUN_010a2fe8(&local_7c,&local_50);
    if (local_7c == '\x03') {
      local_50 = CONCAT31(local_50._1_3_,local_7b);
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("path is valid uri",0x11,&local_50,&DAT_01885284,&DAT_018850c0);
    }
    local_b0 = CONCAT13(local_78,CONCAT21(uStack_7a,local_7b));
    uStack_ac = (undefined3)((uint)_local_78 >> 8);
    local_bc = local_5c;
    local_b8 = local_58;
    ppuVar3 = local_74;
    uVar4 = local_68;
    puVar5 = local_60;
    uVar6 = local_70;
    ppuVar7 = local_64;
    uVar8 = local_6c;
    cVar9 = local_7c;
    local_c0 = local_52;
    uVar1 = local_54;
  }
  FUN_0145d5e0(param_1);
  *(undefined4 *)(param_1 + 1) = local_b0;
  *(undefined2 *)(param_1 + 0x2a) = local_c0;
  *(undefined2 *)(param_1 + 0x28) = uVar1;
  *(undefined ***)(param_1 + 8) = ppuVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  *(undefined4 *)(param_1 + 0x20) = local_bc;
  *param_1 = cVar9;
  *(uint *)(param_1 + 4) = CONCAT31(uStack_ac,local_b0._3_1_);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined ***)(param_1 + 0x18) = ppuVar7;
  *(undefined1 **)(param_1 + 0x1c) = puVar5;
  *(undefined4 *)(param_1 + 0x24) = local_b8;
  return;
}

