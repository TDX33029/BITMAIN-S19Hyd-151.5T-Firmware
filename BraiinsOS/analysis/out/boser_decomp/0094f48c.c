// FUN_0094f48c @ 0094f48c size=216 calls_out=2 calls_in=2
// strings: 

void FUN_0094f48c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_38 [8];
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 **local_18;
  undefined1 *local_14;
  undefined1 uStack_9;
  
  if (param_2[1] == 0) {
    *param_1 = 0;
    return;
  }
  param_2[1] = param_2[1] + -1;
  FUN_009c98e8(&local_20,*param_2);
  if (local_20 != (undefined1 *)0x1) {
    if (local_14 == (undefined1 *)0x0) {
      uVar1 = 1;
      local_1c = local_18;
      goto LAB_0094f558;
    }
    local_30 = local_18;
    local_38[0] = 1;
    local_28 = &uStack_9;
    local_18 = &local_28;
    local_2c = (int)local_14;
    local_24 = &DAT_01c1ab20;
    local_14 = &LAB_0196b2a4;
    local_1c = (undefined1 **)0x1963220;
    local_20 = local_38;
    local_1c = (undefined1 **)FUN_00a9cfdc(&DAT_0058eb0d,&local_20);
  }
  uVar1 = 2;
LAB_0094f558:
  *param_1 = uVar1;
  param_1[1] = local_1c;
  return;
}

