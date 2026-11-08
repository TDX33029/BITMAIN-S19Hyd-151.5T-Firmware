// FUN_01181188 @ 01181188 size=464 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01181188(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  uint local_54 [3];
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar4 = 1;
  if (*param_2 == '\x05') {
    local_54[2] = *(uint *)(param_2 + 4);
    local_48 = *(undefined4 *)(param_2 + 8);
    local_34 = *(undefined4 *)(param_2 + 0xc);
    piVar5 = *(int **)(param_1 + 4);
    if (local_54[2] == 0) {
      local_34 = 0;
    }
    local_54[0] = (uint)(local_54[2] != 0);
    local_40 = 0;
    local_54[1] = 0;
    local_44 = local_54[0];
    local_3c = local_54[2];
    local_38 = local_48;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = FUN_00f45584(local_54);
      if (iVar1 == 0) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x01181264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&DAT_01181268 + *(int *)(&DAT_01181268 + *piVar5 * 4)))();
      return uVar4;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    do {
      while( true ) {
        uVar9 = FUN_00f45584(local_54);
        uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 == 0) {
          return 1;
        }
        uVar2 = 1;
        if ((int)*(uint *)(iVar1 + 8) < 0) {
          uVar2 = *(uint *)(iVar1 + 8) ^ 0x80000000;
        }
        if (uVar2 == 0) break;
        if (uVar2 == 1) {
          puVar7 = *(undefined4 **)(iVar1 + 0xc);
          iVar8 = *(int *)(iVar1 + 0x10);
          if (iVar8 == 1) {
            iVar8 = (**(code **)(puVar7[1] + 0x10))(*puVar7,uVar4,param_3);
            if (iVar8 == 0) goto LAB_01181640;
          }
          else {
            puVar6 = puVar7 + iVar8 * 8;
            if (iVar8 != 0) {
              do {
                iVar8 = (**(code **)(puVar7[1] + 0x10))(*puVar7,uVar4,param_3);
                if (iVar8 == 0) goto LAB_01181640;
                puVar7 = puVar7 + 8;
              } while (puVar7 != puVar6);
            }
          }
        }
        else {
          puVar7 = *(undefined4 **)(iVar1 + 0x10);
          iVar8 = *(int *)(iVar1 + 0x14) << 5;
          while (iVar8 != 0) {
            iVar3 = (**(code **)(puVar7[1] + 0x10))(*puVar7,uVar4,param_3);
            iVar8 = iVar8 + -0x20;
            puVar7 = puVar7 + 8;
            if (iVar3 == 0) goto LAB_01181640;
          }
        }
      }
    } while (*(int *)(iVar1 + 0xc) == 0);
LAB_01181640:
    uVar4 = 0;
  }
  return uVar4;
}

