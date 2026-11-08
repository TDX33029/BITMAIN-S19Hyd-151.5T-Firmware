// FUN_00ebd7e4 @ 00ebd7e4 size=796 calls_out=6 calls_in=0
// strings: actions.log | actions.log.1

void FUN_00ebd7e4(uint *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  FUN_015ed628(&local_90,param_2,0x11,"actions.log",0xb);
  FUN_015ed628(&local_80,param_2,0x11,"actions.log.1",0xd);
  local_6c = CONCAT31(local_6c._1_3_,1);
  local_70 = (undefined4 *)0x1ff;
  FUN_015eb2b4(&local_50,&local_70,param_2,0x11);
  if ((local_50 & 0xff) == 4) {
    uVar10 = thunk_FUN_016de0ee(4,0x2c0);
    puVar8 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
    if ((char)puVar8[4] == '\0') {
      FUN_015f62e4(&local_50);
      *puVar8 = local_50;
      puVar8[1] = local_4c;
      puVar8[2] = uStack_48;
      puVar8[3] = uStack_44;
      *(undefined1 *)(puVar8 + 4) = 1;
    }
    local_60 = *puVar8;
    uStack_5c = puVar8[1];
    local_54 = puVar8[3];
    puVar7 = puVar8 + 2;
    uStack_58 = *puVar7;
    *puVar8 = local_60 + 1;
    puVar8[1] = uStack_5c + (0xfffffffe < local_60);
    local_6c = 0;
    local_68 = 0;
    local_70 = &DAT_005674cc;
    local_64 = 0;
    FUN_00f5ba80(&local_50,local_7c,local_78,&local_70);
    uVar4 = local_50 & 0xff;
    if (uVar4 == 4) {
      FUN_00f5ba80(&local_50,local_8c,local_88,&local_70);
      uVar3 = local_4c;
      uVar2 = local_6c;
      puVar1 = local_70;
      uVar4 = local_50 & 0xff;
      if (uVar4 == 4) {
        local_50 = local_68;
        local_4c = local_64;
        uStack_48 = local_60;
        uStack_44 = uStack_5c;
        uStack_40 = uStack_58;
        uStack_3c = local_54;
        if ((char)puVar8[4] == '\0') {
          FUN_015f62e4(&local_38);
          *puVar8 = local_38;
          puVar8[1] = uStack_34;
          *puVar7 = uStack_30;
          puVar8[3] = uStack_2c;
          *(undefined1 *)(puVar8 + 4) = 1;
        }
        uVar5 = *puVar7;
        uVar4 = puVar8[3];
        uVar6 = *puVar8;
        uVar9 = puVar8[1];
        param_1[0x11] = local_90;
        param_1[0x14] = local_80;
        param_1[0x15] = local_7c;
        *puVar8 = uVar6 + 1;
        puVar8[1] = uVar9 + (0xfffffffe < uVar6);
        param_1[0x12] = local_8c;
        param_1[0x13] = local_88;
        param_1[0x16] = local_78;
        param_1[2] = local_50;
        param_1[3] = local_4c;
        param_1[4] = uStack_48;
        param_1[5] = uStack_44;
        param_1[6] = uStack_40;
        param_1[7] = uStack_3c;
        param_1[0xe] = uVar5;
        param_1[0xf] = uVar4;
        *param_1 = (uint)puVar1;
        param_1[0xc] = uVar6;
        param_1[0xd] = uVar9;
        param_1[1] = uVar2;
        param_1[8] = (uint)&DAT_005674cc;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0x10] = uVar3;
        return;
      }
    }
    *(undefined1 *)((int)param_1 + 3) = local_50._3_1_;
    *(undefined2 *)((int)param_1 + 1) = local_50._1_2_;
    *(char *)param_1 = (char)uVar4;
    if (local_6c != 0) {
      uVar4 = local_6c * 0x11;
    }
    param_1[0x14] = 0x80000000;
    param_1[1] = local_4c;
    if (local_6c != 0 && uVar4 != 0xffffffeb) {
      thunk_FUN_016d3fb4(local_70 + local_6c * -4 + -4);
    }
  }
  else {
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[0x14] = 0x80000000;
  }
  if (local_80 != 0) {
    thunk_FUN_016d3fb4(local_7c);
  }
  if (local_90 != 0) {
    thunk_FUN_016d3fb4(local_8c);
  }
  return;
}

