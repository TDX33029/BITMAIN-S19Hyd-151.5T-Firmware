// FUN_018e3b8c @ 018e3b8c size=248 calls_out=3 calls_in=0
// strings: 

void FUN_018e3b8c(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint local_48;
  uint local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  uVar4 = param_3 * 0x10;
  bVar6 = 0xffffffe < param_3;
  bVar5 = param_3 == 0xfffffff;
  uVar2 = 0;
  if (param_3 < 0x10000000) {
    bVar6 = 0x7ffffffb < uVar4;
    bVar5 = uVar4 == 0x7ffffffc;
  }
  if (!bVar6 || bVar5) {
    if (uVar4 == 0) {
      local_44 = 4;
      local_48 = 0;
    }
    else {
      uVar2 = 4;
      local_44 = FUN_01298504(uVar4,4);
      if (local_44 == 0) goto LAB_018e3ba8;
      local_48 = param_3;
      if (param_3 != 0) {
        uVar3 = 0;
        do {
          if (uVar4 == 0) break;
          uVar2 = *(undefined4 *)(param_2 + 0xc);
          FUN_015e8ad4(&local_38,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
          puVar1 = (undefined4 *)(local_44 + uVar3 * 0x10);
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 - 0x10;
          param_2 = param_2 + 0x10;
          *puVar1 = local_38;
          puVar1[1] = uStack_34;
          puVar1[2] = uStack_30;
          puVar1[3] = uVar2;
          local_2c = uVar2;
        } while (param_3 != uVar3);
      }
    }
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = param_3;
    return;
  }
LAB_018e3ba8:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar2,uVar4);
}

