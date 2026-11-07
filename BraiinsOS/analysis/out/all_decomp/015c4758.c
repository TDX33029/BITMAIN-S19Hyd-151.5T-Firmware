// FUN_015c4758 @ 015c4758 size=552 calls_out=5 calls_in=0
// strings: `fmt::Error` from `SizeLimitedFmtAdapter` was discarded | {size limit reached}

/* WARNING: Type propagation algorithm not settling */

uint FUN_015c4758(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *local_3c;
  int local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  uint **local_2c;
  code *local_28;
  
  if (*param_1 != 2) {
    if ((*param_1 & 1) == 0) {
      uVar9 = *param_2;
      pcVar6 = *(code **)(param_2[1] + 0xc);
      iVar3 = (*pcVar6)(uVar9,param_1[4],param_1[5]);
      if (iVar3 != 0) {
        return 1;
      }
    }
    else {
      local_3c = param_1 + 1;
      local_34 = &DAT_000f4240;
      local_38 = 0;
      if ((param_2[2] & 0x800000) == 0) {
        puVar5 = &DAT_00590e71;
      }
      else {
        puVar5 = &DAT_00414b9a;
      }
      local_2c = &local_3c;
      local_28 = FUN_0150050c;
      local_30 = param_2;
      iVar3 = FUN_00fa948c(&local_38,&DAT_018a73d8,puVar5,&local_2c);
      if (iVar3 == 0 || local_38 == 0) {
        if (iVar3 != 0) {
          return 1;
        }
        if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("`fmt::Error` from `SizeLimitedFmtAdapter` was discarded",0x37,&local_2c,
                       &DAT_018a7398,&DAT_018a73f0);
        }
      }
      else {
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"{size limit reached}",0x14);
        if (iVar3 != 0) {
          return 1;
        }
      }
      uVar9 = *param_2;
      pcVar6 = *(code **)(param_2[1] + 0xc);
    }
    uVar8 = (*pcVar6)(uVar9,param_1[6],param_1[7]);
    return uVar8;
  }
  puVar7 = (undefined1 *)param_1[9];
  if (puVar7 != (undefined1 *)0x0) {
    uVar8 = param_1[8];
    do {
      FUN_00fab1e0(&local_38,uVar8,puVar7);
      puVar2 = local_30;
      puVar4 = local_34;
      if (local_38 != 1) {
        iVar3 = FUN_00faace8(param_2,local_34,local_30);
        return (uint)(iVar3 != 0);
      }
      uVar1 = (uint)local_30 >> 8;
      iVar3 = FUN_00faace8(param_2,&DAT_0040fb25,3);
      if (iVar3 != 0) {
        return 1;
      }
      if (((uint)puVar2 & 1) == 0) {
        return 0;
      }
      puVar4 = puVar4 + (uVar1 & 0xff);
      if (puVar7 < puVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(puVar4,puVar7,puVar7,&DAT_018aa9f4);
      }
      uVar8 = uVar8 + (int)puVar4;
      puVar7 = puVar7 + -(int)puVar4;
    } while (puVar7 != (undefined1 *)0x0);
  }
  return 0;
}

