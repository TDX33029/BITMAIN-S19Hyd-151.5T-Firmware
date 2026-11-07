// FUN_00ab15dc @ 00ab15dc size=248 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00ab15dc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int local_2c;
  undefined1 *local_28;
  
  iVar5 = *param_1;
  uVar3 = 0;
  iVar4 = *(int *)(iVar5 + 0x200);
  if (iVar4 != 0) {
    uVar7 = *param_2;
    iVar8 = param_2[1];
    local_28 = &LAB_00fac484;
    local_2c = iVar5;
    iVar1 = FUN_00fa948c(uVar7,iVar8,&DAT_00590e71,&local_2c);
    if (iVar1 == 0) {
      if (iVar4 != 1) {
        pcVar6 = *(code **)(iVar8 + 0xc);
        iVar1 = 1;
        do {
          iVar5 = iVar5 + 4;
          iVar2 = (*pcVar6)(uVar7,&DAT_00418eb7,1);
          if (iVar2 != 0) {
            return 1;
          }
          if (iVar1 == 0x80) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(0x80,0x80,&DAT_01881484);
          }
          local_28 = &LAB_00fac484;
          local_2c = iVar5;
          iVar2 = FUN_00fa948c(uVar7,iVar8,&DAT_00590e71,&local_2c);
          if (iVar2 != 0) goto LAB_00ab162c;
          iVar1 = iVar1 + 1;
        } while (iVar4 != iVar1);
      }
    }
    else {
LAB_00ab162c:
      uVar3 = 1;
    }
  }
  return uVar3;
}

