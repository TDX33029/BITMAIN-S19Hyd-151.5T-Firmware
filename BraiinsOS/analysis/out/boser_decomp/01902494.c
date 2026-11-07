// FUN_01902494 @ 01902494 size=1048 calls_out=19 calls_in=0
// strings: hrr ech accept confirmation

void FUN_01902494(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  uint *local_170;
  undefined1 auStack_154 [12];
  undefined1 local_148;
  undefined1 auStack_144 [12];
  undefined4 local_138;
  int local_134;
  undefined8 local_130;
  byte local_128 [16];
  undefined2 local_118;
  undefined2 local_116;
  undefined2 local_114;
  undefined2 local_112;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint local_e8;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_78;
  undefined2 local_40;
  uint local_38;
  int local_34;
  uint local_30;
  
  puVar12 = *(uint **)(param_3 + 4);
  uVar14 = *(uint *)(param_3 + 8);
  puVar6 = (undefined4 *)FUN_018eb6e4(puVar12,uVar14,0x28);
  if ((puVar6 == (undefined4 *)0x0) || ((undefined1 *)*puVar6 != &DAT_80000004)) {
    *param_1 = 0x80000029;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else if (puVar6[3] == 8) {
    FUN_015e8ad4(auStack_154,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    local_148 = *(undefined1 *)(param_2 + 0xc);
    FUN_0191e300(auStack_144,auStack_154,*(undefined4 *)(param_4 + 0x18),
                 *(undefined4 *)(param_4 + 0x1c));
    uVar17 = (**(code **)(local_134 + 0xc))(local_138);
    (**(code **)(local_130._4_4_ + 0x14))(local_128,(undefined4)local_130);
    local_130 = uVar17;
    if (0x40 < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_e8,0x40,&DAT_01d258e8);
    }
    FUN_018ed7dc(&local_b8,local_128);
    FUN_018ea5f0(&local_38,&local_b8);
    FUN_0191e164(auStack_144,local_34,local_30);
    FUN_0134bd64(local_38,local_34);
    FUN_019179b8(&local_b8);
    bVar16 = 0xffffffe < uVar14;
    bVar15 = uVar14 == 0xfffffff;
    uVar9 = uVar14 * 0x10;
    uVar13 = 0;
    if (uVar14 < 0x10000000) {
      bVar16 = 0x7ffffffb < uVar9;
      bVar15 = uVar9 == 0x7ffffffc;
      local_170 = &local_38;
    }
    if (bVar16 && !bVar15) {
LAB_019025c0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,uVar9);
    }
    uVar1 = *(undefined2 *)(param_3 + 0x12);
    uVar2 = *(undefined2 *)(param_3 + 0x10);
    uVar3 = *(undefined2 *)(param_3 + 0xe);
    uVar4 = *(undefined2 *)(param_3 + 0xc);
    if (uVar9 == 0) {
      local_34 = 4;
      local_38 = 0;
    }
    else {
      uVar13 = 4;
      local_34 = FUN_01298504(uVar9,4);
      if (local_34 == 0) goto LAB_019025c0;
      local_38 = uVar14;
      if ((uVar14 != 0) && (uVar9 != 0)) {
        iVar7 = 4;
        uVar14 = *puVar12;
        if (0x80000000 < uVar14) {
          iVar7 = uVar14 + 0x7fffffff;
        }
                    /* WARNING: Could not recover jumptable at 0x019026ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_019026f0 + *(int *)(&DAT_019026f0 + iVar7 * 4)))();
        return;
      }
    }
    puVar12 = (uint *)((uint)local_128 | 4);
    uVar9 = local_170[1];
    uVar11 = local_170[2];
    *puVar12 = *local_170;
    puVar12[1] = uVar9;
    puVar12[2] = uVar11;
    local_110 = *(undefined4 *)(param_3 + 0x14);
    uStack_10c = *(undefined4 *)(param_3 + 0x18);
    uStack_108 = *(undefined4 *)(param_3 + 0x1c);
    uStack_104 = *(undefined4 *)(param_3 + 0x20);
    local_100 = *(undefined4 *)(param_3 + 0x24);
    uStack_fc = *(undefined4 *)(param_3 + 0x28);
    uStack_f8 = *(undefined4 *)(param_3 + 0x2c);
    uStack_f4 = *(undefined4 *)(param_3 + 0x30);
    uStack_f0 = *(undefined4 *)(param_3 + 0x34);
    local_128[0] = 3;
    local_128[1] = 0;
    local_128[2] = 0;
    local_128[3] = 0x80;
    local_118 = uVar4;
    local_116 = uVar3;
    local_114 = uVar2;
    local_112 = uVar1;
    local_30 = uVar14;
    FUN_019021e0(&local_b8);
    FUN_0191e124(auStack_144,&local_b8);
    FUN_01901c2c(&local_b8);
    uVar13 = *(undefined4 *)(param_4 + 8);
    iVar7 = *(int *)(param_4 + 0xc);
    (**(code **)(local_130._4_4_ + 0xc))(&local_b8,(undefined4)local_130);
    pcVar8 = *(code **)(iVar7 + 0x10);
    uVar17 = (*pcVar8)(uVar13,0,pcVar8,param_2 + 0x6c,0x20);
    iVar7 = (int)((ulonglong)uVar17 >> 0x20);
    if (0x40 < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_78,0x40,&DAT_01d258e8);
    }
    FUN_019022f4(local_128,(int)uVar17,*(undefined4 *)(iVar7 + 0xc),"hrr ech accept confirmation",
                 0x1b,&local_b8,local_78);
    FUN_01443048((int)uVar17,iVar7);
    uVar14 = 0;
    if (puVar6[3] == 8) {
      iVar10 = puVar6[2];
      iVar7 = 0;
      uVar14 = 1;
      do {
        uVar9 = (uint)(*(byte *)(iVar10 + iVar7) ^ local_128[iVar7]);
        uVar9 = FUN_019216e4((uVar9 | -uVar9 & 0xff) >> 7 ^ 1);
        iVar7 = iVar7 + 1;
        uVar14 = uVar9 & uVar14;
      } while (iVar7 != 8);
    }
    cVar5 = FUN_019216e4(uVar14);
    *(bool *)(param_1 + 1) = cVar5 != '\0';
    *param_1 = 0x80000029;
    FUN_01902274(auStack_144);
  }
  else {
    local_40 = 4;
    local_b4 = 0x100001;
    local_b8 = 0x80000001;
    FUN_018f1fc4(param_5,&local_b8,*(char *)(param_5 + 0x31) == '\x02');
    *(undefined1 *)(param_1 + 1) = 0x14;
    *(undefined1 *)(param_5 + 0x255) = 1;
    *param_1 = &DAT_8000001c;
  }
  return;
}

