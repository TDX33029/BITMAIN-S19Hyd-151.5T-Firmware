// FUN_017e2830 @ 017e2830 size=656 calls_out=9 calls_in=0
// strings: schemeEcdsaSignerEd2

void FUN_017e2830(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
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
  
  local_68 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0050c2f1,3);
  uVar3 = *(uint *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x14);
  uVar5 = *(uint *)(param_1 + 0x18);
  local_67 = 0;
  local_6c = param_2;
  if (uVar3 == 0) {
LAB_017e28ac:
    local_64 = iVar4;
    local_60 = uVar3;
    FUN_01302c38(&local_6c,"schemeEcdsaSignerEd2",6,&local_64,&LAB_01674ec4);
    uVar2 = uVar3 + 1;
    if (0xfffffffe < uVar3) {
LAB_017e2918:
      local_59 = 1;
      if ((uVar5 != uVar2) && (local_59 = 0, *(char *)(iVar4 + uVar2) != '/')) {
        local_59 = 1;
      }
      FUN_01302c38(&local_6c,&DAT_0056ab98,0x10,&local_59,&LAB_01a705e0);
      local_58 = FUN_01ac9d2c(param_1);
      FUN_01302c38(&local_6c,&DAT_00570de8,8,&local_58,&LAB_01674ec4);
      local_50 = FUN_01ac9c00(param_1);
      FUN_01302c38(&local_6c,&DAT_00571120,8,&local_50,FUN_0143db80);
      FUN_01ac8d30(auStack_48,param_1);
      FUN_01302c38(&local_6c,&DAT_0056d4cc,4,auStack_48,&DAT_017e2b74);
      local_34 = *(undefined4 *)(param_1 + 0x1c);
      FUN_01302c38(&local_6c,&DAT_0056f388,4,&local_34,&LAB_017e2b04);
      local_30 = FUN_01ac96dc(param_1);
      FUN_01302c38(&local_6c,&DAT_0056ef14,4,&local_30,&LAB_01674ec4);
      local_28 = FUN_01ac97e4(param_1);
      FUN_01302c38(&local_6c,&DAT_0050c2f4,5,&local_28,FUN_0143db80);
      local_20 = FUN_01ac98e4(param_1);
      FUN_01302c38(&local_6c,&DAT_005708d8,8,&local_20,FUN_0143db80);
      FUN_01302e1c();
      return;
    }
    if (uVar2 < uVar5) {
      if (-0x41 < *(char *)(iVar4 + uVar2)) goto LAB_017e2918;
    }
    else if (uVar2 == uVar5) goto LAB_017e2918;
    puVar1 = &DAT_01d2fcf8;
    uVar3 = uVar5;
  }
  else {
    if (uVar3 < uVar5) {
      if (-0x41 < *(char *)(iVar4 + uVar3)) goto LAB_017e28ac;
    }
    else if (uVar3 == uVar5) goto LAB_017e28ac;
    uVar2 = 0;
    puVar1 = &DAT_01d2fde8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(iVar4,uVar5,uVar2,uVar3,puVar1);
}

