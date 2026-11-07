// FUN_00894508 @ 00894508 size=328 calls_out=5 calls_in=1
// strings: 

void FUN_00894508(undefined1 *param_1,int *param_2,undefined *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *local_4c;
  undefined4 local_48;
  int local_44;
  uint *puStack_40;
  uint uStack_3c;
  undefined *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint *local_28;
  undefined **local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar3 = *param_2;
  local_34 = *(undefined **)(iVar3 + 0x4c);
  local_38 = param_3;
  if (param_3 < local_34) {
    local_1c = *(uint *)(iVar3 + 0x48);
  }
  else {
    local_1c = *(uint *)(iVar3 + 0x48);
    if ((uint)((int)param_3 - (int)local_34) < local_1c) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x44) + ((int)param_3 - (int)local_34) * 0xc);
      local_44 = *piVar5;
      puStack_40 = (uint *)piVar5[1];
      if (local_44 == 3) {
        do {
          uStack_3c = *puStack_40;
          bVar2 = (bool)hasExclusiveAccess(puStack_40);
        } while (!bVar2);
        *puStack_40 = uStack_3c + 1;
        if (0x7fffffff < uStack_3c) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x894570);
          (*pcVar1)();
        }
      }
      else {
        uStack_3c = piVar5[2];
      }
      FUN_008abc84(&local_4c,&local_44);
      if (local_4c != (int *)0x0) {
        FUN_010ed06c(param_1,local_4c,local_48);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_4c;
          bVar2 = (bool)hasExclusiveAccess(local_4c);
        } while (!bVar2);
        *local_4c = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010cf278(local_4c,local_48);
        }
        return;
      }
      local_28 = (uint *)0x3;
      local_30 = 0x15;
      local_34 = &DAT_00344a69;
      local_2c = local_48;
      uVar4 = FUN_0080807c(&local_34,&local_28);
      goto LAB_0089463c;
    }
  }
  local_20 = *(undefined4 *)(iVar3 + 0x44);
  local_24 = &local_34;
  local_28 = (uint *)&local_38;
  uVar4 = FUN_008b4fd4(&local_28);
LAB_0089463c:
  *(undefined4 *)(param_1 + 4) = uVar4;
  *param_1 = 1;
  return;
}

