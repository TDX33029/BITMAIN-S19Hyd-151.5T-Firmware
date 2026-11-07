// FUN_011ad554 @ 011ad554 size=512 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_011ad554(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 != '\x05') {
    return (int *)&DAT_00000001;
  }
  iVar8 = *(int *)(param_1 + 4);
  local_3c = 0;
  local_40 = 4;
  local_44 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = iVar8 + *(int *)(param_1 + 8) * 0x20;
    iVar3 = *(int *)(param_2 + 4);
    iVar6 = *(int *)(param_2 + 8);
    do {
      if (iVar3 != 0) {
        uVar9 = *(undefined4 *)(iVar8 + 4);
        uVar15 = *(uint *)(iVar8 + 8);
        iVar11 = iVar3;
        local_48 = iVar6;
        while( true ) {
          iVar13 = iVar11 + 0x10c;
          uVar1 = *(ushort *)(iVar11 + 0x192);
          uVar14 = 0xffffffff;
          iVar12 = (uint)uVar1 * 0xc;
          do {
            uVar7 = (uint)uVar1;
            if (iVar12 == 0) goto joined_r0x011ad694;
            uVar10 = *(uint *)(iVar13 + 8);
            uVar7 = uVar10;
            if (uVar15 < uVar10) {
              uVar7 = uVar15;
            }
            iVar4 = FUN_016dd50a(uVar9,*(undefined4 *)(iVar13 + 4),uVar7);
            if (iVar4 == 0) {
              iVar4 = uVar15 - uVar10;
            }
            iVar12 = iVar12 + -0xc;
            uVar14 = uVar14 + 1;
            iVar13 = iVar13 + 0xc;
          } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
          uVar7 = uVar14;
          if (0 < iVar4 == iVar4 < 0) break;
joined_r0x011ad694:
          if (local_48 == 0) goto LAB_011ad5b8;
          local_48 = local_48 + -1;
          iVar11 = *(int *)(iVar11 + uVar7 * 4 + 0x198);
        }
        uVar16 = FUN_011cf8a8(iVar8 + 0xc,param_2,param_3,param_4,param_5);
        FUN_011590bc(&local_44,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      }
LAB_011ad5b8:
      iVar8 = iVar8 + 0x20;
    } while (iVar8 != iVar2);
  }
  local_2c = local_40 + local_3c * 4;
  local_38 = local_40;
  local_34 = local_40;
  local_30 = local_44;
  piVar5 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar5 = local_38;
  piVar5[1] = local_34;
  piVar5[2] = local_30;
  piVar5[3] = local_2c;
  return piVar5;
}

