// FUN_00b5e4a0 @ 00b5e4a0 size=228 calls_out=0 calls_in=1
// strings: 

void FUN_00b5e4a0(uint *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  
  puVar9 = param_1 + 4;
  iVar11 = 0;
  do {
    uVar3 = puVar9[-3];
    uVar7 = *puVar9;
    uVar8 = puVar9[1];
    uVar10 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
    uVar6 = ((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1) ^
            uVar7;
    uVar4 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
    bVar12 = uVar6 < (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar3 >> 0x1f) >> 1) ^ puVar9[-4]);
    if ((int)(uVar10 - (uVar4 + bVar12)) < 0 !=
        (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)bVar12))) {
      uVar13 = *(undefined8 *)(puVar9 + 2);
      puVar2 = puVar9;
      iVar5 = iVar11;
      do {
        *puVar2 = puVar2[-4];
        puVar2[1] = puVar2[-3];
        puVar2[2] = puVar2[-2];
        puVar2[3] = puVar2[-1];
        if (iVar5 == 0) {
          puVar2 = param_1;
          break;
        }
        puVar1 = puVar2 + -8;
        uVar4 = puVar2[-7];
        iVar5 = iVar5 + 0x10;
        puVar2 = puVar2 + -4;
        uVar3 = (uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4;
        bVar12 = uVar6 < (((uint)((byte)((int)uVar4 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar4 >> 0x1f) >> 1) ^ *puVar1);
      } while ((int)(uVar10 - (uVar3 + bVar12)) < 0 !=
               (SBORROW4(uVar10,uVar3) != SBORROW4(uVar10 - uVar3,(uint)bVar12)));
      *(undefined8 *)(puVar2 + 2) = uVar13;
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
    }
    puVar9 = puVar9 + 4;
    iVar11 = iVar11 + -0x10;
    if (puVar9 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

