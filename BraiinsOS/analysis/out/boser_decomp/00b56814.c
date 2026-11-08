// FUN_00b56814 @ 00b56814 size=124 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b56814(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_3c;
  uint local_30;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  local_30 = local_30 & 0xffffff00;
  local_3c = local_3c & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = 0x1fffffff;
  puVar1[3] = local_3c;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = local_30;
  puVar1[7] = 0x3ffffffe;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  puVar1[10] = uVar4;
  return;
}

