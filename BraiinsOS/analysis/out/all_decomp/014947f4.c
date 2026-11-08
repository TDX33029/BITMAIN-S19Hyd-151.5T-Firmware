// FUN_014947f4 @ 014947f4 size=460 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_014947f4(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 *local_2c;
  undefined1 local_25;
  
  uVar10 = *param_2;
  iVar11 = param_2[1];
  pcVar6 = *(code **)(iVar11 + 0xc);
  iVar7 = *(int *)(*param_1 + 4);
  iVar9 = *(int *)(*param_1 + 8);
  uVar2 = (*pcVar6)(uVar10,&DAT_00418df9,1);
  if (iVar9 != 0) {
    uVar8 = param_2[2];
    bVar12 = uVar2 == 0;
    uVar2 = 1;
    if (bVar12) {
      if ((uVar8 & 0x800000) == 0) {
        uVar2 = FUN_00faa4e8(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),uVar10,iVar11);
      }
      else {
        uVar2 = 1;
        iVar3 = (*pcVar6)(uVar10,&DAT_0041950e,1);
        if (iVar3 == 0) {
          local_2c = &local_25;
          uVar2 = 1;
          local_25 = 1;
          uStack_34 = uVar10;
          iStack_30 = iVar11;
          iVar3 = FUN_00faa4e8(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),&uStack_34,
                               &DAT_01880dc4);
          if (iVar3 == 0) {
            uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar9 != 1) {
      puVar5 = (undefined4 *)(iVar7 + 0x10);
      iVar7 = iVar9 * 0xc + -0xc;
      do {
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((uVar8 & 0x800000) == 0) {
            iVar9 = (*pcVar6)(uVar10,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar9 == 0) {
              uVar2 = FUN_00faa4e8(*puVar5,puVar5[1],uVar10,iVar11);
            }
          }
          else {
            local_2c = &local_25;
            local_25 = 1;
            uStack_34 = uVar10;
            iStack_30 = iVar11;
            iVar9 = FUN_00faa4e8(*puVar5,puVar5[1],&uStack_34,&DAT_01880dc4);
            if (iVar9 == 0) {
              uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        puVar5 = puVar5 + 3;
        iVar7 = iVar7 + -0xc;
      } while (iVar7 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (*pcVar6)(uVar10,&DAT_00418ec5,1);
  }
  return uVar4;
}

