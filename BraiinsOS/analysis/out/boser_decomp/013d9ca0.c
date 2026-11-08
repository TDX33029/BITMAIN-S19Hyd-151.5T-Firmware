// FUN_013d9ca0 @ 013d9ca0 size=232 calls_out=4 calls_in=6
// strings: 

void FUN_013d9ca0(undefined4 *param_1,undefined4 param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  if (param_3 == (undefined *)0x0) {
    local_60 = 0x24;
    local_68 = CONCAT22(local_68._2_2_,0x10);
    local_64 = &DAT_00474381;
  }
  else {
    if (param_3 < (undefined *)0x40) {
      if (param_3 < (undefined *)0x19) {
        FUN_01bed93e((undefined *)((int)&local_80 + (int)param_3),0,0x18 - (int)param_3);
        FUN_01bed4e2(&local_80,param_2,param_3);
        local_68._2_2_ = SUB42(param_3,0);
        puVar2 = (undefined4 *)((uint)&local_68 | 4);
        *puVar2 = local_80;
        puVar2[1] = uStack_7c;
        puVar2[2] = uStack_78;
        puVar2[3] = uStack_74;
        puVar2[4] = uStack_70;
        puVar2[5] = uStack_6c;
      }
      else {
        FUN_01447508((uint)&local_68 | 4,param_2,param_3);
      }
      local_68 = CONCAT22(local_68._2_2_,(ushort)(param_3 >= (undefined *)0x19));
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = uStack_58;
      param_1[5] = uStack_54;
      param_1[6] = uStack_50;
      return;
    }
    local_68 = CONCAT22(local_68._2_2_,0xc);
    local_64 = param_3;
  }
  uVar1 = FUN_013e649c(&local_68);
  param_1[1] = uVar1;
  *(undefined2 *)param_1 = 2;
  return;
}

