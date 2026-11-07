// FUN_011b26f8 @ 011b26f8 size=420 calls_out=3 calls_in=0
// strings: 

bool FUN_011b26f8(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  uint local_5c [3];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  char local_34;
  
  bVar6 = true;
  if (*param_2 == '\x05') {
    local_5c[2] = *(uint *)(param_2 + 4);
    local_50 = *(undefined4 *)(param_2 + 8);
    iVar1 = *param_1;
    iVar8 = param_1[1];
    local_3c = *(undefined4 *)(param_2 + 0xc);
    if (local_5c[2] == 0) {
      local_3c = 0;
    }
    local_5c[0] = (uint)(local_5c[2] != 0);
    local_48 = 0;
    local_5c[1] = 0;
    local_4c = local_5c[0];
    local_44 = local_5c[2];
    local_40 = local_50;
    do {
      while( true ) {
        do {
          while( true ) {
            uVar11 = FUN_00f45584(local_5c);
            uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
            iVar2 = (int)uVar11;
            if (iVar2 == 0) goto LAB_011b2888;
            FUN_00ff71dc(&local_38,iVar1 + 8,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            if (local_38 == 0x12) break;
            FUN_011648d0(&local_38);
          }
        } while (local_34 == '\0');
        uVar3 = 1;
        if ((int)*(uint *)(iVar8 + 8) < 0) {
          uVar3 = *(uint *)(iVar8 + 8) ^ 0x80000000;
        }
        if (uVar3 == 0) break;
        if (uVar3 == 1) {
          puVar9 = *(undefined4 **)(iVar8 + 0xc);
          iVar10 = *(int *)(iVar8 + 0x10);
          if (iVar10 == 1) {
            iVar10 = (**(code **)(puVar9[1] + 0x10))(*puVar9,uVar5,param_3);
            if (iVar10 == 0) goto LAB_011b2888;
          }
          else if (iVar10 != 0) {
            puVar7 = puVar9 + iVar10 * 8;
            do {
              iVar10 = (**(code **)(puVar9[1] + 0x10))(*puVar9,uVar5,param_3);
              if (iVar10 == 0) goto LAB_011b2888;
              puVar9 = puVar9 + 8;
            } while (puVar9 != puVar7);
          }
        }
        else {
          puVar9 = *(undefined4 **)(iVar8 + 0x10);
          iVar10 = *(int *)(iVar8 + 0x14) << 5;
          while (iVar10 != 0) {
            iVar4 = (**(code **)(puVar9[1] + 0x10))(*puVar9,uVar5,param_3);
            iVar10 = iVar10 + -0x20;
            puVar9 = puVar9 + 8;
            if (iVar4 == 0) goto LAB_011b2888;
          }
        }
      }
    } while (*(int *)(iVar8 + 0xc) == 0);
LAB_011b2888:
    bVar6 = iVar2 == 0;
  }
  return bVar6;
}

