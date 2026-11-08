// FUN_01252d08 @ 01252d08 size=984 calls_out=10 calls_in=2
// strings: 

void FUN_01252d08(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_68;
  int local_5c;
  int local_58;
  undefined1 local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  int local_38;
  undefined1 local_34;
  short local_30;
  short local_2e;
  uint local_2c;
  undefined1 uStack_25;
  
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar9 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
      uVar7 = uVar9 - 9;
      if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
        if (uVar9 != 0x5b) {
          local_5c = FUN_019659c8(param_2,&uStack_25,&DAT_01c249dc);
          goto LAB_0125303c;
        }
        cVar3 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar3;
        if (cVar3 != '\0') {
          *(uint *)(param_2 + 0x14) = uVar6 + 1;
          local_5c = 2;
          uVar6 = 2;
          local_48 = 0;
          local_50 = 0;
          local_4c = 2;
          local_54 = 1;
          local_58 = param_2;
          goto LAB_01252dd4;
        }
        local_44 = 0x18;
        goto LAB_01252d60;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
    } while (*(uint *)(param_2 + 0x10) != uVar6);
  }
  local_44 = 5;
LAB_01252d60:
  iVar4 = FUN_01964674(param_2,&local_44);
  goto LAB_01253048;
LAB_01252dd4:
  iVar2 = local_48;
  FUN_01965170(&local_44,&local_58);
  iVar4 = local_58;
  if ((char)local_44 == '\x01') goto LAB_0125305c;
  if (local_44._1_1_ != '\x01') {
    iVar4 = local_50;
    goto LAB_01252fcc;
  }
  uVar7 = *(uint *)(local_58 + 0x14);
  if (*(uint *)(local_58 + 0x10) <= uVar7) {
LAB_01252f90:
    local_44 = 5;
    uVar6 = FUN_01964674(local_58,&local_44);
LAB_01252fa4:
    goto LAB_01252fa8;
  }
  while( true ) {
    uVar9 = (uint)*(byte *)(*(int *)(local_58 + 0xc) + uVar7);
    uVar8 = uVar9 - 9;
    if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) break;
    uVar7 = uVar7 + 1;
    *(uint *)(local_58 + 0x14) = uVar7;
    if (*(uint *)(local_58 + 0x10) == uVar7) goto LAB_01252f90;
  }
  if (uVar9 != 0x5b) {
    uVar7 = FUN_019659c8(local_58,&uStack_25,&DAT_01c2495c);
LAB_01253078:
    uVar6 = FUN_01966f00(uVar7,iVar4);
    goto LAB_01252fa4;
  }
  cVar3 = *(char *)(local_58 + 0x24) + -1;
  *(char *)(local_58 + 0x24) = cVar3;
  if (cVar3 == '\0') {
    local_44 = 0x18;
    uVar6 = FUN_01964674(local_58,&local_44);
    goto LAB_01252fa4;
  }
  *(uint *)(local_58 + 0x14) = uVar7 + 1;
  local_34 = 1;
  local_38 = local_58;
  FUN_014b5ad4(&local_30,&local_38);
  uVar9 = local_2c;
  if (local_30 == 1) {
    local_68 = local_2c;
LAB_01252eb8:
    uVar9 = 0;
    bVar1 = true;
  }
  else {
    if (local_2e != 1) {
      local_68 = FUN_014b5c7c(0,&uStack_25,&DAT_01c2495c);
      goto LAB_01252eb8;
    }
    FUN_014b5ad4(&local_44,&local_38);
    if ((short)local_44 != 0) {
      local_68 = local_40;
      goto LAB_01252eb8;
    }
    if (local_44._2_2_ != 1) {
      local_68 = FUN_014b5c7c(1,&uStack_25,&DAT_01c2495c);
      goto LAB_01252eb8;
    }
    local_68 = local_40 & 0xffff;
    uVar9 = uVar9 << 0x10;
    bVar1 = false;
  }
  *(char *)(iVar4 + 0x24) = *(char *)(iVar4 + 0x24) + '\x01';
  uVar7 = FUN_01964fb0(iVar4);
  if (bVar1) {
    if (uVar7 != 0) {
      FUN_01225578();
    }
    uVar7 = local_68;
    goto LAB_01253078;
  }
  if (uVar7 != 0) goto LAB_01253078;
  if (iVar2 == local_50) {
    FUN_0124a104(&local_50,iVar2,uVar6);
    local_5c = local_4c;
  }
  uVar6 = local_68 & 0xffff;
  *(uint *)(local_5c + iVar2 * 4) = uVar9 >> 0x10 | local_68 << 0x10;
  local_48 = iVar2 + 1;
  goto LAB_01252dd4;
LAB_0125305c:
  uVar6 = local_40;
LAB_01252fa8:
  FUN_0132b958(local_50,local_4c,2,4);
  local_5c = (uVar6 & 0xffff) + (uVar6 & 0xffff0000);
  iVar4 = -0x80000000;
LAB_01252fcc:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  iVar5 = FUN_01964fb0(param_2);
  if (iVar4 == -0x80000000) {
    if (iVar5 != 0) {
      FUN_01225578(iVar5);
    }
  }
  else {
    if (iVar5 == 0) {
      param_1[1] = local_5c;
      *param_1 = iVar4;
      param_1[2] = iVar2;
      return;
    }
    FUN_0132b958(iVar4,local_5c,2,4);
    local_5c = iVar5;
  }
LAB_0125303c:
  iVar4 = FUN_01966f00(local_5c,param_2);
LAB_01253048:
  *param_1 = -0x80000000;
  param_1[1] = iVar4;
  return;
}

