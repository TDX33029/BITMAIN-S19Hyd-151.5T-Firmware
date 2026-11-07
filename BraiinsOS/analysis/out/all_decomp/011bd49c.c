// FUN_011bd49c @ 011bd49c size=972 calls_out=4 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x011bd510) */
/* WARNING: Removing unreachable block (ram,0x011bd6c0) */

void FUN_011bd49c(undefined1 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int *local_40;
  int *local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar8 = *param_2;
  uVar10 = 0;
  while (*(char *)(iVar8 + 0x28) == '\x01') {
    uVar10 = (uint)*(byte *)(iVar8 + 0x29);
    bVar4 = false;
LAB_011bd560:
    bVar5 = true;
    bVar3 = true;
    if (bVar4) goto LAB_011bd5cc;
    if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) goto LAB_011bd5f8;
    uVar2 = *(undefined1 *)(iVar8 + 0x29);
    cVar1 = *(char *)(iVar8 + 0x28);
    *(undefined1 *)(iVar8 + 0x28) = 0;
    if ((cVar1 == '\x01') && (*(int *)(iVar8 + 0xc) != -0x80000000)) {
      iVar11 = *(int *)(iVar8 + 0x14);
      if (iVar11 == *(int *)(iVar8 + 0xc)) {
        FUN_006029c0(iVar8 + 0xc);
      }
      *(undefined1 *)(*(int *)(iVar8 + 0x10) + iVar11) = uVar2;
      *(int *)(iVar8 + 0x14) = iVar11 + 1;
    }
  }
  FUN_011ef738(&local_30,iVar8 + 0x18);
  bVar3 = false;
  if ((local_30 & 0xff) != 5) {
    if ((local_30 & 0xff) == 4) {
      uVar10 = (uint)local_30._1_1_;
      *(byte *)(iVar8 + 0x29) = local_30._1_1_;
      *(undefined1 *)(iVar8 + 0x28) = 1;
      bVar4 = bVar3;
    }
    else {
      local_40 = (int *)FUN_0157c4a0(local_30,local_2c);
      bVar4 = true;
    }
    goto LAB_011bd560;
  }
  bVar5 = false;
LAB_011bd5cc:
  if (bVar3) goto LAB_011bd5dc;
  if (!bVar5) {
    local_30 = 3;
    local_40 = (int *)FUN_0157c50c(&local_30,*(undefined4 *)(iVar8 + 0x1c),
                                   *(undefined4 *)(iVar8 + 0x20));
    goto LAB_011bd5dc;
  }
LAB_011bd5f8:
  if (uVar10 == 0x7d) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if ((char)param_2[1] == '\0') {
    if (uVar10 != 0x2c) {
      uVar6 = *(undefined4 *)(iVar8 + 0x1c);
      uVar7 = *(undefined4 *)(iVar8 + 0x20);
      local_30 = 8;
      goto LAB_011bd840;
    }
    bVar9 = *(byte *)(iVar8 + 0x29);
    cVar1 = *(char *)(iVar8 + 0x28);
    *(undefined1 *)(iVar8 + 0x28) = 0;
    local_3c = param_2;
    if ((cVar1 == '\x01') && (*(int *)(iVar8 + 0xc) != -0x80000000)) {
      iVar11 = *(int *)(iVar8 + 0x14);
      if (iVar11 == *(int *)(iVar8 + 0xc)) {
        FUN_006029c0(iVar8 + 0xc);
      }
      *(byte *)(*(int *)(iVar8 + 0x10) + iVar11) = bVar9;
      *(int *)(iVar8 + 0x14) = iVar11 + 1;
    }
LAB_011bd6a0:
    if (*(char *)(iVar8 + 0x28) != '\x01') {
      FUN_011ef738(&local_30,iVar8 + 0x18);
      bVar4 = false;
      if ((local_30 & 0xff) != 5) {
        if ((local_30 & 0xff) == 4) {
          *(byte *)(iVar8 + 0x29) = local_30._1_1_;
          *(undefined1 *)(iVar8 + 0x28) = 1;
          bVar9 = local_30._1_1_;
          bVar3 = bVar4;
        }
        else {
          local_3c = (int *)FUN_0157c4a0(local_30,local_2c);
          bVar3 = true;
        }
        goto LAB_011bd710;
      }
      bVar5 = false;
LAB_011bd798:
      if (bVar4) {
        local_40 = local_3c;
        goto LAB_011bd5dc;
      }
      if (!bVar5) {
        uVar6 = *(undefined4 *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(iVar8 + 0x20);
        local_30 = 5;
        goto LAB_011bd840;
      }
      if (bVar9 == 0x22) goto LAB_011bd7b0;
      goto LAB_011bd818;
    }
    bVar9 = *(byte *)(iVar8 + 0x29);
    bVar3 = false;
LAB_011bd710:
    bVar5 = true;
    bVar4 = true;
    if (bVar3) goto LAB_011bd798;
    uVar10 = bVar9 - 9;
    if (0x19 < uVar10) goto LAB_011bd818;
    if ((1 << (uVar10 & 0xff) & 0x800013U) != 0) {
      uVar2 = *(undefined1 *)(iVar8 + 0x29);
      cVar1 = *(char *)(iVar8 + 0x28);
      *(undefined1 *)(iVar8 + 0x28) = 0;
      if ((cVar1 == '\x01') && (*(int *)(iVar8 + 0xc) != -0x80000000)) {
        iVar11 = *(int *)(iVar8 + 0x14);
        if (iVar11 == *(int *)(iVar8 + 0xc)) {
          FUN_006029c0(iVar8 + 0xc);
        }
        *(undefined1 *)(*(int *)(iVar8 + 0x10) + iVar11) = uVar2;
        *(int *)(iVar8 + 0x14) = iVar11 + 1;
      }
      goto LAB_011bd6a0;
    }
    if (uVar10 == 0x19) {
LAB_011bd7b0:
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
LAB_011bd818:
    if (bVar9 == 0x7d) {
      uVar6 = *(undefined4 *)(iVar8 + 0x1c);
      uVar7 = *(undefined4 *)(iVar8 + 0x20);
      local_30 = 0x15;
      goto LAB_011bd840;
    }
  }
  else {
    *(undefined1 *)(param_2 + 1) = 0;
    if (uVar10 == 0x22) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  uVar6 = *(undefined4 *)(iVar8 + 0x1c);
  uVar7 = *(undefined4 *)(iVar8 + 0x20);
  local_30 = 0x11;
LAB_011bd840:
  local_40 = (int *)FUN_0157c50c(&local_30,uVar6,uVar7);
LAB_011bd5dc:
  *(int **)(param_1 + 4) = local_40;
  *param_1 = 1;
  return;
}

