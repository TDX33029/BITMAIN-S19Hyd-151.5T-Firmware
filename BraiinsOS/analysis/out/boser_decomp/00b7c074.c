// FUN_00b7c074 @ 00b7c074 size=104 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b7c074(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_1c;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  uVar2 = *param_3;
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  local_1c = (uint)CONCAT21((short)((uint)local_1c >> 0x10),param_4) << 8;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  puVar1[3] = uVar2;
  puVar1[4] = uVar5;
  puVar1[5] = uVar7;
  puVar1[6] = param_1;
  puVar1[7] = local_1c;
  return;
}

