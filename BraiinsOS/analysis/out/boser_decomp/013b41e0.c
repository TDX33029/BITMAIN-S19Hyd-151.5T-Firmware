// FUN_013b41e0 @ 013b41e0 size=404 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_013b41e0(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  
  uVar9 = *(uint *)(param_1 + 0x28);
  if (uVar9 == 0) {
    iVar17 = *param_2;
    uVar15 = 0;
LAB_013b433c:
    if (iVar17 != 0) {
      (**(code **)(iVar17 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
    }
    return uVar15;
  }
  uVar4 = FUN_013b3258(param_1,param_2);
  iVar10 = param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x38);
  uVar16 = 0;
  iVar17 = *param_2;
  iVar5 = *(int *)(param_1 + 0x24);
  iVar11 = param_2[2];
  iVar3 = param_2[1];
  iVar13 = *(int *)(param_1 + 0x18);
  uVar14 = *(uint *)(param_1 + 0x1c);
  uVar7 = (uint)uVar1 & uVar4 & 0xffff;
  do {
    do {
      uVar6 = uVar7;
      uVar7 = 0;
    } while (uVar14 <= uVar6);
    puVar12 = (ushort *)(iVar13 + uVar6 * 4);
    uVar7 = (uint)*puVar12;
    uVar15 = 0;
    if ((uVar7 == 0xffff) || (uVar2 = puVar12[1], (uVar6 - (uVar2 & uVar1) & (uint)uVar1) < uVar16))
    goto LAB_013b433c;
    if ((uint)uVar2 == (uVar4 & 0xffff)) {
      if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,uVar9,&DAT_01cf5368);
      }
      iVar8 = uVar7 * 0x34 + iVar5;
      if ((*(int *)(iVar8 + 0x20) != 0) != (iVar17 == 0)) {
        if (*(int *)(iVar8 + 0x20) == 0) {
          if (*(char *)(iVar8 + 0x24) == (char)iVar3) {
            return 1;
          }
        }
        else if ((*(int *)(iVar8 + 0x28) == iVar11) &&
                (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x24),iVar10), iVar8 == 0)) {
          uVar15 = 1;
          goto LAB_013b433c;
        }
      }
    }
    uVar16 = uVar16 + 1;
    uVar7 = uVar6 + 1;
  } while( true );
}

