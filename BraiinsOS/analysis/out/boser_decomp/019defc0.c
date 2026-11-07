// FUN_019defc0 @ 019defc0 size=104 calls_out=3 calls_in=1
// strings: 

void FUN_019defc0(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 local_14;
  
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d28f7c);
  }
  local_14 = 1;
  uVar3 = 4;
  iVar1 = FUN_01be9b78(param_2,1,6,&local_14,4);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = 0;
    *(undefined4 *)(param_1 + 4) = *puVar2;
  }
  *param_1 = uVar3;
  return;
}

