// FUN_007004b4 @ 007004b4 size=180 calls_out=3 calls_in=0
// strings: 

void FUN_007004b4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  puVar3 = (undefined4 *)piVar1[1];
  *piVar1 = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar2 + 0xd0) != 0) {
    FUN_007000ec(iVar2 + 0xb0,iVar2);
  }
  local_5c = 0;
  local_60 = 0xffff0000;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  FUN_01289fbc(&local_58,&local_78);
  *puVar3 = local_58;
  puVar3[1] = uStack_54;
  puVar3[2] = uStack_50;
  puVar3[3] = uStack_4c;
  return;
}

