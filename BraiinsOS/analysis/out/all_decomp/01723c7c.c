// FUN_01723c7c @ 01723c7c size=1076 calls_out=12 calls_in=0
// strings: /proc/cpuinfo | Features | pmull

undefined8 FUN_01723c7c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int local_3c;
  char *local_34;
  int local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  do {
    iVar1 = FUN_016d2e2a("/proc/cpuinfo",0);
    if (-1 < iVar1) {
      pcVar2 = (char *)FUN_0177a6c0(0x400);
      pcVar6 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        iVar8 = 0;
        goto LAB_01723d74;
      }
      iVar8 = 0;
      uVar9 = 0x400;
      goto LAB_01723d00;
    }
    piVar3 = (int *)FUN_016d2bc8();
  } while (*piVar3 == 4);
  iVar8 = 0;
  uVar9 = FUN_016d636c(0x10);
  pcVar2 = (char *)0x0;
  goto joined_r0x01723d90;
LAB_01723d00:
  pcVar2 = pcVar6;
  if (uVar9 - iVar8 < 0x400) {
    if (uVar9 <= uVar9 * 2) {
      pcVar2 = (char *)FUN_0177ad5c(pcVar6,uVar9 << 1);
      if (pcVar2 != (char *)0x0) {
        uVar9 = uVar9 << 1;
        goto LAB_01723d30;
      }
    }
LAB_01723d6c:
    iVar8 = 0;
    pcVar2 = (char *)0x0;
    goto LAB_01723d74;
  }
LAB_01723d30:
  while( true ) {
    iVar4 = FUN_016e0250(iVar1,pcVar2 + iVar8,0x400);
    pcVar6 = pcVar2;
    if (-1 < iVar4) break;
    piVar3 = (int *)FUN_016d2bc8();
    if (*piVar3 != 4) goto LAB_01723d6c;
  }
  if (iVar4 == 0) goto LAB_01723e7c;
  iVar8 = iVar8 + iVar4;
  goto LAB_01723d00;
LAB_01723e7c:
  pcVar6 = (char *)0x0;
LAB_01723d74:
  FUN_0177aafc(pcVar6);
  FUN_016dffb2(iVar1);
  uVar9 = FUN_016d636c(0x10);
joined_r0x01723d90:
  if ((uVar9 & 0x1000) == 0) goto LAB_01723d94;
  DAT_018dfe48 = DAT_018dfe48 | 1;
  uVar9 = FUN_016d636c(0x1a);
  if (uVar9 == 0) {
    if (iVar8 != 0) {
      iVar1 = FUN_016dd48a(pcVar2,10,iVar8);
      pcVar6 = pcVar2;
      if (iVar1 == 0) {
        iVar4 = iVar8;
        goto LAB_0172406c;
      }
      do {
        iVar4 = iVar1 - (int)pcVar6;
        pcVar7 = (char *)(iVar1 + 1);
        iVar8 = (iVar8 + -1) - (iVar1 - (int)pcVar6);
        if (((iVar1 - (int)pcVar6 != 0) &&
            (local_3c = FUN_016dd48a(pcVar6,0x3a,iVar4), local_3c != 0)) &&
           (local_3c = local_3c - (int)pcVar6, local_3c != 0)) goto LAB_01723efc;
LAB_01724044:
        if (iVar8 == 0) break;
        iVar1 = FUN_016dd48a(pcVar7,10,iVar8);
        pcVar6 = pcVar7;
        if (iVar1 == 0) {
          iVar4 = iVar8;
LAB_0172406c:
          local_3c = FUN_016dd48a(pcVar6,0x3a,iVar4);
          if ((local_3c == 0) || (local_3c = local_3c - (int)pcVar6, local_3c == 0)) break;
          pcVar7 = pcVar6 + iVar4;
          iVar8 = 0;
LAB_01723efc:
          pcVar5 = pcVar6;
          iVar1 = local_3c;
          do {
            if (*pcVar5 != '\t' && *pcVar5 != ' ') {
              pcVar10 = pcVar5 + iVar1;
              goto LAB_01723f30;
            }
            pcVar5 = pcVar5 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          goto LAB_01724044;
        }
      } while( true );
    }
    DAT_018dfcd8 = 0;
    goto LAB_01723d94;
  }
  goto LAB_01723e2c;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
LAB_01723f30:
    pcVar10 = pcVar10 + -1;
    if (*pcVar10 != '\t' && *pcVar10 != ' ') {
      if ((iVar1 == 8) && (iVar1 = FUN_016dd50a(pcVar5,"Features"), iVar1 == 0)) {
        local_30 = (iVar4 + -1) - local_3c;
        local_34 = pcVar6 + local_3c + 1;
        if (local_30 == 0) goto LAB_01723fb4;
        goto LAB_01723f84;
      }
      break;
    }
  }
  goto LAB_01724044;
  while( true ) {
    local_34 = local_34 + 1;
    local_30 = local_30 + -1;
    if (local_30 == 0) break;
LAB_01723f84:
    if (*local_34 != '\t' && *local_34 != ' ') {
      pcVar6 = local_34 + local_30;
      goto LAB_01723fa4;
    }
  }
  goto LAB_01723fb4;
  while (local_30 = local_30 + -1, local_30 != 0) {
LAB_01723fa4:
    pcVar6 = pcVar6 + -1;
    if (*pcVar6 != '\t' && *pcVar6 != ' ') break;
  }
LAB_01723fb4:
  uVar9 = FUN_017083c4(&local_34,&DAT_005a2dd4);
  iVar1 = FUN_017083c4(&local_34,"pmull");
  iVar8 = FUN_017083c4(&local_34,&DAT_005a4bc0);
  iVar4 = FUN_017083c4(&local_34,&DAT_005a4d28);
  uVar9 = iVar8 << 2 | iVar1 << 1 | uVar9 | iVar4 << 3;
  DAT_018dfcd8 = (uint)(uVar9 != 0);
LAB_01723e2c:
  if ((uVar9 & 1) != 0) {
    DAT_018dfe48 = DAT_018dfe48 | 4;
  }
  if ((uVar9 & 2) != 0) {
    DAT_018dfe48 = DAT_018dfe48 | 0x20;
  }
  if ((uVar9 & 4) != 0) {
    DAT_018dfe48 = DAT_018dfe48 | 8;
  }
  if ((uVar9 & 8) != 0) {
    DAT_018dfe48 = DAT_018dfe48 | 0x10;
  }
LAB_01723d94:
  FUN_0177aafc(pcVar2);
  DAT_018dfe44 = 1;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

