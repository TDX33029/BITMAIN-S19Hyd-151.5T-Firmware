// FUN_0197fe04 @ 0197fe04 size=552 calls_out=5 calls_in=0
// strings: `fmt::Error` from `SizeLimitedFmtAdapter` was discardedSizeLimitExhaustedLP | {size limit reached}

uint FUN_0197fe04(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  uint **local_2c;
  code *local_28;
  
  if (*param_1 != 2) {
    if ((*param_1 & 1) == 0) {
      uVar9 = *param_2;
      pcVar6 = *(code **)(param_2[1] + 0xc);
      iVar4 = (*pcVar6)(uVar9,param_1[4],param_1[5]);
      if (iVar4 != 0) {
        return 1;
      }
    }
    else {
      local_3c = param_1 + 1;
      local_34 = 1000000;
      local_38 = 0;
      if ((param_2[2] & 0x800000) == 0) {
        puVar5 = &DAT_00590e5f;
      }
      else {
        puVar5 = &DAT_00531476;
      }
      local_2c = &local_3c;
      local_28 = FUN_018a13cc;
      local_30 = param_2;
      iVar4 = FUN_012fa178(&local_38,&DAT_01d2213c,puVar5,&local_2c);
      if (iVar4 == 0 || local_38 == 0) {
        if (iVar4 != 0) {
          return 1;
        }
        if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc("`fmt::Error` from `SizeLimitedFmtAdapter` was discardedSizeLimitExhaustedLP"
                       ,0x37,&local_2c,&DAT_01d220fc,&DAT_01d22154);
        }
      }
      else {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"{size limit reached}",0x14);
        if (iVar4 != 0) {
          return 1;
        }
      }
      uVar9 = *param_2;
      pcVar6 = *(code **)(param_2[1] + 0xc);
    }
    uVar7 = (*pcVar6)(uVar9,param_1[6],param_1[7]);
    return uVar7;
  }
  uVar7 = param_1[9];
  if (uVar7 != 0) {
    uVar8 = param_1[8];
    do {
      FUN_012fbd94(&local_38,uVar8,uVar7);
      puVar1 = local_30;
      iVar4 = local_34;
      if (local_38 != 1) {
        iVar4 = FUN_012fb940(param_2,local_34,local_30);
        return (uint)(iVar4 != 0);
      }
      uVar3 = (uint)local_30 >> 8;
      iVar2 = FUN_012fb940(param_2,&DAT_00525a4d,3);
      if (iVar2 != 0) {
        return 1;
      }
      if (((uint)puVar1 & 1) == 0) {
        return 0;
      }
      uVar3 = iVar4 + (uVar3 & 0xff);
      if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar3,uVar7,uVar7,&DAT_01d275f8);
      }
      uVar8 = uVar8 + uVar3;
      uVar7 = uVar7 - uVar3;
    } while (uVar7 != 0);
  }
  return 0;
}

