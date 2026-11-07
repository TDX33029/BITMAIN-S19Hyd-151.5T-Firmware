// FUN_01183b48 @ 01183b48 size=468 calls_out=2 calls_in=0
// strings: 

bool FUN_01183b48(int param_1,char *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar1 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    iVar8 = *(int *)(param_1 + 4);
    iVar9 = *(int *)(param_1 + 8);
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_48[0] = (uint)(local_48[2] != 0);
    local_34 = 0;
    local_48[1] = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
    if (iVar9 == 0) {
      iVar8 = FUN_00f45584(local_48);
      return iVar8 == 0;
    }
    do {
      while( true ) {
        uVar13 = FUN_00f45584(local_48);
        uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
        iVar3 = (int)uVar13;
        if (iVar3 == 0) {
          return true;
        }
        uVar10 = *(undefined4 *)(iVar3 + 4);
        iVar12 = *(int *)(iVar3 + 8);
        iVar3 = iVar8;
        iVar4 = iVar9 << 5;
        while ((*(int *)(iVar3 + 8) != iVar12 ||
               (iVar2 = thunk_FUN_016dd50a(*(undefined4 *)(iVar3 + 4),uVar10,iVar12), iVar2 != 0)))
        {
          iVar3 = iVar3 + 0x20;
          iVar4 = iVar4 + -0x20;
          if (iVar4 == 0) {
            return false;
          }
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        uVar6 = 1;
        if ((int)*(uint *)(iVar3 + 8) < 0) {
          uVar6 = *(uint *)(iVar3 + 8) ^ 0x80000000;
        }
        if (uVar6 == 0) break;
        if (uVar6 == 1) {
          puVar11 = *(undefined4 **)(iVar3 + 0xc);
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 1) {
            iVar3 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar5,param_3);
            if (iVar3 == 0) {
              return false;
            }
          }
          else if (iVar3 != 0) {
            puVar7 = puVar11 + iVar3 * 8;
            do {
              iVar3 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar5,param_3);
              if (iVar3 == 0) {
                return false;
              }
              puVar11 = puVar11 + 8;
            } while (puVar11 != puVar7);
          }
        }
        else {
          puVar11 = *(undefined4 **)(iVar3 + 0x10);
          iVar3 = *(int *)(iVar3 + 0x14) << 5;
          while (iVar3 != 0) {
            iVar4 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar5,param_3);
            iVar3 = iVar3 + -0x20;
            puVar11 = puVar11 + 8;
            if (iVar4 == 0) {
              return false;
            }
          }
        }
      }
      bVar1 = false;
    } while (*(int *)(iVar3 + 0xc) == 0);
  }
  return bVar1;
}

