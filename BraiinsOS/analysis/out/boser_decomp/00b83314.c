// FUN_00b83314 @ 00b83314 size=100 calls_out=2 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b83314(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_14;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar2 = *param_3;
  uVar4 = param_3[1];
  uVar7 = param_3[2];
  local_14 = local_14 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar2;
  puVar1[4] = uVar4;
  puVar1[5] = uVar7;
  puVar1[6] = param_1;
  puVar1[7] = local_14;
  return;
}

