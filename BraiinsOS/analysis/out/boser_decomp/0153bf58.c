// FUN_0153bf58 @ 0153bf58 size=324 calls_out=6 calls_in=2
// strings: Hash table capacity overflow

void FUN_0153bf58(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  puVar1 = (undefined4 *)FUN_01671160();
  uVar3 = *puVar1;
  iVar4 = puVar1[1];
  puVar1 = (undefined4 *)FUN_01671044();
  uVar3 = (**(code **)(iVar4 + 0xc))(uVar3);
  FUN_00653054(&local_50,puVar1[2],*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1 + 8,uVar3);
  if (param_2 == 0) {
    iVar4 = 0;
    local_28 = 0;
    local_2c = 0;
    local_30 = &DAT_0056d238;
  }
  else {
    if (param_2 < 0xf) {
      iVar2 = (param_2 & 8) + 8;
      if (param_2 < 4) {
        iVar2 = 4;
      }
    }
    else {
      if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
      }
      iVar2 = (int)((ulonglong)(param_2 << 3) * 0x24924925 >> 0x20);
      iVar2 = (0xffffffffU >> LZCOUNT((iVar2 + (param_2 * 8 - iVar2 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_30,0x20,4,iVar2);
    if (local_30 == (undefined4 *)0x0) {
      local_30 = (undefined4 *)0x0;
    }
    else {
      FUN_01bed93e(local_30,0xff,local_2c + 5);
      iVar4 = local_24;
    }
  }
  param_1[4] = local_50;
  param_1[5] = uStack_4c;
  param_1[6] = uStack_48;
  param_1[7] = uStack_44;
  param_1[8] = local_40;
  param_1[9] = uStack_3c;
  param_1[10] = uStack_38;
  param_1[0xb] = uStack_34;
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = iVar4;
  return;
}

