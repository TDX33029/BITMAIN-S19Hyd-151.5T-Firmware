// FUN_00a49f64 @ 00a49f64 size=480 calls_out=5 calls_in=6
// strings: 

void FUN_00a49f64(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_009c98e8(&local_28);
  if (local_28 == (undefined1 *)0x1) {
    uVar3 = CONCAT44(local_24,1);
  }
  else {
    uVar3 = FUN_00736c0c(local_20,puStack_1c);
  }
  local_38 = (undefined4)(uVar3 >> 0x20);
  if ((uVar3 & 1) != 0) {
LAB_00a4a070:
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = local_38;
    return;
  }
  switch(local_38) {
  case 0:
    FUN_009c9b04(&local_28,param_2);
    if (local_28 != (undefined1 *)0x1) {
      param_1[2] = local_20;
      param_1[3] = puStack_1c;
      param_1[4] = uStack_18;
      param_1[5] = uStack_14;
      uVar1 = 0;
      goto LAB_00a4a150;
    }
    param_1[2] = local_24;
    goto LAB_00a4a11c;
  case 1:
    FUN_00947370(&local_28,param_2);
    if (local_28 != (undefined1 *)0x1) {
      uVar2 = CONCAT44(puStack_1c,local_20);
      uVar1 = 1;
LAB_00a4a14c:
      *(undefined8 *)(param_1 + 2) = uVar2;
      goto LAB_00a4a150;
    }
    break;
  case 2:
    FUN_00947370(&local_28,param_2);
    if (local_28 != (undefined1 *)0x1) {
      uVar2 = CONCAT44(puStack_1c,local_20);
      uVar1 = 2;
      goto LAB_00a4a14c;
    }
    break;
  case 3:
    FUN_00947370(&local_28,param_2);
    if (local_28 != (undefined1 *)0x1) {
      uVar2 = CONCAT44(puStack_1c,local_20);
      uVar1 = 3;
      goto LAB_00a4a14c;
    }
    break;
  case 4:
    FUN_00947370(&local_28,param_2);
    if (local_28 != (undefined1 *)0x1) {
      uVar2 = CONCAT44(puStack_1c,local_20);
      uVar1 = 4;
      goto LAB_00a4a14c;
    }
    break;
  default:
    local_40[0] = 1;
    local_20 = &local_30;
    local_34 = 0;
    local_2c = &DAT_01d064b8;
    local_30 = &DAT_01c10394;
    puStack_1c = &LAB_0196b2a4;
    local_24 = 0x1963220;
    local_28 = local_40;
    local_38 = FUN_00a9cfdc(&DAT_0058eb0d,&local_28);
    goto LAB_00a4a070;
  }
  param_1[2] = local_24;
LAB_00a4a11c:
  uVar1 = 5;
LAB_00a4a150:
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

