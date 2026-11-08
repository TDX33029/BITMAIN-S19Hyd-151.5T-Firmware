// FUN_007b897c @ 007b897c size=792 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_007b897c(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  int *local_48;
  undefined4 *local_44;
  undefined1 *local_40;
  undefined1 local_39;
  int *local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 local_2c;
  
  piVar7 = (int *)*param_2;
  puVar5 = (undefined4 *)param_2[1];
  iVar8 = *(int *)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 8);
  pcVar6 = (code *)puVar5[3];
  uVar2 = (*pcVar6)(piVar7,&DAT_00418df9,1);
  if (iVar10 != 0) {
    uVar9 = param_2[2];
    bVar12 = uVar2 == 0;
    uVar2 = 1;
    if (bVar12) {
      if ((uVar9 & 0x800000) == 0) {
        FUN_0111e990(&local_30,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
        local_44 = &DAT_006043a8;
        local_48 = &local_30;
        uVar2 = FUN_00fa948c(piVar7,puVar5,&DAT_00590e71,&local_48);
        if (local_30 != 0) {
          thunk_FUN_016d3fb4(local_2c);
        }
      }
      else {
        uVar2 = 1;
        iVar4 = (*pcVar6)(piVar7,&DAT_0041950e,1);
        if (iVar4 == 0) {
          local_40 = &local_39;
          local_39 = 1;
          local_48 = piVar7;
          local_44 = puVar5;
          FUN_0111e990(&local_30,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
          local_34 = &DAT_006043a8;
          local_38 = &local_30;
          iVar4 = FUN_00fa948c(&local_48,&DAT_01880dc4,&DAT_00590e71,&local_38);
          if (local_30 != 0) {
            thunk_FUN_016d3fb4(local_2c);
          }
          if (iVar4 == 0) {
            uVar2 = FUN_00fb1f64(&local_48,&DAT_00414a81,2);
          }
          else {
            uVar2 = 1;
          }
        }
      }
    }
    if (iVar10 != 1) {
      puVar11 = (undefined4 *)(iVar8 + 0x10);
      iVar8 = iVar10 * 0xc + -0xc;
      do {
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((uVar9 & 0x800000) == 0) {
            iVar10 = (*pcVar6)(piVar7,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar10 == 0) {
              FUN_0111e990(&local_30,*puVar11,puVar11[1]);
              local_44 = &DAT_006043a8;
              local_48 = &local_30;
              uVar2 = FUN_00fa948c(piVar7,puVar5,&DAT_00590e71,&local_48);
              if (local_30 != 0) {
                thunk_FUN_016d3fb4(local_2c);
              }
            }
          }
          else {
            local_40 = &local_39;
            local_39 = 1;
            local_48 = piVar7;
            local_44 = puVar5;
            FUN_0111e990(&local_30,*puVar11,puVar11[1]);
            local_34 = &DAT_006043a8;
            local_38 = &local_30;
            iVar10 = FUN_00fa948c(&local_48,&DAT_01880dc4,&DAT_00590e71,&local_38);
            if (local_30 != 0) {
              thunk_FUN_016d3fb4(local_2c);
            }
            if (iVar10 == 0) {
              uVar2 = FUN_00fb1f64(&local_48,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        puVar11 = puVar11 + 3;
        iVar8 = iVar8 + -0xc;
      } while (iVar8 != 0);
    }
  }
  uVar3 = 1;
  if (uVar2 == 0) {
    uVar3 = (*pcVar6)(piVar7,&DAT_00418ec5,1);
  }
  return uVar3;
}

