// FUN_00985718 @ 00985718 size=608 calls_out=9 calls_in=2
// strings: 

void FUN_00985718(int *param_1,int param_2,int param_3)

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
  int local_344;
  undefined8 local_340;
  uint local_338;
  undefined1 local_334 [12];
  undefined1 auStack_328 [380];
  int local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  undefined1 auStack_1a0 [380];
  
  puVar7 = (undefined4 *)(param_2 + 0x1034);
  local_344 = param_2;
  if (param_3 == 0) {
    iVar5 = FUN_01adb6cc();
    uVar8 = 0;
    sVar1 = *(short *)(param_2 + 0x10b2);
    *(undefined4 *)(&DAT_00001028 + iVar5) = 0;
    local_338 = 0;
    *(undefined2 *)(iVar5 + 0x10b2) = 0;
    local_340._4_4_ = 0;
    local_340._0_4_ = iVar5;
    if (sVar1 != 0) {
      do {
        FUN_006666fc(local_334,puVar7[-1],*puVar7);
        FUN_009828b0(auStack_1a0,local_344);
        FUN_01ad2d98(auStack_328,iVar5,local_334,auStack_1a0);
        puVar7 = puVar7 + 3;
        uVar8 = uVar8 + 1;
        local_344 = local_344 + 0x178;
      } while (uVar8 < *(ushort *)(param_2 + 0x10b2));
      local_338 = uVar8;
    }
    *param_1 = (int)local_340;
    param_1[1] = local_340._4_4_;
    param_1[2] = local_338;
  }
  else {
    FUN_00985718(&local_340,*(undefined4 *)(param_2 + 0x10b8));
    if ((int)local_340 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_340 = FUN_01ad3824((int)local_340,local_340._4_4_);
    uVar2 = (ulonglong)local_340 >> 0x20;
    uVar4 = (undefined4)local_340;
    if (*(short *)(param_2 + 0x10b2) != 0) {
      uVar9 = 0;
      uVar8 = local_338;
      do {
        FUN_006666fc(local_334,puVar7[-1],*puVar7);
        FUN_009828b0(auStack_328,local_344);
        FUN_00985718(&local_1ac,*(undefined4 *)(param_2 + 0x10bc + uVar9 * 4),param_3 + -1);
        iVar3 = local_1a4;
        uVar6 = local_1a8;
        iVar5 = local_1ac;
        FUN_01bed4e2(auStack_1a0,auStack_328,0x178);
        if (iVar5 == 0) {
          iVar5 = FUN_01adb6cc();
          uVar6 = 0;
          *(undefined4 *)(&DAT_00001028 + iVar5) = 0;
          *(undefined2 *)(iVar5 + 0x10b2) = 0;
        }
        FUN_01ad36b4(uVar4,(int)uVar2,local_334,auStack_1a0,iVar5,uVar6);
        puVar7 = puVar7 + 3;
        uVar9 = uVar9 + 1;
        uVar8 = iVar3 + uVar8 + 1;
        local_344 = local_344 + 0x178;
      } while (uVar9 < *(ushort *)(param_2 + 0x10b2));
      local_338 = uVar8;
    }
    *(undefined8 *)param_1 = local_340;
    param_1[2] = local_338;
  }
  return;
}

