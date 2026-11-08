// FUN_0155ac8c @ 0155ac8c size=632 calls_out=11 calls_in=0
// strings: 

undefined4
FUN_0155ac8c(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  uint local_8c [3];
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [28];
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  if (*param_2 == '\x05') {
    local_8c[2] = *(uint *)(param_2 + 4);
    local_80 = *(undefined4 *)(param_2 + 8);
    local_6c = *(undefined4 *)(param_2 + 0xc);
    puVar12 = (undefined4 *)((uint)local_68 | 4);
    if (local_8c[2] == 0) {
      local_6c = 0;
    }
    local_8c[0] = (uint)(local_8c[2] != 0);
    local_78 = 0;
    local_8c[1] = 0;
    local_7c = local_8c[0];
    local_74 = local_8c[2];
    local_70 = local_80;
    while (iVar3 = FUN_01a41998(local_8c), iVar3 != 0) {
      FUN_006666fc(&local_48,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      *puVar12 = local_48;
      puVar12[1] = uStack_44;
      puVar12[2] = uStack_40;
      local_68[0] = 3;
      iVar3 = FUN_015776f4(param_1,local_68,param_3,param_4,param_5);
      if (iVar3 != 0) {
        piVar6 = *(int **)(iVar3 + 0x78);
        do {
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + 1;
        local_4c = iVar3;
        if (-1 < iVar4) {
          uVar11 = *(uint *)(iVar3 + 0x7c);
          do {
            iVar4 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar4 + 1;
          if (-1 < iVar4) {
            if (param_4 == 0) {
              local_48 = 0;
            }
            else {
              DataMemoryBarrier(0xb);
              if (*(int *)(param_4 + 0x14) != 0) {
                FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
              }
              piVar8 = *(int **)(param_4 + 0xc);
              do {
                iVar4 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = iVar4 + 1;
              if (iVar4 < 0) goto LAB_0155af00;
              piVar10 = piVar6 + 2;
              uVar9 = *(undefined4 *)(param_4 + 0x10);
              uVar7 = (*(int **)(param_4 + 4))[1];
              if (uVar11 < uVar7) {
                uVar5 = uVar11;
              }
              else {
                iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar10,uVar7);
                if (iVar4 != 0) {
                  uVar7 = 0;
                }
                uVar5 = uVar11 - uVar7;
                piVar10 = (int *)((int)piVar10 + uVar7);
              }
              local_30 = FUN_016bc0ec(piVar10,uVar5);
              local_3c = 3;
              local_48 = 2;
              local_38 = piVar8;
              local_34 = uVar9;
            }
            uVar13 = FUN_01531840(param_3);
            uVar9 = FUN_01594a60(iVar3);
            uVar9 = FUN_015948f4(piVar6,uVar11,&local_48,(int)uVar13,
                                 (int)((ulonglong)uVar13 >> 0x20),param_2,uVar9);
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar6;
              bVar2 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar2);
            *piVar6 = iVar3 + -1;
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0070451c(piVar6,uVar11);
            }
            FUN_00e0febc(local_68);
            return uVar9;
          }
        }
LAB_0155af00:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x155af00);
        (*pcVar1)();
      }
      FUN_00e0febc(local_68);
    }
  }
  return 0;
}

