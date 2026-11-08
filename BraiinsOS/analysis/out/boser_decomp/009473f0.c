// FUN_009473f0 @ 009473f0 size=312 calls_out=4 calls_in=2
// strings: 

void FUN_009473f0(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 local_40 [8];
  int local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  int local_24;
  undefined **local_20;
  undefined1 *local_1c;
  
  FUN_009c98e8(&local_28);
  if (local_28 == (undefined1 *)0x1) {
    uVar2 = CONCAT44(local_24,1);
  }
  else {
    uVar2 = FUN_00736c0c(local_20,local_1c);
  }
  local_38 = (int)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    switch(local_38) {
    case 0:
      puVar1 = (undefined1 *)0x80000000;
      break;
    case 1:
      puVar1 = (undefined1 *)0x80000001;
      break;
    case 2:
      puVar1 = (undefined1 *)0x80000002;
      break;
    case 3:
      FUN_00aeed24(&local_28,param_2);
      if (local_28 == (undefined1 *)0x80000000) {
        *param_1 = (int)&DAT_80000005;
        param_1[1] = local_24;
        return;
      }
      *param_1 = (int)local_28;
      param_1[1] = local_24;
      param_1[2] = (int)local_20;
      return;
    case 4:
      puVar1 = &DAT_80000004;
      break;
    default:
      local_40[0] = 1;
      local_20 = &local_30;
      local_34 = 0;
      local_2c = &DAT_01d064b8;
      local_30 = &DAT_01c10394;
      local_1c = &LAB_0196b2a4;
      local_24 = 0x1963220;
      local_28 = local_40;
      local_38 = FUN_00a9cfdc(&DAT_0058eb0d,&local_28);
      goto LAB_009474dc;
    }
    *param_1 = (int)puVar1;
  }
  else {
LAB_009474dc:
    *param_1 = (int)&DAT_80000005;
    param_1[1] = local_38;
  }
  return;
}

