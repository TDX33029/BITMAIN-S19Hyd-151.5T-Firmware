// FUN_0156f8e0 @ 0156f8e0 size=500 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0156f8e0(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_a8;
  int local_a4;
  uint *puStack_a0;
  uint *local_9c;
  uint local_98;
  uint *local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  char local_40 [28];
  
  puVar5 = (uint *)*param_1;
  iVar4 = param_1[1];
  iVar8 = param_1[3];
  local_b0 = 0;
  local_b8[0] = 0;
  if (iVar4 == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = 8;
    param_4 = puVar5 + iVar4 * -10 + -10;
    param_3 = iVar4 * 0x29 + 0x2d;
  }
  puVar7 = puVar5 + 1;
  uVar1 = ~*puVar5 & 0x80808080;
  local_90 = (int)puVar5 + iVar4 + 1;
  local_a4 = param_3;
  puStack_a0 = param_4;
  local_9c = puVar5;
  local_98 = uVar1;
  local_94 = puVar7;
  local_8c = iVar8;
  while (iVar8 != 0) {
    uVar2 = uVar1;
    puVar6 = puVar7;
    if (uVar1 == 0) {
      do {
        puVar7 = puVar6 + 1;
        uVar1 = *puVar6;
        puVar5 = puVar5 + -0x28;
        puVar6 = puVar7;
      } while ((uVar1 & 0x80808080) == 0x80808080);
      uVar2 = uVar1 & 0x80808080 ^ 0x80808080;
      local_9c = puVar5;
      local_94 = puVar7;
    }
    uVar1 = uVar2 - 1 & uVar2;
    iVar8 = iVar8 + -1;
    uVar2 = (uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                          | uVar2 >> 0x18) >> 3;
    local_88 = puVar5[uVar2 * -10 + -9];
    local_84 = puVar5[uVar2 * -10 + -8];
    local_80 = puVar5[uVar2 * -10 + -7];
    uStack_7c = puVar5[uVar2 * -10 + -6];
    local_78 = puVar5[uVar2 * -10 + -5];
    uStack_74 = puVar5[uVar2 * -10 + -4];
    uStack_70 = puVar5[uVar2 * -10 + -3];
    uStack_6c = puVar5[uVar2 * -10 + -2];
    uStack_68 = puVar5[uVar2 * -10 + -1];
    local_98 = uVar1;
    if (puVar5[uVar2 * -10 + -10] == 0x80000000) goto LAB_0156fa58;
    local_58 = puVar5[uVar2 * -10 + -6];
    uStack_54 = puVar5[uVar2 * -10 + -5];
    uStack_50 = puVar5[uVar2 * -10 + -4];
    uStack_4c = puVar5[uVar2 * -10 + -3];
    uStack_48 = puVar5[uVar2 * -10 + -2];
    uStack_44 = puVar5[uVar2 * -10 + -1];
    local_64 = puVar5[uVar2 * -10 + -10];
    local_60 = local_88;
    uStack_5c = local_84;
    FUN_0196b484(local_40,local_b8,&local_64);
    if (local_40[0] != '\x06') {
      FUN_00e0febc(local_40);
    }
  }
  iVar8 = 0;
LAB_0156fa58:
  local_8c = iVar8;
  FUN_0152b1c8(&local_a8);
  FUN_01bed4e2((uint)&local_a8 | 3,local_b8,0xc);
  local_80 = CONCAT31(local_80._1_3_,5);
  local_84 = 1;
  local_88 = 1;
  FUN_01bed4e2((int)&local_80 + 1,&local_a8,0xf);
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  *puVar3 = local_88;
  puVar3[1] = local_84;
  puVar3[2] = local_80;
  puVar3[3] = uStack_7c;
  puVar3[4] = local_78;
  puVar3[5] = uStack_74;
  puVar3[6] = uStack_70;
  puVar3[7] = uStack_6c;
  return;
}

