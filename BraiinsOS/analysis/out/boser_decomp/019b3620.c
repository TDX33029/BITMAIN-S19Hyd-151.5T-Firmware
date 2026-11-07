// FUN_019b3620 @ 019b3620 size=468 calls_out=4 calls_in=2
// strings: 

int FUN_019b3620(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  if (*(char *)(param_1 + 0x25) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    *(undefined1 *)(param_1 + 0x24) = 1;
    uVar11 = FUN_019b3620(param_1);
    iVar1 = (int)uVar11;
    if ((iVar1 != 0 && (int)((ulonglong)uVar11 >> 0x20) != 0) ||
       (iVar1 = 0, *(char *)(param_1 + 0x25) == '\x01')) {
      return iVar1;
    }
  }
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar6 = *(uint *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  if ((uVar5 <= uVar6) && (uVar7 = *(uint *)(param_1 + 8), uVar6 <= uVar7)) {
    uVar4 = (uint)*(byte *)(param_1 + 0x18);
    uVar9 = uVar4 - 1;
    iVar2 = param_1 + 0x14;
    if (uVar4 < 5) {
      do {
        uVar10 = FUN_01307268(*(undefined1 *)(iVar2 + uVar9),iVar1 + uVar5,uVar6 - uVar5);
        if ((uVar10 & 1) == 0) goto LAB_019b37b8;
        uVar6 = (int)(uVar10 >> 0x20) + uVar5;
        if (uVar9 <= uVar6) {
          uVar8 = uVar6 - uVar9;
          if (((!CARRY4(uVar8,uVar4)) && (uVar8 + uVar4 <= uVar7)) &&
             (iVar3 = thunk_FUN_01bed842(iVar1 + uVar8,iVar2,uVar4), iVar3 == 0)) {
            *(uint *)(param_1 + 0x10) = uVar8;
            *(uint *)(param_1 + 0x20) = uVar8;
            return iVar1 + uVar8 + uVar4;
          }
        }
        *(uint *)(param_1 + 0x10) = uVar6;
      } while ((uVar5 <= uVar6) && (uVar6 <= uVar7));
    }
    else {
      do {
        uVar10 = FUN_01307268(*(undefined1 *)(iVar2 + uVar9),iVar1 + uVar5,uVar6 - uVar5);
        if ((uVar10 & 1) == 0) goto LAB_019b37b8;
        uVar6 = (int)(uVar10 >> 0x20) + uVar5;
        if (((uVar9 <= uVar6) && (!CARRY4(uVar6 - uVar9,uVar4))) &&
           ((uVar6 - uVar9) + uVar4 <= uVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar4,4,&DAT_01d281c4);
        }
        *(uint *)(param_1 + 0x10) = uVar6;
      } while ((uVar5 <= uVar6) && (uVar6 <= uVar7));
    }
  }
LAB_019b37bc:
  *(undefined1 *)(param_1 + 0x25) = 1;
  return iVar1 + *(int *)(param_1 + 0x1c);
LAB_019b37b8:
  *(uint *)(param_1 + 0x10) = uVar5;
  goto LAB_019b37bc;
}

