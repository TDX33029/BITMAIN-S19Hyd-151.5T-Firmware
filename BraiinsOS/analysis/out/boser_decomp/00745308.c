// FUN_00745308 @ 00745308 size=348 calls_out=4 calls_in=4
// strings: 

void FUN_00745308(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar7 = 0;
  uVar1 = (uint)(param_3 - param_2) >> 2;
  iVar4 = uVar1 * 0xc;
  if (0x2aaaaaa8 < (uint)(param_3 - param_2)) {
LAB_0074533c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,iVar4);
  }
  uVar5 = 0;
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)&SUB_00000004;
    uVar3 = 0;
  }
  else {
    uVar7 = 4;
    puVar2 = (undefined4 *)FUN_01298504(iVar4,4);
    uVar3 = uVar1;
    if (puVar2 == (undefined4 *)0x0) goto LAB_0074533c;
  }
  if (param_2 != param_3) {
    uVar5 = 0;
    puVar6 = puVar2;
    do {
      local_38 = 0;
      local_3c = 1;
      local_40 = 0;
      local_28 = 0;
      local_2c = 0x60000020;
      local_30 = &DAT_01c08208;
      local_34 = &local_40;
      iVar4 = FUN_013095bc(param_2,&local_34);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01c08220,&DAT_01d30334);
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 4;
      local_50 = local_40;
      uStack_4c = local_3c;
      uStack_48 = local_38;
      *puVar6 = local_40;
      puVar6[1] = local_3c;
      puVar6[2] = local_38;
      puVar6 = puVar6 + 3;
    } while (uVar1 != uVar5);
  }
  *param_1 = uVar3;
  param_1[1] = (uint)puVar2;
  param_1[2] = uVar5;
  return;
}

