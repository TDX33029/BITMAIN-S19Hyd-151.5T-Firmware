// FUN_00b1489c @ 00b1489c size=708 calls_out=9 calls_in=1
// strings: 

void FUN_00b1489c(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r11;
  bool bVar11;
  undefined1 auStack_258 [208];
  int local_188;
  int iStack_184;
  int iStack_180;
  int local_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  char local_150 [28];
  undefined4 local_134;
  undefined4 *local_130;
  undefined4 local_12c;
  char local_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  undefined4 local_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int local_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined1 local_f0 [204];
  
  iVar2 = *(int *)(param_2 + 0xc);
  piVar3 = *(int **)(param_2 + 0x14);
  puVar4 = (undefined4 *)((uint)&local_110 | 4);
  iVar10 = *(int *)(param_2 + 4);
  iVar9 = *(int *)(param_2 + 0x10);
  puVar5 = (undefined2 *)((uint)&local_168 | 1);
  do {
    bVar11 = iVar10 != iVar2;
    if (bVar11) {
      unaff_r11 = *(int *)(iVar10 + 0xcc);
      iVar10 = iVar10 + 0xd8;
      *(int *)(param_2 + 4) = iVar10;
    }
    if (!bVar11 || unaff_r11 == -0x80000000) {
LAB_00b14aa4:
      unaff_r11 = -0x80000000;
      goto LAB_00b14aac;
    }
    iVar7 = *(int *)(iVar10 + -8);
    iVar8 = *(int *)(iVar10 + -4);
    FUN_01bed4e2((uint)local_f0 | 4,iVar10 + -0xd8,200);
    FUN_01bed4e2(auStack_258,local_f0,0xcc);
    FUN_01bed4e2(local_f0,(uint)auStack_258 | 4,200);
    FUN_0126eb40(local_128,local_f0);
    FUN_009636a4(local_f0);
    if (local_128[0] == '\x06') {
      iVar10 = FUN_0069a804(local_124);
      FUN_019bb7e0(unaff_r11,iVar7);
      puVar4 = (undefined4 *)*piVar3;
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)();
      }
      *piVar3 = iVar10;
      *(int *)(param_2 + 0x10) = iVar9 + 1;
      goto LAB_00b14aa4;
    }
    uVar1 = *(undefined1 *)((undefined2 *)((uint)local_128 | 1) + 1);
    *puVar5 = *(undefined2 *)((uint)local_128 | 1);
    *(undefined1 *)(puVar5 + 1) = uVar1;
    local_160 = local_120;
    uStack_15c = local_11c;
    iStack_158 = local_118;
    uStack_154 = local_114;
    local_164 = local_124;
    local_168 = CONCAT31(local_168._1_3_,local_128[0]);
    if (local_128[0] == '\x05') {
      puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar6 + 3) = 0x72656472;
      *puVar6 = 0x726f2d78;
      local_12c = 7;
      local_134 = 7;
      local_114 = 0;
      local_120 = 0;
      local_11c = 0;
      local_128[0] = '\x02';
      local_130 = puVar6;
      local_118 = iVar9;
      FUN_0196b484(local_150,(uint)&local_168 | 4,&local_134,local_128);
      if (local_150[0] != '\x06') {
        FUN_00db4764(local_150);
      }
    }
    iVar9 = iVar9 + 1;
    *puVar4 = local_168;
    puVar4[1] = local_164;
    puVar4[2] = local_160;
    puVar4[3] = uStack_15c;
    puVar4[4] = iStack_158;
    puVar4[5] = uStack_154;
    local_188 = local_110;
    iStack_184 = iStack_10c;
    iStack_180 = iStack_108;
    local_17c = local_104;
    iStack_178 = iStack_100;
    iStack_174 = iStack_fc;
    iStack_170 = iStack_f8;
    *(int *)(param_2 + 0x10) = iVar9;
  } while (unaff_r11 == -0x7fffffff);
  param_1[1] = iVar7;
  param_1[2] = iVar8;
  param_1[3] = local_110;
  param_1[4] = iStack_10c;
  param_1[5] = iStack_108;
  param_1[6] = local_104;
  param_1[7] = iStack_100;
  param_1[8] = iStack_fc;
  param_1[9] = iStack_f8;
LAB_00b14aac:
  *param_1 = unaff_r11;
  return;
}

