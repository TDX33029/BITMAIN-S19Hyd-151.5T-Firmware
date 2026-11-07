// FUN_019cfcf0 @ 019cfcf0 size=700 calls_out=8 calls_in=42
// strings: overflow when adding duration to instant

void FUN_019cfcf0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int local_ac;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined3 uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  char local_40;
  undefined4 uStack_3f;
  undefined3 uStack_3b;
  int local_34;
  uint local_30;
  int local_28;
  
  FUN_01aaa77c(auStack_98);
  FUN_019d0be0(&local_58,auStack_98);
  if (local_40 == '\x02') {
    FUN_01bed93e(&local_70,0,0x18);
    cVar7 = '\x01';
  }
  else {
    local_70 = local_58;
    uStack_6c = local_54;
    uStack_68 = local_50;
    uStack_64 = uStack_4c;
    uStack_60 = uStack_48;
    uStack_5c = uStack_44;
    uStack_74 = uStack_3b;
    local_78 = uStack_3f;
    cVar7 = local_40;
  }
  FUN_01aae138(&local_34,auStack_98);
  if (local_28 != 0) {
    local_ac = 0;
    uVar2 = local_30 & 0xda1654c8;
    while( true ) {
      uVar4 = *(uint *)(local_34 + uVar2);
      uVar8 = (uVar4 & 0x80808080 ^ 0x80808080) & (uVar4 ^ 0x6d6d6d6d) + 0xfefefeff;
      while (uVar8 != 0) {
        uVar5 = uVar2 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                       (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & local_30
        ;
        piVar3 = (int *)(local_34 + -0x18 + uVar5 * -0x18);
        uVar8 = uVar8 - 1 & uVar8;
        if ((*piVar3 == 0x1262d22e && piVar3[2] == -0x25e9ab38) &&
            (piVar3[1] == -0x36bc0fa8 && piVar3[3] == 0x33a97108)) {
          local_34 = local_34 + uVar5 * -0x18;
          iVar1 = *(int *)(local_34 + -4);
          iVar6 = *(int *)(local_34 + -8) + (*(int *)(iVar1 + 8) - 1U & 0xfffffff8);
          (**(code **)(iVar1 + 0xc))(&local_58,(uint *)(iVar6 + 8));
          if ((local_58 != 0x1262d22e || local_50 != 0xda1654c8) ||
              (local_54 != 0xc943f058 || uStack_4c != 0x33a97108)) goto LAB_019cff20;
          uVar2 = *(uint *)(iVar6 + 8);
          uVar4 = *(uint *)(iVar6 + 0xc);
          local_50 = *(uint *)(iVar6 + 0x10);
          goto LAB_019cff50;
        }
      }
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      local_ac = local_ac + 4;
      uVar2 = uVar2 + local_ac & local_30;
    }
  }
LAB_019cff20:
  FUN_019ac130(&local_58,0);
  uVar2 = local_58 + 10;
  uVar4 = local_54 + (0xfffffff5 < local_58);
  if ((int)((local_54 ^ uVar4) & ~local_54) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281f4);
  }
LAB_019cff50:
  param_1[8] = uVar2;
  param_1[9] = uVar4;
  param_1[10] = local_50;
  *param_1 = local_70;
  param_1[1] = uStack_6c;
  param_1[2] = uStack_68;
  param_1[3] = uStack_64;
  param_1[4] = uStack_60;
  param_1[5] = uStack_5c;
  *(undefined4 *)((int)param_1 + 0x19) = local_78;
  *(char *)(param_1 + 6) = cVar7;
  param_1[7] = CONCAT31(uStack_74,local_78._3_1_);
  FUN_01822488(auStack_98);
  FUN_0164c100(&local_34);
  return;
}

