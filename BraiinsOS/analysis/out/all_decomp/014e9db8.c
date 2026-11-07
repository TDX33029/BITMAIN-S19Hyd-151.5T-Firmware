// FUN_014e9db8 @ 014e9db8 size=544 calls_out=1 calls_in=0
// strings: ECDHE | ECDHE | ECDHE | ECDHE

undefined4 FUN_014e9db8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  code *pcVar8;
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
  pcVar7 = (char *)*param_1;
  iVar9 = param_1[1];
  pcVar8 = *(code **)(iVar11 + 0xc);
  uVar2 = (*pcVar8)(uVar10,&DAT_00418df9,1);
  if (iVar9 != 0) {
    uVar6 = param_2[2];
    bVar12 = uVar2 == 0;
    uVar2 = 1;
    if (bVar12) {
      if ((uVar6 & 0x800000) == 0) {
        pcVar3 = "DHE";
        uVar5 = 3;
        if (*pcVar7 != '\0') {
          uVar5 = 5;
          pcVar3 = "ECDHE";
        }
        uVar2 = (*pcVar8)(uVar10,pcVar3,uVar5);
      }
      else {
        uVar2 = 1;
        iVar4 = (*pcVar8)(uVar10,&DAT_0041950e,1);
        if (iVar4 == 0) {
          uVar2 = 1;
          local_2c = &local_25;
          local_25 = 1;
          pcVar3 = "DHE";
          uVar5 = 3;
          if (*pcVar7 != '\0') {
            uVar5 = 5;
            pcVar3 = "ECDHE";
          }
          uStack_34 = uVar10;
          iStack_30 = iVar11;
          iVar4 = FUN_00fb1f64(&uStack_34,pcVar3,uVar5);
          if (iVar4 == 0) {
            uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
          }
        }
      }
    }
    iVar9 = iVar9 + -1;
    if (iVar9 != 0) {
      do {
        pcVar7 = pcVar7 + 1;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((uVar6 & 0x800000) == 0) {
            iVar4 = (*pcVar8)(uVar10,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar4 == 0) {
              uVar5 = 3;
              pcVar3 = "DHE";
              if (*pcVar7 != '\0') {
                uVar5 = 5;
                pcVar3 = "ECDHE";
              }
              uVar2 = (*pcVar8)(uVar10,pcVar3,uVar5);
            }
          }
          else {
            local_2c = &local_25;
            uVar5 = 3;
            local_25 = 1;
            pcVar3 = "DHE";
            if (*pcVar7 != '\0') {
              uVar5 = 5;
              pcVar3 = "ECDHE";
            }
            uStack_34 = uVar10;
            iStack_30 = iVar11;
            iVar4 = FUN_00fb1f64(&uStack_34,pcVar3,uVar5);
            if (iVar4 == 0) {
              uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  uVar5 = 1;
  if (uVar2 == 0) {
    uVar5 = (*pcVar8)(uVar10,&DAT_00418ec5,1);
  }
  return uVar5;
}

