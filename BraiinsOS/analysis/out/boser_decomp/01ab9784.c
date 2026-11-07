// FUN_01ab9784 @ 01ab9784 size=216 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01ab9784(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *local_40;
  uint local_3c;
  uint *local_38;
  uint local_34;
  uint *puStack_30;
  uint local_2c;
  
  uVar2 = *param_2;
  if (uVar2 != 0 || param_2[1] != 0) {
    puVar7 = (uint *)param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    do {
      FUN_01ab440c(&local_40,uVar6,uVar2 - 1);
      puStack_30 = local_38;
      if (local_40 == (uint *)0x0) break;
      uVar2 = local_40[2];
      uVar3 = local_40[3];
      uVar1 = *local_40;
      uVar4 = local_40[1];
      local_38 = local_40;
      local_34 = local_3c;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      if ((uVar1 & (uint)puVar7) == 0 && (uVar4 & uVar5) == 0) {
        *param_1 = puVar7;
        param_1[1] = uVar5;
        param_1[2] = local_40;
        param_1[3] = local_3c;
        param_1[4] = puStack_30;
        param_1[5] = uVar6;
        return;
      }
      local_40 = puVar7;
      local_3c = uVar5;
      local_2c = uVar6;
      FUN_01ab4580(&local_38);
    } while (uVar2 != 0 || uVar3 != 0);
  }
  param_1[5] = 0;
  return;
}

