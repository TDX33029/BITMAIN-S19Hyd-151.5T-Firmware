// FUN_013528d4 @ 013528d4 size=1120 calls_out=1 calls_in=7
// strings: $ref~! | $ref~!

ulonglong FUN_013528d4(uint param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  int local_28;
  
  pcVar4 = param_2;
  if ((param_1 & 0xff) - 3 < 3) {
    if ((*param_2 == '\x05') && (iVar12 = *(int *)(param_2 + 4), iVar12 != 0)) {
      iVar10 = *(int *)(param_2 + 8);
      while( true ) {
        uVar1 = *(ushort *)(iVar12 + 0x192);
        iVar9 = iVar12 + 0x10c;
        uVar8 = 0xffffffff;
        iVar7 = (uint)uVar1 * 0xc;
        do {
          if (iVar7 == 0) {
            uVar8 = (uint)uVar1;
            goto LAB_01352998;
          }
          uVar6 = *(uint *)(iVar9 + 8);
          uVar5 = uVar6;
          if (2 < uVar6) {
            uVar5 = 3;
          }
          iVar2 = FUN_016dd50a("$id",*(undefined4 *)(iVar9 + 4),uVar5);
          if (iVar2 == 0) {
            iVar2 = 3 - uVar6;
          }
          iVar7 = iVar7 + -0xc;
          param_2 = (char *)(uint)(0 < iVar2);
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + 0xc;
          uVar5 = (int)param_2 - (uint)(iVar2 < 0) & 0xff;
        } while (uVar5 == 1);
        if (uVar5 == 0) break;
LAB_01352998:
        pcVar4 = param_2;
        if (iVar10 == 0) goto LAB_01352d20;
        iVar10 = iVar10 + -1;
        iVar12 = *(int *)(iVar12 + uVar8 * 4 + 0x198);
      }
      pcVar13 = (char *)(iVar12 + uVar8 * 0x18);
      pcVar4 = param_2;
      if (*pcVar13 == '\x03') {
        pcVar3 = *(char **)(pcVar13 + 8);
        pcVar4 = *(char **)(pcVar13 + 0xc);
        goto LAB_01352b78;
      }
    }
  }
  else if ((param_1 & 0xff) - 1 < 2) {
    if ((*param_2 == '\x05') && (pcVar13 = *(char **)(param_2 + 4), pcVar13 != (char *)0x0)) {
      iVar12 = *(int *)(param_2 + 8);
      pcVar3 = pcVar13;
      do {
        uVar1 = *(ushort *)(pcVar3 + 0x192);
        pcVar4 = pcVar3 + 0x10c;
        uVar8 = 0xffffffff;
        iVar10 = (uint)uVar1 * 0xc;
        do {
          if (iVar10 == 0) {
            uVar8 = (uint)uVar1;
            goto LAB_01352a78;
          }
          uVar6 = *(uint *)(pcVar4 + 8);
          uVar5 = uVar6;
          if (3 < uVar6) {
            uVar5 = 4;
          }
          iVar7 = FUN_016dd50a("$ref~!",*(undefined4 *)(pcVar4 + 4),uVar5);
          if (iVar7 == 0) {
            iVar7 = 4 - uVar6;
          }
          iVar10 = iVar10 + -0xc;
          uVar8 = uVar8 + 1;
          pcVar4 = pcVar4 + 0xc;
          uVar5 = (int)(uint)(0 < iVar7) - (uint)(iVar7 < 0) & 0xff;
        } while (uVar5 == 1);
        pcVar4 = (char *)(uint)(0 < iVar7);
        if (uVar5 == 0) break;
LAB_01352a78:
        if (iVar12 == 0) goto LAB_01352b80;
        iVar12 = iVar12 + -1;
        pcVar3 = *(char **)(pcVar3 + uVar8 * 4 + 0x198);
      } while( true );
    }
  }
  else if ((*param_2 == '\x05') && (pcVar13 = *(char **)(param_2 + 4), pcVar13 != (char *)0x0)) {
    local_28 = *(int *)(param_2 + 8);
    pcVar3 = pcVar13;
    iVar12 = local_28;
    do {
      uVar1 = *(ushort *)(pcVar3 + 0x192);
      pcVar11 = pcVar3 + 0x10c;
      uVar8 = 0xffffffff;
      iVar10 = (uint)uVar1 * 0xc;
      do {
        if (iVar10 == 0) {
          uVar8 = (uint)uVar1;
          goto LAB_01352b48;
        }
        uVar6 = *(uint *)(pcVar11 + 8);
        uVar5 = uVar6;
        if (3 < uVar6) {
          uVar5 = 4;
        }
        iVar7 = FUN_016dd50a("$ref~!",*(undefined4 *)(pcVar11 + 4),uVar5);
        if (iVar7 == 0) {
          iVar7 = 4 - uVar6;
        }
        iVar10 = iVar10 + -0xc;
        pcVar4 = (char *)(uint)(0 < iVar7);
        uVar8 = uVar8 + 1;
        pcVar11 = pcVar11 + 0xc;
        uVar5 = (int)pcVar4 - (uint)(iVar7 < 0) & 0xff;
      } while (uVar5 == 1);
      if (uVar5 == 0) break;
LAB_01352b48:
      if (iVar12 == 0) goto LAB_01352c4c;
      iVar12 = iVar12 + -1;
      pcVar3 = *(char **)(pcVar3 + uVar8 * 4 + 0x198);
    } while( true );
  }
LAB_01352d20:
  return ZEXT48(pcVar4) << 0x20;
LAB_01352b80:
  iVar12 = *(int *)(param_2 + 8);
  do {
    uVar1 = *(ushort *)(pcVar13 + 0x192);
    pcVar3 = pcVar13 + 0x10c;
    uVar8 = 0xffffffff;
    iVar10 = (uint)uVar1 * 0xc;
    pcVar4 = pcVar13;
    do {
      if (iVar10 == 0) {
        uVar8 = (uint)uVar1;
        goto LAB_01352c18;
      }
      uVar6 = *(uint *)(pcVar3 + 8);
      uVar5 = uVar6;
      if (2 < uVar6) {
        uVar5 = 3;
      }
      iVar7 = FUN_016dd50a("$id",*(undefined4 *)(pcVar3 + 4),uVar5);
      if (iVar7 == 0) {
        iVar7 = 3 - uVar6;
      }
      iVar10 = iVar10 + -0xc;
      pcVar4 = (char *)(uint)(0 < iVar7);
      uVar8 = uVar8 + 1;
      pcVar3 = pcVar3 + 0xc;
      uVar5 = (int)pcVar4 - (uint)(iVar7 < 0) & 0xff;
    } while (uVar5 == 1);
    if (uVar5 == 0) goto LAB_01352cf8;
LAB_01352c18:
    if (iVar12 == 0) goto LAB_01352d20;
    iVar12 = iVar12 + -1;
    pcVar13 = *(char **)(pcVar13 + uVar8 * 4 + 0x198);
  } while( true );
LAB_01352c4c:
  uVar1 = *(ushort *)(pcVar13 + 0x192);
  pcVar3 = pcVar13 + 0x10c;
  uVar8 = 0xffffffff;
  iVar12 = (uint)uVar1 * 0xc;
  pcVar4 = pcVar13;
  do {
    if (iVar12 == 0) {
      uVar8 = (uint)uVar1;
      goto LAB_01352cd0;
    }
    uVar6 = *(uint *)(pcVar3 + 8);
    uVar5 = uVar6;
    if (1 < uVar6) {
      uVar5 = 2;
    }
    iVar10 = FUN_016dd50a("id",*(undefined4 *)(pcVar3 + 4),uVar5);
    if (iVar10 == 0) {
      iVar10 = 2 - uVar6;
    }
    iVar12 = iVar12 + -0xc;
    pcVar4 = (char *)(uint)(0 < iVar10);
    uVar8 = uVar8 + 1;
    pcVar3 = pcVar3 + 0xc;
    uVar5 = (int)pcVar4 - (uint)(iVar10 < 0) & 0xff;
  } while (uVar5 == 1);
  if (uVar5 == 0) goto LAB_01352cf8;
LAB_01352cd0:
  if (local_28 == 0) goto LAB_01352d20;
  local_28 = local_28 + -1;
  pcVar13 = *(char **)(pcVar13 + uVar8 * 4 + 0x198);
  goto LAB_01352c4c;
LAB_01352cf8:
  pcVar13 = pcVar13 + uVar8 * 0x18;
  if (*pcVar13 == '\x03') {
    pcVar3 = *(char **)(pcVar13 + 8);
    pcVar4 = *(char **)(pcVar13 + 0xc);
    if (pcVar4 == (char *)0x0) {
      return ZEXT48(pcVar3);
    }
    if (*pcVar3 != '#') {
LAB_01352b78:
      return CONCAT44(pcVar4,pcVar3);
    }
  }
  goto LAB_01352d20;
}

