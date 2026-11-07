// FUN_00012180 @ 00012180  size=2716  callers=1
// program: FileParser


undefined8 FUN_00012180(int param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int local_74;
  uint local_70;
  int iStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  int iStack_5c;
  uint local_58;
  int iStack_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = 0x51;
  local_3c = 0;
  local_78 = param_2;
  local_74 = param_1;
  if (param_2 < 0x11) {
    uVar9 = FUN_000116c8(param_1,param_2);
  }
  else if (param_2 < 0x21) {
    uVar9 = FUN_00011a00(param_1,param_2);
  }
  else if (param_2 < 0x41) {
    uVar9 = FUN_00011be0(param_1,param_2);
  }
  else {
    local_28._0_4_ = 0x51;
    local_28._4_4_ = 0;
    local_30._0_4_ = 0x4e64b6d4;
    local_30._4_4_ = 0x226bb95b;
    local_38 = FUN_000114c8(0x22096bdd,0x919387da);
    local_38 = local_38 * -0x651e95c4d06fbfb1;
    local_60 = 0;
    iStack_5c = 0;
    local_58 = 0;
    iStack_54 = 0;
    local_70 = 0;
    iStack_6c = 0;
    local_68 = 0;
    uStack_64 = 0;
    iVar4 = (uint)local_28 * -0x651e95c5;
    iVar5 = local_28._4_4_ * 0x2f90404f;
    uVar1 = (ulonglong)(uint)local_28;
    lVar10 = FUN_00011490(local_74);
    lVar10 = lVar10 + CONCAT44(iVar4 + iVar5 + (int)(uVar1 * 0x2f90404f >> 0x20),
                               (int)(uVar1 * 0x2f90404f));
    local_44 = local_74 + (local_78 - 1 & 0xffffffc0);
    local_48 = local_44 + ((local_78 - 1 & 0x3f) - 0x3f);
    lVar11 = local_38;
    do {
      lVar3 = CONCAT44(iStack_5c,local_60);
      lVar2 = lVar10 + local_30;
      local_38 = lVar11;
      local_28 = lVar10;
      lVar11 = FUN_00011490(local_74 + 8);
      lVar11 = lVar11 + lVar2 + lVar3;
      lVar11 = FUN_00011514((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),0x25);
      local_28 = lVar11 * -0x4b6d499041670d8d;
      lVar10 = local_30 + CONCAT44(iStack_54,local_58);
      lVar11 = FUN_00011490(local_74 + 0x30);
      lVar11 = lVar11 + lVar10;
      lVar10 = FUN_00011514((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),0x2a);
      lVar11 = CONCAT44(iStack_5c,local_60);
      local_30 = lVar10 * -0x4b6d499041670d8d;
      local_28._0_4_ = (uint)local_28 ^ local_68;
      local_28._4_4_ = local_28._4_4_ ^ uStack_64;
      lVar10 = FUN_00011490(local_74 + 0x28);
      local_30 = local_30 + lVar10 + lVar11;
      lVar11 = local_38 + CONCAT44(iStack_6c,local_70);
      lVar11 = FUN_00011514((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),0x21);
      local_38 = lVar11 * -0x4b6d499041670d8d;
      FUN_000120dc(&local_60,local_74,(int)((ulonglong)local_58 * 0xbe98f273),
                   iStack_54 * -0x41670d8d + local_58 * -0x4b6d4991 +
                   (int)((ulonglong)local_58 * 0xbe98f273 >> 0x20),local_70 + (uint)local_28,
                   iStack_6c + local_28._4_4_ + (uint)CARRY4(local_70,(uint)local_28));
      iVar4 = local_74 + 0x20;
      lVar11 = local_38 + CONCAT44(uStack_64,local_68);
      lVar10 = FUN_00011490(local_74 + 0x10);
      FUN_000120dc(&local_70,iVar4,(int)lVar11,(int)((ulonglong)lVar11 >> 0x20),lVar10 + local_30);
      lVar10 = local_38;
      local_38._0_4_ = (uint)local_28;
      local_38._4_4_ = local_28._4_4_;
      lVar11 = CONCAT44(local_28._4_4_,(uint)local_28);
      local_74 = local_74 + 0x40;
    } while (local_74 != local_44);
    uVar6 = (uint)local_28 * 2 & 0x1fe;
    local_50 = uVar6 + 0xbe98f273;
    local_4c = (0x41670d8c < uVar6) + 0xb492b66f;
    local_74 = local_48;
    uVar7 = local_78 - 1 & 0x3f;
    uVar6 = local_70 + uVar7;
    iStack_6c = iStack_6c + (uint)CARRY4(local_70,uVar7);
    bVar8 = CARRY4(local_60,uVar6);
    local_60 = local_60 + uVar6;
    iStack_5c = iStack_5c + iStack_6c + (uint)bVar8;
    lVar2 = CONCAT44(iStack_5c,local_60);
    local_70 = uVar6 + local_60;
    iStack_6c = iStack_6c + iStack_5c + (uint)CARRY4(uVar6,local_60);
    lVar11 = lVar10 + local_30;
    local_28 = lVar10;
    lVar10 = FUN_00011490(local_48 + 8);
    lVar10 = lVar11 + lVar2 + lVar10;
    lVar11 = FUN_00011514((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x25);
    local_28 = lVar11 * CONCAT44(local_4c,local_50);
    lVar10 = local_30 + CONCAT44(iStack_54,local_58);
    lVar11 = FUN_00011490(local_74 + 0x30);
    lVar11 = lVar11 + lVar10;
    lVar11 = FUN_00011514((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),0x2a);
    local_30 = lVar11 * CONCAT44(local_4c,local_50);
    local_28._0_4_ = (uint)local_28 ^ local_68 * 9;
    local_28._4_4_ =
         (uStack_64 << 3 | local_68 >> 0x1d) + uStack_64 + (uint)CARRY4(local_68 * 8,local_68) ^
         local_28._4_4_;
    bVar8 = CARRY4(local_60 * 8,local_60);
    iVar5 = local_60 * 9;
    iVar4 = (iStack_5c << 3 | local_60 >> 0x1d) + iStack_5c;
    lVar11 = FUN_00011490(local_74 + 0x28);
    local_30 = local_30 + lVar11 + CONCAT44(iVar4 + (uint)bVar8,iVar5);
    local_38 = FUN_00011514(local_70 + (uint)local_38,
                            iStack_6c + local_38._4_4_ + (uint)CARRY4(local_70,(uint)local_38),0x21)
    ;
    local_38 = local_38 * CONCAT44(local_4c,local_50);
    FUN_000120dc(&local_88,local_74,(int)((ulonglong)local_58 * (ulonglong)local_50),
                 iStack_54 * local_50 + local_58 * local_4c +
                 (int)((ulonglong)local_58 * (ulonglong)local_50 >> 0x20),local_70 + (uint)local_28,
                 iStack_6c + local_28._4_4_ + (uint)CARRY4(local_70,(uint)local_28));
    local_60 = local_88;
    iStack_5c = uStack_84;
    local_58 = uStack_80;
    iStack_54 = uStack_7c;
    iVar4 = local_74 + 0x20;
    lVar11 = local_38 + CONCAT44(uStack_64,local_68);
    lVar10 = FUN_00011490(local_74 + 0x10);
    FUN_000120dc(&local_88,iVar4,(int)lVar11,(int)((ulonglong)lVar11 >> 0x20),lVar10 + local_30);
    lVar11 = local_38;
    local_70 = local_88;
    iStack_6c = uStack_84;
    local_68 = uStack_80;
    uStack_64 = uStack_7c;
    local_38._0_4_ = (uint)local_28;
    local_38._4_4_ = local_28._4_4_;
    local_28 = lVar11;
    lVar11 = FUN_00011598(local_60,iStack_5c,local_88,uStack_84,local_50,local_4c);
    lVar10 = FUN_000114c8((undefined4)local_30,local_30._4_4_);
    lVar11 = lVar11 + lVar10 * -0x3c5a37a36834ced9 + CONCAT44(local_38._4_4_,(uint)local_38);
    lVar10 = FUN_00011598(local_58,iStack_54,local_68,uStack_64,local_50,local_4c);
    uVar9 = FUN_00011598((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),(int)(lVar10 + local_28),
                         (int)((ulonglong)(lVar10 + local_28) >> 0x20),local_50,local_4c);
  }
  return uVar9;
}

