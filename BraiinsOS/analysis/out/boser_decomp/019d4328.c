// FUN_019d4328 @ 019d4328 size=972 calls_out=4 calls_in=0
// strings: ase_sensitivecount | alse | umericaldigits | hort

void FUN_019d4328(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  int *piVar7;
  undefined1 local_50;
  undefined1 local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  
  if (param_3 == 0) {
    uVar6 = 3;
    local_4c = 2;
    local_50 = 3;
LAB_019d462c:
    *(undefined1 *)((int)param_1 + 6) = local_50;
    *(undefined1 *)(param_1 + 1) = local_4c;
    iVar3 = 7;
    *(undefined1 *)((int)param_1 + 5) = uVar6;
LAB_019d46c8:
    *param_1 = iVar3;
    return;
  }
  piVar7 = param_2 + param_3 * 8;
  local_4c = 2;
  uVar6 = 3;
  local_50 = 3;
LAB_019d4374:
  iVar3 = *param_2;
  iVar4 = param_2[1];
  if (iVar4 == 7) {
    iVar1 = 0;
    do {
      if (iVar1 == 7) {
        FUN_019d41cc(&local_48,param_2 + 4);
        uVar6 = (undefined1)local_44;
        if (local_48 != 7) {
          FUN_01bed4e2((int)param_1 + 5,(int)&local_44 + 1,0x13);
          *(undefined1 *)(param_1 + 1) = (undefined1)local_44;
          *param_1 = local_48;
          return;
        }
        goto LAB_019d4608;
      }
      uVar2 = (uint)*(byte *)(iVar3 + iVar1);
      uVar5 = (uint)(byte)"p"[iVar1];
      iVar1 = iVar1 + 1;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
    } while (uVar2 == uVar5);
  }
  if (iVar4 == 4) {
    iVar1 = 0;
    do {
      if (iVar1 == 4) {
        iVar3 = param_2[4];
        iVar4 = param_2[5];
        if (iVar4 != 9) goto LAB_019d4558;
        iVar1 = 0;
        local_50 = 0;
        goto LAB_019d451c;
      }
      uVar2 = (uint)*(byte *)(iVar3 + iVar1);
      uVar5 = (uint)(byte)(&DAT_0056d634)[iVar1];
      iVar1 = iVar1 + 1;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
    } while (uVar2 == uVar5);
  }
  if (iVar4 != 0xe) {
LAB_019d464c:
    FUN_006643f0(&local_48,iVar3,iVar4);
    FUN_0160ec7c(param_1 + 2,&local_48);
    iVar3 = param_2[2];
    *param_1 = 2;
    param_1[1] = iVar3;
    return;
  }
  iVar4 = 0;
  while (iVar4 != 0xe) {
    uVar2 = (uint)*(byte *)(iVar3 + iVar4);
    uVar5 = (uint)(byte)"c"[iVar4];
    iVar4 = iVar4 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar2 != uVar5) {
      iVar4 = 0xe;
      goto LAB_019d464c;
    }
  }
  iVar3 = param_2[4];
  iVar4 = param_2[5];
  if (iVar4 == 5) {
    iVar1 = 0;
    local_4c = 0;
    do {
      if (iVar1 == 5) goto LAB_019d4608;
      uVar2 = (uint)*(byte *)(iVar3 + iVar1);
      uVar5 = (uint)(byte)"f"[iVar1];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      iVar1 = iVar1 + 1;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
    } while (uVar2 == uVar5);
  }
  if (iVar4 == 4) {
    iVar4 = 0;
    while (iVar4 != 4) {
      uVar2 = (uint)*(byte *)(iVar3 + iVar4);
      uVar5 = (uint)(byte)(&DAT_0056eb7c)[iVar4];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      iVar4 = iVar4 + 1;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar2 != uVar5) {
        iVar4 = 4;
        goto LAB_019d4688;
      }
    }
    local_4c = 1;
    goto LAB_019d4608;
  }
  goto LAB_019d4688;
  while( true ) {
    uVar2 = (uint)*(byte *)(iVar3 + iVar1);
    uVar5 = (uint)(byte)"n"[iVar1];
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    iVar1 = iVar1 + 1;
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar2 != uVar5) break;
LAB_019d451c:
    if (iVar1 == 9) goto LAB_019d4608;
  }
LAB_019d4558:
  if (iVar4 == 4) {
    iVar1 = 0;
    do {
      if (iVar1 == 4) {
        local_50 = 1;
        goto LAB_019d4608;
      }
      uVar2 = (uint)*(byte *)(iVar3 + iVar1);
      uVar5 = (uint)(byte)(&DAT_0056f8dc)[iVar1];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      iVar1 = iVar1 + 1;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
    } while (uVar2 == uVar5);
  }
  if (iVar4 != 5) {
LAB_019d4688:
    FUN_006643f0(auStack_30,iVar3,iVar4);
    FUN_0160ec7c(auStack_40,auStack_30);
    iVar3 = param_2[6];
    local_44 = iVar3;
    FUN_01bed4e2((int)param_1 + 5,(int)&local_44 + 1,0x13);
    *(char *)(param_1 + 1) = (char)iVar3;
    iVar3 = 2;
    goto LAB_019d46c8;
  }
  iVar4 = 0;
  while (iVar4 != 5) {
    uVar2 = (uint)*(byte *)(iVar3 + iVar4);
    uVar5 = (uint)(byte)"s"[iVar4];
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    iVar4 = iVar4 + 1;
    if (uVar5 - 0x41 < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar2 != uVar5) {
      iVar4 = 5;
      goto LAB_019d4688;
    }
  }
  local_50 = 2;
LAB_019d4608:
  param_2 = param_2 + 8;
  if (param_2 == piVar7) goto LAB_019d462c;
  goto LAB_019d4374;
}

