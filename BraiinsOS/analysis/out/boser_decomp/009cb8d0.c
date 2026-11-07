// FUN_009cb8d0 @ 009cb8d0 size=608 calls_out=9 calls_in=2
// strings: 

void FUN_009cb8d0(int *param_1,int param_2,int param_3)

{
  short sVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int local_3e4;
  undefined8 local_3e0;
  uint local_3d8;
  undefined1 local_3d4 [12];
  undefined1 auStack_3c8 [460];
  int local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  undefined1 auStack_1f0 [460];
  
  puVar7 = (undefined4 *)(param_2 + 0x13a4);
  local_3e4 = param_2;
  if (param_3 == 0) {
    iVar5 = FUN_00ab2860();
    uVar8 = 0;
    sVar1 = *(short *)(param_2 + 0x1422);
    *(undefined4 *)(&DAT_00001398 + iVar5) = 0;
    local_3d8 = 0;
    *(undefined2 *)(iVar5 + 0x1422) = 0;
    local_3e0._4_4_ = 0;
    local_3e0._0_4_ = iVar5;
    if (sVar1 != 0) {
      do {
        FUN_006666fc(local_3d4,puVar7[-1],*puVar7);
        FUN_00982634(auStack_1f0,local_3e4);
        FUN_00975d10(auStack_3c8,iVar5,local_3d4,auStack_1f0);
        puVar7 = puVar7 + 3;
        uVar8 = uVar8 + 1;
        local_3e4 = local_3e4 + 0x1c8;
      } while (uVar8 < *(ushort *)(param_2 + 0x1422));
      local_3d8 = uVar8;
    }
    *param_1 = (int)local_3e0;
    param_1[1] = local_3e0._4_4_;
    param_1[2] = local_3d8;
  }
  else {
    FUN_009cb8d0(&local_3e0,*(undefined4 *)(param_2 + 0x1428));
    if ((int)local_3e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_3e0 = FUN_00976228((int)local_3e0,local_3e0._4_4_);
    uVar2 = (ulonglong)local_3e0 >> 0x20;
    uVar4 = (undefined4)local_3e0;
    if (*(short *)(param_2 + 0x1422) != 0) {
      uVar9 = 0;
      uVar8 = local_3d8;
      do {
        FUN_006666fc(local_3d4,puVar7[-1],*puVar7);
        FUN_00982634(auStack_3c8,local_3e4);
        FUN_009cb8d0(&local_1fc,*(undefined4 *)(param_2 + 0x142c + uVar9 * 4),param_3 + -1);
        iVar3 = local_1f4;
        uVar6 = local_1f8;
        iVar5 = local_1fc;
        FUN_01bed4e2(auStack_1f0,auStack_3c8,0x1c8);
        if (iVar5 == 0) {
          iVar5 = FUN_00ab2860();
          uVar6 = 0;
          *(undefined4 *)(&DAT_00001398 + iVar5) = 0;
          *(undefined2 *)(iVar5 + 0x1422) = 0;
        }
        FUN_00976138(uVar4,(int)uVar2,local_3d4,auStack_1f0,iVar5,uVar6);
        puVar7 = puVar7 + 3;
        uVar9 = uVar9 + 1;
        uVar8 = iVar3 + uVar8 + 1;
        local_3e4 = local_3e4 + 0x1c8;
      } while (uVar9 < *(ushort *)(param_2 + 0x1422));
      local_3d8 = uVar8;
    }
    *(undefined8 *)param_1 = local_3e0;
    param_1[2] = local_3d8;
  }
  return;
}

