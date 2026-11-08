// FUN_019ded64 @ 019ded64 size=100 calls_out=3 calls_in=8
// strings: 

void FUN_019ded64(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 local_14;
  
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d28f7c);
  }
  uVar3 = 4;
  local_14 = param_3;
  iVar1 = FUN_01be9b78(param_2,6,1,&local_14,4);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = 0;
    *(undefined4 *)(param_1 + 4) = *puVar2;
  }
  *param_1 = uVar3;
  return;
}

