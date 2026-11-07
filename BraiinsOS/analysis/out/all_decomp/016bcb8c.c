// FUN_016bcb8c @ 016bcb8c size=452 calls_out=4 calls_in=2
// strings: 

int FUN_016bcb8c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
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
    uVar11 = FUN_016bcb8c(param_1);
    iVar1 = (int)uVar11;
    if ((iVar1 != 0 && (int)((ulonglong)uVar11 >> 0x20) != 0) ||
       (iVar1 = 0, *(char *)(param_1 + 0x25) == '\x01')) {
      return iVar1;
    }
  }
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar9 = *(uint *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  if ((uVar8 <= uVar9) && (uVar4 = *(uint *)(param_1 + 8), uVar9 <= uVar4)) {
    uVar3 = (uint)*(byte *)(param_1 + 0x18);
    iVar6 = param_1 + 0x14;
    uVar5 = uVar3 - 1;
    if (uVar3 < 5) {
      do {
        uVar10 = FUN_00fb737c(*(undefined1 *)(iVar6 + uVar5),iVar1 + uVar8,uVar9 - uVar8);
        if ((uVar10 & 1) == 0) goto LAB_016bcd14;
        uVar9 = (int)(uVar10 >> 0x20) + uVar8;
        if (uVar5 <= uVar9) {
          uVar7 = uVar9 - uVar5;
          if (((!CARRY4(uVar7,uVar3)) && (uVar7 + uVar3 <= uVar4)) &&
             (iVar2 = thunk_FUN_016dd50a(iVar1 + uVar7,iVar6,uVar3), iVar2 == 0)) {
            *(uint *)(param_1 + 0x10) = uVar7;
            *(uint *)(param_1 + 0x20) = uVar7;
            return iVar1 + uVar7 + uVar3;
          }
        }
        *(uint *)(param_1 + 0x10) = uVar9;
      } while ((uVar8 <= uVar9) && (uVar9 <= uVar4));
    }
    else {
      do {
        uVar10 = FUN_00fb737c(*(undefined1 *)(iVar6 + uVar5),iVar1 + uVar8,uVar9 - uVar8);
        if ((uVar10 & 1) == 0) goto LAB_016bcd14;
        uVar9 = (int)(uVar10 >> 0x20) + uVar8;
        if (((uVar5 <= uVar9) && (!CARRY4(uVar9 - uVar5,uVar3))) &&
           ((uVar9 - uVar5) + uVar3 <= uVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar3,4,&DAT_018af150);
        }
        *(uint *)(param_1 + 0x10) = uVar9;
      } while ((uVar8 <= uVar9) && (uVar9 <= uVar4));
    }
  }
LAB_016bcd18:
  *(undefined1 *)(param_1 + 0x25) = 1;
  return iVar1 + *(int *)(param_1 + 0x1c);
LAB_016bcd14:
  *(uint *)(param_1 + 0x10) = uVar8;
  goto LAB_016bcd18;
}

