// FUN_0153c128 @ 0153c128 size=264 calls_out=6 calls_in=2
// strings: Hash table capacity overflow

void FUN_0153c128(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = (undefined4 *)FUN_01671160();
  uVar3 = *puVar1;
  iVar4 = puVar1[1];
  puVar1 = (undefined4 *)FUN_01671044();
  uVar3 = (**(code **)(iVar4 + 0xc))(uVar3);
  FUN_00653054(&local_50,puVar1[2],*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1 + 8,uVar3);
  if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  iVar2 = (int)((ulonglong)(param_2 << 3) * 0x24924925 >> 0x20);
  FUN_019790d4(&local_30,4,4,
               (0xffffffffU >> LZCOUNT((iVar2 + (param_2 * 8 - iVar2 >> 1) >> 2) - 1)) + 1);
  if (local_30 == 0) {
    local_30 = 0;
  }
  else {
    FUN_01bed93e(local_30,0xff,local_2c + 5);
    iVar4 = local_24;
  }
  param_1[4] = local_50;
  param_1[5] = iStack_4c;
  param_1[6] = iStack_48;
  param_1[7] = iStack_44;
  param_1[8] = local_40;
  param_1[9] = iStack_3c;
  param_1[10] = iStack_38;
  param_1[0xb] = iStack_34;
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = iVar4;
  return;
}

