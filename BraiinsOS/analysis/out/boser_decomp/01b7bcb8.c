// FUN_01b7bcb8 @ 01b7bcb8 size=876 calls_out=12 calls_in=1
// strings: 

int FUN_01b7bcb8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *extraout_r1;
  uint *puVar6;
  undefined8 uVar7;
  uint local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint *puStack_24;
  uint local_20;
  uint *puStack_1c;
  uint local_14;
  
  local_14 = DAT_01d53560;
  local_4c = 0;
  local_48 = 0;
  uVar1 = FUN_01b7b56c(param_1);
  iVar2 = FUN_01b7c604(0x400);
  if (iVar2 == 0) {
    local_44 = 0xc;
    uVar1 = 0;
  }
  else {
    if ((param_2 & 8) == 0) {
      local_58 = param_2 | 0x10;
    }
    else {
      FUN_01b7b534();
      local_58 = param_2;
    }
    iVar3 = FUN_01b7b850(uVar1,local_58 | 0x20);
    if (iVar3 == 0) {
      local_44 = 0xc;
    }
    else {
      uVar7 = FUN_01b7b47c(iVar3);
      if ((int)uVar7 == 0) {
        FUN_01b7db54(iVar3,(int)((ulonglong)uVar7 >> 0x20),0,0,0);
        puVar6 = extraout_r1;
        for (local_50 = -100; local_50 < 0x400; local_50 = local_50 + 1) {
          local_28 = 0;
          puStack_24 = (uint *)0x0;
          local_20 = 0;
          puStack_1c = (uint *)0x0;
          local_30 = 0;
          uStack_2c = 0;
          iVar4 = FUN_01b7db54(iVar3,puVar6,0,0,&local_30);
          local_20 = *(uint *)(iVar3 + 8);
          puStack_1c = *(uint **)(iVar3 + 0xc);
          local_28 = *(uint *)(iVar3 + 8) - local_30;
          puStack_24 = (uint *)(*(int *)(iVar3 + 0xc) -
                               (uStack_2c + (*(uint *)(iVar3 + 8) < local_30)));
          if ((local_28 == 0 && puStack_24 == (uint *)0x0) ||
             (local_20 == 0 && puStack_1c == (uint *)0x0)) {
            local_44 = 1;
            goto LAB_01b7bfa4;
          }
          if ((local_30 == 0 && uStack_2c == 0) ||
             (puStack_1c == puStack_24 && local_20 == local_28)) {
            local_44 = 2;
            goto LAB_01b7bfa4;
          }
          puVar6 = puStack_1c;
          if (-1 < local_50) {
            if (iVar4 != 0) {
              local_48 = local_48 + 1;
            }
            if (puStack_1c < puStack_24 ||
                (uint)((int)puStack_24 - (int)puStack_1c) < (uint)(local_20 <= local_28)) {
              local_4c = local_4c + 1;
            }
            puVar6 = (uint *)(iVar2 + local_50 * 8);
            *puVar6 = local_30;
            puVar6[1] = uStack_2c;
          }
        }
        if (local_4c < 4) {
          uVar5 = FUN_01b7d1f4(iVar3);
          if (uVar5 == 0) {
            local_44 = FUN_01b7c4a8(iVar2,0x400,uVar1);
            if ((local_44 == 0) && (0x399 < local_48)) {
              local_44 = 8;
            }
          }
          else if ((uVar5 & 1) == 0) {
            local_44 = 9;
          }
          else {
            local_44 = 10;
          }
        }
        else {
          local_44 = 3;
        }
      }
      else {
        local_44 = 0xc;
      }
    }
LAB_01b7bfa4:
    FUN_01b7c660(iVar2,0x400);
    if (((local_58 & 8) != 0) && (iVar3 != 0)) {
      FUN_01b7b4a4(iVar3);
    }
    uVar1 = FUN_01b7bc08(iVar3);
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,local_14 ^ DAT_01d53560,0);
  }
  return local_44;
}

