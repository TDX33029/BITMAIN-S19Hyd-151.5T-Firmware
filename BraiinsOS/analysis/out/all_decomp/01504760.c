// FUN_01504760 @ 01504760 size=560 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01504760(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  uVar9 = *param_2;
  iVar4 = param_2[1];
  iVar10 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 8);
  pcVar6 = *(code **)(iVar4 + 0xc);
  uVar2 = (*pcVar6)(uVar9,&DAT_00418df9,1);
  if (iVar8 != 0) {
    uVar7 = param_2[2];
    bVar11 = uVar2 == 0;
    uVar5 = param_2[3];
    uVar2 = 1;
    if (bVar11) {
      if ((uVar7 & 0x800000) == 0) {
        uVar2 = FUN_0152c3fc(iVar10,param_2);
      }
      else {
        uVar2 = 1;
        iVar3 = (*pcVar6)(uVar9,&DAT_0041950e,1);
        if (iVar3 == 0) {
          uVar2 = 1;
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_3c = &local_35;
          local_35 = 1;
          local_44 = uVar9;
          local_40 = iVar4;
          local_2c = uVar7;
          local_28 = uVar5;
          iVar3 = FUN_0152c3fc(iVar10,&local_34);
          if (iVar3 == 0) {
            uVar2 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar8 != 1) {
      iVar8 = iVar8 * 0xc + -0xc;
      do {
        iVar10 = iVar10 + 0xc;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((uVar7 & 0x800000) == 0) {
            iVar3 = (*pcVar6)(uVar9,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              uVar2 = FUN_0152c3fc(iVar10,param_2);
            }
          }
          else {
            local_35 = 1;
            local_3c = &local_35;
            local_30 = &DAT_01880dc4;
            local_44 = uVar9;
            local_40 = iVar4;
            local_34 = &local_44;
            local_2c = uVar7;
            local_28 = uVar5;
            iVar3 = FUN_0152c3fc(iVar10,&local_34);
            if (iVar3 == 0) {
              uVar2 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar8 = iVar8 + -0xc;
      } while (iVar8 != 0);
    }
  }
  uVar5 = 1;
  if (uVar2 == 0) {
    uVar5 = (*pcVar6)(uVar9,&DAT_00418ec5,1);
  }
  return uVar5;
}

