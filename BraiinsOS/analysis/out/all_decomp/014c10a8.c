// FUN_014c10a8 @ 014c10a8 size=584 calls_out=4 calls_in=1
// strings: 

void FUN_014c10a8(undefined4 *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  iVar4 = FUN_014c18b0(param_2);
  if (iVar4 != 0) {
    iVar4 = *param_3;
    *(undefined1 *)((int)param_1 + 0x1a) = 3;
    if (iVar4 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x014c10fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar4 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
    return;
  }
  uVar3 = FUN_014c1c00(param_2,param_3);
  iVar11 = param_3[2];
  uVar14 = 0;
  iVar4 = param_3[1];
  iVar5 = param_2[6];
  uVar1 = *(ushort *)(param_2 + 0xe);
  iVar6 = param_2[9];
  iVar15 = *param_3;
  iVar10 = param_3[1];
  uVar12 = param_2[7];
  uVar16 = param_2[10];
  uVar13 = (uint)(uVar1 & uVar3);
  while( true ) {
    do {
      uVar7 = uVar13;
      uVar13 = 0;
    } while (uVar12 <= uVar7);
    puVar8 = (ushort *)(iVar5 + uVar7 * 4);
    uVar13 = (uint)*puVar8;
    if ((uVar13 == 0xffff) || (uVar2 = puVar8[1], (uVar7 - (uVar1 & uVar2) & (uint)uVar1) < uVar14))
    break;
    if (uVar2 == uVar3) {
      if (uVar16 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar13,uVar16,&DAT_018a6334);
      }
      iVar9 = uVar13 * 0x34 + iVar6;
      if ((*(int *)(iVar9 + 0x20) != 0) != (iVar15 == 0)) {
        if (*(int *)(iVar9 + 0x20) == 0) {
          if (*(char *)(iVar9 + 0x24) == (char)iVar4) {
            *(undefined1 *)((int)param_1 + 0x1a) = 2;
            param_1[2] = uVar13;
            *param_1 = param_2;
            param_1[1] = uVar7;
            return;
          }
        }
        else if ((*(int *)(iVar9 + 0x28) == iVar11) &&
                (iVar9 = thunk_FUN_016dd50a(*(undefined4 *)(iVar9 + 0x24)), iVar9 == 0)) {
          *(undefined1 *)((int)param_1 + 0x1a) = 2;
          param_1[2] = uVar13;
          *param_1 = param_2;
          param_1[1] = uVar7;
          if (iVar15 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x014c126c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar15 + 0x10))(param_3 + 3);
          return;
        }
      }
    }
    uVar14 = uVar14 + 1;
    uVar13 = uVar7 + 1;
  }
  iVar4 = *param_2;
  iVar11 = param_2[1];
  *param_1 = param_2;
  param_1[1] = iVar15;
  iVar5 = param_3[2];
  iVar6 = param_3[3];
  param_1[2] = iVar10;
  param_1[3] = iVar5;
  param_1[4] = iVar6;
  param_1[5] = uVar7;
  *(ushort *)(param_1 + 6) = uVar3;
  *(bool *)((int)param_1 + 0x1a) = uVar14 >> 9 != 0 && (iVar4 != 2 || iVar11 != 0);
  return;
}

