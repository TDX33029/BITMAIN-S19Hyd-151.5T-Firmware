// FUN_019d4878 @ 019d4878 size=768 calls_out=3 calls_in=0
// strings: ase_sensitivecount | alse | ower | pper

void FUN_019d4878(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  
  if (param_3 == 0) {
    uVar7 = 2;
    uVar2 = 2;
LAB_019d4ac0:
    *(undefined1 *)((int)param_1 + 5) = uVar7;
    *(undefined1 *)(param_1 + 1) = uVar2;
    *param_1 = 7;
    return;
  }
  piVar1 = param_2 + param_3 * 8;
  uVar2 = 2;
  uVar7 = 2;
LAB_019d48c0:
  iVar4 = *param_2;
  iVar5 = param_2[1];
  if (iVar5 == 4) {
    iVar3 = 0;
    do {
      if (iVar3 == 4) {
        iVar4 = param_2[4];
        iVar5 = param_2[5];
        if (iVar5 != 5) goto LAB_019d4b20;
        uVar2 = 0;
        iVar5 = 0;
        goto LAB_019d4a18;
      }
      uVar6 = (uint)*(byte *)(iVar4 + iVar3);
      uVar8 = (uint)(byte)(&DAT_0056d644)[iVar3];
      iVar3 = iVar3 + 1;
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 | 0x20;
      }
    } while (uVar6 == uVar8);
  }
  if (iVar5 != 0xe) {
LAB_019d4adc:
    FUN_006643f0(auStack_48,iVar4,iVar5);
    FUN_0160ec7c(param_1 + 2,auStack_48);
    iVar4 = param_2[2];
    *param_1 = 2;
    param_1[1] = iVar4;
    return;
  }
  iVar5 = 0;
  while (iVar5 != 0xe) {
    uVar6 = (uint)*(byte *)(iVar4 + iVar5);
    uVar8 = (uint)(byte)"c"[iVar5];
    iVar5 = iVar5 + 1;
    if (uVar6 - 0x41 < 0x1a) {
      uVar6 = uVar6 | 0x20;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar6 != uVar8) {
      iVar5 = 0xe;
      goto LAB_019d4adc;
    }
  }
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  if (iVar5 == 5) {
    uVar7 = 0;
    iVar3 = 0;
    do {
      if (iVar3 == 5) goto LAB_019d4aa0;
      uVar6 = (uint)*(byte *)(iVar4 + iVar3);
      uVar8 = (uint)(byte)"f"[iVar3];
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = iVar3 + 1;
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 | 0x20;
      }
    } while (uVar6 == uVar8);
  }
  if (iVar5 != 4) {
LAB_019d4b20:
    FUN_006643f0(auStack_30,iVar4,iVar5);
    FUN_0160ec7c(auStack_40,auStack_30);
    iVar4 = param_2[6];
    local_44 = iVar4;
    FUN_01bed4e2((int)param_1 + 5,(int)&local_44 + 1,0x13);
    *(char *)(param_1 + 1) = (char)iVar4;
    *param_1 = 2;
    return;
  }
  iVar5 = 0;
  while (iVar5 != 4) {
    uVar6 = (uint)*(byte *)(iVar4 + iVar5);
    uVar8 = (uint)(byte)(&DAT_0056eb7c)[iVar5];
    iVar5 = iVar5 + 1;
    if (uVar6 - 0x41 < 0x1a) {
      uVar6 = uVar6 | 0x20;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar6 != uVar8) {
      iVar5 = 4;
      goto LAB_019d4b20;
    }
  }
  uVar7 = 1;
  goto LAB_019d4aa0;
  while( true ) {
    uVar6 = (uint)*(byte *)(iVar4 + iVar5);
    uVar8 = (uint)(byte)"l"[iVar5];
    iVar5 = iVar5 + 1;
    if (uVar6 - 0x41 < 0x1a) {
      uVar6 = uVar6 | 0x20;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar6 != uVar8) break;
LAB_019d4a18:
    if (iVar5 == 5) goto LAB_019d4aa0;
  }
  iVar5 = 0;
  while (iVar5 != 5) {
    uVar6 = (uint)*(byte *)(iVar4 + iVar5);
    uVar8 = (uint)(byte)"u"[iVar5];
    iVar5 = iVar5 + 1;
    if (uVar6 - 0x41 < 0x1a) {
      uVar6 = uVar6 | 0x20;
    }
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar6 != uVar8) {
      iVar5 = 5;
      goto LAB_019d4b20;
    }
  }
  uVar2 = 1;
LAB_019d4aa0:
  param_2 = param_2 + 8;
  if (param_2 == piVar1) goto LAB_019d4ac0;
  goto LAB_019d48c0;
}

