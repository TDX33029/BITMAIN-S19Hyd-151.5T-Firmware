// FUN_01b42630 @ 01b42630 size=784 calls_out=10 calls_in=0
// strings: 

undefined8 FUN_01b42630(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int local_1a80;
  undefined4 local_1a7c;
  undefined1 auStack_1a78 [204];
  undefined1 auStack_19ac [204];
  undefined1 auStack_18e0 [204];
  undefined1 auStack_1814 [2032];
  int local_1024;
  int local_2c;
  
  local_2c = DAT_01d53560;
  puVar10 = auStack_1814;
  local_1a7c = param_4;
  local_1024 = param_1;
  FUN_01b425e0(param_1,auStack_19ac);
  uVar8 = 2;
  FUN_01b424bc(auStack_18e0,param_3);
  do {
    if ((uVar8 & 1) == 0) {
      FUN_01b3ee18(param_1,puVar10,auStack_19ac + (uVar8 >> 1) * 0xcc);
    }
    else {
      FUN_01b3f8c0(param_1,puVar10,auStack_18e0,puVar10 + -0xcc);
    }
    uVar8 = uVar8 + 1;
    puVar10 = puVar10 + 0xcc;
  } while (uVar8 != 0x20);
  uVar1 = FUN_01b3d268(param_1);
  piVar7 = &local_1a80;
  local_1a80 = 1;
  uVar8 = uVar1;
  while (uVar9 = uVar8, uVar8 = uVar9 - 1, uVar8 < uVar1) {
    if (local_1a80 == 0) {
      FUN_01b3ee18(param_1,param_2,param_2);
    }
    piVar7 = (int *)((ulonglong)uVar8 * 0xcccccccd);
    if (uVar8 == ((uint)((ulonglong)uVar8 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar8 / 5) {
      uVar11 = *(undefined4 *)(param_1 + 0xec);
      iVar2 = FUN_01b3594c(local_1a7c,uVar11,uVar9 + 3);
      iVar3 = FUN_01b3594c(local_1a7c,uVar11,uVar9 + 2);
      iVar4 = FUN_01b3594c(local_1a7c,uVar11,uVar9 + 1);
      iVar5 = FUN_01b3594c(local_1a7c,uVar11,uVar9);
      uVar6 = FUN_01b3594c(local_1a7c,uVar11,uVar8);
      FUN_01b257dc(auStack_1a78,0,0xcc);
      uVar9 = 0;
      puVar10 = auStack_19ac;
      do {
        uVar12 = FUN_01b0c688((iVar2 << 4 | iVar3 << 3 | uVar6 | iVar4 << 2 | iVar5 << 1) & 0xff ^
                              uVar9,auStack_1a78);
        uVar9 = uVar9 + 1;
        FUN_01b3f84c(param_1,(int)((ulonglong)uVar12 >> 0x20),(int)uVar12,puVar10,auStack_1a78);
        puVar10 = puVar10 + 0xcc;
      } while (uVar9 != 0x20);
      if (local_1a80 == 0) {
        FUN_01b3f8c0(param_1,param_2,param_2,auStack_1a78);
      }
      else {
        FUN_01b424bc(param_2,auStack_1a78);
      }
      piVar7 = &local_1a80;
      local_1a80 = 0;
    }
  }
  if (local_1a80 != 0) {
    FUN_01b425e0(param_1,param_2,piVar7);
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

