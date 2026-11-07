// FUN_009d7ec4 @ 009d7ec4 size=444 calls_out=9 calls_in=1
// strings: send stream capacity unexpectedly closed

undefined8 FUN_009d7ec4(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 local_88;
  undefined2 local_87;
  undefined1 local_85;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar4 = (undefined4 *)&local_88;
  iVar6 = *(int *)(param_1 + 0x10);
  FUN_01a88034(param_1,1);
  iVar2 = FUN_01a88114(param_1);
  if (iVar2 == 0) {
    puVar7 = (undefined2 *)((uint)&local_40 | 1);
    do {
      FUN_01a87820(&local_40,param_1,param_2);
      uVar3 = local_40 & 0xff;
      if (uVar3 == 7) {
        uVar5 = 1;
        goto LAB_009d8070;
      }
      if (uVar3 != 5) {
        if (uVar3 != 6) {
          local_85 = *(undefined1 *)(puVar7 + 1);
          local_88 = (undefined1)local_40;
          local_87 = *puVar7;
          local_84 = local_3c;
          local_80 = local_38;
          uStack_7c = uStack_34;
          uStack_78 = uStack_30;
          uStack_74 = uStack_2c;
          goto LAB_009d8064;
        }
        param_1 = FUN_01427b74(9);
        FUN_01427c64(param_1,"send stream capacity unexpectedly closed",0x28);
        goto LAB_009d806c;
      }
    } while (local_3c == 0);
LAB_009d7f70:
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (iVar6 == 0) {
      param_1 = FUN_01a84c90(param_1);
    }
    else {
      local_50 = *(undefined4 *)(param_1 + 0x14);
      uStack_4c = *(undefined4 *)(param_1 + 0x18);
      uStack_48 = *(undefined4 *)(param_1 + 0x1c);
      local_58 = 0;
      local_54 = iVar6;
      local_40 = local_50;
      local_3c = uStack_4c;
      local_38 = uStack_48;
      cVar1 = FUN_01a620d4(param_1,&local_58,1);
      if (cVar1 == '\f') {
        param_1 = 0;
      }
      else {
        local_40 = CONCAT31(CONCAT21(local_40._2_2_,cVar1),3);
        param_1 = FUN_01a84cd8(&local_40);
      }
    }
  }
  else {
    FUN_01a61e0c(&local_70,param_1,param_2,1);
    if ((local_70 & 0xff) == 5) {
      local_3c = local_6c;
      local_40 = CONCAT31(local_40._1_3_,2);
      puVar4 = &local_40;
    }
    else {
      if ((local_70 & 0xff) == 6) goto LAB_009d7f70;
      local_40 = local_70;
      local_3c = local_6c;
      local_38 = uStack_68;
      uStack_34 = uStack_64;
      uStack_30 = uStack_60;
      uStack_2c = uStack_5c;
      puVar4 = &local_40;
    }
LAB_009d8064:
    param_1 = FUN_01a84cd8(puVar4);
LAB_009d806c:
    uVar5 = 0;
  }
LAB_009d8070:
  return CONCAT44(param_1,uVar5);
}

