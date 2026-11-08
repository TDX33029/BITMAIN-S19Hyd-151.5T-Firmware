// FUN_011b0364 @ 011b0364 size=516 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_011b0364(int param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_54 [3];
  undefined4 local_48;
  uint local_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  if ((*param_2 == '\x05') && (iVar8 = *(int *)(param_1 + 8), iVar8 != 0)) {
    iVar14 = *(int *)(param_2 + 4);
    piVar12 = *(int **)(param_1 + 4);
    uVar9 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    if (iVar14 == 0) {
      uVar5 = 0;
    }
    uVar1 = (uint)(iVar14 != 0);
    piVar13 = piVar12;
    do {
      uStack_40 = 0;
      local_54[1] = 0;
      piVar2 = piVar13 + 6;
      local_54[0] = uVar1;
      local_54[2] = iVar14;
      local_48 = uVar9;
      local_44 = uVar1;
      iStack_3c = iVar14;
      local_38 = uVar9;
      local_34 = uVar5;
LAB_011b0420:
      uVar15 = FUN_00f45584(local_54);
      uVar6 = (undefined4)((ulonglong)uVar15 >> 0x20);
      iVar3 = (int)uVar15;
      if (iVar3 != 0) {
        FUN_01265b90(&local_30,*(undefined4 *)(*piVar13 + 8),*(undefined4 *)(*piVar13 + 0xc),
                     *(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        if (local_30 != -0x80000000) {
          if (local_30 == -0x7fffffff) {
            if ((char)local_2c != '\0') {
              iVar3 = piVar13[1];
              uVar7 = 1;
              if ((int)*(uint *)(iVar3 + 8) < 0) {
                uVar7 = *(uint *)(iVar3 + 8) ^ 0x80000000;
              }
              if (uVar7 == 0) {
                if (*(int *)(iVar3 + 0xc) == 0) goto LAB_011b0420;
              }
              else {
                if (uVar7 != 1) {
                  puVar10 = *(undefined4 **)(iVar3 + 0x10);
                  iVar3 = *(int *)(iVar3 + 0x14) << 5;
                  while (iVar3 != 0) {
                    iVar4 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar6,param_3);
                    iVar3 = iVar3 + -0x20;
                    puVar10 = puVar10 + 8;
                    if (iVar4 == 0) {
                      return 0;
                    }
                  }
                  goto LAB_011b0420;
                }
                puVar10 = *(undefined4 **)(iVar3 + 0xc);
                iVar3 = *(int *)(iVar3 + 0x10);
                if (iVar3 != 1) {
                  if (iVar3 != 0) {
                    puVar11 = puVar10 + iVar3 * 8;
                    do {
                      iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar6,param_3);
                      if (iVar3 == 0) {
                        return 0;
                      }
                      puVar10 = puVar10 + 8;
                    } while (puVar10 != puVar11);
                  }
                  goto LAB_011b0420;
                }
                iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar6,param_3);
                if (iVar3 != 0) goto LAB_011b0420;
              }
              return 0;
            }
          }
          else if (local_30 != 0) {
            thunk_FUN_016d3fb4(local_2c);
          }
        }
        goto LAB_011b0420;
      }
      piVar13 = piVar2;
    } while (piVar2 != piVar12 + iVar8 * 6);
  }
  return 1;
}

