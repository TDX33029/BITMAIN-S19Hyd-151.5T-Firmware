// FUN_00fe4d8c @ 00fe4d8c size=412 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fe4d8c(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int *local_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *local_58;
  int *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 < 0) {
    uVar4 = FUN_014c82dc(param_2,&local_58,&DAT_01c1602c);
    *param_1 = 1;
    param_1[1] = uVar4;
  }
  else {
    iVar6 = param_2[1];
    local_90 = 0;
    local_98 = 0;
    for (iVar5 = param_2[2] << 5; iVar5 != 0; iVar5 = iVar5 + -0x20) {
      FUN_00f7f074(&local_58,iVar6);
      piVar3 = local_54;
      piVar2 = local_58;
      if (local_58 == (int *)0x0) {
        local_58 = local_54;
        goto LAB_00fe4ee0;
      }
      FUN_00f21790(&local_58,iVar6 + 0x10);
      if (local_48 == -0x7ffffff9) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar2,piVar3);
        }
LAB_00fe4ee0:
        *param_1 = 1;
        param_1[1] = local_58;
        FUN_007028c4(&local_98);
        return;
      }
      local_88 = local_58;
      piStack_84 = local_54;
      uStack_80 = uStack_50;
      uStack_7c = uStack_4c;
      local_74 = local_44;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      local_68 = local_38;
      uStack_64 = uStack_34;
      uStack_60 = uStack_30;
      uStack_5c = uStack_2c;
      local_78 = local_48;
      FUN_006c3428(&local_58,&local_98,piVar2,piVar3,&local_88);
      if (local_48 != -0x7ffffff9) {
        FUN_00db19c4(&local_58);
      }
      iVar6 = iVar6 + 0x20;
    }
    param_1[1] = local_98;
    param_1[2] = uStack_94;
    param_1[3] = local_90;
    *param_1 = 0;
    *param_1 = 0;
  }
  return;
}

