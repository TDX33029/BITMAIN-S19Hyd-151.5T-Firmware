// FUN_01699d64 @ 01699d64 size=576 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01699d64(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  iVar2 = param_2[1];
  uVar8 = *param_2;
  pcVar9 = *(code **)(iVar2 + 0xc);
  uVar3 = (*pcVar9)(uVar8,&DAT_004144eb,1);
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    param_1 = (undefined4 *)*param_1;
    bVar11 = uVar3 == 0;
    uVar6 = param_2[2];
    uVar5 = param_2[3];
    uVar3 = 1;
    if (bVar11) {
      if ((uVar6 & 0x800000) == 0) {
        uVar3 = FUN_00faace8(param_2,*param_1,param_1[1]);
      }
      else {
        uVar3 = 1;
        iVar4 = (*pcVar9)(uVar8,&DAT_0041950e,1);
        if (iVar4 == 0) {
          uVar3 = 1;
          local_3c = &local_35;
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_35 = 1;
          local_44 = uVar8;
          local_40 = iVar2;
          local_2c = uVar6;
          local_28 = uVar5;
          iVar4 = FUN_00faace8(&local_34,*param_1,param_1[1]);
          if (iVar4 == 0) {
            uVar3 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar7 != 1) {
      iVar7 = iVar7 * 8 + -8;
      do {
        puVar10 = param_1 + 2;
        uVar1 = uVar3 & 1;
        uVar3 = 1;
        if (uVar1 == 0) {
          if ((uVar6 & 0x800000) == 0) {
            iVar4 = (*pcVar9)(uVar8,&DAT_0041950f,2);
            uVar3 = 1;
            if (iVar4 == 0) {
              uVar3 = FUN_00faace8(param_2,*puVar10,param_1[3]);
            }
          }
          else {
            local_3c = &local_35;
            local_35 = 1;
            local_30 = &DAT_01880dc4;
            local_44 = uVar8;
            local_40 = iVar2;
            local_34 = &local_44;
            local_2c = uVar6;
            local_28 = uVar5;
            iVar4 = FUN_00faace8(&local_34,*puVar10,param_1[3]);
            if (iVar4 == 0) {
              uVar3 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
            }
            else {
              uVar3 = 1;
            }
          }
        }
        iVar7 = iVar7 + -8;
        param_1 = puVar10;
      } while (iVar7 != 0);
    }
  }
  uVar5 = 1;
  if (uVar3 == 0) {
    uVar5 = (*pcVar9)(uVar8,"}",1);
  }
  return uVar5;
}

