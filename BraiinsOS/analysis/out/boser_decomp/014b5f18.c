// FUN_014b5f18 @ 014b5f18 size=308 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014b5f18(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,5);
  }
  uVar2 = *param_1;
  iVar4 = 0;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 1);
  *puVar1 = uVar2;
  if (param_3 < 0) {
LAB_014b5f5c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar4,param_3);
  }
  if (param_3 == 0) {
    iVar3 = 1;
  }
  else {
    iVar4 = 1;
    iVar3 = FUN_01298504(param_3,1);
    if (iVar3 == 0) goto LAB_014b5f5c;
    iVar4 = param_3;
  }
  FUN_01bed4e2(iVar3,param_2,param_3);
  local_34 = 5;
  local_3c = 5;
  DataMemoryBarrier(0xb);
  local_38 = puVar1;
  local_30 = iVar4;
  local_2c = iVar3;
  local_28 = param_3;
  if (DAT_01d4ebc8 != 2) {
    FUN_014b6140(&local_3c);
  }
  if (local_3c != -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_004a34bf,0x1b,&local_3c,&DAT_01cf9944);
  }
  return;
}

