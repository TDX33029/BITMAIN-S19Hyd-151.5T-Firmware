// FUN_011b0e5c @ 011b0e5c size=464 calls_out=3 calls_in=0
// strings: 

bool FUN_011b0e5c(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint local_54 [3];
  undefined4 uStack_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  bVar7 = true;
  if (*param_2 == '\x05') {
    local_54[2] = *(uint *)(param_2 + 4);
    uStack_48 = *(undefined4 *)(param_2 + 8);
    iVar9 = *param_1;
    iVar1 = param_1[1];
    local_34 = *(undefined4 *)(param_2 + 0xc);
    if (local_54[2] == 0) {
      local_34 = 0;
    }
    local_54[1] = 0;
    local_54[0] = (uint)(local_54[2] != 0);
    local_40 = 0;
    local_44 = local_54[0];
    local_3c = local_54[2];
    local_38 = uStack_48;
    do {
      while( true ) {
        do {
          while( true ) {
            do {
              uVar11 = FUN_00f45584(local_54);
              uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
              iVar2 = (int)uVar11;
              if (iVar2 == 0) goto LAB_011b1018;
              FUN_01265b90(&local_30,*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc),
                           *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            } while (local_30 == -0x80000000);
            if (local_30 == -0x7fffffff) break;
            if (local_30 != 0) {
              thunk_FUN_016d3fb4(local_2c);
            }
          }
        } while ((char)local_2c == '\0');
        uVar3 = 1;
        if ((int)*(uint *)(iVar1 + 8) < 0) {
          uVar3 = *(uint *)(iVar1 + 8) ^ 0x80000000;
        }
        if (uVar3 == 0) break;
        if (uVar3 == 1) {
          iVar6 = *(int *)(iVar1 + 0x10);
          puVar8 = *(undefined4 **)(iVar1 + 0xc);
          if (iVar6 == 1) {
            iVar6 = (**(code **)(puVar8[1] + 0x10))(*puVar8,uVar5,param_3);
            if (iVar6 == 0) goto LAB_011b1018;
          }
          else if (iVar6 != 0) {
            puVar10 = puVar8 + iVar6 * 8;
            do {
              iVar6 = (**(code **)(puVar8[1] + 0x10))(*puVar8,uVar5,param_3);
              if (iVar6 == 0) goto LAB_011b1018;
              puVar8 = puVar8 + 8;
            } while (puVar8 != puVar10);
          }
        }
        else {
          puVar8 = *(undefined4 **)(iVar1 + 0x10);
          iVar6 = *(int *)(iVar1 + 0x14) << 5;
          while (iVar6 != 0) {
            iVar4 = (**(code **)(puVar8[1] + 0x10))(*puVar8,uVar5,param_3);
            iVar6 = iVar6 + -0x20;
            puVar8 = puVar8 + 8;
            if (iVar4 == 0) goto LAB_011b1018;
          }
        }
      }
    } while (*(int *)(iVar1 + 0xc) == 0);
LAB_011b1018:
    bVar7 = iVar2 == 0;
  }
  return bVar7;
}

