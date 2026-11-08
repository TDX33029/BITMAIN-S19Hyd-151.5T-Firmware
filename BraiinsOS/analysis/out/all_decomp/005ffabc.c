// FUN_005ffabc @ 005ffabc size=728 calls_out=1 calls_in=0
// strings: ByteClasses(

undefined4 FUN_005ffabc(int param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  char local_37;
  char local_36;
  undefined1 local_35;
  char *local_34;
  code *local_30;
  undefined1 *local_2c;
  code *local_28;
  
  iVar8 = param_2[1];
  bVar1 = *(byte *)(param_1 + 0xff);
  uVar13 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar8 + 0xc);
  if (bVar1 == 0xff) {
                    /* WARNING: Could not recover jumptable at 0x005ffb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*UNRECOVERED_JUMPTABLE)(uVar13,&UNK_0033d70c,0x21);
    return uVar13;
  }
  iVar9 = (*UNRECOVERED_JUMPTABLE)(uVar13,"ByteClasses(",0xc);
  if (iVar9 != 0) {
    return 1;
  }
  iVar9 = 0;
  iVar14 = 0;
  iVar11 = 0;
LAB_005ffb54:
  if (iVar14 == bVar1 + 1) {
    uVar13 = (*UNRECOVERED_JUMPTABLE)(uVar13,&DAT_00418e07,1);
    return uVar13;
  }
  local_37 = (char)iVar14;
  if ((iVar14 == 0) || (iVar10 = (*UNRECOVERED_JUMPTABLE)(uVar13,&DAT_0041950f,2), iVar10 == 0)) {
    local_30 = FUN_0078955c;
    local_34 = &local_37;
    iVar10 = FUN_00fa948c(uVar13,iVar8,&DAT_00586748,&local_34);
    cVar5 = local_37;
    if (iVar10 == 0) {
      iVar14 = iVar14 + 1;
      iVar10 = 0;
      bVar2 = false;
      bVar4 = false;
      iVar15 = iVar11;
      bVar7 = false;
      do {
        do {
          while( true ) {
            iVar11 = iVar15;
            iVar12 = iVar10;
            bVar6 = bVar4;
            do {
              bVar3 = bVar6;
              iVar15 = iVar12;
              if (bVar3) {
                iVar15 = iVar9;
                iVar12 = iVar11;
                if (bVar2) goto LAB_005ffc84;
                iVar10 = (*UNRECOVERED_JUMPTABLE)(uVar13,&DAT_00418ec5,1);
                if (iVar10 != 0) {
                  return 1;
                }
                goto LAB_005ffb54;
              }
              if (iVar15 == 0xff) {
                iVar12 = 0xff;
                bVar7 = true;
                bVar4 = true;
              }
              else {
                iVar12 = iVar15 + 1;
                iVar10 = iVar12;
              }
              bVar6 = iVar15 == 0xff;
            } while (cVar5 != *(char *)(param_1 + iVar15));
            if (bVar2) break;
            bVar2 = true;
            iVar9 = iVar15;
          }
          bVar2 = true;
          iVar12 = iVar15;
        } while (iVar11 + 1 == iVar15);
LAB_005ffc84:
        bVar4 = bVar7;
        bVar2 = (bool)(bVar3 ^ 1);
        local_35 = (undefined1)iVar11;
        local_36 = (char)iVar9;
        if (iVar9 == iVar11) {
          local_34 = &local_36;
          local_30 = FUN_0078955c;
          iVar11 = FUN_00fa948c(uVar13,iVar8,&DAT_00590e71,&local_34);
        }
        else {
          local_2c = &local_35;
          local_34 = &local_36;
          local_28 = FUN_0078955c;
          local_30 = FUN_0078955c;
          iVar11 = FUN_00fa948c(uVar13,iVar8,&DAT_00574871,&local_34);
        }
        iVar9 = iVar15;
        iVar15 = iVar12;
        bVar7 = bVar4;
      } while (iVar11 == 0);
    }
  }
  return 1;
}

