// FUN_011878f0 @ 011878f0 size=504 calls_out=2 calls_in=0
// strings: 

bool FUN_011878f0(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar2 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    local_28 = *(undefined4 *)(param_2 + 0xc);
    iVar12 = *(int *)(param_1 + 4);
    iVar5 = *(int *)(param_1 + 8);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_48[0] = (uint)(local_48[2] != 0);
    local_34 = 0;
    local_48[1] = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
    if (iVar5 == 0) {
      iVar5 = FUN_00f45584(local_48);
      return iVar5 == 0;
    }
    do {
      uVar14 = FUN_00f45584(local_48);
      uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      iVar3 = (int)uVar14;
      if (iVar3 == 0) {
        return true;
      }
      bVar11 = false;
      iVar10 = iVar12;
      do {
        cVar1 = FUN_01164a60(iVar10,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        if (cVar1 != '\0') {
          iVar4 = *(int *)(iVar10 + 0x50);
          uVar7 = 1;
          if ((int)*(uint *)(iVar4 + 8) < 0) {
            uVar7 = *(uint *)(iVar4 + 8) ^ 0x80000000;
          }
          if (uVar7 == 0) {
            bVar11 = true;
            if (*(int *)(iVar4 + 0xc) != 0) {
              return false;
            }
          }
          else if (uVar7 == 1) {
            iVar8 = *(int *)(iVar4 + 0x10);
            puVar9 = *(undefined4 **)(iVar4 + 0xc);
            if (iVar8 == 1) {
              iVar4 = (**(code **)(puVar9[1] + 0x10))(*puVar9,uVar6,param_3);
              bVar11 = true;
              if (iVar4 == 0) {
                return false;
              }
            }
            else {
              bVar11 = true;
              if (iVar8 != 0) {
                puVar13 = puVar9 + iVar8 * 8;
                do {
                  iVar4 = (**(code **)(puVar9[1] + 0x10))(*puVar9,uVar6,param_3);
                  if (iVar4 == 0) {
                    return false;
                  }
                  puVar9 = puVar9 + 8;
                } while (puVar9 != puVar13);
              }
            }
          }
          else {
            puVar9 = *(undefined4 **)(iVar4 + 0x10);
            iVar4 = *(int *)(iVar4 + 0x14) << 5;
            while (iVar4 != 0) {
              iVar8 = (**(code **)(puVar9[1] + 0x10))(*puVar9,uVar6,param_3);
              iVar4 = iVar4 + -0x20;
              puVar9 = puVar9 + 8;
              if (iVar8 == 0) {
                return false;
              }
            }
            bVar11 = true;
          }
        }
        iVar10 = iVar10 + 100;
      } while (iVar10 != iVar5 * 100 + iVar12);
      bVar2 = false;
    } while (bVar11);
  }
  return bVar2;
}

