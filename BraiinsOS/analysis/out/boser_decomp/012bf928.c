// FUN_012bf928 @ 012bf928 size=380 calls_out=3 calls_in=6
// strings: 

undefined4 FUN_012bf928(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_3c;
  byte *local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  
  uVar9 = 0;
  if (*(char *)(param_1 + 0x39) != '\0') {
    iVar13 = *param_2;
    if (iVar13 == 0) {
LAB_012bfa94:
      uVar9 = 1;
    }
    else if (*(int *)(param_1 + 0x34) != 0) {
      iVar10 = *(int *)(param_1 + 0x30);
      iVar17 = param_2[1];
      cVar3 = *(char *)(param_1 + 0x38);
      iVar7 = iVar10 + *(int *)(param_1 + 0x34) * 0xc;
      do {
        piVar1 = (int *)(iVar10 + 8);
        iVar12 = *(int *)(iVar10 + 4);
        iVar10 = iVar10 + 0xc;
        iVar16 = iVar12 + *piVar1 * 0xc;
        while (iVar12 != iVar16) {
          puVar2 = (undefined4 *)(iVar12 + 4);
          piVar1 = (int *)(iVar12 + 8);
          iVar12 = iVar12 + 0xc;
          if (cVar3 == '\0') {
            if ((*piVar1 == iVar17) &&
               (iVar15 = thunk_FUN_01bed842(*puVar2,iVar13,iVar17), iVar15 == 0)) goto LAB_012bfa94;
          }
          else {
            FUN_006643f0(&local_3c,*puVar2,*piVar1);
            iVar15 = local_34;
            pbVar5 = local_38;
            FUN_006643f0(&local_30,iVar13,iVar17);
            bVar4 = false;
            if (iVar15 == local_28) {
              pbVar6 = local_2c;
              pbVar8 = pbVar5;
              do {
                if (iVar15 == 0) {
                  bVar4 = true;
                  break;
                }
                uVar11 = (uint)*pbVar6;
                iVar15 = iVar15 + -1;
                uVar14 = (uint)*pbVar8;
                if (uVar11 - 0x41 < 0x1a) {
                  uVar11 = uVar11 | 0x20;
                }
                if (uVar14 - 0x41 < 0x1a) {
                  uVar14 = uVar14 | 0x20;
                }
                pbVar6 = pbVar6 + 1;
                pbVar8 = pbVar8 + 1;
              } while (uVar14 == uVar11);
            }
            if (local_30 != -0x80000000) {
              FUN_0134bd64();
            }
            if (local_3c != -0x80000000) {
              FUN_0134bd64(local_3c,pbVar5);
            }
            if (bVar4) goto LAB_012bfa94;
          }
        }
      } while (iVar10 != iVar7);
      uVar9 = 0;
    }
  }
  return uVar9;
}

