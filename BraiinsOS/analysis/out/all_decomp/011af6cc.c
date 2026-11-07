// FUN_011af6cc @ 011af6cc size=456 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_011af6cc(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*param_2 != '\x05') || (iVar9 = *(int *)(param_1 + 8), iVar9 == 0)) {
    return 1;
  }
  iVar14 = *(int *)(param_2 + 4);
  piVar11 = *(int **)(param_1 + 4);
  uVar8 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  if (iVar14 == 0) {
    uVar4 = 0;
  }
  uVar15 = (uint)(iVar14 != 0);
  piVar12 = piVar11;
LAB_011af72c:
  piVar2 = piVar12 + 6;
  local_34 = 0;
  local_48[1] = 0;
  local_48[0] = uVar15;
  local_48[2] = iVar14;
  local_3c = uVar8;
  local_38 = uVar15;
  local_30 = iVar14;
  local_2c = uVar8;
  local_28 = uVar4;
LAB_011af768:
  do {
    uVar16 = FUN_00f45584(local_48);
    uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
    iVar3 = (int)uVar16;
    if (iVar3 == 0) break;
    cVar1 = FUN_011af09c(*piVar12 + 8,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
    if (cVar1 != '\0') {
      iVar3 = piVar12[1];
      uVar6 = 1;
      if ((int)*(uint *)(iVar3 + 8) < 0) {
        uVar6 = *(uint *)(iVar3 + 8) ^ 0x80000000;
      }
      if (uVar6 == 0) {
        if (*(int *)(iVar3 + 0xc) == 0) goto LAB_011af768;
      }
      else {
        if (uVar6 != 1) {
          puVar10 = *(undefined4 **)(iVar3 + 0x10);
          iVar3 = *(int *)(iVar3 + 0x14) << 5;
          while (iVar3 != 0) {
            iVar7 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar5,param_3);
            iVar3 = iVar3 + -0x20;
            puVar10 = puVar10 + 8;
            if (iVar7 == 0) {
              return 0;
            }
          }
          goto LAB_011af768;
        }
        iVar7 = *(int *)(iVar3 + 0x10);
        puVar10 = *(undefined4 **)(iVar3 + 0xc);
        if (iVar7 != 1) {
          if (iVar7 != 0) {
            puVar13 = puVar10 + iVar7 * 8;
            do {
              iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar5,param_3);
              if (iVar3 == 0) {
                return 0;
              }
              puVar10 = puVar10 + 8;
            } while (puVar10 != puVar13);
          }
          goto LAB_011af768;
        }
        iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar5,param_3);
        if (iVar3 != 0) goto LAB_011af768;
      }
      return 0;
    }
  } while( true );
  piVar12 = piVar2;
  if (piVar2 == piVar11 + iVar9 * 6) {
    return 1;
  }
  goto LAB_011af72c;
}

