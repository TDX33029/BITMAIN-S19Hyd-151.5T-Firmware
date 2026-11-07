// FUN_00963860 @ 00963860 size=232 calls_out=3 calls_in=6
// strings: 

void FUN_00963860(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 local_40 [8];
  int local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 **local_20;
  undefined1 *local_1c;
  undefined1 uStack_11;
  
  FUN_009c98e8(&local_28);
  if (local_28 == (undefined1 *)0x1) {
    uVar3 = CONCAT44(local_24,1);
  }
  else {
    uVar3 = FUN_00736c0c(local_20,local_1c);
  }
  local_38 = (int)(uVar3 >> 0x20);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
    if (local_38 != 0) {
      if (local_38 != 1) {
        local_40[0] = 1;
        local_30 = &uStack_11;
        local_20 = &local_30;
        local_34 = 0;
        local_2c = &DAT_01c0f8d4;
        local_1c = &LAB_0196b2a4;
        local_24 = 0x1963220;
        local_28 = local_40;
        uVar2 = FUN_00a9cfdc(&DAT_0058eb0d,&local_28);
        *(undefined4 *)(param_1 + 4) = uVar2;
        *param_1 = 2;
        return;
      }
      uVar1 = 1;
    }
    *(undefined4 *)(param_1 + 4) = param_2;
  }
  else {
    uVar1 = 2;
    *(int *)(param_1 + 4) = local_38;
  }
  *param_1 = uVar1;
  return;
}

