// FUN_00ab6b8c @ 00ab6b8c size=624 calls_out=5 calls_in=3
// strings: 

void FUN_00ab6b8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  uint uStack_30;
  
  FUN_019ac130(&local_40,0);
  local_4c = 0;
  local_50 = 0;
  local_60 = local_40;
  uStack_5c = local_3c;
  iStack_58 = local_38;
  local_48 = 0;
  FUN_019ac248(&local_40,&local_60,&local_50);
  uVar4 = local_34;
  if ((local_40 & 1) != 0) {
    FUN_00a21a7c(&local_40,"",local_38,local_34,uStack_30,&DAT_01d284b0);
LAB_00ab6db0:
    FUN_00a21a7c(param_1,&local_40,param_3,param_4,param_5,&DAT_01c100f8);
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    return;
  }
  uVar6 = FUN_01bf0ff0(local_38,local_34,0x3c,0);
  FUN_01bf0ff0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x3c,0);
  uVar7 = FUN_01bf0ff0(local_38,uVar4,0xe10,0);
  FUN_01bf0ff0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x18,0);
  if (uVar4 < 0xa8c0) {
    iVar1 = FUN_01bf0ff0(local_38,uVar4,0x15180,0);
    if ((!SCARRY4(iVar1,0x253d8c)) && (0xff908adb < iVar1 - 0x2cc0a1U)) {
      uVar2 = (int)(&UNK_00253d8c + iVar1) * 4 + 0x56ab9593;
      local_40 = uStack_30;
      uVar3 = uVar2 % 0x23ab1 | 3;
      uVar4 = uVar3 * 0x2cdb61;
      iVar1 = (short)(uVar2 / 0x23ab1) * 100 + uVar3 / 0x5b5;
      uVar2 = iVar1 - 1000000;
      if (0xd678e7c7 < uVar4) {
        uVar2 = iVar1 - 999999;
      }
      uVar3 = 3;
      if ((uVar2 * -0x3d70a3d7 >> 2 | uVar2 * 0x40000000) < 0x28f5c29) {
        uVar3 = 0xf;
      }
      uVar5 = uVar4 / 0xb36d84;
      if ((uVar3 & uVar2) == 0) {
        uVar5 = uVar4 / 0xb36d84 + 1;
      }
      uVar5 = uVar5 + 0x3c;
      if (0xd678e7c7 < uVar4) {
        uVar5 = uVar4 / 0xb36d84 + 0xfecf;
      }
      local_34 = (uint)local_34._3_1_ << 0x18;
      local_3c = extraout_r2_00 << 0x10 | extraout_r2 << 8 | local_38 + (int)uVar6 * -0x3c;
      uVar4 = uVar2 << 10;
      if ((uVar3 & uVar2) == 0) {
        uVar4 = uVar2 << 10 | 0x200;
      }
      local_38 = uVar4 + (uVar5 & 0xffff);
      goto LAB_00ab6db0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_0056c1e8,0x20,&DAT_01d284a0);
}

