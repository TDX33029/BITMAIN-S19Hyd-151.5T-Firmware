// FUN_01732e5c @ 01732e5c size=552 calls_out=12 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01732e5c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  bool bVar14;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_2c;
  undefined1 local_28;
  
  FUN_01933ff0(&local_48,param_1);
  iVar1 = local_44;
  if (local_48 == 1) {
    local_5c = CONCAT31(local_5c._1_3_,(undefined1)local_40);
    local_60 = local_44;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_60,&DAT_01d194ac,&DAT_01d2c818);
  }
  uVar11 = local_40 & 0xff;
  local_60 = *param_3;
  local_5c = param_3[1];
  iStack_58 = param_3[2];
  iStack_54 = param_3[3];
  iStack_50 = param_3[4];
  iStack_4c = param_3[5];
  FUN_01656cb0(&local_48,param_2);
  iVar2 = local_44;
  if (local_48 == 1) {
    local_28 = (undefined1)local_40;
    local_2c = local_44;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d1949c,&DAT_01d2c998);
  }
  uVar12 = *(uint *)(iVar1 + 0x180);
  uVar3 = local_40 & 0xff;
  if (uVar12 != 0) {
    uVar10 = 0;
    iVar4 = local_44 + 8;
    do {
      if (*(uint *)(iVar1 + 0x170) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ddcc);
      }
      iVar5 = *(int *)(iVar1 + 0x16c) + uVar10 * 0xc;
      uVar7 = *(uint *)(iVar5 + 4);
      iVar8 = *(int *)(iVar5 + 8);
      local_48 = iVar1 + 0x158;
      local_44 = iVar8;
      local_40 = uVar7;
      iVar5 = FUN_01367c40(*(undefined4 *)(iVar1 + 0x18c),*(undefined4 *)(iVar1 + 400),iVar8,uVar7);
      puVar13 = *(undefined1 **)(iVar5 + 0x18);
      uVar6 = FUN_01367cb8(*(undefined4 *)(iVar1 + 0x18c),*(undefined4 *)(iVar1 + 400),iVar8,uVar7);
      FUN_01354b8c(&local_60,uVar6);
      FUN_01766e4c(iVar1 + 0xf0,iVar4,&local_48);
      FUN_0136ff34(iVar1 + 0xf0,&local_48,iVar1 + 8);
      FUN_01387ff4(iVar1 + 8,&local_48,puVar13 != &DAT_3b9aca00);
      bVar14 = *(uint *)(iVar1 + 0x180) < uVar12;
      if (!bVar14) {
        uVar10 = uVar10 + 1;
      }
      uVar12 = uVar12 - bVar14;
    } while (uVar10 < uVar12);
  }
  local_48 = local_60;
  local_44 = local_5c;
  local_40 = iStack_58;
  iStack_3c = iStack_54;
  iStack_38 = iStack_50;
  iStack_34 = iStack_4c;
  piVar9 = (int *)(iVar1 + 200);
  if (*(char *)piVar9 != '\x03') {
    FUN_01381bd4(piVar9);
  }
  *piVar9 = local_48;
  *(int *)(iVar1 + 0xcc) = local_44;
  *(uint *)(iVar1 + 0xd0) = local_40;
  *(int *)(iVar1 + 0xd4) = iStack_3c;
  *(int *)(iVar1 + 0xd8) = iStack_38;
  *(int *)(iVar1 + 0xdc) = iStack_34;
  FUN_00a97e8c(iVar2,uVar3);
  FUN_00a97e8c(iVar1,uVar11);
  return;
}

