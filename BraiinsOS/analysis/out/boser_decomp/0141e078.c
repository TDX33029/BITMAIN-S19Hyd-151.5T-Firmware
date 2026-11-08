// FUN_0141e078 @ 0141e078 size=464 calls_out=3 calls_in=6
// strings: 

void FUN_0141e078(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ushort *puVar13;
  uint uVar14;
  uint unaff_r6;
  int iVar15;
  uint uVar16;
  int iVar17;
  
  uVar8 = *(uint *)(param_2 + 0x28);
  if (uVar8 == 0) {
    iVar17 = *param_3;
    uVar12 = 0;
LAB_0141e1e8:
    *param_1 = uVar12;
    param_1[1] = unaff_r6;
    param_1[2] = param_2;
    if (iVar17 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0141e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar17 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
    return;
  }
  uVar5 = FUN_0137e53c(param_2,param_3);
  iVar9 = param_3[1];
  uVar1 = *(ushort *)(param_2 + 0x38);
  uVar16 = 0;
  iVar17 = *param_3;
  iVar10 = param_3[2];
  iVar3 = param_3[1];
  iVar15 = *(int *)(param_2 + 0x18);
  uVar14 = *(uint *)(param_2 + 0x1c);
  iVar11 = *(int *)(param_2 + 0x24);
  uVar4 = (uint)uVar1 & uVar5 & 0xffff;
  do {
    do {
      uVar6 = uVar4;
      uVar4 = 0;
    } while (uVar14 <= uVar6);
    puVar13 = (ushort *)(iVar15 + uVar6 * 4);
    unaff_r6 = (uint)*puVar13;
    uVar12 = 0;
    if ((unaff_r6 == 0xffff) ||
       (uVar2 = puVar13[1], (uVar6 - (uVar2 & uVar1) & (uint)uVar1) < uVar16)) goto LAB_0141e1e8;
    if ((uint)uVar2 == (uVar5 & 0xffff)) {
      if (uVar8 <= unaff_r6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(unaff_r6,uVar8,&DAT_01d2f55c);
      }
      iVar7 = unaff_r6 * 0x34 + iVar11;
      if ((*(int *)(iVar7 + 0x20) != 0) != (iVar17 == 0)) {
        if (*(int *)(iVar7 + 0x20) == 0) {
          if (*(char *)(iVar7 + 0x24) == (char)iVar3) {
            *param_1 = 1;
            param_1[1] = unaff_r6;
            param_1[2] = param_2;
            return;
          }
        }
        else if ((*(int *)(iVar7 + 0x28) == iVar10) &&
                (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar7 + 0x24),iVar9), iVar7 == 0)) {
          uVar12 = 1;
          goto LAB_0141e1e8;
        }
      }
    }
    uVar16 = uVar16 + 1;
    uVar4 = uVar6 + 1;
  } while( true );
}

