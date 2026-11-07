// FUN_0070b4c0 @ 0070b4c0 size=332 calls_out=3 calls_in=2
// strings: 

int FUN_0070b4c0(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  uVar6 = *(uint *)(param_1 + 0x28);
  if (uVar6 == 0) {
    return 0;
  }
  uVar3 = FUN_0137e53c();
  uVar1 = *(ushort *)(param_1 + 0x38);
  uVar9 = 0;
  iVar11 = *(int *)(param_1 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x1c);
  iVar12 = *(int *)(param_1 + 0x24);
  uVar8 = (uint)uVar1 & uVar3 & 0xffff;
  do {
    do {
      uVar4 = uVar8;
      uVar8 = 0;
    } while (uVar10 <= uVar4);
    puVar7 = (ushort *)(iVar11 + uVar4 * 4);
    uVar8 = (uint)*puVar7;
    if (uVar8 == 0xffff) {
      return 0;
    }
    uVar2 = puVar7[1];
    if ((uVar4 - (uVar2 & uVar1) & (uint)uVar1) < uVar9) {
      return 0;
    }
    if ((uint)uVar2 == (uVar3 & 0xffff)) {
      if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar8,uVar6,&DAT_01d2f55c);
      }
      iVar5 = uVar8 * 0x34 + iVar12;
      if ((*(int *)(iVar5 + 0x20) != 0) != (*param_2 == 0)) {
        if (*(int *)(iVar5 + 0x20) == 0) {
          if (*(char *)(iVar5 + 0x24) == (char)param_2[1]) goto LAB_0070b5ec;
        }
        else if ((*(int *)(iVar5 + 0x28) == param_2[2]) &&
                (iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar5 + 0x24),param_2[1]), iVar5 == 0))
        {
LAB_0070b5ec:
          return uVar8 * 0x34 + iVar12 + 0xc;
        }
      }
    }
    uVar9 = uVar9 + 1;
    uVar8 = uVar4 + 1;
  } while( true );
}

