// FUN_009a0c0c @ 009a0c0c size=448 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_009a0c0c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 *local_2c;
  undefined1 local_25;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  iVar9 = *(int *)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 8);
  pcVar7 = *(code **)(iVar6 + 0xc);
  uVar2 = (*pcVar7)(uVar5,&DAT_00418df9,1);
  if (iVar10 != 0) {
    uVar8 = param_2[2];
    bVar11 = uVar2 == 0;
    uVar2 = 1;
    if (bVar11) {
      if ((uVar8 & 0x800000) == 0) {
        uVar2 = FUN_009cb7ac(iVar9,uVar5,iVar6);
      }
      else {
        uVar2 = 1;
        iVar3 = (*pcVar7)(uVar5,&DAT_0041950e,1);
        if (iVar3 == 0) {
          local_2c = &local_25;
          uVar2 = 1;
          local_25 = 1;
          uStack_34 = uVar5;
          iStack_30 = iVar6;
          iVar3 = FUN_009cb7ac(iVar9,&uStack_34,&DAT_01880dc4);
          if (iVar3 == 0) {
            uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar10 != 1) {
      iVar10 = iVar10 * 8 + -8;
      do {
        iVar9 = iVar9 + 8;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((uVar8 & 0x800000) == 0) {
            iVar3 = (*pcVar7)(uVar5,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              uVar2 = FUN_009cb7ac(iVar9,uVar5,iVar6);
            }
          }
          else {
            local_2c = &local_25;
            local_25 = 1;
            uStack_34 = uVar5;
            iStack_30 = iVar6;
            iVar3 = FUN_009cb7ac(iVar9,&uStack_34,&DAT_01880dc4);
            if (iVar3 == 0) {
              uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar10 = iVar10 + -8;
      } while (iVar10 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (*pcVar7)(uVar5,&DAT_00418ec5,1);
  }
  return uVar4;
}

