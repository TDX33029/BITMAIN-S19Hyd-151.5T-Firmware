// FUN_016d34b4 @ 016d34b4 size=378 calls_out=1 calls_in=1
// strings: 

int FUN_016d34b4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  iVar6 = 0;
  while (iVar3 = *(int *)(DAT_018ddb10 + iVar6 * 4), iVar3 != 0x21) {
    iVar6 = iVar6 + 2;
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar6 = *(int *)(DAT_018ddb10 + (iVar6 + 1) * 4);
  if (iVar6 == 0) {
    return 0;
  }
  puVar2 = (uint *)0x0;
  iVar3 = -1;
  piVar7 = (int *)(*(int *)(iVar6 + 0x1c) + iVar6);
  for (uVar4 = 0; *(ushort *)(iVar6 + 0x2c) != uVar4; uVar4 = uVar4 + 1) {
    if (*piVar7 == 1) {
      iVar3 = (piVar7[1] + iVar6) - piVar7[2];
    }
    else if (*piVar7 == 2) {
      puVar2 = (uint *)(piVar7[1] + iVar6);
    }
    piVar7 = (int *)((int)piVar7 + (uint)*(ushort *)(iVar6 + 0x2a));
  }
  if (iVar3 == -1 || puVar2 == (uint *)0x0) {
    return 0;
  }
  piVar9 = (int *)0x0;
  piVar10 = piVar9;
  piVar11 = piVar9;
  piVar7 = piVar9;
  piVar12 = piVar9;
  for (; uVar4 = *puVar2, uVar4 != 0; puVar2 = puVar2 + 2) {
    piVar5 = (int *)(puVar2[1] + iVar3);
    if (uVar4 == 6) {
      piVar7 = piVar5;
    }
    else if (uVar4 < 7) {
      if (uVar4 == 4) {
        piVar12 = piVar5;
      }
      else if (uVar4 == 5) {
        piVar11 = piVar5;
      }
    }
    else if (uVar4 == 0x6ffffff0) {
      piVar9 = piVar5;
    }
    else if (uVar4 == 0x6ffffffc) {
      piVar10 = piVar5;
    }
  }
  if (piVar12 == (int *)0x0 || (piVar7 == (int *)0x0 || piVar11 == (int *)0x0)) {
    return 0;
  }
  uVar4 = piVar12[1];
  if (piVar10 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  uVar8 = 0;
  do {
    if (uVar4 <= uVar8) {
      return 0;
    }
    if ((((0x27 >> (*(byte *)(piVar7 + 3) & 0xf) & 1U) != 0) &&
        ((0x406 >> (uint)(*(byte *)(piVar7 + 3) >> 4)) << 0x1f < 0)) &&
       (*(short *)((int)piVar7 + 0xe) != 0)) {
      iVar6 = FUN_016dd818(param_2,*piVar7 + (int)piVar11);
      if (iVar6 == 0) {
        if (piVar9 == (int *)0x0) {
LAB_016d35cc:
          return piVar7[1] + iVar3;
        }
        piVar5 = piVar10;
        do {
          if ((-1 < (int)((uint)*(ushort *)((int)piVar5 + 2) << 0x1f)) &&
             (((*(ushort *)((int)piVar9 + uVar8 * 2) ^ *(ushort *)(piVar5 + 1)) & 0x7fff) == 0)) {
            iVar6 = FUN_016dd818(param_1,*(int *)((int)piVar5 + piVar5[3]) + (int)piVar11);
            if (iVar6 == 0) goto LAB_016d35cc;
            break;
          }
          piVar1 = piVar5 + 4;
          piVar5 = (int *)((int)piVar5 + *piVar1);
        } while (*piVar1 != 0);
      }
      uVar4 = piVar12[1];
    }
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 4;
  } while( true );
}

