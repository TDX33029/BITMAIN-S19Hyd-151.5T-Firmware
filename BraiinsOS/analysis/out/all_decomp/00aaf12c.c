// FUN_00aaf12c @ 00aaf12c size=448 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00aaf12c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 *local_2c;
  undefined1 local_25;
  
  uVar10 = *param_2;
  iVar11 = param_2[1];
  puVar6 = (undefined4 *)*param_1;
  iVar8 = param_1[1];
  pcVar5 = *(code **)(iVar11 + 0xc);
  uVar2 = (*pcVar5)(uVar10,&DAT_00418df9,1);
  if (iVar8 != 0) {
    uVar7 = param_2[2];
    bVar12 = uVar2 == 0;
    uVar2 = 1;
    if (bVar12) {
      if ((uVar7 & 0x800000) == 0) {
        uVar2 = FUN_00faa4e8(*puVar6,puVar6[1],uVar10,iVar11);
      }
      else {
        uVar2 = 1;
        iVar3 = (*pcVar5)(uVar10,&DAT_0041950e,1);
        if (iVar3 == 0) {
          local_2c = &local_25;
          uVar2 = 1;
          local_25 = 1;
          uStack_34 = uVar10;
          iStack_30 = iVar11;
          iVar3 = FUN_00faa4e8(*puVar6,puVar6[1],&uStack_34,&DAT_01880dc4);
          if (iVar3 == 0) {
            uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar8 != 1) {
      iVar8 = iVar8 * 8 + -8;
      do {
        puVar9 = puVar6 + 2;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((uVar7 & 0x800000) == 0) {
            iVar3 = (*pcVar5)(uVar10,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              uVar2 = FUN_00faa4e8(*puVar9,puVar6[3],uVar10,iVar11);
            }
          }
          else {
            local_2c = &local_25;
            local_25 = 1;
            uStack_34 = uVar10;
            iStack_30 = iVar11;
            iVar3 = FUN_00faa4e8(*puVar9,puVar6[3],&uStack_34,&DAT_01880dc4);
            if (iVar3 == 0) {
              uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar8 = iVar8 + -8;
        puVar6 = puVar9;
      } while (iVar8 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (*pcVar5)(uVar10,&DAT_00418ec5,1);
  }
  return uVar4;
}

