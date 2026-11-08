// FUN_00ebfb94 @ 00ebfb94 size=604 calls_out=4 calls_in=0
// strings: 

void FUN_00ebfb94(int *param_1,ushort *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_170;
  uint uStack_16c;
  undefined4 local_168;
  undefined1 auStack_164 [108];
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 auStack_e4 [92];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [88];
  
  if ((char)*param_2 == '\0') {
    bVar1 = *(byte *)((int)param_2 + 1);
    FUN_016dd606(auStack_e4,0,0x56);
    FUN_016dd1aa(&local_f8,param_2 + 1,0x14);
    FUN_016dd1aa(&local_168,&local_f8,0x6a);
    uStack_16c = (uint)bVar1 << 0x18;
    local_170 = 0x18;
  }
  else {
    FUN_016dd606(auStack_78,0,0x56);
    uVar4 = (uint)((int)param_2 + 3) & 0xfffffffc;
    uVar3 = uVar4 - (int)param_2;
    uVar9 = 0;
    if (uVar3 != 0) {
      iVar5 = (int)param_2 - uVar4;
      puVar6 = param_2;
      do {
        if ((char)*puVar6 == '\0') goto LAB_00ebfd88;
        bVar10 = iVar5 != -1;
        iVar5 = iVar5 + 1;
        puVar6 = (ushort *)((int)puVar6 + 1);
      } while (bVar10);
      uVar9 = uVar3;
    }
    uVar4 = *(uint *)((int)param_2 + uVar9);
    uVar3 = ((uint *)((int)param_2 + uVar9))[1];
    if ((~((0x1010100 - uVar4 | uVar4) & (0x1010100 - uVar3 | uVar3)) & 0x80808080) == 0) {
      uVar3 = uVar9 | 8;
      uVar7 = *(uint *)((int)param_2 + uVar3);
      uVar4 = ((uint *)((int)param_2 + uVar3))[1];
      if (((0x1010100 - uVar7 | uVar7) & 0x80808080 & (0x1010100 - uVar4 | uVar4)) == 0x80808080) {
        uVar3 = uVar9 | 0x10;
      }
    }
    else {
      uVar3 = uVar9;
    }
    do {
      if (*(char *)((int)param_2 + uVar3) == '\0') {
LAB_00ebfd88:
        *param_1 = 2;
        param_1[1] = 2;
        param_1[2] = (int)&DAT_018aabe4;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x16);
    local_88 = *(undefined4 *)(param_2 + 3);
    uVar8 = *(undefined4 *)(param_2 + 1);
    uStack_84 = *(undefined4 *)(param_2 + 5);
    uStack_80 = *(undefined4 *)(param_2 + 7);
    uStack_7c = *(undefined4 *)(param_2 + 9);
    uVar2 = *param_2;
    FUN_016dd1aa(&local_f8,&local_88,0x66);
    local_168 = uVar8;
    FUN_016dd1aa(auStack_164,&local_f8,0x66);
    local_170 = 0x19;
    if ((uVar2 & 0xff) == 0) {
      local_170 = 0x18;
    }
    uStack_16c = (uint)uVar2 << 0x10;
  }
  uStack_16c = uStack_16c | 1;
  FUN_0126ddd8(&local_f8,&local_170);
  if ((char)local_f8 != '\x04') {
    *(char *)(param_1 + 1) = (char)local_f8;
    *(undefined1 *)((int)param_1 + 7) = local_f8._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_f8._1_2_;
    param_1[2] = local_f4;
    *param_1 = 2;
    return;
  }
  FUN_005c8b90(&local_f8,local_f4,param_3);
  if (local_f8 == 2) {
    *param_1 = 2;
    param_1[1] = local_f4;
    param_1[2] = local_f0;
    return;
  }
  *param_1 = local_f8;
  param_1[1] = local_f4;
  param_1[2] = local_f0;
  param_1[3] = local_ec;
  return;
}

