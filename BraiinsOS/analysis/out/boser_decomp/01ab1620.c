// FUN_01ab1620 @ 01ab1620 size=412 calls_out=6 calls_in=2
// strings: assertion failed: new_cap >= len

undefined8 FUN_01ab1620(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_r9;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_2c;
  int local_28;
  
  uVar2 = param_1[0x52];
  uVar4 = 8;
  uVar5 = uVar2;
  puVar6 = param_1 + 2;
  if (8 < uVar2) {
    uVar5 = param_1[1];
    puVar6 = (undefined4 *)param_1[2];
    uVar4 = uVar2;
  }
  if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_cap >= len",0x20,&DAT_01d2ec08);
  }
  uVar3 = 0x80000001;
  if (param_2 < 9) {
    if (8 < uVar2) {
      *param_1 = 0;
      FUN_01bed4e2(param_1 + 2,puVar6,uVar5 * 0x28);
      param_1[0x52] = uVar5;
      if (0x3333333 < uVar4) {
        local_28 = uVar4 * 0x28;
        local_2c = 0;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2ebb8,&DAT_01d2ebc8);
      }
      thunk_FUN_01be4678(puVar6);
    }
  }
  else if (param_2 != uVar4) {
    uVar3 = 0;
    unaff_r9 = (uint)((ulonglong)param_2 * 0x28);
    if (((int)((ulonglong)param_2 * 0x28 >> 0x20) == 0) && (unaff_r9 < 0x7ffffff9)) {
      if (uVar2 < 9) {
        uVar3 = 8;
        iVar1 = FUN_01298504(unaff_r9,8);
        if (iVar1 == 0) goto LAB_01ab16ac;
        FUN_01bed4e2(iVar1,puVar6,uVar5 * 0x28);
      }
      else {
        uVar2 = (uint)((ulonglong)uVar4 * 0x28);
        if ((int)((ulonglong)uVar4 * 0x28 >> 0x20) != 0) {
          unaff_r9 = uVar2;
          goto LAB_01ab16ac;
        }
        if (0x7ffffff8 < uVar2) goto LAB_01ab16ac;
        uVar3 = 8;
        iVar1 = FUN_01298554(puVar6,uVar2,8,unaff_r9);
        if (iVar1 == 0) goto LAB_01ab16ac;
      }
      param_1[0x52] = param_2;
      *param_1 = 1;
      param_1[1] = uVar5;
      uVar3 = 0x80000001;
      param_1[2] = iVar1;
    }
  }
LAB_01ab16ac:
  return CONCAT44(unaff_r9,uVar3);
}

