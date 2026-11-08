// FUN_006e6a00 @ 006e6a00 size=544 calls_out=5 calls_in=2
// strings: 

int FUN_006e6a00(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = *param_1;
  iVar9 = *param_2;
  uVar7 = param_2[1];
  iVar8 = param_2[2];
  FUN_01ac6cbc(uVar4,"{",1);
  bVar10 = iVar9 != 0;
  if (!bVar10) {
    iVar8 = 0;
  }
  iVar6 = 0;
  bVar11 = iVar8 != 0;
  if (!bVar11) {
    FUN_01ac6cbc(uVar4,"}",1);
  }
  bVar3 = !bVar11;
  while( true ) {
    if (iVar8 == 0) {
      if (!bVar3) {
        FUN_01ac6cbc(*param_1,"}",1);
        return 0;
      }
      return 0;
    }
    if (!bVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ffe0);
    }
    if (iVar6 == 0) {
      uVar5 = 0;
      iVar1 = iVar9;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        iVar1 = *(int *)(iVar1 + 0x2a0);
      }
      iVar9 = 0;
    }
    else {
      uVar5 = uVar7;
      iVar1 = iVar6;
    }
    iVar6 = iVar1;
    if (*(ushort *)(iVar1 + 0x29a) <= uVar5) {
      do {
        iVar1 = *(int *)(iVar6 + 0x210);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fff0);
        }
        uVar5 = (uint)*(ushort *)(iVar6 + 0x298);
        iVar9 = iVar9 + 1;
        iVar6 = iVar1;
      } while (*(ushort *)(iVar1 + 0x29a) <= uVar5);
    }
    if (iVar9 == 0) {
      uVar7 = uVar5 + 1;
      iVar6 = iVar1;
    }
    else {
      piVar2 = (int *)(iVar1 + uVar5 * 4 + 0x2a4);
      do {
        iVar6 = *piVar2;
        iVar9 = iVar9 + -1;
        piVar2 = (int *)(iVar6 + 0x2a0);
      } while (iVar9 != 0);
      uVar7 = 0;
    }
    if (!bVar11) {
      FUN_01ac6cbc(*param_1,",",1);
    }
    iVar9 = iVar1 + uVar5 * 0xc;
    FUN_006bc51c(&local_30,*param_1,*(undefined4 *)(iVar9 + 0x218),*(undefined4 *)(iVar9 + 0x21c));
    if ((char)local_30 != '\x04') break;
    iVar8 = iVar8 + -1;
    bVar10 = true;
    FUN_01ac6cbc(*param_1,":",1);
    iVar1 = FUN_006df214(iVar1 + uVar5 * 0x30,param_1);
    bVar11 = false;
    bVar3 = false;
    iVar9 = 0;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar8 = FUN_01966f50(local_30,local_2c);
  return iVar8;
}

