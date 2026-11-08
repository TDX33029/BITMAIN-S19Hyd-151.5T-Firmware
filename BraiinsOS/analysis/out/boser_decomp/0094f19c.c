// FUN_0094f19c @ 0094f19c size=596 calls_out=8 calls_in=1
// strings: 

void FUN_0094f19c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *extraout_r1;
  undefined1 *puVar3;
  undefined1 *extraout_r1_00;
  undefined **ppuVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *local_50;
  uint uStack_4c;
  undefined1 *local_48;
  uint local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined **local_38;
  undefined1 *local_34;
  undefined1 *puStack_30;
  uint uStack_2c;
  undefined1 local_28 [8];
  undefined1 *local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined *local_14;
  
  if (param_2[1] == 0) {
    *param_1 = 0xc;
    param_1[1] = 0;
    return;
  }
  ppuVar4 = (undefined **)*param_2;
  param_2[1] = param_2[1] - 1;
  FUN_0094f574(&local_40,ppuVar4);
  if ((char)local_40 == '\x01') {
LAB_0094f1d8:
    local_20 = local_3c;
    goto LAB_0094f328;
  }
  uVar1 = (uint)local_40 >> 8 & 0xff;
  if (uVar1 == 0) {
    puVar5 = (undefined1 *)0x0;
    puVar2 = (undefined1 *)0xb;
    puVar3 = extraout_r1;
    goto LAB_0094f230;
  }
  if (uVar1 != 1) {
    local_40 = &DAT_80000004;
    local_3c = (undefined1 *)uVar1;
    local_20 = (undefined1 *)FUN_0073696c(&local_40);
    goto LAB_0094f328;
  }
  FUN_009c98e8(&local_40,ppuVar4);
  if (local_40 == (undefined1 *)0x1) {
    uVar6 = CONCAT44(local_3c,1);
  }
  else {
    uVar6 = FUN_00736c0c(local_38,local_34);
  }
  local_20 = (undefined1 *)(uVar6 >> 0x20);
  if ((uVar6 & 1) != 0) goto LAB_0094f328;
  if (0x5ffffffff < uVar6) {
    local_28[0] = 1;
    local_38 = &local_18;
    local_40 = local_28;
    local_1c = 0;
    local_14 = &DAT_01d064b8;
    local_18 = &DAT_01c0ff48;
    local_34 = &LAB_0196b2a4;
    local_3c = (undefined1 *)0x1963220;
    local_20 = (undefined1 *)FUN_00a9cfdc(&DAT_0058eb0d,&local_40);
    goto LAB_0094f328;
  }
  puVar3 = (undefined1 *)((uint)local_20 & 0xff);
  puVar5 = (undefined1 *)0x0;
  puVar2 = (undefined1 *)0x5;
  switch(local_20) {
  case (undefined1 *)0x1:
    puVar2 = (undefined1 *)0x6;
    break;
  case (undefined1 *)0x2:
    FUN_00947370(&local_40,ppuVar4);
    if (local_40 == (undefined1 *)0x1) goto LAB_0094f1d8;
    puVar2 = (undefined1 *)0x7;
    puVar3 = local_34;
    ppuVar4 = local_38;
    break;
  case (undefined1 *)0x3:
    puVar2 = (undefined1 *)0x8;
    break;
  case (undefined1 *)0x4:
    FUN_00a49f64(&local_40,ppuVar4);
    if (local_40 == (undefined1 *)0x5 && local_3c == (undefined1 *)0x0) {
      local_34 = (undefined1 *)0x0;
      local_3c = (undefined1 *)local_38;
LAB_0094f3e8:
      puVar2 = (undefined1 *)0xb;
      local_40 = local_3c;
      local_3c = (undefined1 *)0x0;
    }
    else {
      local_44 = uStack_2c;
      local_48 = puStack_30;
      puVar2 = local_40;
      local_40 = (undefined1 *)local_38;
    }
    goto LAB_0094f3f0;
  case (undefined1 *)0x5:
    FUN_00a98c98(&local_40,ppuVar4);
    if (local_40 == (undefined1 *)0x0) {
      local_34 = extraout_r1_00;
      goto LAB_0094f3e8;
    }
    local_48 = (undefined1 *)local_38;
    puVar2 = (undefined1 *)0xa;
    local_34 = local_3c;
    local_3c = (undefined1 *)0x0;
LAB_0094f3f0:
    puVar3 = local_34;
    ppuVar4 = (undefined **)local_40;
    local_20 = local_40;
    puVar5 = local_3c;
    if (puVar2 == (undefined1 *)0xb && local_3c == (undefined1 *)0x0) {
LAB_0094f328:
      *param_1 = 0xd;
      param_1[1] = 0;
      param_1[2] = (uint)local_20;
      return;
    }
  }
  local_50 = local_48;
  uStack_4c = local_44;
LAB_0094f230:
  *param_1 = (uint)puVar2;
  param_1[1] = (uint)puVar5;
  param_1[2] = (uint)ppuVar4;
  param_1[3] = (uint)puVar3;
  param_1[4] = (uint)local_50;
  param_1[5] = uStack_4c;
  return;
}

