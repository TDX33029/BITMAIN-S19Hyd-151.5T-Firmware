// FUN_01678464 @ 01678464 size=304 calls_out=2 calls_in=2
// strings: 

void FUN_01678464(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int local_1c;
  
  pbVar4 = *(byte **)(param_2 + 8);
  uVar5 = *(uint *)(param_2 + 0xc);
  local_34 = 5;
  local_3c = 2;
  local_40[0] = 0x5f;
  local_38 = &DAT_0041440d;
  if (uVar5 != 0) {
    bVar1 = *pbVar4;
    *(byte **)(param_2 + 8) = pbVar4 + 1;
    *(uint *)(param_2 + 0xc) = uVar5 - 1;
    if (bVar1 - 0x30 < 10) {
      FUN_0166a204(&local_30,local_40,param_2);
      if (local_30 != 3) {
        if (local_30 == 1) {
          local_30 = 2;
        }
        param_1[1] = local_2c;
        param_1[2] = iStack_28;
        param_1[3] = iStack_24;
        param_1[4] = local_20;
        param_1[5] = local_1c;
        *param_1 = local_30;
        return;
      }
      iVar2 = *(int *)(param_2 + 8);
      *(byte **)(param_2 + 8) = pbVar4;
      *(uint *)(param_2 + 0xc) = uVar5;
      uVar3 = iVar2 - (int)pbVar4;
      if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
      }
      *(byte **)(param_2 + 8) = pbVar4 + uVar3;
      *(uint *)(param_2 + 0xc) = uVar5 - uVar3;
      *param_1 = 3;
      param_1[1] = (int)pbVar4;
      param_1[2] = uVar3;
      return;
    }
    *(byte **)(param_2 + 8) = pbVar4;
    *(uint *)(param_2 + 0xc) = uVar5;
  }
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 2;
  return;
}

