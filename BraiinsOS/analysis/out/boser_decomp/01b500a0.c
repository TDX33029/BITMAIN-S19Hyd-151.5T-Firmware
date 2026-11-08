// FUN_01b500a0 @ 01b500a0 size=304 calls_out=7 calls_in=1
// strings: 

void FUN_01b500a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint local_48;
  uint local_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b26974(auStack_40,param_2,0x10,0);
  uVar9 = FUN_01b28590(auStack_40);
  uVar5 = FUN_01b28590(auStack_38);
  uVar1 = uVar5 >> 1;
  uVar2 = (uint)uVar9 >> 1;
  uVar10 = FUN_01b0c688(~(uint)uVar9 & 1);
  uVar7 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar3 = (uint)((uVar9 >> 1) >> 0x20);
  uVar4 = uVar7 >> 1;
  iVar6 = FUN_01b0c6a4((int)uVar10,0xe1,0);
  uVar8 = uVar4 ^ iVar6 << 0x18;
  local_48 = uVar4 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18;
  local_44 = uVar1 << 0x18 | ((uVar1 & 0xff00) >> 8) << 0x10 | ((uVar1 & 0xff0000) >> 0x10) << 8 |
             (uVar1 | uVar7 << 0x1f) >> 0x18;
  FUN_01b26974(auStack_40,&local_48,8);
  local_44 = uVar2 << 0x18 | ((uVar2 & 0xff00) >> 8) << 0x10 | ((uVar2 & 0xff0000) >> 0x10) << 8 |
             (uint)(uVar9 >> 1) >> 0x18;
  local_48 = uVar3 << 0x18 | ((uVar3 & 0xff00) >> 8) << 0x10 | ((uVar3 & 0xff0000) >> 0x10) << 8 |
             (uVar5 << 0x1f | uVar3) >> 0x18;
  FUN_01b26974(auStack_38,&local_48,8);
  FUN_01b4f804(param_1 + 0x110,param_1 + 0x114,param_1 + 0x10,&local_48,auStack_40);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  FUN_01b257dc(param_1,0,0x10,0);
  return;
}

