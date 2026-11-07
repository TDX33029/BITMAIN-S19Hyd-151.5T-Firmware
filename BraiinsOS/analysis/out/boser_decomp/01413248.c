// FUN_01413248 @ 01413248 size=528 calls_out=8 calls_in=7
// strings: 

void FUN_01413248(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_a4 [64];
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  FUN_0140df4c(&local_30,param_2,param_3,auStack_a4,"");
  puVar3 = local_30;
  if (((uint)local_28 & 0xff) == 3) {
    uVar1 = 1;
  }
  else {
    if (((uint)local_28 & 0xff) == 2) {
      *(char *)(param_1 + 2) = (char)local_30;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if (((uint)local_28 & 1) == 0) {
      uVar1 = 0;
      if ((int)local_2c < 0) {
LAB_014132d8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar1,local_2c);
      }
      local_64 = 1;
      local_5c = 0;
      if (local_2c != (undefined1 *)0x0) {
        uVar1 = 1;
        local_64 = FUN_01298504(local_2c,1);
        local_5c = (uint)local_2c;
        if (local_64 == 0) goto LAB_014132d8;
      }
      local_60 = 0;
      uVar2 = 0x20 - LZCOUNT(local_5c >> 10);
      if (6 < uVar2) {
        uVar2 = 7;
      }
      local_58 = uVar2 << 2 | 1;
      if (local_2c != (undefined1 *)0x0) {
        puVar4 = local_2c;
        do {
          if (""[(byte)*puVar3] == '\0') {
            *param_1 = 1;
            FUN_012840cc(&local_64);
            return;
          }
          local_30 = (uint *)CONCAT31(local_30._1_3_,""[(byte)*puVar3]);
          FUN_01284394(&local_64,&local_30,1);
          puVar4 = (undefined1 *)((int)puVar4 - 1);
          puVar3 = (uint *)((int)puVar3 + 1);
        } while (puVar4 != (undefined1 *)0x0);
      }
      uVar2 = local_58;
      if ((local_58 & 1) == 0) {
        local_48 = &DAT_01d2e520;
      }
      else {
        local_50 = local_64 - (local_58 >> 5);
        local_54 = local_5c + (local_58 >> 5);
        local_4c = local_60 + (local_58 >> 5);
        FUN_01283524(&local_48,&local_54);
        local_38 = uVar2 >> 5;
        if (local_40 < uVar2 >> 5) {
          local_28 = &local_34;
          local_34 = local_40;
          local_24 = &LAB_01a6a304;
          local_2c = &LAB_01a6a304;
          local_30 = &local_38;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_30,&DAT_01d2e534);
        }
        local_60 = local_40 - local_38;
        local_64 = local_44 + local_38;
        local_58 = local_3c;
      }
      param_1[1] = local_48;
      *param_1 = 0;
      param_1[2] = local_64;
      param_1[3] = local_60;
      param_1[4] = local_58;
      return;
    }
    FUN_012834b0(param_1 + 1,local_30,local_2c);
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

