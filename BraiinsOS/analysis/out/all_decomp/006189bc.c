// FUN_006189bc @ 006189bc size=452 calls_out=0 calls_in=3
// strings: 

uint * FUN_006189bc(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  uVar8 = param_1[2];
  uVar4 = uVar8 + param_2;
  iVar6 = param_1[3] + (uint)CARRY4(uVar8,param_2);
  if (!CARRY4(param_1[3],(uint)CARRY4(uVar8,param_2))) {
    bVar11 = iVar6 == 0;
    if (bVar11) {
      iVar6 = param_1[5];
    }
    if ((bVar11 && iVar6 == 0) && (uVar7 = param_1[4], uVar4 <= uVar7)) {
      uVar1 = param_1[1];
      uVar10 = uVar1;
      if (uVar7 <= uVar1) {
        uVar10 = uVar4;
      }
      if ((uVar7 <= uVar1 && uVar4 <= uVar7) && uVar10 != uVar7) {
        uVar10 = uVar7 - uVar4;
        puVar2 = (uint *)(iVar3 + uVar4);
        puVar5 = puVar2;
        if (uVar10 < 4) {
          uVar4 = uVar10;
          do {
            if ((char)*puVar5 == '\0') {
LAB_00618b70:
              if (uVar10 < (uint)((int)puVar5 - (int)puVar2)) {
                puVar2 = (uint *)0x0;
              }
              return puVar2;
            }
            puVar5 = (uint *)((int)puVar5 + 1);
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        else if ((~(0x1010100 - *puVar2 | *puVar2) & 0x80808080) == 0) {
          puVar9 = (uint *)(iVar3 + uVar7);
          puVar5 = (uint *)(((uint)puVar2 & 0xfffffffc) + 4);
          if (uVar10 < 9) {
            if (puVar5 < puVar9) {
              uVar4 = ((((uint)puVar2 & 3) + uVar7) - param_2) - 4;
              iVar3 = (param_2 - ((uint)puVar2 & 3)) + iVar3 + 4;
              do {
                if (*(char *)(iVar3 + uVar8) == '\0') {
                  puVar5 = (uint *)(iVar3 + uVar8);
                  goto LAB_00618b70;
                }
                uVar4 = uVar4 - 1;
                iVar3 = iVar3 + 1;
              } while (uVar8 != uVar4);
            }
          }
          else {
            for (; puVar5 <= puVar9 + -2; puVar5 = puVar5 + 2) {
              uVar4 = ~(0x1010100 - *puVar5 | *puVar5);
              bVar11 = (uVar4 & 0x80808080) == 0;
              if (bVar11) {
                uVar4 = ~(0x1010100 - puVar5[1] | puVar5[1]);
              }
              if (!bVar11 || (uVar4 & 0x80808080) != 0) break;
            }
            if (puVar5 < puVar9) {
              do {
                if ((char)*puVar5 == '\0') goto LAB_00618b70;
                puVar5 = (uint *)((int)puVar5 + 1);
              } while (puVar5 != puVar9);
            }
          }
        }
        else {
          uVar4 = uVar10;
          do {
            if ((char)*puVar5 == '\0') goto LAB_00618b70;
            puVar5 = (uint *)((int)puVar5 + 1);
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
    }
  }
  return (uint *)0x0;
}

