// FUN_01128110 @ 01128110 size=712 calls_out=8 calls_in=4
// strings: 

void FUN_01128110(undefined2 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_f4;
  int local_f0;
  uint local_ec;
  undefined2 local_e8;
  undefined1 uStack_e6;
  uint uStack_e5;
  undefined4 uStack_e1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8 [8];
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_30;
  
  iVar4 = 1;
  local_ec = 0;
  local_f0 = 1;
  local_f4 = 0;
  uVar6 = 0;
  if (param_3 != 0) {
    FUN_010e02bc(&local_f4,0,param_3);
    uVar6 = local_ec;
    iVar4 = local_f0;
    iVar3 = param_3 + -1;
    puVar2 = (undefined1 *)(local_f0 + local_ec);
    if (iVar3 != 0) {
      FUN_016dd606(puVar2,0,iVar3);
      local_ec = uVar6 + iVar3;
      puVar2 = (undefined1 *)(iVar4 + local_ec);
    }
    uVar6 = local_ec + 1;
    *puVar2 = 0;
  }
  local_ec = uVar6;
  FUN_00f5da98(&local_98,param_2,param_3,iVar4,uVar6,&DAT_0038a37e);
  if ((char)local_98 == '\x06') {
    if (3 < local_94) {
      uVar5 = local_94 - 4;
      if (uVar6 < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar5,local_94,uVar6,&DAT_0187f994);
      }
      FUN_016dd606(&local_70,0,0x41);
      local_98 = 0x6a09e667;
      local_94 = 0xbb67ae85;
      local_90 = 0x3c6ef372;
      uStack_8c = 0xa54ff53a;
      local_88 = 0x510e527f;
      uStack_84 = 0x9b05688c;
      uStack_80 = 0x1f83d9ab;
      uStack_7c = 0x5be0cd19;
      local_74 = 0;
      local_78 = 0;
      if (uVar5 >> 6 == 0) {
        FUN_016dd1aa(&local_70,iVar4,uVar5);
        uVar6 = uVar5;
      }
      else {
        local_74 = 0;
        local_78 = uVar5 >> 6;
        FUN_01585360(&local_98,iVar4);
        FUN_016dd1aa(&local_70,iVar4 + (uVar5 & 0x7fffffc0),uVar5 & 0x3f);
        uVar6 = uVar5 & 0x3f;
      }
      local_30 = (undefined1)uVar6;
      FUN_00f5dc50(&local_d8,&local_98);
      FUN_016dd606(&local_70,0,0x41);
      local_98 = 0x6a09e667;
      local_94 = 0xbb67ae85;
      local_90 = 0x3c6ef372;
      uStack_8c = 0xa54ff53a;
      local_88 = 0x510e527f;
      uStack_84 = 0x9b05688c;
      uStack_80 = 0x1f83d9ab;
      uStack_7c = 0x5be0cd19;
      local_74 = 0;
      local_78 = 0;
      local_70 = local_d8;
      uStack_6c = uStack_d4;
      uStack_68 = uStack_d0;
      uStack_64 = uStack_cc;
      local_60 = local_c8;
      uStack_5c = uStack_c4;
      uStack_58 = uStack_c0;
      uStack_54 = uStack_bc;
      local_30 = 0x20;
      FUN_00f5dc50(local_b8,&local_98);
      iVar1 = local_f0;
      iVar3 = local_f4;
      if (local_b8[0] == *(int *)(iVar4 + uVar5)) {
        uVar6 = local_ec;
        if (uVar5 < local_ec) {
          uVar6 = uVar5;
        }
        if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(2,uVar6,uVar6,&DAT_018876c8);
        }
        if (uVar6 != 0x22) {
          *(undefined1 *)((int)param_1 + 1) = 1;
        }
        else {
          FUN_016dd1aa((int)param_1 + 1,local_f0 + 2,0x20);
        }
        *(bool *)param_1 = uVar6 != 0x22;
        if (iVar3 != 0) {
          thunk_FUN_016d3fb4(iVar1);
        }
        return;
      }
      iVar4 = *(int *)(iVar4 + uVar5);
      local_e8 = (undefined2)local_b8[0];
      uStack_e6 = (undefined1)((uint)local_b8[0] >> 0x10);
      uStack_e5._1_3_ = (undefined3)iVar4;
      uStack_e5 = CONCAT31(uStack_e5._1_3_,(char)((uint)local_b8[0] >> 0x18));
      uStack_e1._0_1_ = (undefined1)((uint)iVar4 >> 0x18);
    }
  }
  else {
    local_e8 = local_98._1_2_;
    uStack_e6 = local_98._3_1_;
    uStack_e5 = local_94;
    uStack_e1 = local_90;
  }
  if (local_f4 != 0) {
    thunk_FUN_016d3fb4(local_f0);
  }
  *param_1 = 0x301;
  return;
}

