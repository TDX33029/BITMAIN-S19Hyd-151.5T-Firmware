// FUN_01897cc8 @ 01897cc8 size=472 calls_out=6 calls_in=2
// strings: InvalidEncoding | InconsistentComponents | InvalidEncoding | InvalidEncoding | InvalidEncoding

void FUN_01897cc8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *local_1a8;
  undefined2 local_1a4;
  undefined1 auStack_19d [53];
  undefined1 auStack_168 [32];
  undefined8 local_148 [11];
  undefined4 local_ec;
  char *local_e8;
  char *local_e4;
  int local_e0 [22];
  undefined1 auStack_88 [92];
  undefined2 local_2c;
  undefined1 local_2a;
  
  local_148[0] = FUN_01897c88(&DAT_01d219e4);
  local_1a4 = 0x101;
  local_1a8 = local_148;
  FUN_01898524(&local_ec,param_2,param_3,&local_1a8);
  pcVar4 = local_e4;
  if (local_ec == 0) {
LAB_01897e18:
    *(char **)(param_1 + 4) = local_e8;
    *(char **)(param_1 + 8) = local_e4;
  }
  else {
    local_e4 = (char *)0x0;
    uVar7 = FUN_01898838(&local_ec,4);
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    iVar3 = (int)uVar7;
    if ((iVar3 == 0) || (local_e4 != local_e8)) {
      local_e4 = (char *)0xf;
      local_e8 = "InvalidEncoding";
      goto LAB_01897e18;
    }
    if (pcVar4 == (char *)0x0) {
      if (iVar5 == 0x20) {
        FUN_01897970(param_1 + 1,iVar3);
LAB_01897e98:
        uVar2 = 0;
        goto LAB_01897e20;
      }
LAB_01897e44:
      uVar6 = 0xf;
      pcVar4 = "InvalidEncoding";
    }
    else {
      if (iVar5 != 0x20) {
        *param_1 = 1;
        *(char **)(param_1 + 4) = "InvalidEncoding";
        *(undefined4 *)(param_1 + 8) = 0xf;
        return;
      }
      FUN_01897970((uint)&local_ec | 1,iVar3);
      pcVar1 = local_e4;
      local_2c = local_ec._1_2_;
      local_2a = local_ec._3_1_;
      FUN_01bed4e2(local_148,local_e0,0x55);
      FUN_01bed4e2(auStack_88,local_148,0x55);
      FUN_01bed4e2(auStack_19d,local_148,0x55);
      if (local_e0[0] != 0x20) goto LAB_01897e44;
      iVar3 = thunk_FUN_01bed842(pcVar4,auStack_168,0x20);
      if (iVar3 == 0) {
        param_1[3] = local_2a;
        *(undefined2 *)(param_1 + 1) = local_2c;
        *(char **)(param_1 + 4) = local_e8;
        *(char **)(param_1 + 8) = pcVar1;
        FUN_01bed4e2(param_1 + 0xc,auStack_88,0x55);
        goto LAB_01897e98;
      }
      uVar6 = 0x16;
      pcVar4 = "InconsistentComponents";
    }
    *(char **)(param_1 + 4) = pcVar4;
    *(undefined4 *)(param_1 + 8) = uVar6;
  }
  uVar2 = 1;
LAB_01897e20:
  *param_1 = uVar2;
  return;
}

