// FUN_0102804c @ 0102804c size=424 calls_out=2 calls_in=2
// strings: 

void FUN_0102804c(char *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int *extraout_r2;
  char cVar6;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  char local_48;
  char local_47;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar4 = (int *)(param_2 + 8);
  iVar2 = *piVar4;
  if (iVar2 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (bVar1) {
        *piVar4 = 1;
        goto LAB_0102808c;
      }
      iVar2 = *piVar4;
    } while (iVar2 == 0);
  }
  ClearExclusiveLocal();
LAB_0102808c:
  DataMemoryBarrier(0xb);
  cVar6 = '\t';
  if (iVar2 == 4) {
    local_1c = (int *)CONCAT22(local_1c._2_2_,0xb01);
    unaff_lr = 0x1028128;
    FUN_0102e79c(&local_48,&local_1c);
    piVar4 = extraout_r2;
    in_r12 = extraout_r12;
    if (local_48 != '\x03') {
      if (local_48 == '\x04') goto LAB_0102813c;
      piVar4 = local_44;
      in_r12 = local_40;
      cVar6 = local_47;
      if (local_48 != '\0') {
        unaff_lr = local_3c;
        if (local_48 == '\x01') {
          local_30 = local_38;
          local_48 = '\x01';
          local_2c = uStack_34;
        }
        else {
          if (local_44 == (int *)&DAT_80000000) {
            local_24 = (int *)CONCAT31(CONCAT21(local_24._2_2_,local_47),1);
          }
          else {
            local_1c = local_44;
            uStack_18 = local_40;
            uStack_14 = local_3c;
            unaff_lr = 0x10281e4;
            FUN_01650c14(&local_24,local_47,&local_1c);
            local_40 = local_20;
          }
          local_48 = '\x04';
          piVar4 = local_24;
          in_r12 = local_40;
        }
      }
    }
  }
  else {
    if (iVar2 == 0) {
      puVar3 = (uint *)(param_2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar2 = *(int *)(param_2 + 0xc);
        *(undefined4 *)(param_2 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar1);
        *puVar3 = *puVar3 & 0xfffffffd;
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 4))(*(undefined4 *)(param_2 + 0x10));
          *param_1 = '\x05';
          return;
        }
      }
LAB_0102813c:
      *param_1 = '\x05';
      return;
    }
    local_48 = '\x03';
  }
  *(int **)(param_1 + 4) = piVar4;
  *(undefined4 *)(param_1 + 8) = in_r12;
  *(undefined4 *)(param_1 + 0xc) = unaff_lr;
  *(undefined4 *)(param_1 + 0x10) = local_30;
  *(undefined4 *)(param_1 + 0x14) = local_2c;
  param_1[1] = cVar6;
  *param_1 = local_48;
  return;
}

