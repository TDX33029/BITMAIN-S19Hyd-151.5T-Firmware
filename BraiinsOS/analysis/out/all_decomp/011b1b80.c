// FUN_011b1b80 @ 011b1b80 size=492 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_011b1b80(int param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_5c [3];
  undefined4 local_50;
  uint local_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  char local_34;
  
  if ((*param_2 == '\x05') && (iVar8 = *(int *)(param_1 + 8), iVar8 != 0)) {
    iVar14 = *(int *)(param_2 + 4);
    piVar11 = *(int **)(param_1 + 4);
    uVar9 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    if (iVar14 == 0) {
      uVar4 = 0;
    }
    uVar1 = (uint)(iVar14 != 0);
    piVar12 = piVar11;
    do {
      uStack_48 = 0;
      local_5c[1] = 0;
      piVar2 = piVar12 + 6;
      local_5c[0] = uVar1;
      local_5c[2] = iVar14;
      local_50 = uVar9;
      local_4c = uVar1;
      iStack_44 = iVar14;
      local_40 = uVar9;
      local_3c = uVar4;
LAB_011b1c20:
      uVar15 = FUN_00f45584(local_5c);
      uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
      iVar3 = (int)uVar15;
      if (iVar3 != 0) {
        FUN_00ff71dc(&local_38,*piVar12 + 8,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        if (local_38 == 0x12) {
          if (local_34 != '\0') {
            iVar3 = piVar12[1];
            uVar6 = 1;
            if ((int)*(uint *)(iVar3 + 8) < 0) {
              uVar6 = *(uint *)(iVar3 + 8) ^ 0x80000000;
            }
            if (uVar6 == 0) {
              if (*(int *)(iVar3 + 0xc) == 0) goto LAB_011b1c20;
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
                goto LAB_011b1c20;
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
                goto LAB_011b1c20;
              }
              iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,uVar5,param_3);
              if (iVar3 != 0) goto LAB_011b1c20;
            }
            return 0;
          }
        }
        else {
          FUN_011648d0(&local_38);
        }
        goto LAB_011b1c20;
      }
      piVar12 = piVar2;
    } while (piVar2 != piVar11 + iVar8 * 6);
  }
  return 1;
}

