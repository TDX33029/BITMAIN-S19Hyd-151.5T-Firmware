// FUN_01180ce0 @ 01180ce0 size=988 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01180ce0(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  uint local_5c [3];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar4 = 1;
  if (*param_2 == '\x05') {
    local_5c[2] = *(uint *)(param_2 + 4);
    local_50 = *(undefined4 *)(param_2 + 8);
    local_3c = *(undefined4 *)(param_2 + 0xc);
    puVar5 = *(uint **)(param_1 + 4);
    if (local_5c[2] == 0) {
      local_3c = 0;
    }
    local_5c[0] = (uint)(local_5c[2] != 0);
    local_48 = 0;
    local_5c[1] = 0;
    local_4c = local_5c[0];
    local_44 = local_5c[2];
    local_40 = local_50;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = FUN_00f45584(local_5c,*(int *)(param_1 + 8),100,local_50,
                           *(undefined4 *)(param_1 + 0xc),puVar5,param_3);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = 4;
      if (2 < *puVar5) {
        iVar1 = *puVar5 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01180de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&DAT_01180de8 + *(int *)(&DAT_01180de8 + iVar1 * 4)))();
      return uVar4;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    do {
      while( true ) {
        uVar9 = FUN_00f45584(local_5c);
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
            if (iVar8 == 0) goto LAB_01181168;
          }
          else {
            puVar6 = puVar7 + iVar8 * 8;
            if (iVar8 != 0) {
              do {
                iVar8 = (**(code **)(puVar7[1] + 0x10))(*puVar7,uVar4,param_3);
                if (iVar8 == 0) goto LAB_01181168;
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
            if (iVar3 == 0) goto LAB_01181168;
          }
        }
      }
    } while (*(int *)(iVar1 + 0xc) == 0);
LAB_01181168:
    uVar4 = 0;
  }
  return uVar4;
}

