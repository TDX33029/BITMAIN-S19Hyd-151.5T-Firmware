// FUN_0155f304 @ 0155f304 size=540 calls_out=11 calls_in=7
// strings: properties

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0155f304(uint *param_1,undefined4 param_2,int *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  uint *local_1cc;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  undefined1 auStack_1b0 [148];
  uint local_11c [3];
  int local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  uint local_fc;
  undefined1 auStack_f8 [136];
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar5 = param_3[2];
  uVar6 = 0;
  bVar9 = 0x7fffffe < uVar5;
  bVar8 = uVar5 == 0x7ffffff;
  uVar7 = uVar5 * 0x20;
  if (uVar5 < 0x8000000) {
    bVar9 = 0x7ffffffb < uVar7;
    bVar8 = uVar7 == 0x7ffffffc;
    local_1cc = param_1;
  }
  if (!bVar9 || bVar8) {
    if (uVar7 == 0) {
      uVar2 = 4;
      local_1c0 = 0;
    }
    else {
      uVar6 = 4;
      uVar2 = FUN_01298504(uVar7,4);
      local_1c0 = uVar5;
      if (uVar2 == 0) goto LAB_0155f328;
    }
    local_1b8 = 0;
    local_1bc = uVar2;
    FUN_0155f038(auStack_1b0,param_2,"properties",10);
    local_11c[2] = *param_3;
    local_110 = param_3[1];
    uVar7 = 0;
    if (local_11c[2] == 0) {
      uVar5 = 0;
    }
    local_11c[0] = (uint)(local_11c[2] != 0);
    local_108 = 0;
    local_11c[1] = 0;
    local_10c = local_11c[0];
    local_104 = local_11c[2];
    local_100 = local_110;
    local_fc = uVar5;
    while( true ) {
      uVar10 = FUN_01a41998(local_11c);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar3 = (int)uVar10;
      if (iVar3 == 0) {
        *local_1cc = local_1c0;
        local_1cc[1] = local_1bc;
        local_1cc[2] = local_1b8;
        FUN_014ff9e0(auStack_1b0);
        return;
      }
      FUN_0155f038(auStack_f8,auStack_1b0,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      FUN_006666fc(&local_48,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      uVar1 = FUN_016731b0(local_70,uVar6);
      FUN_0156aca8(&local_38,auStack_f8,uVar6,uVar1);
      if (local_38 == 0) break;
      local_54 = local_30;
      uStack_50 = uStack_2c;
      uStack_4c = uStack_28;
      local_68 = local_48;
      uStack_64 = local_44;
      uStack_60 = uStack_40;
      local_58 = local_34;
      local_5c = local_38;
      if (uVar7 == local_1c0) {
        FUN_0155dd20(&local_1c0);
        uVar2 = local_1bc;
      }
      puVar4 = (undefined4 *)(uVar2 + uVar7 * 0x20);
      uVar7 = uVar7 + 1;
      *puVar4 = local_68;
      puVar4[1] = uStack_64;
      puVar4[2] = uStack_60;
      puVar4[3] = local_5c;
      puVar4[4] = local_58;
      puVar4[5] = local_54;
      puVar4[6] = uStack_50;
      puVar4[7] = uStack_4c;
      local_1b8 = uVar7;
      FUN_014ff9e0(auStack_f8);
    }
    *local_1cc = 0x80000000;
    local_1cc[1] = local_34;
    FUN_019bb7e0(local_48,local_44);
    FUN_014ff9e0(auStack_f8);
    FUN_014ff9e0(auStack_1b0);
    FUN_01501cbc(&local_1c0);
    return;
  }
LAB_0155f328:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar6,uVar7);
}

