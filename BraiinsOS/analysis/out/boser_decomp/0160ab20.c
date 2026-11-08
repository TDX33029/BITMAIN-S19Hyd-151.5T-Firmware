// FUN_0160ab20 @ 0160ab20 size=424 calls_out=3 calls_in=24
// strings: 

int FUN_0160ab20(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  if (uVar8 != 0) {
    uVar4 = FUN_0137e53c(param_1,param_2);
    iVar9 = param_2[1];
    uVar1 = *(ushort *)(param_1 + 0x38);
    uVar14 = 0;
    iVar10 = param_2[2];
    iVar5 = *(int *)(param_1 + 0x24);
    iVar16 = *param_2;
    iVar3 = param_2[1];
    iVar15 = *(int *)(param_1 + 0x18);
    uVar11 = *(uint *)(param_1 + 0x1c);
    uVar12 = (uint)uVar1 & uVar4 & 0xffff;
LAB_0160ab8c:
    do {
      uVar6 = uVar12;
      uVar12 = 0;
    } while (uVar11 <= uVar6);
    puVar7 = (ushort *)(iVar15 + uVar6 * 4);
    uVar12 = (uint)*puVar7;
    iVar13 = 0;
    if ((uVar12 == 0xffff) || (uVar2 = puVar7[1], (uVar6 - (uVar2 & uVar1) & (uint)uVar1) < uVar14))
    goto LAB_0160ac8c;
    if ((uint)uVar2 == (uVar4 & 0xffff)) {
      if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar12,uVar8,&DAT_01d2f55c);
      }
      iVar13 = uVar12 * 0x34 + iVar5;
      if ((*(int *)(iVar13 + 0x20) != 0) != (iVar16 == 0)) {
        if (*(int *)(iVar13 + 0x20) == 0) {
          if (*(char *)(iVar13 + 0x24) == (char)iVar3) goto LAB_0160ac78;
        }
        else if ((*(int *)(iVar13 + 0x28) == iVar10) &&
                (iVar13 = thunk_FUN_01bed842(*(undefined4 *)(iVar13 + 0x24),iVar9), iVar13 == 0))
        goto LAB_0160ac78;
      }
    }
    uVar14 = uVar14 + 1;
    uVar12 = uVar6 + 1;
    goto LAB_0160ab8c;
  }
  iVar16 = *param_2;
  iVar13 = 0;
LAB_0160ac8c:
  if (iVar16 != 0) {
    (**(code **)(iVar16 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
  }
  return iVar13;
LAB_0160ac78:
  iVar13 = uVar12 * 0x34 + iVar5 + 0xc;
  goto LAB_0160ac8c;
}

