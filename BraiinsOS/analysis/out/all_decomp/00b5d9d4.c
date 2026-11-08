// FUN_00b5d9d4 @ 00b5d9d4 size=248 calls_out=0 calls_in=1
// strings: 

void FUN_00b5d9d4(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  
  piVar10 = param_1 + 1;
  iVar11 = 0;
  do {
    iVar4 = piVar10[-1];
    iVar8 = *piVar10;
    uVar6 = *(uint *)(*(int *)(iVar4 + 4) + 0xc);
    uVar9 = *(uint *)(*(int *)(iVar8 + 4) + 0xc);
    uVar5 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
    uVar7 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
    bVar12 = (((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar9 >> 0x1f) >> 1) ^
             *(uint *)(*(int *)(iVar8 + 4) + 8)) <
             (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
             *(uint *)(*(int *)(iVar4 + 4) + 8));
    if ((int)(uVar7 - (uVar5 + bVar12)) < 0 !=
        (SBORROW4(uVar7,uVar5) != SBORROW4(uVar7 - uVar5,(uint)bVar12))) {
      iVar1 = iVar11;
      do {
        iVar3 = iVar1;
        *(int *)((int)param_1 + iVar3 + 4) = iVar4;
        if (iVar3 == 0) {
          piVar2 = param_1;
          goto LAB_00b5d9ec;
        }
        iVar4 = *(int *)((int)param_1 + iVar3 + -4);
        uVar9 = *(uint *)(*(int *)(iVar4 + 4) + 0xc);
        uVar7 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
        uVar5 = *(uint *)(*(int *)(iVar8 + 4) + 0xc);
        uVar6 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
        bVar12 = (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1)
                 ^ *(uint *)(*(int *)(iVar8 + 4) + 8)) <
                 (((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar9 >> 0x1f) >> 1)
                 ^ *(uint *)(*(int *)(iVar4 + 4) + 8));
        iVar1 = iVar3 + -4;
      } while ((int)(uVar6 - (uVar7 + bVar12)) < 0 !=
               (SBORROW4(uVar6,uVar7) != SBORROW4(uVar6 - uVar7,(uint)bVar12)));
      piVar2 = (int *)((int)param_1 + iVar3);
LAB_00b5d9ec:
      *piVar2 = iVar8;
    }
    piVar10 = piVar10 + 1;
    iVar11 = iVar11 + 4;
    if (piVar10 == param_1 + param_2) {
      return;
    }
  } while( true );
}

