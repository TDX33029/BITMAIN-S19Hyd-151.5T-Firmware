// FUN_019dd000 @ 019dd000 size=76 calls_out=3 calls_in=7
// strings: 

void FUN_019dd000(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d28f7c);
  }
  iVar1 = FUN_01be9c30(param_2,1);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  *(undefined1 *)param_1 = 4;
  return;
}

