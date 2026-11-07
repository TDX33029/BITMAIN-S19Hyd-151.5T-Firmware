// FUN_013cf5ec @ 013cf5ec size=432 calls_out=6 calls_in=1
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_013cf5ec(undefined8 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_40;
  int local_38;
  undefined4 *local_30;
  undefined4 local_2c;
  int local_28;
  
  if (param_3 == 0) {
    local_40._0_4_ = (undefined4 *)FUN_016ecaf4();
    uVar12 = (uint)(ushort)param_2[0x19];
    *(undefined2 *)((int)(undefined4 *)local_40 + 0x32) = 0;
    *(undefined4 *)local_40 = 0;
    local_40._4_4_ = 0;
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = 0;
      do {
        uVar3 = *(ushort *)((int)(undefined4 *)local_40 + 0x32);
        if (10 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                       &DAT_01d305b8);
        }
        uVar1 = param_2[2];
        *(ushort *)((int)(undefined4 *)local_40 + 0x32) = uVar3 + 1;
        uVar11 = uVar11 + 1;
        uVar2 = param_2[3];
        *(undefined2 *)((undefined4 *)local_40 + uVar3 + 1) = uVar1;
        *(undefined2 *)((int)((undefined4 *)local_40 + uVar3 + 1) + 2) = uVar2;
        param_2 = param_2 + 2;
      } while (uVar12 != uVar11);
      uVar11 = uVar12;
    }
    *(undefined4 **)param_1 = (undefined4 *)local_40;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(uint *)(param_1 + 1) = uVar11;
  }
  else {
    FUN_013cf5ec(&local_40,*(undefined4 *)(param_2 + 0x1a));
    if ((undefined4 *)local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_40 = FUN_0130a890((undefined4 *)local_40,local_40._4_4_);
    uVar4 = (ulonglong)local_40 >> 0x20;
    uVar6 = (undefined4)local_40;
    if (param_2[0x19] != 0) {
      puVar10 = (undefined4 *)(param_2 + 0x1c);
      uVar11 = 0;
      iVar9 = local_38;
      do {
        uVar1 = *(undefined2 *)((int)puVar10 + -0x32);
        uVar2 = *(undefined2 *)(puVar10 + -0xd);
        FUN_013cf5ec(&local_30,*puVar10,param_3 + -1);
        iVar5 = local_28;
        if (local_30 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)FUN_016ecaf4();
          uVar8 = 0;
          *(undefined2 *)((int)puVar7 + 0x32) = 0;
          *puVar7 = 0;
        }
        else {
          puVar7 = local_30;
          uVar8 = local_2c;
        }
        FUN_013e5ff4(uVar6,(int)uVar4,uVar2,uVar1,puVar7,uVar8);
        puVar10 = puVar10 + 1;
        uVar11 = uVar11 + 1;
        iVar9 = iVar5 + iVar9 + 1;
      } while (uVar11 < (ushort)param_2[0x19]);
      local_38 = iVar9;
    }
    *param_1 = local_40;
    *(int *)(param_1 + 1) = local_38;
  }
  return;
}

