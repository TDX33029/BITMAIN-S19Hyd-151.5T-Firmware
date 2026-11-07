// FUN_018ee754 @ 018ee754 size=264 calls_out=4 calls_in=1
// strings: 

void FUN_018ee754(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uStack_2c;
  uint local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined *puStack_14;
  
  FUN_01930f74(&local_20,&DAT_01d23400,param_2);
  if ((char)local_20 == '\x18') {
    uStack_2c = FUN_0192fac8(param_2,local_1c);
    if ((int)uStack_2c == 0) {
      puStack_14 = (undefined *)0x0;
      local_18 = (undefined *)0xb;
      iVar1 = 4;
    }
    else {
      local_24 = 0;
      FUN_01935c58(&local_20,&uStack_2c);
      if (local_20 != 1) {
        if (local_24 < uStack_2c._4_4_) {
          *(undefined1 *)(param_1 + 1) = 0xf;
          FUN_0134bd64(local_1c,local_18);
          uVar2 = 1;
          puStack_14 = (undefined *)0x12;
          local_1c = &DAT_00520fcf;
        }
        else {
          param_1[1] = local_1c;
          uVar2 = 0;
          local_1c = local_18;
        }
        goto LAB_018ee7ec;
      }
      param_1[1] = local_1c;
      iVar1 = 8;
    }
    *(undefined **)((int)param_1 + iVar1) = local_18;
    *param_1 = 1;
    param_1[3] = puStack_14;
  }
  else {
    *(char *)(param_1 + 1) = (char)local_20;
    uVar2 = 1;
    *(undefined1 *)((int)param_1 + 7) = local_20._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_20._1_2_;
    puStack_14 = local_18;
LAB_018ee7ec:
    param_1[2] = local_1c;
    param_1[3] = puStack_14;
    *param_1 = uVar2;
  }
  return;
}

