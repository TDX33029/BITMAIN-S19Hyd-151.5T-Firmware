// FUN_013c767c @ 013c767c size=572 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_013c767c(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_4c;
  uint local_48;
  uint *local_44;
  code *local_40;
  uint *local_3c;
  code *local_38;
  uint *local_34;
  undefined1 *local_30;
  uint local_2c;
  uint local_28;
  
  pcVar4 = *(code **)(param_3 + 0xc);
  iVar1 = (*pcVar4)(param_2,&DAT_003cea17,0xf);
  if (iVar1 == 0) {
    uVar9 = param_1[0x50];
    uVar6 = param_1[0x48];
    uVar7 = param_1[0x49];
    uVar8 = param_1[0x4f];
    iVar1 = uVar9 * 0x14;
    uVar5 = 0;
    do {
      if (iVar1 == 0) {
        uVar5 = param_1[0x53];
        if (1 < uVar5) {
          iVar1 = (*pcVar4)(param_2,&DAT_0041950e,1);
          if (iVar1 != 0) {
            return 1;
          }
          uVar6 = 0;
          uVar7 = param_1[0x52];
          do {
            local_3c = &local_28;
            local_28 = *(uint *)(uVar7 + uVar6 * 4);
            local_38 = FUN_007883b8;
            local_40 = FUN_007883b8;
            local_44 = &local_2c;
            local_2c = uVar6;
            iVar1 = FUN_00fa948c(param_2,param_3,&DAT_003cea28,&local_44);
            if (iVar1 != 0) {
              return 1;
            }
            uVar6 = uVar6 + 1;
          } while (uVar5 != uVar6);
        }
        iVar1 = (*pcVar4)(param_2,&DAT_0041950e,1);
        if (iVar1 != 0) {
          return 1;
        }
        local_40 = FUN_013929d8;
        local_44 = param_1;
        iVar1 = FUN_00fa948c(param_2,param_3,&DAT_0057885c,&local_44);
        if (iVar1 == 0) {
          uVar3 = (*pcVar4)(param_2,&DAT_003cea26,2);
          return uVar3;
        }
        return 1;
      }
      if (uVar9 == uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893d60);
      }
      local_48 = 0x20;
      if (uVar7 == uVar5) {
        local_48 = 0x3e;
      }
      if (uVar6 == uVar5) {
        local_48 = 0x5e;
      }
      local_30 = &LAB_013c78ec;
      local_34 = &local_4c;
      local_38 = FUN_007883b8;
      local_3c = &local_28;
      local_40 = FUN_00faaf34;
      local_44 = &local_48;
      local_4c = uVar8;
      local_28 = uVar5;
      iVar2 = FUN_00fa948c(param_2,param_3,&DAT_003cea3e,&local_44);
      iVar1 = iVar1 + -0x14;
      uVar5 = uVar5 + 1;
      uVar8 = uVar8 + 0x14;
    } while (iVar2 == 0);
  }
  return 1;
}

