// FUN_0151fc80 @ 0151fc80 size=872 calls_out=11 calls_in=0
// strings: 

void FUN_0151fc80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 *local_2c;
  uint local_28;
  
  if ((param_4 != 0x4a0) || (iVar1 = FUN_01740f78(0x3dd,param_3,0x4a0), iVar1 == 0)) {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[4] = 0;
    param_1[2] = &DAT_8000001c;
    param_1[3] = 0x1a;
    *param_1 = 1;
    return;
  }
  local_38 = 0x440;
  local_34 = 0x20;
  puVar2 = (undefined1 *)FUN_016d38c8(0x440,1);
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x440);
  }
  iVar3 = FUN_016d38c8(0x20,1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x20);
  }
  iVar4 = FUN_0173b2c8(iVar1,0);
  if (iVar4 != 0) {
    iVar5 = FUN_0173bed8(iVar4,puVar2,&local_38,iVar3,&local_34);
    uVar9 = local_34;
    if (iVar5 == 1) {
      local_28 = local_38;
      if (0x43f < local_38) {
        local_28 = 0x440;
      }
      local_30 = 0x440;
      local_2c = puVar2;
      if (local_34 < 0x20) {
        if (local_34 == 0) {
          thunk_FUN_016d3fb4(iVar3);
          iVar3 = 1;
        }
        else {
          iVar3 = thunk_FUN_016d4ea4(iVar3,local_34);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar9);
          }
        }
      }
      else {
        uVar9 = 0x20;
      }
      uVar8 = local_28;
      puVar2 = local_2c;
      FUN_01739f80(iVar4);
      local_30 = 0x440;
      local_28 = uVar8;
      local_2c = puVar2;
      if ((int)uVar8 < 0) {
        uVar6 = 0;
LAB_0151fe7c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar6,uVar8);
      }
      iVar5 = 1;
      iVar4 = 1;
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar4 = thunk_FUN_016d4a50(uVar8);
        if (iVar4 == 0) {
          uVar6 = 1;
          goto LAB_0151fe7c;
        }
        uVar7 = uVar8;
      }
      FUN_016dd1aa(iVar4,puVar2,uVar8);
      uVar10 = 0;
      if ((uVar9 != 0) && (iVar5 = thunk_FUN_016d4a50(uVar9), uVar10 = uVar9, iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar9);
      }
      FUN_016dd1aa(iVar5,iVar3,uVar9);
      *(undefined2 *)(param_1 + 8) = 0xb;
      param_1[1] = uVar7;
      param_1[2] = iVar4;
      *param_1 = 0;
      param_1[3] = uVar8;
      param_1[4] = uVar10;
      param_1[5] = iVar5;
      param_1[6] = uVar9;
      param_1[7] = 0;
      if (uVar9 == 0) {
        uVar9 = 0x440;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined1 *)(iVar3 + uVar8) = 0;
          uVar8 = uVar8 + 1;
        } while (uVar9 != uVar8);
        thunk_FUN_016d3fb4(iVar3);
        uVar9 = local_30;
        if (local_30 == 0x80000000) goto LAB_0151fe18;
      }
      if (local_28 != 0) {
        puVar2 = local_2c;
        do {
          *puVar2 = 0;
          local_28 = local_28 - 1;
          puVar2 = puVar2 + 1;
        } while (local_28 != 0);
        uVar9 = local_30;
      }
      local_28 = 0;
      puVar2 = local_2c;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      if ((local_30 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_2c);
        FUN_01739ee4(iVar1);
        return;
      }
      goto LAB_0151fe18;
    }
    FUN_01739f80(iVar4);
  }
  thunk_FUN_016d3fb4(iVar3);
  thunk_FUN_016d3fb4(puVar2);
  param_1[3] = 0x1a;
  param_1[2] = &DAT_8000001c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 1;
LAB_0151fe18:
  FUN_01739ee4(iVar1);
  return;
}

