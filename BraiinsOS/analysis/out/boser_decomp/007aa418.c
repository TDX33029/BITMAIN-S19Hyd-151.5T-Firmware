// FUN_007aa418 @ 007aa418 size=696 calls_out=8 calls_in=3
// strings: ZipWriter was already closed | Should have switched to stored and unencrypted beforehand | seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest

void FUN_007aa418(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint **ppuVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int unaff_r9;
  int unaff_r10;
  bool bVar10;
  uint local_40;
  uint *local_3c;
  uint local_38;
  undefined1 auStack_2c [8];
  
  if ((char)param_2[0x42c] == '\0') {
LAB_007aa598:
    *param_1 = 0x80000007;
    return;
  }
  if (*param_2 == 2 && param_2[1] == 0) {
    ppuVar2 = &local_3c;
    uVar3 = 0xb;
    pcVar4 = "ZipWriter was already closed";
    uVar6 = 0x1c;
LAB_007aa464:
    FUN_019a18a8(ppuVar2,uVar3,pcVar4,uVar6);
    param_1[1] = (uint)local_3c;
    *param_1 = 0x80000001;
    param_1[2] = local_38;
    return;
  }
  FUN_007b08b8(&local_40,param_2,1,&DAT_01c09d24);
  if ((local_40 != 0x80000007) || (FUN_007a922c(&local_40,param_2), local_40 != 0x80000007))
  goto LAB_007aa6b4;
  uVar1 = *param_2 ^ 3 | param_2[1];
  bVar10 = uVar1 == 0;
  if (bVar10) {
    uVar1 = param_2[2];
  }
  if (bVar10 && uVar1 == 0) {
    puVar8 = param_2 + 4;
  }
  else {
    FUN_01af9864(&local_40,"Should have switched to stored and unencrypted beforehand",0x39);
    puVar8 = local_3c;
    if (((char)local_40 != '\x04') && ((local_40 & 0xff) != 4)) {
      param_1[1] = local_40;
      param_1[2] = (uint)local_3c;
      *param_1 = 0x80000001;
      return;
    }
  }
  if (*(char *)((int)param_2 + 0x10b1) == '\0') {
    bVar10 = param_2[0x41a] == 0;
    if (!bVar10) {
      unaff_r10 = param_2[0x419] + param_2[0x41a] * 0xc0;
      unaff_r9 = unaff_r10 + -0xc0;
      bVar10 = unaff_r9 == 0;
    }
    if (bVar10) goto LAB_007aa598;
    *(uint *)(unaff_r10 + -0x78) = param_2[0x428];
    uVar7 = puVar8[2];
    uVar5 = param_2[0x426];
    *(uint *)(unaff_r10 + -0x74) = param_2[0x429];
    uVar9 = puVar8[3];
    uVar1 = param_2[0x427];
    *(uint *)(unaff_r10 + -0x80) = uVar7 - uVar5;
    *(uint *)(unaff_r10 + -0x7c) = uVar9 - (uVar1 + (uVar7 < uVar5));
    if ((*(char *)(unaff_r10 + -0x16) == '\0') &&
       (FUN_007b03b4(&local_40,puVar8,unaff_r9,0,param_2[0x428],param_2[0x429]),
       local_40 != 0x80000007)) goto LAB_007aa6b4;
    uVar1 = 0;
    if (*(short *)(unaff_r10 + -0xa0) != 2) {
      uVar1 = param_2[0x424];
    }
    *(uint *)(unaff_r10 + -0x28) = uVar1;
    if (*(char *)(unaff_r10 + -0x16) == '\0') {
      FUN_007ac88c(&local_40,unaff_r9,puVar8);
      if (local_40 != 0x80000007) goto LAB_007aa6b4;
      if (uVar7 != puVar8[2] || uVar9 != puVar8[3]) {
        ppuVar2 = (uint **)((uint)&local_40 | 4);
        uVar3 = 0x24;
        uVar6 = 0x15;
        pcVar4 = "seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest";
        goto LAB_007aa464;
      }
    }
    else {
      FUN_007ac760(&local_40,unaff_r9,puVar8,(char)param_2[0x42d]);
      if (local_40 != 0x80000007) goto LAB_007aa6b4;
    }
  }
  if (*(char *)((int)param_2 + 0x10b2) != '\0') {
    (**(code **)(puVar8[1] + 0x18))(auStack_2c,*puVar8);
    FUN_007aaef8(&local_40,param_2,auStack_2c);
    if (local_40 != 0x80000007) {
LAB_007aa6b4:
      *param_1 = local_40;
      param_1[1] = (uint)local_3c;
      param_1[2] = local_38;
      return;
    }
  }
  *param_1 = 0x80000007;
  *(undefined1 *)(param_2 + 0x42c) = 0;
  return;
}

