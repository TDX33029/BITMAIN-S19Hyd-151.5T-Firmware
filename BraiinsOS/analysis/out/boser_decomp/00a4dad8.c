// FUN_00a4dad8 @ 00a4dad8 size=276 calls_out=3 calls_in=2
// strings: 

void FUN_00a4dad8(undefined1 *param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  undefined1 *local_14;
  
  FUN_009c98e8(&local_20);
  if (local_20 == (undefined1 *)0x1) {
    uVar2 = CONCAT44(local_1c,1);
  }
  else {
    uVar2 = FUN_00736c0c(local_18,local_14);
  }
  local_30 = (undefined4)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    switch(local_30) {
    case 0:
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00a4dbd0;
    case 1:
      uVar1 = 1;
      break;
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 3;
      break;
    case 4:
      uVar1 = 4;
      break;
    default:
      local_38[0] = 1;
      local_18 = &local_28;
      local_2c = 0;
      local_24 = &DAT_01d064b8;
      local_28 = &DAT_01c10394;
      local_14 = &LAB_0196b2a4;
      local_1c = 0x1963220;
      local_20 = local_38;
      local_30 = FUN_00a9cfdc(&DAT_0058eb0d,&local_20);
      goto LAB_00a4dbc8;
    }
    param_1[1] = uVar1;
    uVar1 = 0;
  }
  else {
LAB_00a4dbc8:
    *(undefined4 *)(param_1 + 4) = local_30;
    uVar1 = 1;
  }
LAB_00a4dbd0:
  *param_1 = uVar1;
  return;
}

