// FUN_0140d230 @ 0140d230 size=364 calls_out=4 calls_in=5
// strings: 

int FUN_0140d230(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  
  if (*(char *)(param_1 + 0x25) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    *(undefined1 *)(param_1 + 0x24) = 1;
    uVar10 = FUN_0140d230(param_1);
    if ((int)uVar10 != 0 && (int)((ulonglong)uVar10 >> 0x20) != 0) {
      return (int)uVar10;
    }
    if (*(char *)(param_1 + 0x25) == '\x01') {
      return 0;
    }
  }
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar9 = *(uint *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  if ((uVar8 <= uVar9) && (uVar4 = *(uint *)(param_1 + 8), uVar9 <= uVar4)) {
    uVar3 = (uint)*(byte *)(param_1 + 0x18);
    uVar5 = uVar3 - 1;
    while( true ) {
      uVar11 = FUN_01307268(*(undefined1 *)(param_1 + 0x14 + uVar5),iVar1 + uVar8,uVar9 - uVar8);
      if ((uVar11 & 1) == 0) break;
      uVar9 = (int)(uVar11 >> 0x20) + uVar8;
      if (uVar5 <= uVar9) {
        uVar7 = uVar9 - uVar5;
        uVar6 = uVar7 + uVar3;
        if ((!CARRY4(uVar7,uVar3)) && (uVar6 <= uVar4)) {
          if (4 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar3,4,&DAT_01d2fdb8);
          }
          iVar2 = thunk_FUN_01bed842(iVar1 + uVar7,param_1 + 0x14,uVar3);
          if (iVar2 == 0) {
            *(uint *)(param_1 + 0x10) = uVar7;
            *(uint *)(param_1 + 0x20) = uVar7;
            goto LAB_0140d360;
          }
        }
      }
      *(uint *)(param_1 + 0x10) = uVar9;
      if ((uVar9 < uVar8) || (uVar4 < uVar9)) goto LAB_0140d350;
    }
    *(uint *)(param_1 + 0x10) = uVar8;
  }
LAB_0140d350:
  uVar6 = *(uint *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x25) = 1;
LAB_0140d360:
  return iVar1 + uVar6;
}

