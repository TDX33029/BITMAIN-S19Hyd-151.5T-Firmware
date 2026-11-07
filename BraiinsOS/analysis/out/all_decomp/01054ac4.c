// FUN_01054ac4 @ 01054ac4 size=540 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01054ac4(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar8 = *param_2;
  iVar4 = param_2[1];
  iVar9 = *(int *)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 8);
  pcVar7 = *(code **)(iVar4 + 0xc);
  uVar2 = (*pcVar7)(uVar8,&DAT_00418df9,1);
  if (iVar10 != 0) {
    uVar6 = param_2[2];
    bVar11 = uVar2 == 0;
    uVar5 = param_2[3];
    uVar2 = 1;
    if (bVar11) {
      if ((uVar6 & 0x800000) == 0) {
        uVar2 = FUN_01097d94(iVar9,param_2);
      }
      else {
        uVar2 = 1;
        iVar3 = (*pcVar7)(uVar8,&DAT_0041950e,1);
        if (iVar3 == 0) {
          uVar2 = 1;
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_3c = &local_35;
          local_35 = 1;
          local_44 = uVar8;
          local_40 = iVar4;
          local_2c = uVar6;
          local_28 = uVar5;
          iVar3 = FUN_01097d94(iVar9,&local_34);
          if (iVar3 == 0) {
            uVar2 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar10 != 1) {
      iVar10 = iVar10 * 4 + -4;
      do {
        iVar9 = iVar9 + 4;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((uVar6 & 0x800000) == 0) {
            iVar3 = (*pcVar7)(uVar8,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              uVar2 = FUN_01097d94(iVar9,param_2);
            }
          }
          else {
            local_35 = 1;
            local_3c = &local_35;
            local_30 = &DAT_01880dc4;
            local_44 = uVar8;
            local_40 = iVar4;
            local_34 = &local_44;
            local_2c = uVar6;
            local_28 = uVar5;
            iVar3 = FUN_01097d94(iVar9,&local_34);
            if (iVar3 == 0) {
              uVar2 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar10 = iVar10 + -4;
      } while (iVar10 != 0);
    }
  }
  uVar5 = 1;
  if (uVar2 == 0) {
    uVar5 = (*pcVar7)(uVar8,&DAT_00418ec5,1);
  }
  return uVar5;
}

