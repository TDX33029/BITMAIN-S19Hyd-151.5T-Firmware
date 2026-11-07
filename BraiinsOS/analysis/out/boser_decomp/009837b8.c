// FUN_009837b8 @ 009837b8 size=504 calls_out=8 calls_in=2
// strings: 

void FUN_009837b8(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  uint local_d0;
  undefined1 auStack_cc [12];
  undefined1 local_c0 [64];
  undefined1 auStack_80 [68];
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  
  if (param_3 == 0) {
    iVar10 = FUN_00ab2820();
    uVar7 = 0;
    puVar11 = (ushort *)(param_2 + 0x34a);
    uVar1 = *puVar11;
    *(undefined2 *)(iVar10 + 0x34a) = 0;
    *(undefined4 *)(iVar10 + 0x2c0) = 0;
    local_d0 = 0;
    if (uVar1 != 0) {
      puVar8 = (undefined4 *)(param_2 + 0x2cc);
      do {
        FUN_006666fc(auStack_cc,puVar8[-1],*puVar8);
        FUN_00983a5c(local_c0,param_2);
        FUN_00975e64(&local_30,iVar10,auStack_cc,local_c0);
        puVar8 = puVar8 + 3;
        uVar7 = uVar7 + 1;
        param_2 = param_2 + 0x40;
      } while (uVar7 < *puVar11);
      local_d0 = uVar7;
    }
    *param_1 = iVar10;
    param_1[1] = 0;
    param_1[2] = local_d0;
  }
  else {
    FUN_009837b8(&local_30,*(undefined4 *)(param_2 + 0x350));
    if ((int)local_30 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_30 = FUN_00976294((int)local_30,local_30._4_4_);
    uVar2 = (ulonglong)local_30 >> 0x20;
    uVar4 = (undefined4)local_30;
    if (*(ushort *)(param_2 + 0x34a) != 0) {
      iVar9 = 0;
      puVar8 = (undefined4 *)(param_2 + 0x2cc);
      uVar7 = 0;
      iVar10 = local_28;
      do {
        FUN_006666fc(local_c0,puVar8[-1],*puVar8);
        FUN_00983a5c(auStack_80,param_2 + iVar9);
        FUN_009837b8(&local_3c,*(undefined4 *)(param_2 + uVar7 * 4 + 0x354),param_3 + -1);
        iVar3 = local_34;
        if (local_3c == 0) {
          iVar5 = FUN_00ab2820();
          uVar6 = 0;
          *(undefined2 *)(iVar5 + 0x34a) = 0;
          *(undefined4 *)(iVar5 + 0x2c0) = 0;
        }
        else {
          iVar5 = local_3c;
          uVar6 = local_38;
        }
        FUN_00976054(uVar4,(int)uVar2,local_c0,auStack_80,iVar5,uVar6);
        puVar8 = puVar8 + 3;
        uVar7 = uVar7 + 1;
        iVar10 = iVar3 + iVar10 + 1;
        iVar9 = iVar9 + 0x40;
      } while (uVar7 < *(ushort *)(param_2 + 0x34a));
      local_28 = iVar10;
    }
    *(undefined8 *)param_1 = local_30;
    param_1[2] = local_28;
  }
  return;
}

