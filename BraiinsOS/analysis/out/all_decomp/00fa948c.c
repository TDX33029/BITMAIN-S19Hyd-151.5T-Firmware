// FUN_00fa948c @ 00fa948c size=404 calls_out=0 calls_in=379
// strings: 

undefined4 FUN_00fa948c(undefined4 param_1,int param_2,ushort *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  undefined4 local_34;
  int local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  if ((param_4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00fa9604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2 + 0xc))(param_1,param_3,param_4 >> 1);
    return uVar2;
  }
  uVar5 = (uint)(byte)*param_3;
  if (uVar5 == 0) {
    return 0;
  }
  pcVar9 = *(code **)(param_2 + 0xc);
  uVar8 = 0;
  do {
    while (puVar7 = (ushort *)((int)param_3 + 1), -1 < (char)uVar5) {
LAB_00fa9564:
      iVar1 = (*pcVar9)(param_1,puVar7,uVar5);
      if (iVar1 != 0) {
        return 1;
      }
      param_3 = (ushort *)((int)puVar7 + uVar5);
      uVar5 = (uint)(byte)*param_3;
      if (uVar5 == 0) {
        return 0;
      }
    }
    if (uVar5 == 0x80) {
      uVar5 = (uint)*(ushort *)((int)param_3 + 1);
      puVar7 = (ushort *)((int)param_3 + 3);
      goto LAB_00fa9564;
    }
    local_34 = param_1;
    local_30 = param_2;
    if (uVar5 == 0xc0) {
      local_28 = 0;
      local_2c = &DAT_60000020;
      puVar4 = (undefined4 *)(param_4 + uVar8 * 8);
      iVar1 = (*(code *)puVar4[1])(*puVar4,&local_34);
      param_3 = puVar7;
    }
    else {
      local_2c = &DAT_60000020;
      if ((uVar5 & 1) != 0) {
        puVar7 = (ushort *)((int)param_3 + 5);
        local_2c = *(undefined1 **)((int)param_3 + 1);
      }
      bVar10 = (uVar5 & 2) != 0;
      puVar6 = puVar7;
      if (bVar10) {
        puVar6 = puVar7 + 1;
        param_3 = (ushort *)(uint)*puVar7;
      }
      uVar3 = 0;
      if (!bVar10) {
        param_3 = (ushort *)0x0;
      }
      puVar7 = puVar6;
      if ((uVar5 & 4) != 0) {
        puVar7 = puVar6 + 1;
        uVar3 = (uint)*puVar6;
      }
      puVar6 = puVar7;
      if ((uVar5 & 8) != 0) {
        puVar6 = puVar7 + 1;
        uVar8 = (uint)*puVar7;
      }
      if ((uVar5 & 0x10) != 0) {
        param_3 = (ushort *)(uint)*(ushort *)(param_4 + (int)param_3 * 8 + 4);
      }
      if ((uVar5 & 0x20) != 0) {
        uVar3 = (uint)*(ushort *)(param_4 + uVar3 * 8 + 4);
      }
      local_28 = CONCAT22((short)uVar3,(short)param_3);
      puVar4 = (undefined4 *)(param_4 + uVar8 * 8);
      iVar1 = (*(code *)puVar4[1])(*puVar4,&local_34);
      param_3 = puVar6;
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar8 = uVar8 + 1;
    uVar5 = (uint)(byte)*param_3;
    if (uVar5 == 0) {
      return 0;
    }
  } while( true );
}

