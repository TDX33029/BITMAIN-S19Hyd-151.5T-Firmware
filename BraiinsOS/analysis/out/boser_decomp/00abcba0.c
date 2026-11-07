// FUN_00abcba0 @ 00abcba0 size=344 calls_out=4 calls_in=2
// strings: 

void FUN_00abcba0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined1 *local_1c;
  
  FUN_009c98e8(&local_28);
  if (local_28 == (undefined1 *)0x1) {
    uVar2 = CONCAT44(local_24,1);
  }
  else {
    uVar2 = FUN_00736c0c(local_20,local_1c);
  }
  local_38 = (undefined4)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    switch(local_38) {
    case 0:
      uVar1 = 0;
      break;
    case 1:
      FUN_00a98c98(&local_28,param_2);
      if (local_28 == (undefined1 *)0x0) {
LAB_00abccf4:
        param_1[1] = local_24;
        uVar1 = 3;
      }
      else {
        param_1[1] = local_28;
        param_1[2] = local_24;
        param_1[3] = local_20;
        uVar1 = 1;
      }
      break;
    case 2:
      FUN_00a98c98(&local_28,param_2);
      if (local_28 == (undefined1 *)0x0) goto LAB_00abccf4;
      param_1[1] = local_28;
      param_1[2] = local_24;
      param_1[3] = local_20;
      uVar1 = 2;
      break;
    default:
      local_40[0] = 1;
      local_20 = &local_30;
      local_34 = 0;
      local_2c = &DAT_01d064b8;
      local_30 = &DAT_01cfa0a4;
      local_1c = &LAB_0196b2a4;
      local_24 = 0x1963220;
      local_28 = local_40;
      local_38 = FUN_00a9cfdc(&DAT_0058eb0d,&local_28);
      goto LAB_00abcc84;
    }
    *param_1 = uVar1;
  }
  else {
LAB_00abcc84:
    *param_1 = 3;
    param_1[1] = local_38;
  }
  return;
}

