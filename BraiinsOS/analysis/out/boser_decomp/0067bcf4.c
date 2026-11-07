// FUN_0067bcf4 @ 0067bcf4 size=544 calls_out=2 calls_in=0
// strings: ; ...event open/utils-rs/api-logging/src/middleware/middleware_layer.rs:348

undefined4 FUN_0067bcf4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int *local_3c;
  int *local_38;
  int **local_34;
  undefined1 *local_30;
  int **local_2c;
  undefined1 *local_28;
  
  uVar14 = *param_2;
  iVar15 = param_2[1];
  piVar11 = (int *)*param_1;
  uVar9 = 1;
  pcVar7 = *(code **)(iVar15 + 0xc);
  iVar1 = (*pcVar7)(uVar14,&DAT_0053340d,1);
  if (iVar1 == 0) {
    piVar2 = (int *)*piVar11;
    uVar10 = piVar11[1];
    iVar13 = 0;
    iVar1 = piVar11[2];
    if (piVar2 == (int *)0x0) {
      iVar1 = 0;
    }
    bVar5 = piVar2 != (int *)0x0;
    piVar8 = (int *)0x0;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (!bVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ffe0);
      }
      if (piVar8 == (int *)0x0) {
        uVar6 = 0;
        piVar8 = piVar2;
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          piVar8 = (int *)piVar8[0x44];
        }
        piVar2 = (int *)0x0;
      }
      else {
        uVar6 = uVar10;
      }
      piVar12 = piVar8;
      if (*(ushort *)((int)piVar8 + 0x10e) <= uVar6) {
        do {
          piVar8 = (int *)*piVar12;
          if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fff0);
          }
          uVar6 = (uint)*(ushort *)(piVar12 + 0x43);
          piVar2 = (int *)((int)piVar2 + 1);
          piVar12 = piVar8;
        } while (*(ushort *)((int)piVar8 + 0x10e) <= uVar6);
      }
      if (piVar2 == (int *)0x0) {
        uVar10 = uVar6 + 1;
        piVar12 = piVar8;
      }
      else {
        piVar3 = piVar8 + uVar6 + 0x45;
        do {
          piVar12 = (int *)*piVar3;
          piVar2 = (int *)((int)piVar2 + -1);
          piVar3 = piVar12 + 0x44;
        } while (piVar2 != (int *)0x0);
        uVar10 = 0;
      }
      local_3c = piVar8 + uVar6 * 3 + 1;
      local_38 = piVar8 + uVar6 * 3 + 0x22;
      if ((iVar13 != 0) && (iVar4 = (*pcVar7)(uVar14,&DAT_00533bc1,2), iVar4 != 0)) {
        return 1;
      }
      local_2c = &local_38;
      local_34 = &local_3c;
      local_28 = &LAB_0193a90c;
      local_30 = &LAB_0193a90c;
      iVar4 = FUN_012fa178(uVar14,iVar15,&DAT_0059873d,&local_34);
      if (iVar4 != 0) {
        return 1;
      }
      iVar13 = iVar13 + 1;
      bVar5 = true;
      piVar2 = (int *)0x0;
      piVar8 = piVar12;
    }
    uVar9 = 1;
    if (((char)piVar11[3] == '\0') ||
       (iVar1 = (*pcVar7)(uVar14,
                          ", ...event open/utils-rs/api-logging/src/middleware/middleware_layer.rs:348"
                          ,5), iVar1 == 0)) {
      uVar9 = (*pcVar7)(uVar14,"]",1);
    }
  }
  return uVar9;
}

