// FUN_016bd9a4 @ 016bd9a4 size=936 calls_out=8 calls_in=2
// strings: 

void FUN_016bd9a4(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined *puVar10;
  int unaff_r8;
  int unaff_r10;
  undefined4 uVar11;
  undefined4 unaff_lr;
  undefined4 local_2e8;
  undefined4 local_2e4;
  int local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int local_2cc;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int local_2b8 [2];
  char cStack_2af;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int local_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  uint local_280;
  int iStack_27c;
  int iStack_278;
  undefined1 auStack_128 [260];
  
  if (param_3 != 0) {
    iVar3 = param_3 << 4;
    iVar7 = param_2;
    do {
      if (iVar3 == 0) {
        if (param_3 != 1) {
          if (param_3 != 2) goto LAB_016bda40;
          iVar3 = 0;
          goto LAB_016bda28;
        }
        if (*(int *)(param_2 + 8) == 1) {
          uVar1 = **(undefined1 **)(param_2 + 4);
          *param_1 = 0x80000000;
          *(undefined1 *)(param_1 + 1) = uVar1;
          return;
        }
        FUN_016c7ccc(local_2b8,*(undefined1 **)(param_2 + 4),*(int *)(param_2 + 8));
        if ((local_280 & 1) == 0) {
          if (iStack_278 == 0) {
            unaff_r10 = 1;
          }
          else {
            unaff_r10 = FUN_01298504(iStack_278,1);
            if (unaff_r10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(1,iStack_278);
            }
          }
          FUN_01bed4e2(unaff_r10,iStack_27c,iStack_278);
        }
        else {
          unaff_r10 = iStack_27c;
        }
        local_2e4 = local_290;
        uVar11 = 1;
        local_2e8 = local_28c;
        local_2e0 = local_2b8[0];
        iStack_2dc = local_2b8[1];
        iStack_2d8 = iStack_2b0;
        iStack_2d4 = iStack_2ac;
        iStack_2d0 = iStack_2a8;
        local_2cc = local_2a4;
        iStack_2c8 = iStack_2a0;
        iStack_2c4 = iStack_29c;
        iStack_2c0 = iStack_298;
        iStack_2bc = iStack_294;
        goto LAB_016bdc7c;
      }
      piVar9 = (int *)(iVar7 + 8);
      iVar3 = iVar3 + -0x10;
      iVar7 = iVar7 + 0x10;
    } while (*piVar9 != 0);
  }
  goto LAB_016bd9e0;
  while (piVar9 = (int *)(param_2 + 8 + iVar3), iVar3 = iVar3 + 0x10, *piVar9 == 1) {
LAB_016bda28:
    if (iVar3 == 0x20) {
      if (*(int *)(param_2 + 8) == 0) {
        puVar10 = &DAT_01d0759c;
      }
      else {
        if (*(int *)(param_2 + 0x18) != 0) {
          puVar4 = *(undefined1 **)(param_2 + 4);
          puVar8 = *(undefined1 **)(param_2 + 0x14);
          *param_1 = 0x80000001;
          uVar1 = *puVar8;
          *(undefined1 *)(param_1 + 1) = *puVar4;
          *(undefined1 *)((int)param_1 + 5) = uVar1;
          return;
        }
        puVar10 = &DAT_01d075ac;
      }
      goto LAB_016bdd40;
    }
  }
LAB_016bda40:
  uVar5 = 0;
  if (param_3 == 3) {
    iVar3 = 8;
    do {
      if (iVar3 == 0x38) {
        if (*(int *)(param_2 + 8) == 0) {
          puVar10 = &DAT_01d075bc;
          goto LAB_016bdd40;
        }
        if (*(int *)(param_2 + 0x18) == 0) {
          puVar10 = &DAT_01d075cc;
          goto LAB_016bdd40;
        }
        if (*(int *)(param_2 + 0x28) == 0) {
          puVar10 = &DAT_01d075dc;
LAB_016bdd40:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0,0,puVar10);
        }
        uVar5 = (uint)**(byte **)(param_2 + 0x14) << 0x10 | (uint)**(byte **)(param_2 + 4) << 8 |
                (uint)**(byte **)(param_2 + 0x24) << 0x18;
        bVar6 = true;
        goto LAB_016bdb50;
      }
      piVar9 = (int *)(param_2 + iVar3);
      iVar3 = iVar3 + 0x10;
    } while (*piVar9 == 1);
  }
  bVar6 = false;
LAB_016bdb50:
  if (bVar6) {
    *param_1 = 0x80000002;
    *(char *)((int)param_1 + 6) = (char)(uVar5 >> 0x18);
    *(short *)(param_1 + 1) = (short)(uVar5 >> 8);
    return;
  }
  if (param_3 == 1) {
    uVar11 = 2;
    iStack_278 = unaff_r8;
    local_288 = unaff_lr;
LAB_016bdc7c:
    piVar9 = (int *)((uint)local_2b8 | 4);
    *piVar9 = local_2e0;
    piVar9[1] = iStack_2dc;
    piVar9[2] = iStack_2d8;
    piVar9[3] = iStack_2d4;
    piVar9[4] = iStack_2d0;
    piVar9[5] = local_2cc;
    piVar9[6] = iStack_2c8;
    piVar9[7] = iStack_2c4;
    piVar9[8] = iStack_2c0;
    piVar9[9] = iStack_2bc;
    *param_1 = 0x80000003;
    param_1[1] = local_2b8[0];
    param_1[2] = local_2b8[1];
    param_1[3] = iStack_2b0;
    param_1[4] = iStack_2ac;
    param_1[5] = iStack_2a8;
    param_1[6] = local_2a4;
    param_1[7] = iStack_2a0;
    param_1[8] = iStack_29c;
    param_1[9] = iStack_298;
    param_1[10] = iStack_294;
    param_1[0xb] = local_290;
    param_1[0xc] = local_2e4;
    param_1[0x10] = uVar11;
    param_1[0x11] = unaff_r10;
    param_1[0x12] = iStack_278;
    param_1[0xd] = local_2e8;
    param_1[0xe] = local_288;
    return;
  }
  FUN_016be35c(local_2b8,param_2,param_3);
  if (local_2b8[0] != -0x80000000) {
    FUN_01bed4e2(param_1,local_2b8,400);
    return;
  }
  iVar3 = 0;
  FUN_01bed93e(local_2b8,0,0x100);
  do {
    iVar7 = param_2 - iVar3;
    if (*(int *)(iVar7 + 8) != 1) goto LAB_016bdc08;
    iVar3 = iVar3 + -0x10;
    *(undefined1 *)((int)local_2b8 + (uint)**(byte **)(iVar7 + 4)) = 1;
  } while (param_3 * -0x10 != iVar3);
  cVar2 = (char)local_2b8[0];
  FUN_01bed4e2(auStack_128,(uint)local_2b8 | 1,0xff);
  if (cVar2 != '\x02') {
    *(char *)(param_1 + 1) = cVar2;
    FUN_01bed4e2((int)param_1 + 5,auStack_128,0xff);
    puVar4 = &DAT_80000005;
    goto LAB_016bd9e4;
  }
LAB_016bdc08:
  FUN_01687598(local_2b8,param_2,param_3);
  if (cStack_2af != '\x03') {
    param_1[1] = local_2b8[0];
    param_1[2] = local_2b8[1];
    param_1[3] = iStack_2b0;
    puVar4 = (undefined1 *)0x80000006;
    goto LAB_016bd9e4;
  }
LAB_016bd9e0:
  puVar4 = (undefined1 *)0x80000007;
LAB_016bd9e4:
  *param_1 = puVar4;
  return;
}

