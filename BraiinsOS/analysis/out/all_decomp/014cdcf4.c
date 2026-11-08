// FUN_014cdcf4 @ 014cdcf4 size=620 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_014cdcf4(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar7 = *param_2;
  iVar4 = param_2[1];
  puVar10 = *(undefined4 **)(*param_1 + 8);
  iVar8 = *(int *)(*param_1 + 0xc);
  pcVar9 = *(code **)(iVar4 + 0xc);
  iVar2 = (*pcVar9)(uVar7,&DAT_0040bd29,0x32);
  if (iVar2 != 0) {
    return 1;
  }
  uVar3 = (*pcVar9)(uVar7,&DAT_00418df9,1);
  if (iVar8 != 0) {
    uVar5 = param_2[3];
    bVar12 = uVar3 == 0;
    uVar6 = param_2[2];
    puVar11 = puVar10 + 3;
    local_48 = *puVar10;
    uVar3 = 1;
    if (bVar12) {
      if ((uVar6 & 0x800000) == 0) {
        uVar3 = FUN_01525a2c(&local_48,param_2);
      }
      else {
        uVar3 = 1;
        iVar2 = (*pcVar9)(uVar7,&DAT_0041950e,1);
        if (iVar2 == 0) {
          uVar3 = 1;
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_3c = &local_35;
          local_35 = 1;
          local_44 = uVar7;
          local_40 = iVar4;
          local_2c = uVar6;
          local_28 = uVar5;
          iVar2 = FUN_01525a2c(&local_48,&local_34);
          if (iVar2 == 0) {
            uVar3 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar8 != 1) {
      do {
        local_48 = *puVar11;
        uVar1 = uVar3 & 1;
        uVar3 = 1;
        if (uVar1 == 0) {
          if ((uVar6 & 0x800000) == 0) {
            iVar2 = (*pcVar9)(uVar7,&DAT_0041950f,2);
            uVar3 = 1;
            if (iVar2 == 0) {
              uVar3 = FUN_01525a2c(&local_48,param_2);
            }
          }
          else {
            local_35 = 1;
            local_3c = &local_35;
            local_30 = &DAT_01880dc4;
            local_44 = uVar7;
            local_40 = iVar4;
            local_34 = &local_44;
            local_2c = uVar6;
            local_28 = uVar5;
            iVar2 = FUN_01525a2c(&local_48,&local_34);
            if (iVar2 == 0) {
              uVar3 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
            }
            else {
              uVar3 = 1;
            }
          }
        }
        puVar11 = puVar11 + 3;
      } while (puVar11 != puVar10 + iVar8 * 3);
    }
  }
  uVar5 = 1;
  if ((uVar3 == 0) && (iVar2 = (*pcVar9)(uVar7,&DAT_00418ec5,1), iVar2 == 0)) {
    uVar5 = (*pcVar9)(uVar7," }",2);
  }
  return uVar5;
}

