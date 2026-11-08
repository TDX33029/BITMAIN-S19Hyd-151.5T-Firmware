// FUN_01448a98 @ 01448a98 size=388 calls_out=6 calls_in=2
// strings: assertion failed: new_cap >= len

undefined8 FUN_01448a98(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_r9;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uStack_2c;
  uint local_28;
  
  uVar1 = param_1[0x12];
  if (uVar1 < 0x12) {
    puVar6 = param_1 + 1;
    uVar4 = 0x11;
    uVar5 = uVar1;
  }
  else {
    puVar6 = (undefined4 *)param_1[2];
    uVar4 = uVar1;
    uVar5 = param_1[1];
  }
  if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_cap >= len",0x20,&DAT_01d2ec08);
  }
  uVar3 = 0x80000001;
  if (param_2 < 0x12) {
    if (0x11 < uVar1) {
      *param_1 = 0;
      FUN_01bed4e2(param_1 + 1,puVar6,uVar5 << 2);
      local_28 = uVar4 << 2;
      bVar7 = 0x3ffffffe < uVar4;
      if (uVar4 < 0x40000000) {
        bVar7 = 0x7ffffffc < local_28;
      }
      param_1[0x12] = uVar5;
      if (bVar7) {
        uStack_2c = 0;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&uStack_2c,&DAT_01cf90b4,&DAT_01d2ebc8);
      }
      thunk_FUN_01be4678(puVar6);
    }
  }
  else if (param_2 != uVar4) {
    unaff_r9 = param_2 * 4;
    uVar3 = 0;
    if ((param_2 < 0x40000000) && (unaff_r9 < 0x7ffffffd)) {
      if (uVar1 < 0x12) {
        uVar3 = 4;
        iVar2 = FUN_01298504(unaff_r9,4);
        if (iVar2 == 0) goto LAB_01448b28;
        FUN_01bed4e2(iVar2,puVar6,uVar5 << 2);
      }
      else {
        uVar1 = uVar4 * 4;
        if (0x3fffffff < uVar4) {
          unaff_r9 = uVar1;
          goto LAB_01448b28;
        }
        if (0x7ffffffc < uVar1) goto LAB_01448b28;
        uVar3 = 4;
        iVar2 = FUN_01298554(puVar6,uVar1,4,unaff_r9);
        if (iVar2 == 0) goto LAB_01448b28;
      }
      param_1[0x12] = param_2;
      *param_1 = 1;
      param_1[1] = uVar5;
      uVar3 = 0x80000001;
      param_1[2] = iVar2;
    }
  }
LAB_01448b28:
  return CONCAT44(unaff_r9,uVar3);
}

