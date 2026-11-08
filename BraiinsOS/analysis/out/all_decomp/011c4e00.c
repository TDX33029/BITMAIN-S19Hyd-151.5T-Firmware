// FUN_011c4e00 @ 011c4e00 size=336 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_011c4e00(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int local_28;
  
  if (*param_2 == '\x05') {
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 8)) {
      return 0;
    }
    iVar8 = *(int *)(param_2 + 4);
    iVar3 = *(int *)(param_2 + 8);
    iVar4 = *(int *)(param_1 + 4);
    iVar1 = iVar4 + *(uint *)(param_1 + 8) * 0xc;
    while (iVar4 != iVar1) {
      if (iVar8 == 0) {
        return 0;
      }
      uVar13 = *(undefined4 *)(iVar4 + 4);
      uVar14 = *(uint *)(iVar4 + 8);
      iVar4 = iVar4 + 0xc;
      iVar9 = iVar8;
      local_28 = iVar3;
      while( true ) {
        iVar12 = iVar9 + 0x10c;
        uVar11 = (uint)*(ushort *)(iVar9 + 0x192);
        uVar10 = 0xffffffff;
        iVar6 = uVar11 * 0xc;
        do {
          if (iVar6 == 0) {
            if (local_28 == 0) {
              return 0;
            }
            goto LAB_011c4f1c;
          }
          uVar7 = *(uint *)(iVar12 + 8);
          uVar5 = uVar7;
          if (uVar14 < uVar7) {
            uVar5 = uVar14;
          }
          iVar2 = FUN_016dd50a(uVar13,*(undefined4 *)(iVar12 + 4),uVar5);
          if (iVar2 == 0) {
            iVar2 = uVar14 - uVar7;
          }
          iVar6 = iVar6 + -0xc;
          uVar10 = uVar10 + 1;
          iVar12 = iVar12 + 0xc;
        } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
        if (0 < iVar2 == iVar2 < 0) break;
        uVar11 = uVar10;
        if (local_28 == 0) {
          return 0;
        }
LAB_011c4f1c:
        local_28 = local_28 + -1;
        iVar9 = *(int *)(iVar9 + uVar11 * 4 + 0x198);
      }
    }
  }
  return 1;
}

