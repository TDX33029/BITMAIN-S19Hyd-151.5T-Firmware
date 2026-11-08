// FUN_01528494 @ 01528494 size=348 calls_out=5 calls_in=1
// strings: 

void FUN_01528494(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_50;
  int local_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3 == 0) {
    local_4c = 8;
    local_50 = 0;
  }
  else {
    iVar1 = param_3 * 0x18;
    local_4c = FUN_01298504(iVar1,8);
    if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,iVar1);
    }
    iVar5 = 0;
    uVar3 = (uint)&local_40 | 4;
    do {
      local_50 = param_3;
      if (iVar1 == iVar5) break;
      puVar4 = (undefined4 *)(param_2 + iVar5);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)puVar4) {
      case 0:
        uVar2 = 0;
        break;
      case 1:
        local_40 = *puVar4;
        uStack_3c = puVar4[1];
        local_38 = puVar4[2];
        uStack_34 = puVar4[3];
        uStack_30 = puVar4[4];
        uStack_2c = puVar4[5];
        goto LAB_015285a8;
      case 2:
        local_38 = puVar4[2];
        uStack_34 = puVar4[3];
        uStack_30 = puVar4[4];
        uStack_2c = puVar4[5];
        uVar2 = 2;
        break;
      case 3:
        FUN_006666fc(uVar3,puVar4[2],puVar4[3]);
        uVar2 = 3;
        break;
      case 4:
        FUN_014fcef8(uVar3,puVar4 + 1);
        uVar2 = 4;
        break;
      case 5:
        FUN_0156aa80(uVar3,puVar4 + 1);
        uVar2 = 5;
      }
      local_40 = CONCAT31(local_40._1_3_,uVar2);
LAB_015285a8:
      puVar4 = (undefined4 *)(local_4c + iVar5);
      iVar5 = iVar5 + 0x18;
      *puVar4 = local_40;
      puVar4[1] = uStack_3c;
      puVar4[2] = local_38;
      puVar4[3] = uStack_34;
      puVar4[4] = uStack_30;
      puVar4[5] = uStack_2c;
    } while (iVar1 != iVar5);
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = param_3;
  return;
}

