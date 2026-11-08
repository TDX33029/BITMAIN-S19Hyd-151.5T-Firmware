// FUN_00b5d758 @ 00b5d758 size=176 calls_out=0 calls_in=1
// strings: 

void FUN_00b5d758(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  puVar9 = param_1 + 2;
  iVar11 = 0;
  do {
    uVar5 = puVar9[-2];
    uVar6 = puVar9[-1];
    uVar7 = *puVar9;
    uVar8 = puVar9[1];
    uVar4 = ((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1) ^
            uVar7;
    uVar10 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
    uVar2 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
    bVar12 = uVar4 < (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar6 >> 0x1f) >> 1) ^ uVar5);
    if ((int)(uVar10 - (uVar2 + bVar12)) < 0 !=
        (SBORROW4(uVar10,uVar2) != SBORROW4(uVar10 - uVar2,(uint)bVar12))) {
      puVar1 = puVar9;
      iVar3 = iVar11;
      do {
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        if (iVar3 == 0) {
          puVar1 = param_1;
          break;
        }
        uVar5 = puVar1[-4];
        uVar6 = puVar1[-3];
        iVar3 = iVar3 + 8;
        puVar1 = puVar1 + -2;
        uVar2 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
        bVar12 = uVar4 < (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar6 >> 0x1f) >> 1) ^ uVar5);
      } while ((int)(uVar10 - (uVar2 + bVar12)) < 0 !=
               (SBORROW4(uVar10,uVar2) != SBORROW4(uVar10 - uVar2,(uint)bVar12)));
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
    }
    puVar9 = puVar9 + 2;
    iVar11 = iVar11 + -8;
    if (puVar9 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}

