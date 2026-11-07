// FUN_01534b44 @ 01534b44 size=312 calls_out=4 calls_in=7
// strings: 

undefined8 FUN_01534b44(uint *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined4 *local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  uint *local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  uint **local_28;
  undefined2 *local_24;
  
  uVar7 = CONCAT44(param_2,param_1);
  if (param_3 == (int *)0x0) {
    do {
      uVar4 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = uVar4 + 1;
    if (0x7fffffff < uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1534c1c);
      (*pcVar1)();
    }
  }
  else {
    iVar3 = *param_3;
    local_68._0_4_ = *(undefined4 *)(iVar3 + 0xc);
    local_68._4_4_ = *(undefined4 *)(iVar3 + 0x10);
    local_60 = (undefined4 *)(iVar3 + 0x14);
    local_68 = FUN_0134384c(&local_68);
    local_60 = *(undefined4 **)(iVar3 + 0x14);
    uStack_5c = *(undefined4 *)(iVar3 + 0x18);
    uStack_58 = *(undefined4 *)(iVar3 + 0x1c);
    local_54 = *(undefined4 *)(iVar3 + 0x20);
    uStack_50 = *(undefined4 *)(iVar3 + 0x24);
    uStack_4c = *(undefined4 *)(iVar3 + 0x28);
    uStack_48 = *(undefined4 *)(iVar3 + 0x2c);
    if (param_2 == 0) {
      local_40 = &LAB_0157334c;
      local_44 = (undefined1 *)&local_68;
      FUN_00664898(&local_30,&DAT_005b63b8,&local_44);
      puVar6 = local_2c;
      uVar7 = FUN_016bc0ec(local_2c,local_28);
      puVar5 = local_30;
    }
    else {
      local_38 = param_1 + 2;
      local_2c = &LAB_0157334c;
      local_24 = &DAT_0132b6a0;
      local_28 = &local_38;
      local_34 = param_2;
      local_30 = (undefined1 *)&local_68;
      FUN_00664898(&local_44,&DAT_005b58e0,&local_30);
      puVar6 = local_40;
      uVar7 = FUN_016bc0ec(local_40,local_3c);
      puVar5 = local_44;
    }
    FUN_019bb7e0(puVar5,puVar6);
  }
  return uVar7;
}

