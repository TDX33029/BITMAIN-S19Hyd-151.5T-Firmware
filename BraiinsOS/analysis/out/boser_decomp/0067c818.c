// FUN_0067c818 @ 0067c818 size=784 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_0067c818(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint *local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  uint *local_80;
  undefined4 *local_7c;
  undefined4 uStack_78;
  uint **local_70;
  code *local_6c;
  uint *local_68;
  code *local_64;
  uint *local_60;
  code *local_5c;
  uint **local_58;
  code *local_54;
  uint *local_50;
  code *local_4c;
  uint *local_48;
  code *local_44;
  uint *local_40;
  code *local_3c;
  uint **local_38;
  code *local_34;
  uint *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  
  if ((*param_1 & 1) == 0) {
    if ((char)param_1[7] == '\x02') {
      local_8c = (undefined4 *)thunk_FUN_01be5118(4);
      if (local_8c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      local_88 = 4;
      *local_8c = 0x656e6f4e;
      local_90 = (uint *)0x4;
    }
    else {
      local_30 = param_1 + 4;
      local_6c = FUN_0067bcf4;
      local_70 = &local_30;
      FUN_00664898(&local_90,&DAT_00593cf2,&local_70);
    }
    local_70 = &local_30;
    local_28 = 0;
    local_6c = (code *)&DAT_01c047d4;
    local_30 = (uint *)0x0;
    local_64 = (code *)0x0;
    local_2c = (undefined4 *)&DAT_00000001;
    local_68 = (uint *)0x60000020;
    iVar1 = FUN_0067c534((char)param_1[0x20],&local_70);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_80,&DAT_01c047ec,&DAT_01d30334);
    }
    local_70 = &local_80;
    local_40 = param_1 + 8;
    local_80 = local_30;
    local_7c = local_2c;
    uStack_78 = local_28;
    local_38 = (uint **)(param_1 + 0x1a);
    local_34 = FUN_0069c520;
    local_48 = param_1 + 0x17;
    local_50 = param_1 + 0x14;
    local_58 = &local_90;
    local_60 = param_1 + 0x11;
    local_3c = FUN_0067cbdc;
    local_44 = FUN_0075db40;
    local_4c = FUN_0075db40;
    local_54 = (code *)&LAB_00632348;
    local_5c = FUN_0075db40;
    local_64 = FUN_0075db40;
    local_68 = param_1 + 0xe;
    local_6c = (code *)&LAB_005fdc1c;
    uVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_005a0505,&local_70);
    FUN_019bb7e0(local_80,local_7c);
    puVar3 = local_90;
    puVar4 = local_8c;
  }
  else {
    local_90 = (uint *)param_1[2];
    local_8c = (undefined4 *)param_1[3];
    local_70 = &local_30;
    local_28 = 0;
    local_30 = (uint *)0x0;
    local_64 = (code *)0x0;
    local_68 = (uint *)0x60000020;
    local_2c = (undefined4 *)&DAT_00000001;
    local_6c = (code *)&DAT_01c047d4;
    iVar1 = FUN_0067c534((char)param_1[0x20],&local_70);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_80,&DAT_01c047ec,&DAT_01d30334);
    }
    local_70 = &local_80;
    local_80 = local_30;
    local_7c = local_2c;
    uStack_78 = local_28;
    local_38 = &local_90;
    local_40 = param_1 + 0x1d;
    local_34 = FUN_012fd074;
    local_3c = FUN_0069c520;
    local_44 = FUN_0069c520;
    local_48 = param_1 + 0x1a;
    local_50 = param_1 + 8;
    local_58 = (uint **)(param_1 + 0x14);
    local_60 = param_1 + 0x11;
    local_68 = param_1 + 0xe;
    local_4c = FUN_0067cbdc;
    local_54 = FUN_0075db40;
    local_5c = FUN_0075db40;
    local_64 = FUN_0075db40;
    local_6c = (code *)&LAB_005fdc1c;
    uVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_005b48ca,&local_70);
    puVar3 = local_80;
    puVar4 = local_7c;
  }
  FUN_019bb7e0(puVar3,puVar4);
  return uVar2;
}

