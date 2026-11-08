// FUN_0124b37c @ 0124b37c size=380 calls_out=2 calls_in=0
// strings: 

int FUN_0124b37c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  if ((*param_2 == '\x05') && (*(int *)(param_1 + 8) != 0)) {
    iVar12 = *(int *)(param_1 + 4);
    iVar2 = iVar12 + *(int *)(param_1 + 8) * 0x20;
    iVar3 = *(int *)(param_2 + 4);
    iVar5 = *(int *)(param_2 + 8);
    do {
      if (iVar3 != 0) {
        uVar7 = *(undefined4 *)(iVar12 + 4);
        uVar10 = *(uint *)(iVar12 + 8);
        iVar13 = iVar3;
        local_38 = iVar5;
        while( true ) {
          iVar14 = iVar13 + 0x10c;
          uVar1 = *(ushort *)(iVar13 + 0x192);
          uVar11 = 0xffffffff;
          iVar9 = (uint)uVar1 * 0xc;
          do {
            uVar6 = (uint)uVar1;
            if (iVar9 == 0) goto joined_r0x0124b4d4;
            uVar8 = *(uint *)(iVar14 + 8);
            uVar6 = uVar8;
            if (uVar10 < uVar8) {
              uVar6 = uVar10;
            }
            iVar4 = FUN_016dd50a(uVar7,*(undefined4 *)(iVar14 + 4),uVar6);
            if (iVar4 == 0) {
              iVar4 = uVar10 - uVar8;
            }
            iVar9 = iVar9 + -0xc;
            uVar11 = uVar11 + 1;
            iVar14 = iVar14 + 0xc;
          } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
          uVar6 = uVar11;
          if (0 < iVar4 == iVar4 < 0) break;
joined_r0x0124b4d4:
          if (local_38 == 0) goto LAB_0124b408;
          local_38 = local_38 + -1;
          iVar13 = *(int *)(iVar13 + uVar6 * 4 + 0x198);
        }
        local_34 = 0x80000000;
        local_30 = uVar7;
        local_2c = uVar10;
        local_28 = param_3;
        iVar13 = FUN_011d018c(iVar12 + 0xc,iVar13 + uVar11 * 0x18,&local_34,param_4,param_5);
        if (iVar13 != 0) {
          return iVar13;
        }
      }
LAB_0124b408:
      iVar12 = iVar12 + 0x20;
    } while (iVar12 != iVar2);
  }
  return 0;
}

