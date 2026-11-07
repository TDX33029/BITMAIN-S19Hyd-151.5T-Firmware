// FUN_00f543f4 @ 00f543f4 size=1168 calls_out=7 calls_in=1
// strings: 

void FUN_00f543f4(undefined1 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  int *piVar9;
  int local_30;
  int *local_2c;
  int local_28;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar1) {
    do {
      uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      if ((0x17 < uVar6 - 9) || ((1 << (uVar6 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar6 == 0x22) {
          if (uVar1 <= uVar5) goto LAB_00f54520;
          goto LAB_00f544f8;
        }
        if (uVar6 != 0x7b) {
          local_30 = 10;
          goto LAB_00f54450;
        }
        cVar4 = *(char *)(param_2 + 0x1c) + -1;
        *(char *)(param_2 + 0x1c) = cVar4;
        if (cVar4 == '\0') {
          local_30 = 0x18;
          goto LAB_00f54450;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(param_2 + 0x14) = uVar5;
        if (uVar1 <= uVar5) goto LAB_00f544dc;
        piVar9 = (int *)(param_2 + 0xc);
        goto LAB_00f544b4;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar1 != uVar5);
  }
  local_30 = 5;
LAB_00f54450:
  uVar2 = FUN_01143ab8(param_2,&local_30);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
  while( true ) {
    if ((1 << (uVar6 & 0xff) & 0x800013U) == 0) {
      if (uVar6 != 0x19) goto LAB_00f5480c;
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar5 + 1;
      FUN_0157e5fc(&local_30,(int *)(param_2 + 0xc),param_2);
      if (local_30 != 2) {
        if (local_28 == 4) {
          if (*local_2c == 0x72657469) {
            param_1[1] = 0;
            *param_1 = 0;
            return;
          }
          if (*local_2c == 0x70696863) {
            param_1[1] = 1;
            *param_1 = 0;
            return;
          }
          local_28 = 4;
        }
        uVar2 = FUN_00f5681c(local_2c,local_28,&DAT_0187f460);
        goto LAB_00f54878;
      }
      goto LAB_00f5456c;
    }
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (uVar1 == uVar5) break;
LAB_00f544f8:
    uVar6 = *(byte *)(*(int *)(param_2 + 0xc) + uVar5) - 9;
    if (0x19 < uVar6) {
LAB_00f5480c:
      uVar2 = FUN_00f4db6c(param_2,&uStack_21,&DAT_0187f258);
LAB_00f54878:
      local_2c = (int *)FUN_011257e4(uVar2,param_2);
      goto LAB_00f5456c;
    }
  }
LAB_00f54520:
  local_30 = 5;
  local_2c = (int *)FUN_01143ab8(param_2,&local_30);
  goto LAB_00f5456c;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (uVar1 == uVar5) break;
LAB_00f544b4:
    uVar6 = *(byte *)(*piVar9 + uVar5) - 9;
    if (0x19 < uVar6) {
LAB_00f547ec:
      if (*(byte *)(*piVar9 + uVar5) == 0x7d) {
        local_30 = 10;
      }
      else {
        local_30 = 0x11;
      }
      goto LAB_00f546a8;
    }
    if ((1 << (uVar6 & 0xff) & 0x800013U) == 0) {
      if (uVar6 != 0x19) goto LAB_00f547ec;
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar5 + 1;
      FUN_0157e5fc(&local_30,piVar9,param_2);
      if (local_30 == 2) goto LAB_00f5485c;
      if (local_28 != 4) {
LAB_00f54850:
        local_2c = (int *)FUN_00f5681c(local_2c,local_28,&DAT_0187f460);
        goto LAB_00f5485c;
      }
      if (*local_2c == 0x72657469) {
        uVar8 = 0;
        iVar3 = FUN_00f4d8b4(param_2);
      }
      else {
        uVar8 = 1;
        if (*local_2c != 0x70696863) {
          local_28 = 4;
          goto LAB_00f54850;
        }
        iVar3 = FUN_00f4d8b4(param_2);
      }
      if (iVar3 != 0) goto LAB_00f547cc;
      uVar1 = *(uint *)(param_2 + 0x10);
      uVar5 = *(uint *)(param_2 + 0x14);
      if (uVar1 <= uVar5) goto LAB_00f546a4;
      iVar3 = *piVar9;
      goto LAB_00f5467c;
    }
  }
LAB_00f544dc:
  local_30 = 3;
  goto LAB_00f546a8;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (uVar1 == uVar5) break;
LAB_00f54744:
    uVar6 = *(byte *)(iVar3 + uVar5) - 9;
    if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(iVar3 + uVar5) == 0x7d) {
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        *param_1 = 0;
        return;
      }
      local_30 = 10;
      goto LAB_00f54770;
    }
  }
LAB_00f5476c:
  local_30 = 3;
LAB_00f54770:
  local_2c = (int *)FUN_00f4c908(param_2,&local_30);
LAB_00f5456c:
  *(int **)(param_1 + 4) = local_2c;
  *param_1 = 1;
  return;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (uVar1 == uVar5) break;
LAB_00f5467c:
    uVar6 = *(byte *)(iVar3 + uVar5) - 9;
    if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(iVar3 + uVar5) != 0x6e) {
        local_2c = (int *)FUN_00f4db6c(param_2,&uStack_21,&DAT_0187f288);
LAB_00f5485c:
        iVar3 = FUN_011257e4(local_2c,param_2);
        goto LAB_00f547cc;
      }
      uVar7 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar7;
      uVar6 = uVar1;
      if (uVar1 < uVar7) {
        uVar6 = uVar7;
      }
      if (uVar7 < uVar1) {
        cVar4 = *(char *)(iVar3 + uVar7);
        uVar7 = uVar5 + 2;
        *(uint *)(param_2 + 0x14) = uVar7;
        if (cVar4 == 'u') {
          if (uVar7 == uVar6) goto LAB_00f547b8;
          cVar4 = *(char *)(iVar3 + uVar7);
          uVar7 = uVar5 + 3;
          *(uint *)(param_2 + 0x14) = uVar7;
          if (cVar4 == 'l') {
            if (uVar7 == uVar6) goto LAB_00f547b8;
            cVar4 = *(char *)(iVar3 + uVar7);
            uVar5 = uVar5 + 4;
            *(uint *)(param_2 + 0x14) = uVar5;
            if (cVar4 == 'l') {
              cVar4 = *(char *)(param_2 + 0x1c);
              param_1[1] = uVar8;
              *(char *)(param_2 + 0x1c) = cVar4 + '\x01';
              if (uVar1 <= uVar5) goto LAB_00f5476c;
              goto LAB_00f54744;
            }
          }
        }
        local_30 = 9;
      }
      else {
LAB_00f547b8:
        local_30 = 5;
      }
      iVar3 = FUN_00f4c908(param_2,&local_30);
      goto LAB_00f547cc;
    }
  }
LAB_00f546a4:
  local_30 = 5;
LAB_00f546a8:
  iVar3 = FUN_01143ab8(param_2,&local_30);
LAB_00f547cc:
  *(int *)(param_1 + 4) = iVar3;
  *param_1 = 1;
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  return;
}

