// FUN_00e93040 @ 00e93040 size=1620 calls_out=21 calls_in=1
// strings: ed25519_public_key | ed25519_public_key | ed25519_public_key | ed25519_public_key | ed25519_public_key

void FUN_00e93040(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  byte *pbVar5;
  char ***pppcVar6;
  char ***pppcVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *unaff_r11;
  int *piVar15;
  int local_1c8;
  undefined1 local_1c4;
  char **local_1c0;
  undefined4 local_1bc;
  int local_104;
  char ***local_100;
  undefined4 local_f8;
  char ***local_f4;
  int *local_f0;
  undefined4 auStack_ec [47];
  char ***local_30;
  int *local_2c;
  undefined4 uStack_28;
  
  while( true ) {
    if (*(char *)(param_2 + 0x2c) == '\0') {
      pbVar5 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar5;
        uVar8 = *(undefined4 *)(param_2 + 0x20);
        uVar11 = *(undefined4 *)(param_2 + 0x24);
        local_f8 = (char ***)0x5;
        goto LAB_00e93140;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      bVar1 = *pbVar5;
      uVar12 = (uint)bVar1;
      *(byte **)(param_2 + 0x18) = pbVar5 + 1;
      iVar13 = *(int *)(param_2 + 0x24) + 1;
      if (uVar12 == 10) {
        *(int *)(param_2 + 0x28) = iVar13 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar13 = 0;
      }
      *(byte *)(param_2 + 0x2d) = bVar1;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar13;
    }
    else {
      uVar12 = (uint)*(byte *)(param_2 + 0x2d);
    }
    if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) break;
    *(undefined1 *)(param_2 + 0x2c) = 0;
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar13 = *(int *)(param_2 + 0x14);
      if (iVar13 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(char *)(*(int *)(param_2 + 0x10) + iVar13) = (char)uVar12;
      *(int *)(param_2 + 0x14) = iVar13 + 1;
    }
  }
  if (uVar12 == 0x5b) {
    cVar4 = *(char *)(param_2 + 0x30) + -1;
    *(char *)(param_2 + 0x30) = cVar4;
    if (cVar4 != '\0') {
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (*(int *)(param_2 + 0xc) != -0x80000000) {
        iVar13 = *(int *)(param_2 + 0x14);
        if (iVar13 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(param_2 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar13) = 0x5b;
        *(int *)(param_2 + 0x14) = iVar13 + 1;
      }
      local_1c4 = 1;
      local_1c8 = param_2;
      FUN_005e5eec(&local_f8,&local_1c8);
      if ((char)local_f8 == '\x01') {
        pppcVar6 = local_f4;
LAB_00e93360:
        bVar3 = true;
      }
      else {
        if (local_f8._1_1_ != '\x01') {
          pppcVar6 = (char ***)FUN_00f2c2f0(0,&DAT_01856848,&DAT_018ab990);
          goto LAB_00e93360;
        }
        FUN_005e89cc(&local_104,local_1c8);
        if (local_104 == -0x80000000) {
          pppcVar6 = local_100;
          goto LAB_00e93360;
        }
        FUN_0110e108(&local_f8,&local_104);
        if (local_f8 == (char ***)&DAT_00000001) {
          local_30 = local_f4;
          local_2c = local_f0;
          uStack_28 = auStack_ec[0];
          pppcVar6 = (char ***)FUN_00ea02c0(&local_30);
          goto LAB_00e93360;
        }
        pppcVar6 = &local_1c0;
        FUN_016dd1aa(pppcVar6,auStack_ec,0xbc);
        FUN_016dd1aa(&local_f8,pppcVar6,0xbc);
        bVar3 = false;
        unaff_r11 = local_f0;
      }
      *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
      pppcVar7 = (char ***)FUN_005b8f24(param_2);
      if (!bVar3) goto LAB_00e9342c;
      if (pppcVar7 != (char ***)0x0) {
        FUN_005c3974();
        thunk_FUN_016d3fb4(pppcVar7);
      }
      goto LAB_00e93474;
    }
  }
  else {
    if (uVar12 != 0x7b) {
      pppcVar6 = (char ***)FUN_005b85f0(param_2,&local_f8,&DAT_01856918);
      goto LAB_00e93474;
    }
    cVar4 = *(char *)(param_2 + 0x30) + -1;
    *(char *)(param_2 + 0x30) = cVar4;
    if (cVar4 != '\0') {
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (*(int *)(param_2 + 0xc) != -0x80000000) {
        iVar13 = *(int *)(param_2 + 0x14);
        if (iVar13 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(param_2 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar13) = 0x7b;
        *(int *)(param_2 + 0x14) = iVar13 + 1;
      }
      local_100 = (char ***)CONCAT31(local_100._1_3_,1);
      piVar15 = &local_104;
      local_104 = param_2;
      do {
        FUN_005e5af4(&local_f8,piVar15);
        iVar13 = local_104;
        if ((char)local_f8 == '\x01') goto LAB_00e93400;
        if (local_f8._1_1_ != '\x01') {
          puVar9 = &DAT_0057a25d;
          local_f8 = &local_1c0;
          local_1bc = 0x12;
          local_1c0 = (char **)0x3895c0;
          goto LAB_00e935e0;
        }
        uVar2 = *(undefined1 *)(local_104 + 0x2d);
        piVar10 = (int *)(local_104 + 0xc);
        cVar4 = *(char *)(local_104 + 0x2c);
        *(undefined1 *)(local_104 + 0x2c) = 0;
        if ((cVar4 == '\x01') && (*piVar10 != -0x80000000)) {
          iVar14 = *(int *)(local_104 + 0x14);
          if (iVar14 == *piVar10) {
            FUN_006029c0(piVar10);
          }
          *(undefined1 *)(*(int *)(iVar13 + 0x10) + iVar14) = uVar2;
          *(int *)(iVar13 + 0x14) = iVar14 + 1;
        }
        *(undefined4 *)(iVar13 + 8) = 0;
        FUN_00ef8e3c(&local_f8,piVar10,iVar13);
        pppcVar6 = local_f4;
        if (local_f8 == (char ***)&SUB_00000002) break;
        if ((local_f0 == (int *)&DAT_00000012) &&
           (iVar14 = thunk_FUN_016dd50a(local_f4,"ed25519_public_key",0x12), iVar14 == 0)) {
          pppcVar6 = (char ***)FUN_005b8a40(iVar13);
          if (pppcVar6 == (char ***)0x0) {
            FUN_00e93dd8(&local_f8,iVar13);
            unaff_r11 = local_f0;
            if (local_f8 == (char ***)&DAT_00000001) goto LAB_00e93400;
            FUN_016dd1aa(&local_1c0,auStack_ec,0xbc);
            goto LAB_00e934f4;
          }
          break;
        }
        pppcVar6 = (char ***)FUN_005b5438(iVar13);
      } while (pppcVar6 == (char ***)0x0);
      goto LAB_00e93404;
    }
  }
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar11 = *(undefined4 *)(param_2 + 0x24);
  local_f8 = (char ***)0x18;
LAB_00e93140:
  uVar8 = FUN_0157c50c(&local_f8,uVar8,uVar11);
LAB_00e93154:
  param_1[1] = uVar8;
  *param_1 = 1;
  return;
LAB_00e934f4:
  FUN_005e5af4(&local_f8,&local_104);
  iVar13 = local_104;
  piVar15 = unaff_r11;
  if ((char)local_f8 != '\0') goto LAB_00e93400;
  if (local_f8._1_1_ == '\x01') {
    uVar2 = *(undefined1 *)(local_104 + 0x2d);
    piVar10 = (int *)(local_104 + 0xc);
    cVar4 = *(char *)(local_104 + 0x2c);
    *(undefined1 *)(local_104 + 0x2c) = 0;
    if ((cVar4 == '\x01') && (*piVar10 != -0x80000000)) {
      iVar14 = *(int *)(local_104 + 0x14);
      if (iVar14 == *piVar10) {
        FUN_006029c0(piVar10);
      }
      *(undefined1 *)(*(int *)(iVar13 + 0x10) + iVar14) = uVar2;
      *(int *)(iVar13 + 0x14) = iVar14 + 1;
    }
    *(undefined4 *)(iVar13 + 8) = 0;
    FUN_00ef8e3c(&local_f8,piVar10,iVar13);
    pppcVar6 = local_f4;
    if (local_f8 != (char ***)&SUB_00000002) {
      if ((local_f0 != (int *)&DAT_00000012) ||
         (iVar14 = thunk_FUN_016dd50a(local_f4,"ed25519_public_key",0x12), iVar14 != 0))
      goto LAB_00e934e0;
      local_2c = (int *)&DAT_00000012;
      puVar9 = &DAT_00582dbd;
      local_f8 = (char ***)&local_30;
      local_30 = (char ***)0x3895c0;
LAB_00e935e0:
      local_f4 = (char ***)&DAT_0157d360;
      pppcVar6 = (char ***)FUN_00f56780(puVar9,&local_f8);
    }
    goto LAB_00e93404;
  }
  pppcVar6 = (char ***)FUN_016dd1aa(&local_f8,&local_1c0,0xbc);
  bVar3 = false;
  goto LAB_00e93408;
LAB_00e93400:
  pppcVar6 = local_f4;
LAB_00e93404:
  bVar3 = true;
  unaff_r11 = piVar15;
LAB_00e93408:
  *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
  pppcVar7 = (char ***)FUN_005b8cec(param_2);
  if (bVar3) {
    if (pppcVar7 != (char ***)0x0) {
      FUN_005c3974();
      thunk_FUN_016d3fb4(pppcVar7);
    }
  }
  else {
LAB_00e9342c:
    pppcVar6 = pppcVar7;
    if (pppcVar6 == (char ***)0x0) {
      FUN_016dd1aa(param_1 + 3,&local_f8,0xbc);
      param_1[2] = unaff_r11;
      *param_1 = 0;
      return;
    }
  }
LAB_00e93474:
  uVar8 = FUN_011da120(pppcVar6,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  goto LAB_00e93154;
LAB_00e934e0:
  pppcVar6 = (char ***)FUN_005b5438(iVar13);
  bVar3 = true;
  if (pppcVar6 != (char ***)0x0) goto LAB_00e93408;
  goto LAB_00e934f4;
}

