// FUN_00845c8c @ 00845c8c size=268 calls_out=5 calls_in=3
// strings: BUG: failed to send command

bool FUN_00845c8c(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int local_48 [9];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x13)) {
  case 0:
    param_1[8] = 1;
    param_1[9] = param_1[0x12];
    param_1[10] = *param_1;
    param_1[0xb] = param_1[1];
    param_1[0xc] = param_1[2];
    param_1[0xd] = param_1[3];
    param_1[0xe] = param_1[4];
    param_1[0xf] = param_1[5];
    param_1[0x10] = param_1[6];
    param_1[0x11] = param_1[7];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860ebc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860ebc,&switchD_00845ca8::switchdataD_00845cac,param_2);
  }
  FUN_008b71d4(local_48,param_1 + 8);
  if (local_48[0] == 5) {
    uVar1 = 3;
  }
  else {
    puVar9 = (undefined4 *)((uint)local_48 | 4);
    uVar2 = *puVar9;
    uVar4 = puVar9[1];
    uVar7 = puVar9[2];
    uVar3 = puVar9[3];
    uVar5 = puVar9[4];
    uVar6 = puVar9[5];
    uVar8 = puVar9[6];
    FUN_00845020(param_1 + 8);
    uVar1 = 1;
    if (local_48[0] != 4) {
      *puVar9 = uVar2;
      puVar9[1] = uVar4;
      puVar9[2] = uVar7;
      puVar9[3] = uVar3;
      puVar9[4] = uVar5;
      puVar9[5] = uVar6;
      puVar9[6] = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: failed to send command",0x1b,local_48,&DAT_01861108,&DAT_01860ecc);
    }
  }
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  return local_48[0] == 5;
}

