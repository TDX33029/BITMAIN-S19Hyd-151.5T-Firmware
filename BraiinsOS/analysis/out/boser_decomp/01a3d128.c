// FUN_01a3d128 @ 01a3d128 size=576 calls_out=7 calls_in=7
// strings: 

void FUN_01a3d128(int *param_1,int *param_2)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 **local_48;
  undefined1 *local_44;
  uint uStack_40;
  undefined1 *local_38;
  int local_34;
  undefined1 *local_30;
  uint uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  puVar2 = (undefined1 *)param_2[2];
  if (puVar2 != (undefined1 *)0x0) {
    if (param_1[2] == 0) {
      FUN_0128371c(&local_60,param_2,puVar2);
      local_50 = (undefined1 *)*param_2;
      local_4c = (undefined1 *)param_2[1];
      local_48 = (undefined1 **)param_2[2];
      local_44 = (undefined1 *)param_2[3];
      (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
      local_38 = local_60;
      local_34 = uStack_5c;
      local_30 = (undefined1 *)uStack_58;
      uStack_2c = uStack_54;
      FUN_0128341c(&local_50,&local_38);
      puVar2 = local_44;
      ppuVar1 = local_48;
      if (local_50 == (undefined1 *)0x0) {
        FUN_012840cc(param_1);
        *param_1 = (int)local_4c;
        param_1[1] = (int)local_48;
        param_1[2] = (int)local_44;
        param_1[3] = uStack_40;
      }
      else {
        local_38 = local_4c;
        local_34 = (int)local_48;
        local_30 = local_44;
        uStack_2c = uStack_40;
        iVar3 = param_1[1];
        local_24 = (undefined1 *)-iVar3;
        if (local_24 < local_44) {
          FUN_01283c9c(param_1,local_44);
          iVar3 = param_1[1];
          local_24 = (undefined1 *)(param_1[2] - iVar3);
        }
        FUN_01bed4e2(*param_1 + iVar3,ppuVar1,puVar2);
        if (local_24 < puVar2) {
          local_28 = puVar2;
                    /* WARNING: Subroutine does not return */
          FUN_01284540(&local_28);
        }
        param_1[1] = (int)(puVar2 + iVar3);
        (**(code **)(local_38 + 0x10))(&uStack_2c,local_34,local_30);
      }
      return;
    }
    if ((undefined1 *)(param_1[2] - param_1[1]) < puVar2) {
      FUN_01283c9c(param_1,puVar2);
      puVar2 = (undefined1 *)param_2[2];
    }
    while (puVar2 != (undefined1 *)0x0) {
      iVar4 = param_1[1];
      iVar3 = param_2[1];
      local_4c = (undefined1 *)(param_1[2] - iVar4);
      if (local_4c < puVar2) {
        FUN_01283c9c(param_1,puVar2);
        iVar4 = param_1[1];
        local_4c = (undefined1 *)(param_1[2] - iVar4);
      }
      FUN_01bed4e2(*param_1 + iVar4,iVar3,puVar2);
      if (local_4c < puVar2) {
        local_50 = puVar2;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_50);
      }
      local_38 = (undefined1 *)param_2[2];
      param_1[1] = (int)(puVar2 + iVar4);
      local_60 = puVar2;
      if (local_38 < puVar2) {
        local_48 = &local_38;
        local_44 = &LAB_01a6a304;
        local_4c = &LAB_01a6a304;
        local_50 = (undefined1 *)&local_60;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_50,&DAT_01d2e534);
      }
      param_2[1] = (int)(puVar2 + param_2[1]);
      param_2[2] = (int)(local_38 + -(int)puVar2);
      puVar2 = local_38 + -(int)puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01a3d208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],0);
  return;
}

