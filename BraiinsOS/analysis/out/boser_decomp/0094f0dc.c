// FUN_0094f0dc @ 0094f0dc size=192 calls_out=3 calls_in=1
// strings: 

void FUN_0094f0dc(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *extraout_r1;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  
  if (param_2[1] == 0) {
    puVar5 = (undefined1 *)0x3b9aca01;
    goto LAB_0094f190;
  }
  uVar4 = *param_2;
  param_2[1] = param_2[1] + -1;
  FUN_0094f574(&local_20,uVar4);
  if ((char)local_20 == '\x01') {
    local_20 = local_1c;
  }
  else {
    uVar1 = (uint)local_20 >> 8 & 0xff;
    puVar2 = (undefined1 *)0x0;
    puVar3 = extraout_r1;
    puVar5 = &DAT_3b9aca00;
    if (uVar1 == 0) {
LAB_0094f16c:
      *param_1 = (uint)puVar2;
      param_1[1] = (uint)puVar3;
      goto LAB_0094f190;
    }
    if (uVar1 == 1) {
      FUN_00a8814c(&local_20,uVar4);
      if (local_18 != &DAT_3b9aca00) {
        puVar2 = local_20;
        puVar3 = local_1c;
        puVar5 = local_18;
        goto LAB_0094f16c;
      }
    }
    else {
      local_20 = &DAT_80000004;
      local_1c = (undefined1 *)uVar1;
      local_20 = (undefined1 *)FUN_0073696c(&local_20);
    }
  }
  *param_1 = (uint)local_20;
  puVar5 = (undefined1 *)0x3b9aca02;
LAB_0094f190:
  param_1[2] = (uint)puVar5;
  return;
}

