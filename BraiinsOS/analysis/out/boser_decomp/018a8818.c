// FUN_018a8818 @ 018a8818 size=352 calls_out=4 calls_in=1
// strings: 

void FUN_018a8818(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uStack_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar11 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar11 == (ushort *)0x0) || ((int)((ulonglong)uVar11 >> 0x20) != 2)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    uVar1 = *(ushort *)uVar11;
    uVar11 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
    if ((int)uVar11 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
    }
    else {
      iVar10 = 4;
      local_44 = 0;
      local_38 = 0;
      local_3c = 4;
      local_40 = 0;
      if ((int)((ulonglong)uVar11 >> 0x20) != 0) {
        iVar9 = 8;
        do {
          iVar2 = local_38;
          uStack_4c = uVar11;
          FUN_018b5f6c(&local_34,&uStack_4c);
          uVar6 = uStack_28;
          uVar5 = local_2c;
          iVar4 = local_30;
          iVar3 = local_34;
          if (local_34 == -0x80000000) {
            *param_1 = 1;
            param_1[1] = local_30;
            param_1[2] = local_2c;
            param_1[3] = uStack_28;
            FUN_018a80e8(&local_40);
            return;
          }
          uVar11 = uStack_4c;
          if (iVar2 == local_40) {
            FUN_018fa978(&local_40);
            iVar10 = local_3c;
            uVar11 = uStack_4c;
          }
          uStack_4c._4_4_ = (uint)((ulonglong)uVar11 >> 0x20);
          piVar7 = (int *)(iVar10 + iVar2 * 0x10);
          *piVar7 = iVar3;
          local_38 = iVar2 + 1;
          piVar7[1] = iVar4;
          puVar8 = (undefined4 *)(iVar10 + iVar9);
          *puVar8 = uVar5;
          iVar9 = iVar9 + 0x10;
          puVar8[1] = uVar6;
        } while (local_44 < uStack_4c._4_4_);
      }
      param_1[1] = local_40;
      param_1[2] = local_3c;
      param_1[3] = local_38;
      *param_1 = 0;
    }
  }
  return;
}

