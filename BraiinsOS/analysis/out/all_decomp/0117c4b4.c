// FUN_0117c4b4 @ 0117c4b4 size=336 calls_out=1 calls_in=0
// strings: 

undefined1 FUN_0117c4b4(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  uint local_48 [3];
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar5 = 1;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    uStack_3c = *(undefined4 *)(param_2 + 8);
    iVar6 = *param_1;
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_34 = 0;
    local_48[1] = 0;
    local_48[0] = (uint)(local_48[2] != 0);
    local_38 = local_48[0];
    iStack_30 = local_48[2];
    uStack_2c = uStack_3c;
    do {
      while( true ) {
        uVar9 = FUN_00f45584(local_48);
        iVar2 = (int)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 == 0 || iVar2 == 0) {
          return 1;
        }
        uVar1 = 1;
        if ((int)*(uint *)(iVar6 + 8) < 0) {
          uVar1 = *(uint *)(iVar6 + 8) ^ 0x80000000;
        }
        if (uVar1 == 0) break;
        if (uVar1 == 1) {
          puVar7 = *(undefined4 **)(iVar6 + 0xc);
          iVar8 = *(int *)(iVar6 + 0x10);
          if (iVar8 == 1) {
            iVar2 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar2,param_3);
            if (iVar2 == 0) {
              return 0;
            }
          }
          else {
            puVar4 = puVar7 + iVar8 * 8;
            if (iVar8 != 0) {
              do {
                iVar8 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar2,param_3);
                if (iVar8 == 0) {
                  return 0;
                }
                puVar7 = puVar7 + 8;
              } while (puVar7 != puVar4);
            }
          }
        }
        else {
          puVar7 = *(undefined4 **)(iVar6 + 0x10);
          iVar8 = *(int *)(iVar6 + 0x14) << 5;
          while (iVar8 != 0) {
            iVar3 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar2,param_3);
            iVar8 = iVar8 + -0x20;
            puVar7 = puVar7 + 8;
            if (iVar3 == 0) {
              return 0;
            }
          }
        }
      }
      uVar5 = 0;
    } while (*(int *)(iVar6 + 0xc) == 0);
  }
  return uVar5;
}

