// FUN_015281d8 @ 015281d8 size=140 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015281d8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar10 = param_2[2];
  uVar3 = *param_3;
  uVar7 = param_3[1];
  uVar9 = param_3[2];
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar8 = param_4[2];
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *puVar2 = uVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar10;
  puVar2[3] = uVar3;
  puVar2[4] = uVar7;
  puVar2[5] = uVar9;
  puVar2[6] = uVar4;
  puVar2[7] = uVar5;
  puVar2[8] = uVar8;
  puVar2[9] = param_5;
  puVar2[10] = param_6;
  *param_1 = puVar2;
  param_1[1] = &DAT_01cfb570;
  return;
}

