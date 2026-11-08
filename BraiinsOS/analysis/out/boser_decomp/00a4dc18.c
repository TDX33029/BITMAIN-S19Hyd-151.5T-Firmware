// FUN_00a4dc18 @ 00a4dc18 size=380 calls_out=5 calls_in=2
// strings: 

void FUN_00a4dc18(int *param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *local_48;
  int local_44;
  undefined **local_40;
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 local_30 [8];
  int local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_1c;
  
  FUN_009c98e8(&local_48);
  if (local_48 == (undefined1 *)0x1) {
    uVar2 = CONCAT44(local_44,1);
  }
  else {
    uVar2 = FUN_00736c0c(local_40,puStack_3c);
  }
  local_28 = (int)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    switch(local_28) {
    case 0:
      iVar1 = 5;
      break;
    case 1:
      FUN_00947370(&local_48,param_2);
      if (local_48 == (undefined1 *)0x1) {
        param_1[2] = local_44;
        iVar1 = 7;
      }
      else {
        iVar1 = 6;
        *(ulonglong *)(param_1 + 2) = CONCAT44(puStack_3c,local_40);
      }
      break;
    case 2:
      FUN_00a49f64(&local_48,param_2);
      if (local_48 == (undefined1 *)0x5 && local_44 == 0) {
        param_1[1] = 0;
        *param_1 = 7;
        param_1[2] = (int)local_40;
        return;
      }
      *param_1 = (int)local_48;
      param_1[1] = local_44;
      param_1[2] = (int)local_40;
      param_1[3] = (int)puStack_3c;
      param_1[4] = iStack_38;
      param_1[5] = iStack_34;
      return;
    default:
      local_30[0] = 1;
      local_40 = &local_20;
      local_48 = local_30;
      local_24 = 0;
      local_1c = &DAT_01d064b8;
      local_20 = &DAT_01cfa0a4;
      puStack_3c = &LAB_0196b2a4;
      local_44 = 0x1963220;
      local_28 = FUN_00a9cfdc(&DAT_0058eb0d,&local_48);
      goto LAB_00a4dd00;
    }
    *param_1 = iVar1;
    param_1[1] = 0;
  }
  else {
LAB_00a4dd00:
    *param_1 = 7;
    param_1[1] = 0;
    param_1[2] = local_28;
  }
  return;
}

