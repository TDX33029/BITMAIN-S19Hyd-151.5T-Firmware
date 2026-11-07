// FUN_0070b374 @ 0070b374 size=328 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_0070b374(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = *(uint *)(param_1 + 0x28);
  if (uVar11 == 0) {
    return 0;
  }
  uVar3 = FUN_0137e53c();
  uVar1 = *(ushort *)(param_1 + 0x38);
  uVar8 = 0;
  iVar9 = *(int *)(param_1 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x1c);
  iVar12 = *(int *)(param_1 + 0x24);
  uVar6 = (uint)uVar1 & uVar3 & 0xffff;
  while( true ) {
    do {
      uVar4 = uVar6;
      uVar6 = 0;
    } while (uVar10 <= uVar4);
    puVar7 = (ushort *)(iVar9 + uVar4 * 4);
    uVar6 = (uint)*puVar7;
    if (uVar6 == 0xffff) break;
    uVar2 = puVar7[1];
    if ((uVar4 - (uVar2 & uVar1) & (uint)uVar1) < uVar8) {
      return 0;
    }
    if ((uint)uVar2 == (uVar3 & 0xffff)) {
      if (uVar11 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,uVar11,&DAT_01d2f55c);
      }
      iVar5 = uVar6 * 0x34 + iVar12;
      if ((*(int *)(iVar5 + 0x20) != 0) != (*param_2 == 0)) {
        if (*(int *)(iVar5 + 0x20) == 0) {
          if (*(char *)(iVar5 + 0x24) == (char)param_2[1]) {
            return 1;
          }
        }
        else if ((*(int *)(iVar5 + 0x28) == param_2[2]) &&
                (iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar5 + 0x24),param_2[1]), iVar5 == 0))
        {
          return 1;
        }
      }
    }
    uVar8 = uVar8 + 1;
    uVar6 = uVar4 + 1;
  }
  return 0;
}

