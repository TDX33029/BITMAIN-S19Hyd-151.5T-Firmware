// FUN_01018698 @ 01018698 size=424 calls_out=7 calls_in=4
// strings: 

void FUN_01018698(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  
  puVar4 = (undefined4 *)*param_2;
  local_3c = param_2[1];
  iVar8 = param_2[2];
  local_34 = param_2[3];
  if (local_3c == local_34) {
    puVar7 = puVar4;
  }
  else {
    puVar6 = puVar4;
    local_40 = puVar4;
    local_38 = iVar8;
    do {
      piVar5 = *(int **)(local_3c + 8);
      local_3c = local_3c + 0xc;
      FUN_019a66e4(&local_30,*(undefined4 *)(piVar5[8] + 0xc),*(undefined4 *)(piVar5[8] + 0x10),
                   piVar5[2],piVar5[3] + -1);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db41c(piVar5);
      }
      puVar7 = puVar6 + 3;
      *puVar6 = local_30;
      puVar6[1] = local_2c;
      puVar6[2] = local_28;
      puVar6 = puVar7;
    } while (local_3c != local_34);
  }
  iVar2 = local_34;
  iVar3 = local_3c;
  uVar10 = (int)puVar7 - (int)puVar4;
  iVar9 = (uVar10 >> 2) * -0x55555555;
  local_38 = 0;
  local_40 = (undefined4 *)0x4;
  local_30 = puVar4;
  local_2c = iVar9;
  local_28 = iVar8;
  FUN_0132b958(0,4,4,0xc);
  local_34 = 4;
  local_3c = 4;
  FUN_00ded058(iVar3,((uint)(iVar2 - iVar3) >> 2) * -0x55555555);
  FUN_00decff8(&local_40);
  if (0x17 < uVar10) {
    if (uVar10 < 0xfc) {
      puVar6 = puVar4 + 3;
      do {
        FUN_01014754(puVar4,puVar6);
        puVar6 = puVar6 + 3;
      } while (puVar6 != puVar7);
    }
    else {
      FUN_00eaa100(puVar4,iVar9);
    }
  }
  param_1[1] = (int)puVar4;
  param_1[2] = iVar8;
  *param_1 = (int)puVar4;
  param_1[3] = (int)puVar4 + uVar10;
  return;
}

