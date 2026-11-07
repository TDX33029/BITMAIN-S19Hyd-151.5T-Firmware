// FUN_013d7ab0 @ 013d7ab0 size=656 calls_out=9 calls_in=0
// strings: schemeEcdsaSignerEd2

void FUN_013d7ab0(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *local_6c;
  undefined1 local_68;
  undefined1 local_67;
  int local_64;
  uint local_60;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [20];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  iVar3 = *param_1;
  local_68 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0050c2f1,3);
  uVar4 = *(uint *)(iVar3 + 0x20);
  iVar5 = *(int *)(iVar3 + 0x14);
  uVar6 = *(uint *)(iVar3 + 0x18);
  local_67 = 0;
  local_6c = param_2;
  if (uVar4 == 0) {
LAB_013d7b2c:
    local_64 = iVar5;
    local_60 = uVar4;
    FUN_01302c38(&local_6c,"schemeEcdsaSignerEd2",6,&local_64,&LAB_01674ec4);
    uVar2 = uVar4 + 1;
    if (0xfffffffe < uVar4) {
LAB_013d7b98:
      local_59 = 1;
      if ((uVar6 != uVar2) && (local_59 = 0, *(char *)(iVar5 + uVar2) != '/')) {
        local_59 = 1;
      }
      FUN_01302c38(&local_6c,&DAT_0056ab98,0x10,&local_59,&LAB_01a705e0);
      local_58 = FUN_01ac9d2c(iVar3);
      FUN_01302c38(&local_6c,&DAT_00570de8,8,&local_58,&LAB_01674ec4);
      local_50 = FUN_01ac9c00(iVar3);
      FUN_01302c38(&local_6c,&DAT_00571120,8,&local_50,FUN_013d7df0);
      FUN_01ac8d30(auStack_48,iVar3);
      FUN_01302c38(&local_6c,&DAT_0056d4cc,4,auStack_48,&DAT_013d7d84);
      local_34 = *(undefined4 *)(iVar3 + 0x1c);
      FUN_01302c38(&local_6c,&DAT_0056f388,4,&local_34,&LAB_017e2b04);
      local_30 = FUN_01ac96dc(iVar3);
      FUN_01302c38(&local_6c,&DAT_0056ef14,4,&local_30,&LAB_01674ec4);
      local_28 = FUN_01ac97e4(iVar3);
      FUN_01302c38(&local_6c,&DAT_0050c2f4,5,&local_28,FUN_013d7df0);
      local_20 = FUN_01ac98e4(iVar3);
      FUN_01302c38(&local_6c,&DAT_005708d8,8,&local_20,FUN_013d7df0);
      FUN_01302e1c();
      return;
    }
    if (uVar2 < uVar6) {
      if (-0x41 < *(char *)(iVar5 + uVar2)) goto LAB_013d7b98;
    }
    else if (uVar2 == uVar6) goto LAB_013d7b98;
    puVar1 = &DAT_01d2fcf8;
    uVar4 = uVar6;
  }
  else {
    if (uVar4 < uVar6) {
      if (-0x41 < *(char *)(iVar5 + uVar4)) goto LAB_013d7b2c;
    }
    else if (uVar4 == uVar6) goto LAB_013d7b2c;
    uVar2 = 0;
    puVar1 = &DAT_01d2fde8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(iVar5,uVar6,uVar2,uVar4,puVar1);
}

