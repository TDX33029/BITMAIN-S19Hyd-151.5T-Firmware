// FUN_0120bb5c @ 0120bb5c size=228 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0120bb5c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  if (uVar4 != 0 || uVar5 != 0) {
    uVar7 = param_2[2];
    uVar6 = param_2[3];
    uVar1 = param_2[4];
    do {
      FUN_01214c38(&local_40,uVar1,uVar4,uVar5);
      if (local_2c == 0) break;
      uVar2 = *local_38;
      uVar3 = local_38[1];
      uVar4 = local_38[2];
      uVar5 = local_38[3];
      *param_2 = uVar4;
      param_2[1] = uVar5;
      if ((uVar2 & uVar7) == 0 && (uVar3 & uVar6) == 0) {
        *param_1 = uVar7;
        param_1[1] = uVar6;
        param_1[2] = (uint)local_38;
        param_1[3] = uStack_34;
        param_1[4] = uStack_30;
        param_1[5] = local_2c;
        return;
      }
      local_40 = uVar7;
      local_3c = uVar6;
      FUN_01ab4580(&local_38);
    } while (uVar4 != 0 || uVar5 != 0);
  }
  param_1[5] = 0;
  return;
}

