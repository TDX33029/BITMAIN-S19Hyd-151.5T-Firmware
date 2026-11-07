// FUN_011e7d6c @ 011e7d6c size=540 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_011e7d6c(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int local_30;
  char *local_2c;
  int local_28;
  
  uVar12 = 1;
  if (*param_2 == '\x04') {
    iVar8 = *(int *)(param_2 + 0xc);
    if (iVar8 == 0) {
      local_30 = 0;
      local_2c = &DAT_00000001;
    }
    else {
      local_2c = (char *)FUN_016d38c8(iVar8,1);
      local_30 = iVar8;
      if (local_2c == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar8);
      }
    }
    local_28 = iVar8;
    FUN_011e9578(param_1,param_2,&local_30,param_3,1);
    pcVar2 = local_2c;
    iVar1 = local_30;
    uVar12 = 1;
    if (iVar8 != 0) {
      iVar13 = *(int *)(param_1 + 0x34);
      if (iVar13 == 0) {
        iVar8 = iVar8 * 0x18;
        pcVar6 = local_2c;
        iVar13 = local_28;
        do {
          if (iVar13 == 0) break;
          if (*pcVar6 != '\x01') {
            uVar12 = 0;
            break;
          }
          iVar13 = iVar13 + -1;
          pcVar6 = pcVar6 + 1;
          iVar8 = iVar8 + -0x18;
        } while (iVar8 != 0);
      }
      else {
        iVar11 = *(int *)(param_2 + 8);
        iVar8 = iVar11 + iVar8 * 0x18;
        pcVar5 = local_2c + local_28;
        pcVar6 = local_2c;
        do {
          if (pcVar6 == pcVar5) break;
          if (*pcVar6 == '\0') {
            uVar3 = 1;
            if ((int)*(uint *)(iVar13 + 8) < 0) {
              uVar3 = *(uint *)(iVar13 + 8) ^ 0x80000000;
            }
            if (uVar3 == 0) {
              if (*(int *)(iVar13 + 0xc) != 0) {
LAB_011e7f2c:
                uVar12 = 0;
                break;
              }
            }
            else if (uVar3 == 1) {
              puVar7 = *(undefined4 **)(iVar13 + 0xc);
              iVar9 = *(int *)(iVar13 + 0x10);
              if (iVar9 == 1) {
                iVar9 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar11,param_3);
                if (iVar9 == 0) goto LAB_011e7f2c;
              }
              else if (iVar9 != 0) {
                puVar10 = puVar7 + iVar9 * 8;
                do {
                  iVar9 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar11,param_3);
                  if (iVar9 == 0) goto LAB_011e7f2c;
                  puVar7 = puVar7 + 8;
                } while (puVar7 != puVar10);
              }
            }
            else {
              puVar7 = *(undefined4 **)(iVar13 + 0x10);
              iVar9 = *(int *)(iVar13 + 0x14) << 5;
              while (iVar9 != 0) {
                iVar4 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar11,param_3);
                iVar9 = iVar9 + -0x20;
                puVar7 = puVar7 + 8;
                if (iVar4 == 0) goto LAB_011e7f2c;
              }
            }
          }
          iVar11 = iVar11 + 0x18;
          pcVar6 = pcVar6 + 1;
        } while (iVar11 != iVar8);
      }
    }
    if (iVar1 != 0) {
      thunk_FUN_016d3fb4(pcVar2);
    }
  }
  return uVar12;
}

