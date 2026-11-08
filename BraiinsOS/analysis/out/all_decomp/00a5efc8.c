// FUN_00a5efc8 @ 00a5efc8 size=556 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00a5efc8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
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
  
  uVar6 = *param_2;
  iVar8 = param_2[1];
  iVar7 = *(int *)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 8);
  pcVar9 = *(code **)(iVar8 + 0xc);
  uVar2 = (*pcVar9)(uVar6,&DAT_00418df9,1);
  if (iVar10 != 0) {
    uVar5 = param_2[2];
    bVar11 = uVar2 == 0;
    uVar4 = param_2[3];
    uVar2 = 1;
    if (bVar11) {
      if ((uVar5 & 0x800000) == 0) {
        uVar2 = FUN_0132cb0c(iVar7,&DAT_0188c2f0,param_2);
      }
      else {
        uVar2 = 1;
        iVar3 = (*pcVar9)(uVar6,&DAT_0041950e,1);
        if (iVar3 == 0) {
          uVar2 = 1;
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_3c = &local_35;
          local_35 = 1;
          local_44 = uVar6;
          local_40 = iVar8;
          local_2c = uVar5;
          local_28 = uVar4;
          iVar3 = FUN_0132cb0c(iVar7,&DAT_0188c2f0,&local_34);
          if (iVar3 == 0) {
            uVar2 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar10 != 1) {
      iVar10 = iVar10 * 0x28 + -0x28;
      do {
        iVar7 = iVar7 + 0x28;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((uVar5 & 0x800000) == 0) {
            iVar3 = (*pcVar9)(uVar6,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              uVar2 = FUN_0132cb0c(iVar7,&DAT_0188c2f0,param_2);
            }
          }
          else {
            local_35 = 1;
            local_3c = &local_35;
            local_30 = &DAT_01880dc4;
            local_44 = uVar6;
            local_40 = iVar8;
            local_34 = &local_44;
            local_2c = uVar5;
            local_28 = uVar4;
            iVar3 = FUN_0132cb0c(iVar7,&DAT_0188c2f0,&local_34);
            if (iVar3 == 0) {
              uVar2 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar10 = iVar10 + -0x28;
      } while (iVar10 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (*pcVar9)(uVar6,&DAT_00418ec5,1);
  }
  return uVar4;
}

