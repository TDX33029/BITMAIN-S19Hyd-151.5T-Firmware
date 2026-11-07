// FUN_016e3a00 @ 016e3a00 size=232 calls_out=3 calls_in=1
// strings: 

void FUN_016e3a00(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  uint local_48;
  uint local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  uVar3 = param_3 * 0x10;
  bVar6 = 0xffffffe < param_3;
  bVar5 = param_3 == 0xfffffff;
  uVar4 = 0;
  if (param_3 < 0x10000000) {
    bVar6 = 0x7ffffffb < uVar3;
    bVar5 = uVar3 == 0x7ffffffc;
  }
  if (!bVar6 || bVar5) {
    if (uVar3 == 0) {
      local_44 = 4;
      local_48 = 0;
    }
    else {
      uVar4 = 4;
      local_44 = FUN_01298504(uVar3,4);
      if (local_44 == 0) goto LAB_016e3a1c;
      local_48 = param_3;
      if (param_3 != 0) {
        uVar2 = 0;
        do {
          if (uVar3 == 0) break;
          FUN_015e8ad4(&local_38,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
          local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(param_2 + 0xc));
          puVar1 = (undefined4 *)(local_44 + uVar2 * 0x10);
          uVar2 = uVar2 + 1;
          uVar3 = uVar3 - 0x10;
          param_2 = param_2 + 0x10;
          *puVar1 = local_38;
          puVar1[1] = uStack_34;
          puVar1[2] = uStack_30;
          puVar1[3] = local_2c;
        } while (param_3 != uVar2);
      }
    }
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = param_3;
    return;
  }
LAB_016e3a1c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar4,uVar3);
}

