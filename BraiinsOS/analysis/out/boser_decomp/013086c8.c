// FUN_013086c8 @ 013086c8 size=408 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_013086c8(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  code *local_1c;
  
  puVar1 = (uint *)*param_1;
  if ((*puVar1 & 1) == 0) {
    local_28 = (undefined1 *)param_1[1];
    uVar5 = *param_2;
    uVar6 = param_2[1];
    puVar4 = &DAT_005ba348;
  }
  else {
    local_30 = puVar1[2];
    local_2c = puVar1[3];
    local_28 = (undefined1 *)param_1[1];
    uVar5 = *param_2;
    uVar6 = param_2[1];
    local_1c = FUN_012fd074;
    puVar4 = &DAT_0059d815;
    local_20 = (undefined1 *)&local_30;
  }
  local_24 = &DAT_0197a814;
  iVar2 = FUN_012fa178(uVar5,uVar6,puVar4,&local_28);
  if (iVar2 != 0) {
    return 1;
  }
  uVar3 = *(uint *)param_1[2];
  if (uVar3 != 0) {
    if (9 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar3,9,&DAT_01ce4ad0);
    }
    local_30 = param_1[3];
    local_2c = uVar3;
    if ((*(byte *)((int)param_2 + 0xb) & 0x10) == 0) {
      uVar3 = *(uint *)param_1[4];
      if (uVar3 >> 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0056adc8,0x41,&DAT_01ce4ac0);
      }
    }
    else {
      uVar3 = (uint)*(ushort *)((int)param_2 + 0xe);
    }
    local_1c = (code *)CONCAT22(local_1c._2_2_,(short)uVar3);
    local_20 = (undefined1 *)0x0;
    local_24 = &DAT_0197a814;
    local_28 = (undefined1 *)&local_30;
    iVar2 = FUN_012fa178(uVar5,uVar6,&DAT_0042c990,&local_28);
    if (iVar2 != 0) {
      return 1;
    }
  }
  local_28 = (undefined1 *)param_1[5];
  local_24 = &DAT_0197a814;
  uVar5 = FUN_012fa178(uVar5,uVar6,&DAT_00590e5f,&local_28);
  return uVar5;
}

