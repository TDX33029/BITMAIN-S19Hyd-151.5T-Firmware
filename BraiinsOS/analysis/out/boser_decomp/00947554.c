// FUN_00947554 @ 00947554 size=304 calls_out=5 calls_in=1
// strings: 

void FUN_00947554(int *param_1)

{
  int extraout_r2;
  int extraout_r2_00;
  undefined **ppuVar1;
  ulonglong uVar2;
  byte local_40 [4];
  int local_3c;
  undefined1 local_38 [8];
  int local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined **local_18;
  undefined1 *local_14;
  
  FUN_00963860(local_40);
  if (local_40[0] == 2) {
    local_30 = local_3c;
  }
  else {
    if ((local_40[0] & 1) == 0) {
      *param_1 = -0x7fffffff;
      return;
    }
    FUN_009c98e8(&local_20,local_3c);
    if (local_20 == (undefined1 *)0x1) {
      uVar2 = CONCAT44(local_1c,1);
      ppuVar1 = (undefined **)extraout_r2;
    }
    else {
      uVar2 = FUN_00736c0c(local_18,local_14);
      ppuVar1 = (undefined **)extraout_r2_00;
    }
    local_30 = (int)(uVar2 >> 0x20);
    if ((uVar2 & 1) == 0) {
      if (local_30 == 0) {
        local_20 = (undefined1 *)0x80000000;
        local_1c = 0;
LAB_0094760c:
        *param_1 = (int)local_20;
        param_1[1] = local_1c;
        param_1[2] = (int)ppuVar1;
        return;
      }
      if (local_30 == 1) {
        FUN_00aeed24(&local_20,local_3c);
        local_30 = local_1c;
        if (local_20 != (undefined1 *)0x80000000) {
          ppuVar1 = local_18;
          goto LAB_0094760c;
        }
      }
      else {
        local_38[0] = 1;
        local_18 = &local_28;
        local_20 = local_38;
        local_2c = 0;
        local_24 = &DAT_01d064b8;
        local_28 = &DAT_01cfa36c;
        local_14 = &LAB_0196b2a4;
        local_1c = 0x1963220;
        local_30 = FUN_00a9cfdc(&DAT_0058eb0d,&local_20);
      }
    }
  }
  *param_1 = -0x7ffffffe;
  param_1[1] = local_30;
  return;
}

