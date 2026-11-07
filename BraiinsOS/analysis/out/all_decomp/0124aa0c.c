// FUN_0124aa0c @ 0124aa0c size=532 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_0124aa0c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  if (*param_2 != '\x05') {
    return (int *)&DAT_00000001;
  }
  iVar11 = *(int *)(param_1 + 4);
  local_3c = 0;
  local_40 = 4;
  local_44 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = iVar11 + *(int *)(param_1 + 8) * 0x20;
    iVar3 = *(int *)(param_2 + 4);
    iVar6 = *(int *)(param_2 + 8);
    do {
      if (iVar3 != 0) {
        uVar8 = *(undefined4 *)(iVar11 + 4);
        uVar14 = *(uint *)(iVar11 + 8);
        iVar13 = iVar3;
        local_48 = iVar6;
        while( true ) {
          iVar15 = iVar13 + 0x10c;
          uVar1 = *(ushort *)(iVar13 + 0x192);
          uVar12 = 0xffffffff;
          iVar10 = (uint)uVar1 * 0xc;
          do {
            uVar7 = (uint)uVar1;
            if (iVar10 == 0) goto joined_r0x0124ab44;
            uVar9 = *(uint *)(iVar15 + 8);
            uVar7 = uVar9;
            if (uVar14 < uVar9) {
              uVar7 = uVar14;
            }
            iVar4 = FUN_016dd50a(uVar8,*(undefined4 *)(iVar15 + 4),uVar7);
            if (iVar4 == 0) {
              iVar4 = uVar14 - uVar9;
            }
            iVar10 = iVar10 + -0xc;
            uVar12 = uVar12 + 1;
            iVar15 = iVar15 + 0xc;
          } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
          uVar7 = uVar12;
          if (0 < iVar4 == iVar4 < 0) break;
joined_r0x0124ab44:
          if (local_48 == 0) goto LAB_0124aa68;
          local_48 = local_48 + -1;
          iVar13 = *(int *)(iVar13 + uVar7 * 4 + 0x198);
        }
        local_38 = -0x80000000;
        local_34 = uVar8;
        local_30 = uVar14;
        local_2c = param_3;
        uVar16 = FUN_011cf8a8(iVar11 + 0xc,iVar13 + uVar12 * 0x18,&local_38,param_4,param_5);
        FUN_011590bc(&local_44,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      }
LAB_0124aa68:
      iVar11 = iVar11 + 0x20;
    } while (iVar11 != iVar2);
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

