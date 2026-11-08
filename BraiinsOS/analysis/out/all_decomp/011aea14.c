// FUN_011aea14 @ 011aea14 size=380 calls_out=2 calls_in=0
// strings: 

bool FUN_011aea14(int *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint local_48 [3];
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar7 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    uStack_3c = *(undefined4 *)(param_2 + 8);
    iVar9 = *param_1;
    iVar10 = param_1[1];
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_48[1] = 0;
    local_48[0] = (uint)(local_48[2] != 0);
    local_34 = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = uStack_3c;
    do {
      while( true ) {
        do {
          uVar12 = FUN_00f45584(local_48);
          uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
          iVar2 = (int)uVar12;
          if (iVar2 == 0) goto LAB_011aeb7c;
          cVar1 = FUN_011af09c(iVar9 + 8,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        } while (cVar1 == '\0');
        uVar3 = 1;
        if ((int)*(uint *)(iVar10 + 8) < 0) {
          uVar3 = *(uint *)(iVar10 + 8) ^ 0x80000000;
        }
        if (uVar3 == 0) break;
        if (uVar3 == 1) {
          iVar6 = *(int *)(iVar10 + 0x10);
          puVar11 = *(undefined4 **)(iVar10 + 0xc);
          if (iVar6 == 1) {
            iVar6 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar5,param_3);
            if (iVar6 == 0) goto LAB_011aeb7c;
          }
          else if (iVar6 != 0) {
            puVar8 = puVar11 + iVar6 * 8;
            do {
              iVar6 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar5,param_3);
              if (iVar6 == 0) goto LAB_011aeb7c;
              puVar11 = puVar11 + 8;
            } while (puVar11 != puVar8);
          }
        }
        else {
          puVar11 = *(undefined4 **)(iVar10 + 0x10);
          iVar6 = *(int *)(iVar10 + 0x14) << 5;
          while (iVar6 != 0) {
            iVar4 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar5,param_3);
            iVar6 = iVar6 + -0x20;
            puVar11 = puVar11 + 8;
            if (iVar4 == 0) goto LAB_011aeb7c;
          }
        }
      }
    } while (*(int *)(iVar10 + 0xc) == 0);
LAB_011aeb7c:
    bVar7 = iVar2 == 0;
  }
  return bVar7;
}

