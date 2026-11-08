// FUN_014b70c8 @ 014b70c8 size=624 calls_out=9 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_014b70c8(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined2 local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_6c = 0x1b6;
  uVar5 = 0;
  local_70 = 0;
  local_68 = &LAB_01000100;
  local_64 = 0;
  FUN_019a581c(&local_60,&local_70,param_1,param_2);
  if ((char)local_60 == '\x04') {
    if (param_4 != (undefined *)0x0) {
      ppuVar4 = &local_34;
      do {
        puVar1 = (undefined *)FUN_01bf053e(local_5c,param_3,param_4);
        if (puVar1 == (undefined *)0xffffffff) {
          puVar2 = (undefined4 *)FUN_01be3244();
          local_34 = (undefined4 *)((uint)local_34 & 0xffffff00);
          local_30 = (undefined *)*puVar2;
          if ((undefined *)*puVar2 != (undefined *)0x4) goto LAB_014b71bc;
          FUN_0069603c(ppuVar4);
        }
        else {
          local_30 = puVar1;
          local_34 = (undefined4 *)CONCAT31(local_34._1_3_,4);
          if (puVar1 == (undefined *)0x0) {
            ppuVar4 = (undefined4 **)&DAT_01d2e7c8;
LAB_014b71bc:
            uVar5 = 0;
            if (((uint)*ppuVar4 & 0xff) != 4) {
              local_54 = ppuVar4[1];
              local_34 = &local_40;
              local_38 = 0;
              local_40 = 0;
              local_28 = 0;
              local_3c = 1;
              local_2c = 0x60000020;
              local_30 = &DAT_01cf9988;
              local_58 = *ppuVar4;
              iVar3 = FUN_019a24f8(param_1,param_2,&local_34);
              if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01cf99a0,&DAT_01d30334);
              }
              local_50 = local_40;
              uStack_4c = local_3c;
              uStack_48 = local_38;
              uVar5 = FUN_014b6844(&local_58);
            }
            goto LAB_014b7248;
          }
          if (param_4 < puVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(puVar1,param_4,param_4,&DAT_01d2e7d0);
          }
          param_3 = param_3 + (int)puVar1;
          param_4 = param_4 + -(int)puVar1;
        }
      } while (param_4 != (undefined *)0x0);
      uVar5 = 0;
    }
LAB_014b7248:
    FUN_01bf01d6(local_5c);
  }
  else {
    local_58 = local_60;
    local_3c = 1;
    local_34 = &local_40;
    local_54 = (undefined4 *)local_5c;
    local_38 = 0;
    local_40 = 0;
    local_28 = 0;
    local_2c = 0x60000020;
    local_30 = &DAT_01cf9988;
    iVar3 = FUN_019a24f8(param_1,param_2,&local_34);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01cf99a0,&DAT_01d30334);
    }
    local_50 = local_40;
    uStack_4c = local_3c;
    uStack_48 = local_38;
    uVar5 = FUN_014b6844(&local_58);
  }
  return uVar5;
}

