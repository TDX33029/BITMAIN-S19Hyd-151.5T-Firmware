// FUN_01516658 @ 01516658 size=956 calls_out=8 calls_in=1
// strings: 

void FUN_01516658(uint *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint unaff_r10;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar7 = param_2[1];
  uVar6 = param_2[2];
  if (uVar7 == uVar6) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 0x80000001;
    param_1[2] = (uint)&DAT_0040bd5b;
    param_1[3] = 0x15;
    return;
  }
  uVar9 = uVar6 + 1;
  param_2[2] = uVar9;
  if (uVar7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar6,uVar9,uVar7,&DAT_018a78f8);
  }
  iVar10 = *param_2;
  cVar1 = *(char *)(iVar10 + uVar6);
  if (cVar1 != '\x01') {
    if (uVar7 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar9,uVar7,uVar7,&DAT_018a78e8);
    }
    uVar6 = uVar7 - uVar9;
    param_2[2] = uVar7;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar6);
    }
    if (uVar6 == 0) {
      uVar7 = 0;
      uVar4 = 1;
    }
    else {
      uVar4 = thunk_FUN_016d4a50(uVar6);
      uVar7 = uVar6;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar6);
      }
    }
    FUN_016dd1aa(uVar4,iVar10 + uVar9,uVar6);
    param_1[2] = uVar7;
    param_1[3] = uVar4;
    param_1[4] = uVar6;
    *(char *)((int)param_1 + 5) = cVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0x80000000;
    return;
  }
  FUN_0152d84c(&local_34,&DAT_005654a0,param_2);
  uVar6 = local_34 & 0xff;
  if (uVar6 == 0x18) {
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    if (local_30 <= uVar6 - uVar7) {
      uVar9 = uVar7 + local_30;
      param_2[2] = uVar9;
      if ((CARRY4(uVar7,local_30)) || (uVar6 < uVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar7,uVar9,uVar6,&DAT_018a78f8);
      }
      local_4c = *param_2 + uVar7;
      local_44 = 0;
      local_48 = local_30;
      local_38 = 0;
      local_3c = 4;
      local_40 = 0;
      if (local_30 != 0) {
        uVar6 = 4;
        iVar10 = 0;
LAB_01516830:
        uVar7 = local_38;
        FUN_01540ae4(&local_34,&local_4c);
        uVar3 = local_28;
        uVar2 = local_2c;
        uVar4 = local_30;
        uVar9 = local_3c;
        if (local_34 == 0) goto code_r0x01516850;
        puVar8 = (undefined4 *)(local_3c + 4);
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          if (puVar8[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar8);
          }
          puVar8 = puVar8 + 3;
        }
        uVar7 = local_30 >> 8;
        uVar6 = local_30;
        unaff_r10 = local_2c;
        if (local_40 != 0) {
          thunk_FUN_016d3fb4(uVar9);
        }
        goto LAB_0151673c;
      }
LAB_015168fc:
      uVar9 = local_38;
      uVar7 = local_3c;
      uVar6 = local_40;
      FUN_01540ae4(&local_34,param_2);
      local_40 = local_30;
      local_3c = local_2c;
      local_38 = local_28;
      if (local_34 == 1) {
        puVar8 = (undefined4 *)(uVar7 + 4);
        local_6c = local_30;
        local_68 = local_2c;
        local_64 = local_28;
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          if (puVar8[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar8);
          }
          puVar8 = puVar8 + 3;
        }
        if (uVar6 != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
      }
      else {
        local_64 = local_30;
        local_6c = uVar7;
        local_68 = uVar9;
        if (uVar6 != 0x80000000) {
          param_1[1] = uVar7;
          param_1[2] = uVar9;
          *param_1 = uVar6;
          param_1[3] = local_30;
          param_1[4] = local_2c;
          param_1[5] = local_28;
          return;
        }
      }
      goto LAB_01516758;
    }
    uVar7 = 0;
    local_28 = 0;
    uVar6 = 0xb;
  }
  else {
    uVar7 = local_34 >> 8;
    local_28 = local_2c;
    unaff_r10 = local_30;
  }
LAB_0151673c:
  local_6c = uVar6 & 0xff | uVar7 << 8;
  local_68 = unaff_r10;
  local_64 = local_28;
LAB_01516758:
  *param_1 = 0x80000001;
  param_1[1] = local_6c;
  param_1[2] = local_68;
  param_1[3] = local_64;
  return;
code_r0x01516850:
  if (uVar7 == local_40) {
    FUN_0154e248(&local_40);
    uVar6 = local_3c;
  }
  local_38 = uVar7 + 1;
  puVar5 = (uint *)(uVar6 + iVar10);
  *puVar5 = uVar4;
  iVar10 = iVar10 + 0xc;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  if (local_48 <= local_44) goto LAB_015168fc;
  goto LAB_01516830;
}

