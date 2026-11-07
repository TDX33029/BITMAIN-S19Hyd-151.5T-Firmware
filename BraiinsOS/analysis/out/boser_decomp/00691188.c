// FUN_00691188 @ 00691188 size=444 calls_out=2 calls_in=1
// strings: 

void FUN_00691188(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_c0 [156];
  
  uVar11 = param_2 + (param_2 >> 1);
  do {
    uVar11 = uVar11 - 1;
    if (uVar11 < param_2) {
      FUN_01bed4e2(auStack_c0,param_1,0x98);
      iVar8 = uVar11 * 0x98 + param_1;
      FUN_01bed864(param_1,iVar8,0x98);
      FUN_01bed4e2(iVar8,auStack_c0,0x98);
      uVar3 = 0;
    }
    else {
      uVar3 = uVar11 - param_2;
    }
    uVar4 = uVar3 << 1 | 1;
    uVar2 = uVar11;
    if (param_2 < uVar11) {
      uVar2 = param_2;
    }
    if (uVar4 < uVar2) {
      do {
        uVar5 = uVar3 * 2 + 2;
        if (uVar5 < uVar2) {
          piVar6 = (int *)(param_1 + uVar5 * 0x98);
          iVar9 = *piVar6;
          piVar7 = (int *)(param_1 + uVar4 * 0x98);
          iVar8 = *piVar7;
          bVar12 = iVar9 <= iVar8;
          bVar1 = iVar9 < iVar8;
          if (iVar8 == iVar9) {
            uVar10 = piVar6[1];
            uVar5 = piVar7[1];
            bVar12 = uVar10 <= uVar5;
            bVar1 = uVar10 < uVar5;
            if (uVar5 != uVar10) goto LAB_00691298;
            uVar5 = piVar6[2];
            uVar10 = piVar7[2];
            uVar5 = (uint)(uVar10 >= uVar5 && uVar10 != uVar5) - (uint)(uVar10 < uVar5);
          }
          else {
LAB_00691298:
            uVar5 = (uint)bVar1 - (uint)!bVar12;
          }
          uVar5 = uVar4 + ((uVar5 & 0xff) >> 7);
        }
        else {
          uVar5 = uVar4;
        }
        piVar6 = (int *)(param_1 + uVar5 * 0x98);
        piVar7 = (int *)(param_1 + uVar3 * 0x98);
        bVar12 = *piVar6 <= *piVar7;
        if ((*piVar7 == *piVar6) &&
           (bVar12 = (uint)piVar6[1] <= (uint)piVar7[1], piVar7[1] == piVar6[1])) {
          if ((uint)piVar6[2] <= (uint)piVar7[2]) break;
        }
        else if (bVar12) break;
        iVar8 = 0;
        do {
          iVar9 = piVar7[iVar8];
          piVar7[iVar8] = piVar6[iVar8];
          piVar6[iVar8] = iVar9;
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0x26);
        uVar4 = uVar5 << 1 | 1;
        uVar3 = uVar5;
      } while (uVar4 < uVar2);
    }
    if (uVar11 == 0) {
      return;
    }
  } while( true );
}

