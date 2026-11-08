// FUN_0162a3e0 @ 0162a3e0 size=196 calls_out=2 calls_in=1
// strings: 

void FUN_0162a3e0(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puStack_34;
  uint uStack_30;
  uint local_2c;
  uint *local_28;
  code *local_24;
  undefined *local_20;
  code *local_1c;
  undefined *local_18;
  code *local_14;
  undefined4 **local_10;
  undefined1 *local_c;
  
  if ((param_3 & 0xffff) == 4) {
    uVar1 = 0;
    uVar2 = *param_2;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = uVar2;
  }
  else {
    puStack_34 = param_2;
    uStack_30 = param_3;
    if (param_3 == 0x10) {
      FUN_01bed4e2(param_1 + 2,param_2,0x10);
      param_1[1] = 1;
      uVar1 = 0;
    }
    else {
      local_10 = &puStack_34;
      local_14 = FUN_012fd02c;
      local_1c = FUN_012fd02c;
      local_24 = FUN_012fd02c;
      local_28 = &local_2c;
      local_c = &LAB_0141634c;
      local_18 = &DAT_0056e8c0;
      local_20 = &DAT_0056ea2c;
      local_2c = param_3;
      FUN_00664898(param_1 + 4,&DAT_005944fb,&local_28);
      uVar1 = 1;
    }
  }
  *param_1 = uVar1;
  return;
}

